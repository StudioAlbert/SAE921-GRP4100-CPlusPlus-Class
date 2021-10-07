#include "Car.h"

Car::Car()
{
	brand_ = "unknown";
}

Car::Car(std::string brand, std::string model, int motorPower)
{
	this->brand_ = brand;
	this->model_ = model;
	this->motorPower_ = motorPower;
}


std::string Car::toString()
{
	return "the car is a " + brand_ + " " + model_ + ", its power is " + std::to_string(motorPower_);
}
