#include <iostream>
#include "observable/iphoneObserbleimplentaion.c++"
#include "observer/emailAlertObserver.c++"
#include "observer/mobileAlertObserver.c++"

using namespace std;

int main()
{
    IPhoneObservableImplementation iphoneStock;

    NotificationAlertObserver *observer1 = new EmailAlertObserver("abc@gmail.com");
    NotificationAlertObserver *observer2 = new EmailAlertObserver("xyz@gmail.com");
    NotificationAlertObserver *observer3 = new MobileAlertObserver("9876543210");

    iphoneStock.add(observer1);
    iphoneStock.add(observer2);
    iphoneStock.add(observer3);

    // stock was 0, now added 10 -> notifies all subscribers
    iphoneStock.setStockCount(10);

    cout << "\nCurrent stock: " << iphoneStock.getStockCount() << endl;

    // stock is already > 0, no notification
    iphoneStock.setStockCount(5);

    cout << "Current stock: " << iphoneStock.getStockCount() << endl;

    delete observer1;
    delete observer2;
    delete observer3;

    return 0;
}
