#ifndef LEVEL_HPP
#define LEVEL_HPP

#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <SFML/Graphics.hpp>
#include "pugiXML\pugixml.hpp"

namespace lv{
	struct Layer
	{
		short opacity;							// непрозрачность слоя
		std::vector<sf::Sprite> tiles;			// вектор тайлов
	};

	struct Object
	{
		int GetPropertyInt(std::string name);				// номер свойства объекта в нашем списке в int
		float GetPropertyFloat(std::string name);			// номер свойства объекта в нашем списке в float
		std::string GetPropertyString(std::string name);	// номер свойства объекта в нашем списке в std::string

		std::string name;									// имя свойства
		std::string type;									// тип свойства
		sf::Rect<float> rect;								// тип Rect с нецелыми значениями
		sf::FloatRect Tops;									// две вершины
		sf::Rect<float> rotation;							// углы вершин от центра
		std::map<std::string, std::string> properties;		// ассоциатиный массив, ключ - строковый тип, значение - строковый
		sf::Sprite sprite;
	};

	class Level :public sf::Transformable, public sf::Drawable
	{
	public:
		bool LoadFromFile(std::string);									// загрузка карты, аргумент - путь до карты. Возвращает "false" при неудаче
		sf::Vector2i GetMapSize();										// возвращает размер карты
		Object GetObject(std::string);									// возвращает первый объект с указанным именем
		std::vector<Object> GetObjects(std::string);					// возвращает вектор всех объектов с указанным именем
		std::vector<Object> GetAllObjects();							// возвращает вектор всех объектов
		sf::Vector2i GetTileSize();										// возвращает размер тайла
	private:
		short mapWidth, mapHeight;										// ширина и высота карты в тайлах
		short tileWidth, tileHeight;									// ширина и высота тайлов в пикселях
		short firstGid;													// Gid первого тайла
		sf::Texture tilesetTexture;										// текстура тайлсета
		std::vector<Object> objects;									// вектор объектов
		std::vector<Layer> layers;										// вектор слоев

		virtual void draw(sf::RenderTarget&, sf::RenderStates) const;	// отрисовывает все тайлы
	};
}

#endif // LEVEL_HPP