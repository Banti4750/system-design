#ifndef EMAIL_ALERT_OBSERVER_CPP
#define EMAIL_ALERT_OBSERVER_CPP

#include <iostream>
#include <string>
#include "notificationAlertObserver.c++"

using namespace std;

class EmailAlertObserver : public NotificationAlertObserver
{
    string emailId;

public:
    EmailAlertObserver(string emailId)
    {
        this->emailId = emailId;
    }

    void update() override
    {
        sendEmail(emailId, "Product is back in stock!");
    }

private:
    void sendEmail(string email, string msg)
    {
        cout << "Email sent to: " << email << " | Message: " << msg << endl;
    }
};

#endif
