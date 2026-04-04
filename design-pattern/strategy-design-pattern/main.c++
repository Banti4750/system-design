#include <iostream>
#include "vehicle.c++"
#include "strategy/driveStrategy.c++"
#include "strategy/normalDriveStrategy.c++"
#include "strategy/sportsDriveStrategy.c++"
#include "strategy/xyzDriveStrategy.c++"
#include "strategy/torquDriveStrategy.c++"

int main()
{
    normalDriveStrategy normalDrive;
    sportsDriveStrategy sportsDrive;
    xyzDriveStrategy xyzDrive;
    torqueDriveStrategy torqueDrive;

    vehicle car1("Normal Vehicle", &normalDrive);
    vehicle car2("Sports Vehicle", &sportsDrive);
    vehicle car3("Good Vehicle", &xyzDrive);
    vehicle car4("Torque Vehicle", &torqueDrive);

    std::cout << "Strategy Pattern Demo" << std::endl;
    car1.drive();
    car2.drive();
    car3.drive();
    car4.drive();

    std::cout << "\nSwitch strategy for car1 to sports mode." << std::endl;
    car1.setStrategy(&sportsDrive);
    car1.drive();

    std::cout << "\nSwitch strategy for car3 to normal mode." << std::endl;
    car3.setStrategy(&normalDrive);
    car3.drive();

    return 0;
}
