# Strategy Pattern (Simple Explanation)

## What is this pattern?

The Strategy Pattern lets a program choose how to do something at runtime by using different "strategy" objects.

In simple words:

- You have one main task (example: drive a vehicle).
- You keep the task code separate from the different ways to do it.
- You can switch the way to do the task without changing the main code.

## How this folder is organized

- `driveStrategy.c++` - the base strategy class. It is the general idea of a driving strategy.
- `normalDriveStrategy.c++` - one specific way to drive (normal driving).
- `sportsDriveStrategy.c++` - another specific way to drive (sports driving). This file is currently empty.
- `xyzDriveStrategy.c++` - a placeholder for a third strategy. This file is also empty.

## What the pattern means here

1. `driveStrategy` is like a template or plan for driving.
2. `normalDriveStrategy`, `sportsDriveStrategy`, and `xyzDriveStrategy` are different plans.
3. The main code should pick one plan and use it.

## Why use this pattern?

- It makes code easier to change.
- You can add a new way to drive without changing the main vehicle code.
- It keeps each driving method separate.

## Notes

- Right now, only `normalDriveStrategy.c++` has a class with a constructor and destructor.
- `sportsDriveStrategy.c++` and `xyzDriveStrategy.c++` are ready to be filled with other drive styles.
- You can add methods to `driveStrategy` and then implement them in each strategy class.
