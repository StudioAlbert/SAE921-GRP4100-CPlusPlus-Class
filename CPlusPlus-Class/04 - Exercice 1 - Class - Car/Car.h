#include <string>

class Car
{

private:
	std::string brand_;
	std::string model_;
	int motorPower_;

public:
	// default ctor
	Car();
	// Ctor with parameters
	Car(std::string brand, std::string model, int motorPower);

	std::string getBrand() { return brand_; };
	/*void setBrand(std::string brand) { brand_ = brand; };*/

	std::string getModel() { return model_; };
	/*void setModel(std::string model) { model_ = model; };*/

	int getMotorPower() { return motorPower_; };
	/*void setMotorPower(int motorPower) { motorPower_ = motorPower; };*/

	std::string toString();

};

