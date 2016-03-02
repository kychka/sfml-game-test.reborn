#pragma once

#include "../IAnimation.h"
#include <memory>
#include <map>

using std::shared_ptr;
using std::map;
using std::vector;

class Animations
{

protected:

	map<int, shared_ptr<IAnimation> > animations;

public:

	Animations();

	vector<shared_ptr<IAnimation> > getAll();
	virtual void init() = 0;
	shared_ptr<IAnimation> get(int anim);
	
	virtual ~Animations();
};

