#ifndef NOTIFICATION_ALERT_OBSERVER_CPP
#define NOTIFICATION_ALERT_OBSERVER_CPP

class NotificationAlertObserver
{
public:
    virtual void update() = 0;
    virtual ~NotificationAlertObserver() {}
};

#endif
