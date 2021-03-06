#pragma once

/*!
\file dynamicCircle.h
*/

#include <Box2D/Box2D.h>
#include <SFML/Graphics.hpp>

#include "physicalThing.h"

/*! \class DynamicCircle
\circle which can moveand collide
*/

class Ball : public sf::CircleShape, public PhysicalThing
{
private:
public:
	Ball(b2World * world, const sf::Vector2f& position, const float radius, const float orientation); //!< Complete contructor
	void update(bool point); //!< Update rendering infomation 
	void draw(sf::RenderTarget &target, sf::RenderStates states) const; //!< Overridden drawing methos to include line to allow users to see oreintation of the ball

};
