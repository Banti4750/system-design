#ifndef IPHONE_OBSERVABLE_IMPL_CPP
#define IPHONE_OBSERVABLE_IMPL_CPP

#include <vector>
#include <algorithm>
#include "stockObervable.c++"

using namespace std;

class IPhoneObservableImplementation : public StockObservable
{
    vector<NotificationAlertObserver*> observerList;
    int stockCount = 0;

public:
    void add(NotificationAlertObserver* observer) override
    {
        observerList.push_back(observer);
    }

    void remove(NotificationAlertObserver* observer) override
    {
        observerList.erase(
            std::remove(observerList.begin(), observerList.end(), observer),
            observerList.end());
    }

    void notifySubscribers() override
    {
        for (auto* observer : observerList)
        {
            observer->update();
        }
    }

    void setStockCount(int newStockAdded) override
    {
        if (stockCount == 0)
        {
            notifySubscribers();
        }
        stockCount += newStockAdded;
    }

    int getStockCount() override
    {
        return stockCount;
    }
};

#endif
