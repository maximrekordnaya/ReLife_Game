#include "Player.h"
#include<MMSystem.h>
#pragma comment (lib,"winmm")
enum ConsoleColor {
	Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray,
	LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
};

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
void Player::NotMoreThan100()
{
	if (_health > 100) {
		_health = 100;
	}
	if (_satiety > 100) {
		_satiety = 100;
	}
	if (_mood > 100) {
		_mood = 100;
	}


}
void Player::ShopBuy()
{
	int menu;
	std::cout << "Casual wear(1)\n";
	std::cout << "Backpack(2)\n";
	std::cout << "Bicycle(3)\n";
	std::cout << "Good Clothes(4)\n";
	std::cout << "Warehouse 1 (5)\n";
	std::cout << "Warehouse 2 (6)\n";
	std::cout << "Car (7)\n";
	std::cout << "Warehouse 3 (8)\n";
	std::cout << "Exit (0)\n";
	std::cout << "Enter number: ";
	std::cin >> menu;
	switch (menu)
	{
	case 1: 
		if (_money >= 500 && shop->CasualWear()==false) {
			shop->buyCasualWear();
			_money -= 500;
			writeFileData();
		}
		else {
			std::cout << "not enough money or you have already bought it\n";
		}
		break;
	case 2:
		if (_money >= 1000 && shop->Backback()==false) {
			shop->buyBackpack();
			_money -= 1000;
			writeFileData();
		}
		else {
			std::cout << "not enough money or you have already bought it\n";
		}
		break;
	case 3:
		if (_money >= 1500 && shop->Bicycle() == false) {
			shop->buyBicycle();
			_money -= 1500;
			writeFileData();
		}
		else {
			std::cout << "not enough money or you have already bought it\n";
		}
		break;
	case 4:
		if (_money >= 1700 && shop->GoodClothes() == false) {
			shop->buyGoodClothes();
			_money -= 1700;
			writeFileData();
		}
		else {
			std::cout << "not enough money or you have already bought it\n";
		}
		break;
	case 5:
		if (_money>=3000 && shop->WareHouse1() == false) {
			shop->buyWarehouse1();
			_money -= 3000;
			writeFileData();
		}
		else {
			std::cout << "not enough money or you have already bought it\n";
		}
		break;

	case 6:
		if (_money >= 7000 && shop->WareHouse2() == false) {
			shop->buyWarehouse2();
			_money -= 7000;
			writeFileData();
		}
		else {
			std::cout << "not enough money or you have already bought it\n";
		}
		break;
	case 7:
		if (_money >= 15000 && shop->Car() == false) {
			shop->buyCar();
			_money -= 15000;
			writeFileData();
		}
		else {
			std::cout << "not enough money or you have already bought it\n";
		}
		break;	

	case 8:
		if (_money >= 100000 && shop->WareHouse3() == false) {
			shop->buyWarehouse1();
			_money -= 100000;
			writeFileData();
		}
		else {
			std::cout << "not enough money or you have already bought it\n";
		}
		break;	
	}
	system("cls");
}
void Player::ApartBuy()
{
	int menu;
	std::cout << "Hut(1)";
	std::cout << "Basement(2)\n";
	std::cout << "Attic(3)\n";
	std::cout << "Room rent(4)\n";
	std::cout << "Apartment(5)\n";
	std::cout << "House(6)\n";
	std::cout << "Villa(7)\n";
	std::cout << "Enter number: ";
	std::cin >> menu;
	switch (menu)
	{
	case 1:
		if (_money >= 750 && apart->Hut() == false) {
			apart->buyHut();
			_money -= 750;
			writeFileData();
		}
		else {
			std::cout << "not enough money or you have already bought it\n";
		}
		break;
	case 2:
		if (_money >= 1500 && apart->Basement() == false) {
			apart->buyBasement();
			_money -= 1500;
			writeFileData();
		}
		else {
			std::cout << "not enough money or you have already bought it\n";
		}
		break;
	case 3:
		if (_money >= 1700 && apart->Attic() == false) {
			apart->buyAttic();
			_money -= 1700;
			writeFileData();
		}
		else {
			std::cout << "not enough money or you have already bought it\n";
		}
		break;
	case 4:
		if (_money >= 2000 && apart->RoomRent() == false) {
			apart->buyRoomRent();
			_money -= 2000;
			writeFileData();
		}
		else {
			std::cout << "not enough money or you have already bought it\n";
		}
		break;
	case 5:
		if (_money >= 3000 && apart->Apartment() == false) {
			apart->buyApartment();
			_money -= 3000;
			writeFileData();
		}
		else {
			std::cout << "not enough money or you have already bought it\n";
		}
		break;

	case 6:
		if (_money >= 15000 && apart->House() == false) {
			apart->buyHouse();
			_money -= 1500;
			writeFileData();
		}
		else {
			std::cout << "not enough money or you have already bought it\n";
		}
		break;

	case 7:
		if (_money >= 65000 && apart->Villa() == false) {
			apart->buyHut();
			_money -= 65000;
			writeFileData();
		}
		else {
			std::cout << "not enough money or you have already bought it\n";
		}
		break;
	}
	system("cls");


}
void Player::SkillBuy()
{
	int menu;
	std::cout << "Maths skill(1)\n";
	std::cout << "Plumbing Skill(2)\n";
	std::cout << "Cyclist skill(3)\n";
	std::cout << "Secondary Education(4)\n";
	std::cout << "Good Memory(5)\n";
	std::cout << "Highter Education(6)\n";
	std::cout << "Enter number: ";
	std::cin >> menu;
	switch (menu)
	{
	case 1:
		if (_money >= 500 && skill->Maths() == false) {
			skill->buyMaths();
			_money -= 500;
			writeFileData();
		}
		else {
			std::cout << "not enough money or you have already bought it\n";
		}
		break;
	case 2:
		if (_money >= 1700 && skill->PlumbingSkill() == false) {
			skill->buyPlumbingSkill();
			_money -= 1700;
			writeFileData();
		}
		else {
			std::cout << "not enough money or you have already bought it\n";
		}
		break;
	case 3:
		if (_money >= 2000 && skill->CyclistSkill() == false) {
			skill->buyCyclistSkill();
			_money -= 2000;
			writeFileData();
		}
		else {
			std::cout << "not enough money or you have already bought it\n";
		}
		break;
	case 4:
		if (_money >= 2500 && skill->SecondaryEducation() == false) {
			skill->buySecondaryEducation();
			_money -= 2500;
			writeFileData();
		}
		else {
			std::cout << "not enough money or you have already bought it\n";
		}
		break;
	case 5:
		if (_money >= 1000 && skill->GoodMemory() == false) {
			skill->buyGoodMemory();
			_money -= 1000;
			writeFileData();
		}
		else {
			std::cout << "not enough money or you have already bought it\n";
		}
		break;

	case 6:
		if (_money >= 5000 && skill->HighterEducation() == false) {
			skill->buyHighterEducation();
			_money -= 5000;
			writeFileData();
		}
		else {
			std::cout << "not enough money or you have already bought it\n";
			
		}
		break;

	}
	system("cls");


}
void Player::workDistributeFlyers()
{
	if (skill->Maths() && apart->Hut() && shop->CasualWear()) {
		int plus = rand() % 12 + 27;
		_money += plus; //27 39
		_health -= rand() % 3 + 2; // 2 5      4+3
		_satiety -= rand() % 4 + 3;//3 7
		_mood -= rand() % 3 + 1;//
		std::cout << "Money + " << plus << "\n";
		std::cout << "Money: " << _money << "\n";
		SetBottlePrice();
		writeFileData();
	}
	
}
void Player::workPlumber()
{
	if (skill->PlumbingSkill() && apart->Basement()) {
		int plus = rand() % 20 + 50;//50 70
		_money += plus; //27 39
		_health -= rand() % 4 + 2; // 2 6      4+3
		_satiety -= rand() %2 + 2;//2 4
		_mood -= rand() % 3 + 4;//4 7
		std::cout << "Money + " << plus << "\n";
		std::cout << "Money: " << _money << "\n";
		SetBottlePrice();
		writeFileData();
	}
	
}
void Player::workGlovo()
{
	if (skill->CyclistSkill() && apart->Attic() && shop->Backback() && shop->Bicycle()) {
		int plus = rand() % 23+70;//70 93
		_money += plus; //27 39
		_health -= rand() % 3+ 3; //3 6      4+3
		_satiety -= rand() % 2 + 3;//3 5
		_mood -= rand() % 2+2;//2 4
		std::cout << "Money + " << plus << "\n";
		std::cout << "Money: " << _money << "\n";
		SetBottlePrice();
		writeFileData();
	}
	
}
void Player::workWaiter()
{
	if (skill->GoodMemory() && skill->SecondaryEducation() && apart->RoomRent() && shop->GoodClothes()) {
		int plus = rand() %50+100;//100 150
		_money += plus; //27 39
		_health -= rand() % 4 + 5; // 5 9     4+3
		_satiety -= rand() % 4+5;//5 9
		_mood -= rand() %3 + 3 ;//3 6
		std::cout << "Money + " << plus << "\n";
		std::cout << "Money: " << _money << "\n";
		SetBottlePrice();
		writeFileData();
	}
	
}
void Player::workBusiness1()
{
	if (skill->HighterEducation() && apart->Apartment() && shop->WareHouse1()) {
		int plus = rand() %200 + 200;//200 400
		_money += plus; //27 39
		_health -= rand() % 4 + 5; // 5 9     4+3
		_satiety -= rand() % 4 + 5;//5 9
		_mood -= rand() % 4+5;//3 6
		std::cout << "Money + " << plus << "\n";
		std::cout << "Money: " << _money << "\n";
		SetBottlePrice();
		writeFileData();
	}
	
}
void Player::workBusiness2()
{
	if (skill->HighterEducation() && apart->House() && shop->WareHouse2()) {
		int plus = rand() % 800 + 700;//700 1500
		_money += plus; //27 39
		_health -= rand() % 6 + 6; // 6 12    4+3
		_satiety -= rand() % 4 + 5;//
		_mood -= rand() % 6 + 6;//
		std::cout << "Money + " << plus << "\n";
		std::cout << "Money: " << _money << "\n";
		SetBottlePrice();
		writeFileData();
	}
	
}
void Player::workBusiness3()
{
	if (skill->HighterEducation() && apart->Villa() && shop->WareHouse3()) {
		int plus = rand() % 8000 + 2000;//2000 10000
		_money += plus; //27 39
		_health -= rand() %15 + 15 ; // 15 30
		_satiety -= rand() % 12+ 8;//8 20
		_mood -= rand() % 12+8;//
		std::cout << "Money + " << plus << "\n";
		std::cout << "Money: " << _money << "\n";
		SetBottlePrice();
		writeFileData();
	}
	
}
bool Player::workDistributeFlyersB()
{
	if (skill->Maths() && apart->Hut() && shop->CasualWear()) {
		return true;
	}
	else {
		return false;
	}
}
bool Player::workPlumberB()
{
	if (skill->PlumbingSkill() && apart->Basement()) {
		return true;
	}
	else {
		return false;
	}
}
bool Player::workGlovoB()
{
	if (skill->CyclistSkill() && apart->Attic() && shop->Backback() && shop->Bicycle()) {
		return true;
	}
	else {
		return false;
	}
}
bool Player::workWaiterB()
{
	if (skill->GoodMemory() && skill->SecondaryEducation() && apart->RoomRent() && shop->GoodClothes()) {
		return true;
	}
	else {
		return false;
	}
}
bool Player::workBusiness1B()
{
	if (skill->HighterEducation() && apart->Apartment() && shop->WareHouse1()) {
		return true;
	}
	else {
		return false;
	}
}
bool Player::workBusiness2B()
{
	if (skill->HighterEducation() && apart->House() && shop->WareHouse2()) {
		return true;
	}
	else {
		return false;
	}
}
bool Player::workBusiness3B()
{
	if (skill->HighterEducation() && apart->Villa() && shop->WareHouse3()) {
		return true;
	}
	else {
		return false;
	}
}
void Player::buyMaths()
{
	skill->buyMaths();
	_money -= 500;
}
void Player::buyPlumbingSkill()
{
	skill->buyPlumbingSkill();
	_money -= 1700;
}
void Player::buyCyclistSkill()
{
	skill->buyCyclistSkill();
	_money -= 2000;
}
void Player::buySecondaryEducation()
{
	skill->buySecondaryEducation();
	_money -= 2500;
}

