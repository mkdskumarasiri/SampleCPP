#include "EventManager.h"
#include "EventCallback.h"
#include "Subscriber.h"
#include <iostream>
#include <iterator>
using namespace std;


void EventManager::Register(EventCallback* pEventCallback)
{
	subscriberList.insert(subscriberList.end(),pEventCallback);
	 puts("Subscriber Registered");
}

void EventManager::ProcessEvent(EventType eType)
{
	switch (eType)
	{
	case EventA:
		puts ("event A");
		

		for(it=subscriberList.begin(); it != subscriberList.end();it++)
		{
			(*it).onEventA();
		}

		break;
	case EventB:
		puts ("event B");
		for(it=subscriberList.begin(); it != subscriberList.end();it++)
		{
			(*it).onEventB();
		}
		break;
	case EventC:
		puts ("event c");
		for(it=subscriberList.begin(); it != subscriberList.end();it++)
		{
			(*it).onEventC();
		}
		break;
	default:
		puts("No event");
	}

}

void EventManager:: setIt(list<Subscriber>::iterator iterator)
{
	it=iterator;
}


list<Subscriber>::iterator EventManager::getIt()
{
	return it;
}
