#pragma once

#include <Box2D\Box2D.h>
#include "staticBlock.h"'
#include "Goal.h"
#include <iostream>

class contact : public b2ContactListener
{
public:

	void BeginContact(b2Contact* contact);
	//b2ContactListener
	// Called when two fixtures begin to touch
	 
	 //void EndContact(b2Contact* contact);
/*
	{
		//getfilterdata
		//const isSensorA = contact->GetFixtureA()->GetFilterData();
		//bool isSensorA = contact->GetFixtureA()->IsSensor();
		//check if fixture A was a ball
		void*bodyUserData = contact->GetFixtureA()->GetBody()->GetUserData();
		//b2Body* bodyA = contact->GetFixtureA()->GetBody();
		//std::pair<std::string, void *> dataC = *(std::pair<std::string, void *>*) bodyA->GetUserData();
		if (bodyUserData != nullptr)
		{
			std::pair<std::string, void *> dataC = *(std::pair<std::string, void *>*) bodyUserData;
		}

		
		//if (isSensorA == true)
		if (bodyUserData)
		{	
			std::cout << typeid(StaticSensor).name() << std::endl;
			std::cout << typeid(bodyUserData).name() << std::endl;

			if (typeid(bodyUserData).name()[6] == 'S')


			{
				std::cout << "niceuuu" << std::endl;
			}
			
				//static_cast<StaticBlock*>(bodyUserData)->BeginContact();
				
		}
	}*/

	// Called when two fixtures cease to touch
	//void EndContact();
	
	

	
};

