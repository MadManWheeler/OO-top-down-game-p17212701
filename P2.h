#pragma once

/*!
\file dynamicCircle.h
*/

#include <Box2D/Box2D.h>
#include <SFML/Graphics.hpp>

#include "physicalThing.h"

/*! \class DynamicCircle
\brief A simple circle which can move, rotate and collide with stuff
*/

class P2 : public sf::CircleShape, public PhysicalThing
{
private:
public:
	P2(b2World * world, const sf::Vector2f& position, const float radius, const float orientation, b2Vec2 VEL2); //!< Complete contructor
	void update(b2Vec2 VEL2); //!< Update rendering infomation 
	void draw(sf::RenderTarget &target, sf::RenderStates states) const; //!< Overridden drawing methos to include line to allow users to see oreintation of the ball
};
