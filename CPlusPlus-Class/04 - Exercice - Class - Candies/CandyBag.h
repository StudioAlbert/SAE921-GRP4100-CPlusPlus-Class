#pragma once
#include <string>

class CandyBag
{

public:
	enum class CandyType
	{
		Tagada,
		LollyPop,
		ChewingGum,
		Reglisse,
		HariboBanane
	};

	static std::string getEnumName(CandyType type)
	{
		switch (type)
		{
		case CandyType::Tagada:
			return "Tagada";
			break;
		case CandyType::HariboBanane:
			return "Banane";
			break;
		case CandyType::ChewingGum:
			return "Chewing gum";
			break;
		case CandyType::LollyPop:
			return "Lollypop";
			break;
		case CandyType::Reglisse:
			return "Reglisse";
			break;
		default:
				return "undefined";
			break;
		}
	}

private:
	CandyType type_;
	int quantity_;

public:
	CandyBag();
	CandyBag(CandyType newType, int quantity);

	CandyType getType() { return type_; };
	int getQuantity() { return quantity_; };

	void buyCandies(int quantityToBuy);

};