void Player::buyGoodMemory()
{
	skill->buyGoodMemory();
	_money -= 1000;
}

void Player::buyHighterEducation()
{
	skill->buyHighterEducation();
	_money -= 5000;
}

bool Player::MathsB()
{
	if (skill->Maths()) {
		return false;
	}
	else {
		return true;
	}
}

bool Player::PlumbingSkillB()
{
	if (skill->PlumbingSkill()) {
		return false;
	}
	else {
		return true;
	}
}

bool Player::CyclistSkillB()
{
	if (skill->CyclistSkill()) {
		return false;
	}
	else {
		return true;
	}
}

bool Player::SecondaryEducationB()
{
	if (skill->SecondaryEducation()) {
		return false;
	}
	else {
		return true;
	}
}

bool Player::GoodMemoryB()
{
	if (skill->GoodMemory()) {
		return false;
	}
	else {
		return true;
	}
}

bool Player::HighterEducationB()
{
	if (skill->HighterEducation()) {
		return false;
	}
	else {
		return true;
	}
}

void Player::buyCasualWear()
{
	shop->buyCasualWear();
	_money -= 500;
}

void Player::buyBackpack()
{
	shop->buyBackpack();
	_money -= 1000;
}

void Player::buyBicycle()
{
	shop->buyBicycle();
	_money -= 1500;
}

