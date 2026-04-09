# Decorator Design Pattern

## What is it?
The Decorator pattern lets you attach new behaviors to objects by wrapping them inside special wrapper objects (decorators). Each decorator adds its own behavior while delegating to the wrapped object.

## Real-World Analogy
Think of ordering a pizza. You pick a base (Margherita, FarmHouse) and then add toppings (Extra Cheese, Mushroom). Each topping wraps around the base and adds its own cost. You can stack any number of toppings without modifying the base pizza class.

## Structure

```
BasePizza/
├── BasePizza.c++              — Abstract base component
├── MargheritaBasePizza.c++    — Concrete component (Rs.300)
├── FarmHouseBasePizza.c++     — Concrete component (Rs.100)
└── VegeDelightBasePizza.c++   — Concrete component (Rs.200)

ToppingDecorator/
├── ToppingDecorator.c++       — Abstract decorator (wraps a BasePizza*)
├── ExtraChese.c++             — Concrete decorator (+Rs.50)
└── Mushrrom.c++               — Concrete decorator (+Rs.70)

main.c++                       — Demo
```

## Class Diagram

```
              BasePizza (interface)
              ┌──────────────┐
              │ + cost()     │
              └──────┬───────┘
                     │
         ┌───────────┼────────────────────┐
         │           │                    │
   ┌─────▼─────┐ ┌──▼──────────┐  ┌──────▼───────────┐
   │ Margherita │ │ FarmHouse   │  │ ToppingDecorator  │
   │ cost()=300 │ │ cost()=100  │  │ - basePizza*      │
   └────────────┘ └─────────────┘  └──────┬────────────┘
                                          │
                                ┌─────────┼──────────┐
                                │                    │
                          ┌─────▼──────┐     ┌──────▼─────┐
                          │ ExtraCheese│     │ Mushroom   │
                          │ +50        │     │ +70        │
                          └────────────┘     └────────────┘
```

## How it Works

1. `ToppingDecorator` extends `BasePizza` and holds a `BasePizza*` reference
2. Each concrete decorator calls `basePizza->cost()` and adds its own cost on top
3. Decorators can wrap other decorators, enabling stacking

```
ExtraCheese( Mushroom( FarmHouse ) )
= FarmHouse.cost() + Mushroom.cost() + ExtraCheese.cost()
= 100 + 70 + 50
= Rs.220
```

## Key Benefits
- **Open/Closed Principle** — Add new toppings without modifying existing classes
- **Flexible composition** — Stack any combination of decorators at runtime
- **Single Responsibility** — Each decorator handles one behavior
- **Alternative to subclassing** — Avoids class explosion (no need for MargheritaWithCheeseAndMushroom class)
