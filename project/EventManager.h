#pragma once

#define _EVENT_MANAGER_H_

#include "EventCallback.h"
#include "Subscriber.h"
#include <list>

using namespace std;

enum EventType: int {EventA=1, EventB=2, EventC=3};

class EventManager
{
public:
	void Register(EventCallback* pcb);
	void ProcessEvent(EventType eType);
	void setIt(list<Subscriber>::iterator it);
	list<Subscriber>::iterator getIt();
	
private:
	list<Subscriber> subscriberList;
	list<Subscriber>::iterator it;
	
};