void Player::buyGoodClothes()
{
	shop->buyGoodClothes();
	_money -= 1700;
}

void Player::buyWarehouse1()
{
	shop->buyWarehouse1();
	_money -= 3000;
}

void Player::buyWarehouse2()
{
	shop->buyWarehouse2();
	_money -= 7000;
}

void Player::buyCar()
{
	shop->buyCar();
	_money -= 15000;
}

void Player::buyWarehouse3()
{
	shop->buyWarehouse3();
	_money -= 100000;
}

bool Player::CasualWear()
{
	if (shop->CasualWear()) {
		return false;
	}
	else { return true; }
}

bool Player::Backback()
{
	if (shop->Backback()) {
		return false;
	}
	else { return true; }
}

bool Player::Bicycle()
{
	if (shop->Bicycle()) {
		return false;
	}
	else { return true; }
}

bool Player::GoodClothes()
{
	if (shop->GoodClothes()) {
		return false;
	}
	else { return true; }
}

bool Player::WareHouse1()
{
	if (shop->WareHouse1()) {
		return false;
	}
	else { return true; }
}

bool Player::WareHouse2()
{
	if (shop->WareHouse2()) {
		return false;
	}
	else { return true; }
}

bool Player::Car()
{
	if (shop->Car()) {
		return false;
	}
	else { return true; }
}

