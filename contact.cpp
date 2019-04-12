#include "contact.h"
#include <iostream>

void contact::BeginContact(b2Contact * contact)
{
	void * bodyUserData = contact->GetFixtureA()->GetBody()->GetUserData();
	void * bodyUserData2 = contact->GetFixtureB()->GetBody()->GetUserData();

	if (bodyUserData != nullptr)
	{
		Goal * block = static_cast<Goal*>(bodyUserData);
		block->action();
	}

	if (bodyUserData2 != nullptr)
	{
		Goal * block = static_cast<Goal*>(bodyUserData2);
		block->action();
	}

	/*if (i == 0 && bodyUserData != nullptr)
	{
		void*bodyUserData2 = contact->GetFixtureA()->GetBody()->GetUserData();
		i++;
	}
	void*bodyUserData = contact->GetFixtureB()->GetBody()->GetUserData();
	
	
	//b2Body* bodyA = contact->GetFixtureA()->GetBody();
	//std::pair<std::string, void *> dataC = *(std::pair<std::string, void *>*) bodyA->GetUserData();

		//std::pair<std::string, void *> dataC = *(std::pair<std::string, void *>*) bodyUserData;

	

	//if (isSensorA == true)

	if (bodyUserData)
	{
		
			//std::cout << typeid(StaticSensor).name() << std::endl;
			void * team1 = bodyUserData;

			//std::cout << bodyUserData << std::endl;
			//if (typeid(bodyUserData).name()[13] == '7')



			std::cout << "team1" << std::endl;
		
		
		


		//static_cast<StaticBlock*>(bodyUserData)->BeginContact();

	}
	if(bodyUserData2)
	{
		//std::cout << bodyUserData << std::endl;
		std::cout << "team2" << std::endl;

	}*/

}