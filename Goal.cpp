#include "physicalThing.h"
#include "Goal.h"

Goal::Goal(b2World * world, const sf::Vector2f& position, const sf::Vector2f& size, const float& orientation)
{
	b2BodyDef l_bodyDef;
	b2PolygonShape l_shape;
	b2FixtureDef l_fixtureDef;

	l_bodyDef.position.Set(position.x, position.y);
	l_bodyDef.angle = orientation * DEG2RAD;

	m_body = world->CreateBody(&l_bodyDef);


	l_shape.SetAsBox(size.x * 0.5f, size.y * 0.5f);
	l_shape.m_radius = 0.0f;

	l_fixtureDef.density = mk_fDensity;
	l_fixtureDef.friction = mk_fFriction;
	l_fixtureDef.restitution = mk_fRestitution;
	l_fixtureDef.shape = &l_shape;
	l_fixtureDef.filter.groupIndex = -4;
	//l_fixtureDef.isSensor = true; //Make it a sensor

	//l_fixtureDef.filter.categoryBits = 2; // I am a sensor
	//l_fixtureDef.filter.maskBits = 0; // I don't collide with anything

	m_body->CreateFixture(&l_fixtureDef);

	setPosition(position);
	setSize(size);
	setOrigin(size * 0.5f);
	setRotation(orientation);
	setFillColor(sf::Color::Blue);
	setOutlineThickness(0.f);
}

void Goal::action()
{
	m_hit = true;
}

bool Goal::isHit()
{
	bool result = m_hit;
	m_hit = false;
	return result;
}

void Goal::setUserData()
{
	m_body->SetUserData(this); // used by our contact listener
}


