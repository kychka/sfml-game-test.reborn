#pragma once

#include "../IAnimation.h"
#include <memory>
#include <map>
class Animations
{

protected:

	std::map<int, std::shared_ptr<IAnimation> > animations;

public:

	Animations();

	virtual void init() = 0;
	std::shared_ptr<IAnimation> get(int anim);
	
	virtual ~Animations();
};

