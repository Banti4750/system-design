# Observer Design Pattern

## What is it?
The Observer pattern defines a one-to-many dependency between objects. When one object (the **Observable/Subject**) changes state, all its dependents (**Observers**) are notified automatically.

## Real-World Analogy
Think of a "Notify Me" button on an e-commerce site. When a product is out of stock, users subscribe. When the product is back in stock, all subscribed users get notified (via email, SMS, etc.).

## Structure

```
observable/
├── stockObervable.c++              — Abstract Observable interface
└── iphoneObserbleimplentaion.c++   — Concrete Observable (iPhone stock tracker)

observer/
├── notificationAlertObserver.c++   — Abstract Observer interface
├── emailAlertObserver.c++          — Concrete Observer (sends email)
└── mobileAlertObserver.c++         — Concrete Observer (sends SMS)

main.cpp                            — Demo
```

## Class Diagram

```
        StockObservable (interface)
        ┌─────────────────────────┐
        │ + add(observer)         │
        │ + remove(observer)      │
        │ + notifySubscribers()   │
        │ + setStockCount(int)    │
        │ + getStockCount()       │
        └────────┬────────────────┘
                 │ implements
    ┌────────────▼─────────────┐        uses       ┌──────────────────────────────┐
    │ IPhoneObservableImpl     │──────────────────►│ NotificationAlertObserver    │
    │                          │                    │ (interface)                  │
    │ - observerList           │                    │ + update()                   │
    │ - stockCount             │                    └──────┬──────────┬────────────┘
    └──────────────────────────┘                           │          │
                                                implements│          │implements
                                                ┌─────────▼──┐  ┌───▼──────────┐
                                                │ EmailAlert  │  │ MobileAlert  │
                                                │ Observer    │  │ Observer     │
                                                └─────────────┘  └──────────────┘
```

## How it Works

1. Observers register themselves with the Observable via `add()`
2. When stock changes from 0 to some value, Observable calls `notifySubscribers()`
3. `notifySubscribers()` loops through all registered observers and calls `update()` on each
4. Each observer handles the notification in its own way (email, SMS, etc.)

## Key Benefits
- **Loose coupling** — Observable doesn't know the concrete type of its observers
- **Open/Closed Principle** — New observer types can be added without modifying Observable
- **One-to-many** — Multiple observers can subscribe to a single observable