bool Player::WareHouse3()
{
	if (shop->WareHouse3()) {
		return false;
	}
	else { return true; }
}

void Player::buyHut()
{
	apart->buyHut();
	_money -= 750;
}

void Player::buyBasement()
{
	apart->buyBasement();
	_money -= 1500;
}

void Player::buyAttic()
{
	apart->buyAttic();
	_money -= 1500;
}

void Player::buyRoomRent()
{
	apart->buyRoomRent();
	_money -= 2000;
}

void Player::buyApartment()
{
	apart->buyApartment();
	_money -= 3000;
}

void Player::buyHouse()
{
	apart->buyHouse();
	_money -= 15000;
}

void Player::buyVilla()
{
	apart->buyVilla();
	_money -= 65000;
}

bool Player::Hut()
{
	if (apart->Hut()) {
		return false;
	}
	else {
		return true;
	}
}

bool Player::Basement()
{
	if (apart->Basement()) {
		return false;
	}
	else {
		return true;
	}
}

bool Player::Attic()
{
	if (apart->Attic()) {
		return false;
	}
	else {
		return true;
	}
}

bool Player::RoomRent()
{
	if (apart->RoomRent()) {
		return false;
	}
	else {
		return true;
	}
}

bool Player::Apartment()
{
	if (apart->Apartment()) {
		return false;
	}
	else {
		return true;
	}
}

