#ifndef ISTATE_H
#define ISTATE_H

#include "../../GameActors/Entity/Entity.h"
class Entity;

class IState
{
public:

	virtual void update( Entity & actor, float time) = 0;

	virtual ~IState(){}
};

#endif // ISTATE_H