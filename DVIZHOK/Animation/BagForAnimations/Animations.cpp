#include "Animations.h"



Animations::Animations()
{
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