bool Player::House()
{
	if (apart->House()) {
		return false;
	}
	else {
		return true;
	}
}

bool Player::Villa()
{
	if (apart->Villa()) {
		return false;
	}
	else {
		return true;
	}
}

void Player::diningRoom()
{
	
		_health += rand() % 10 + 15; // 
		_satiety += rand() % 10+15;
		_mood -= rand() % 5 + 1; // 1 6
		
		SetBottlePrice();
		NotMoreThan100();
		_money -= 100;
		writeFileData();
	
	
}
void Player::shawarmaCheap()
{
	
		_health += rand() % 10+15; // 13 18
		_satiety += rand() % 10+15;
		_mood += rand() % 10+15; 
		
		SetBottlePrice();
		NotMoreThan100();
		_money -= 140;
		writeFileData();
	
	
}
void Player::eatSweet()
{
	
		_health += 30; // 10 15
		_satiety -= 10;
		_mood += 30;// 1 6
		
		SetBottlePrice();
		NotMoreThan100();
		_money -= 200;
		writeFileData();
	
	
}
void Player::swing()
{		
		_mood += 25; 		
		SetBottlePrice();
		NotMoreThan100();
		_money -= 100;
		writeFileData();	
}
void Player::Cafe()
{
	
		_health += rand() %25+40 ; // 40 65
		_satiety += 30;
		_mood -= 5; // 1 6
		
		SetBottlePrice();
		NotMoreThan100();
		_money -= 500;
		writeFileData();
	
	
}
void Player::sanatorium()
{
	
		_health += 85; // 10 15
		_satiety += 85;
		_mood += 30; // 1 6
		
		SetBottlePrice();
		NotMoreThan100();
		_money -= 1000;
		writeFileData();
	
	
}
void Player::course()
{
	
		_health += 100;
		_satiety +=100;
		_mood +=70; 
		
		SetBottlePrice();
		NotMoreThan100();
		_money -= 4000;
		writeFileData();
	
	
}
Player::~Player()
{
	delete _bottle;
	delete shop;
	delete apart;
	delete skill;
}
Player::Player()
{
	srand(time(NULL));
	std::ifstream file;
	file.open("data.txt");
	std::string str;
	if (file.is_open()) {
		getline(file, str);
		_health = atoi(str.c_str());

		getline(file, str);
		_satiety = atoi(str.c_str());

		getline(file, str);
		_mood = atoi(str.c_str());

		getline(file, str);
		_bottle = new int(0);
		*_bottle = atoi(str.c_str());

		getline(file, str);
		_money = atoi(str.c_str());
		file.close();
	}
	else {
		resetFile();
	}

	
	//_bottle = new int(0);
	SetBottlePrice();
	NotMoreThan100();
	//_money = 0;
	if (_health<=0 || _satiety<=0 || _mood<=0) {
		resetFile();
		std::ifstream file;
		file.open("data.txt");
		std::string str;
		if (file.is_open()) {
			getline(file, str);
			_health = atoi(str.c_str());

			getline(file, str);
			_satiety = atoi(str.c_str());

			getline(file, str);
			_mood = atoi(str.c_str());
		}

		file.close();
	}
	shop = new Shop();
	apart = new Apartments();
	skill = new Skills();
}

