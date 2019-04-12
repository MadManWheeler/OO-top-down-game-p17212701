#pragma once



#include <Box2D/Box2D.h>
#include <SFML/Graphics.hpp>
#include <iostream>

#include "physicalThing.h"



class Goal : public sf::RectangleShape, public PhysicalThing
{
private:
	bool m_hit = false;
public:
	Goal(b2World * world, const sf::Vector2f& position, const sf::Vector2f& size, const float& orientation); //!< Complete contructor
	void action(); 
	bool isHit();
	void setUserData();
};