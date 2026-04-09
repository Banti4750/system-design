#ifndef MOBILE_ALERT_OBSERVER_CPP
#define MOBILE_ALERT_OBSERVER_CPP

#include <iostream>
#include <string>
#include "notificationAlertObserver.c++"

using namespace std;

class MobileAlertObserver : public NotificationAlertObserver
{
    string phoneNumber;

public:
    MobileAlertObserver(string phoneNumber)
    {
        this->phoneNumber = phoneNumber;
    }

    void update() override
    {
        sendSms(phoneNumber, "Product is back in stock!");
    }

private:
    void sendSms(string number, string msg)
    {
        cout << "SMS sent to: " << number << " | Message: " << msg << endl;
    }
};

#endif