int Player::getHealth()
{
	return _health;
}

int Player::getSatiety()
{
	return _satiety;
}

int Player::getMood()
{
	return _mood;
}

int Player::getBottle()
{
	return *_bottle;
}

int Player::getBottlePrice()
{
	return _bottlePrice;
}

void Player::info()
{
	SetColor(Red, Black);
	std::cout << "Health: ";
	SetColor(White, Black);
	std::cout << _health << "\t";

	SetColor(Yellow, Black);
	std::cout << "Satiety: ";
	SetColor(White, Black);
	std::cout << _satiety << "\t";

	SetColor(LightCyan, Black);
	std::cout << "Mood: ";
	SetColor(White, Black);
	std::cout << _mood << "\t";

	SetColor(Brown, Black);
	std::cout << "Bottles: ";
	SetColor(White, Black);
	std::cout << *_bottle << "\t";

	SetColor(Green, Black);
	std::cout << "Money: ";
	SetColor(White, Black);
	std::cout << _money << "\t";

	SetColor(Blue, Black);
	std::cout << "1 bottle: ";
	SetColor(White, Black);
	std::cout << _bottlePrice << "\n";
}

void Player::resetFile()
{
	std::ofstream file;
	file.open("data.txt");
	if (file.is_open()) {
		file << 100 << "\n";
		file << 100 << "\n";
		file << 100 << "\n";
		file << 0 << "\n";
		file << 0 << "\n";
	}
	file.close();
}

void Player::showHSM()
{
	std::cout << "Health: " << _health << "\n";
	std::cout << "Satiety: " << _satiety << "\n";
	std::cout << "Mood: " << _mood << "\n";
	std::cout << "Bottle: " << *_bottle << "\n\n";
}

void Player::collectBottles()
{

	*_bottle += rand() % 6 + 3; //3 9      y-x   +   x
	_health -= rand() % 4 + 3; // 3 7     4+3
	_satiety -= rand() % 3 + 1;//1 4
	_mood -= rand() % 3 + 1;//
	SetBottlePrice();
	
	writeFileData();
}

void Player::SetBottlePrice()
{
	srand(time(NULL));
	_bottlePrice = rand() % 3 + 1; //1 3 
}

void Player::ExchangeBottles()
{
	_money += (*_bottle) * _bottlePrice;
	*_bottle = 0;
	SetBottlePrice();
	writeFileData();
}

int Player::getMoney()
{
	return _money;
}



bool Player::die_()
{
	if (_health <= 0 || _satiety <= 0 || _mood <= 0) {
		return 1;
	}
	else {
		return 0;
	}
}

void Player::writeFileData()
{
	std::ofstream file;
	file.open("data.txt");
	if (file.is_open()) {
		file << _health << "\n";
		file << _satiety << "\n";
		file << _mood << "\n";
		file << *_bottle << "\n";
		file << _money << "\n";
	}
}

void Player::PlusHealth()
{
	srand(time(NULL));
	_health += rand() % 5 + 4; //3 7
	_satiety -= rand() % 3 +1; //1 4
	_mood -= rand() % 1+1; //1 2
	NotMoreThan100();
	showHSM();
	SetBottlePrice();
	writeFileData();
}

void Player::PlusSatiety()
{
	srand(time(NULL));
	_health -= rand() % 3+1;
	_satiety += rand() % 5+4; //1 4
	_mood -= rand() % 3+1; //1 2
	NotMoreThan100();
	showHSM();
	SetBottlePrice();
	writeFileData();
}

void Player::PlusMood()
{
	srand(time(NULL));	
	_health -= rand() % 3+1;
	_satiety -= rand() % 3+1; 
	_mood += rand() % 5+4; 
	NotMoreThan100();
	showHSM();
	SetBottlePrice();
	writeFileData();
}




