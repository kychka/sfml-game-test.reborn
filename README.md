# sfml-game-test.reborn
Это командный проект по командной разработке компьютерной игры единомышленников с сайта kychka-pc 

 --->   ПРОСЬБА УДАЛИТЬ СТАРЫЙ ПРОЕКТ И СКЛОНИРОВАТЬ ПО-НОВОЙ,ЕСЛИ ЕСТЬ ПРОБЛЕМЫ С ПУТЯМИ К РЕСУРСАМ
 
 
                                              --> использование  <--

1) В GameplayScreen нужно размещать все что нужно, чтобы обработать события, заапдейтить и отрисовать.
при переходах на экраны, все состояние каждого экрана будет сохранятся в ввиде,как было до нажатия кнопки перехода

2) чтобы настроить переход на другой экран, надо вызвать ScreenManager::setcurrentScreen(string). где string, это имя экрана. 
Весь список экранов,и методы доступа есть в классе ScreenManager.cpp и ScreenManager.h

3) чтобы создать новое состояние, нужно создать класс,отнаследовать от IState и реализовать метод update()
который обрабатывает написанный в нем код. 

4) чтобы создать карту состояний(складывать их туда) нужно создать класс, отнаследовать от States и реальзовать метод init().
 чтобы добавить состояние в таблицу,чтоб им пользоваться, нужно в методе init вызвать states(states это std::map,которая находится в классе States в protected области). нужно вызвать states.emplace(/число для будущего доступа int/, std::make_shared</имя класса,унаследованного от IState>() ); . 
 

 
  ---------------------> ДЛЯ БОЛЕЕ ПОДРОБНОГО ПРИМЕРА СМОТРЕТЬ GAME/Actors/Player
  
  ------> Aнимация <--------

1) чтобы создать анимацию, нужно создать класс и отнаследовать от IAnimation.
2) в классе,который был создан и отнаследоват от IAnimation, нужно  создать объект класса AnimationClass
которы принимает в конструкор: первый параметр Texture (!!!В текстуре дожна быть вся анимация на картинке одинакого размера!! подробности в классе АnimationClass) второй параметр это количество кадров по горизонали, третий параметр по вертикали, четвертый параметр время проигрывания всей анимации, пятый и шестой параметры это координаты на текстуре откуда резать первый кадр, седьмой и восьмой параметры ширина и высота кадра. класс негибкий вообще.

3)чтобы создать карту анимации,нужно создать класс и отнаследовать от Animations и реализовать метод init();

 -->> Вся инициализация производится в GameplayScreen. для подробностей смотреть GameplayScreen и GAME/Actors/Player
