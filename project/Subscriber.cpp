#include "Subscriber.h"
#include <iostream>

void Subscriber::setSubscriberId(int id)
{
	subscriberId=id;
}

int Subscriber::getSubscriberId()
{
	return subscriberId;
}

void Subscriber::onEventA()
{
	puts("Received Event A");
}

void Subscriber::onEventB()
{
	puts("Received Event B");
}

void Subscriber::onEventC()
{
	puts("Received Event C");
}

