#include <iostream>
#include "Subscriber.h"
#include "EventManager.h"
#include "EventCallback.h"


int main (int argc, char* argv[])
{
	Subscriber subscriberX;
	Subscriber subscriberY;
	EventManager eventManager;

	eventManager.Register(subscriberX);
	//eventManager.Register(&subscriberY);
	eventManager.ProcessEvent(EventA);

	getchar();

}