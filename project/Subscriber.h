#pragma once

#define _SUBSCRIBER_H_

#include "EventCallback.h"
#include <iostream>

class Subscriber : public EventCallback
{
public:
	void setSubscriberId( int SubscriberId);
	int getSubscriberId();
	virtual void onEventA();
	virtual void onEventB();
	virtual void onEventC();
private:
	int subscriberId;
};