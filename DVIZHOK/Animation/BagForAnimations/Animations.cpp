#include "Animations.h"



Animations::Animations()
{
}

vector<shared_ptr<IAnimation>> Animations::getAll()
{
	vector<shared_ptr<IAnimation> > vec;

	for (auto it = animations.begin(); it != animations.end(); it++)
	{
		vec.push_back(it->second);
	}

	return 	vec;
}





std::shared_ptr<IAnimation> Animations::get(int anim)
{

	auto it = animations.find(anim);
	if (it != animations.end())
	{
		return animations.at(anim);
	}
	else
	{
		return nullptr;
	}
}


Animations::~Animations()
{
}
