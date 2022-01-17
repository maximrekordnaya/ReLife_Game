#include "Shop.h"

Shop::Shop()
{
	std::ifstream file;
	file.open("shop.txt");
	std::string str;
	if (file.is_open()) {
		getline(file, str);
		_CasualWear = atoi(str.c_str());

		getline(file, str);
		_Backpack = atoi(str.c_str());

		getline(file, str);
		_Bicycle = atoi(str.c_str());

		getline(file, str);
		_GoodClothes = atoi(str.c_str());

		getline(file, str);
		_WareHouse1 = atoi(str.c_str());

		getline(file, str);
		_WareHouse2 = atoi(str.c_str());

		getline(file, str);
		_car = atoi(str.c_str());

		getline(file, str);
		_WareHouse3 = atoi(str.c_str());
		file.close();

	}
	else {
		FileShopReset();
	}
	
	

}

void Shop::buyCasualWear()
{	
		_CasualWear = true;
		writeFileShop();	
}

void Shop::buyBackpack()
{	
		_Backpack = true;
		writeFileShop();	
}

void Shop::buyBicycle()
{	
	_Bicycle = true;
	writeFileShop();	
}

void Shop::buyGoodClothes()
{
		_GoodClothes = true;
		writeFileShop();	
}

void Shop::buyWarehouse1()
{	
		_WareHouse1 = true;
		writeFileShop();	
}

void Shop::buyWarehouse2()
{	
		_WareHouse2 = true;
		writeFileShop();	
}

void Shop::buyCar()
{
	_car = true;
	writeFileShop();
}

void Shop::buyWarehouse3()
{	
		_WareHouse3 = true;
		writeFileShop();	
	
}

bool Shop::CasualWear()
{
	if (_CasualWear == true) {
		return true;
	}
	else {
		return false;
	}
}

bool Shop::Backback()
{
	if (_Backpack == true) {
		return true;
	}
	else {
		return false;
	}
}

bool Shop::Bicycle()
{
	if (_Bicycle == true) {
		return true;
	}
	else {
		return false;
	}
}

bool Shop::GoodClothes()
{
	if (_GoodClothes == true) {
		return true;
	}
	else {
		return false;
	}
}

bool Shop::WareHouse1()
{
	if (_WareHouse1 == true) {
		return true;
	}
	else {
		return false;
	}
}

bool Shop::WareHouse2()
{
	if (_WareHouse2 == true) {
		return true;
	}
	else {
		return false;
	}
}

bool Shop::Car()
{
	if (_car == true) {
		return true;
	}
	else {
		return false;
	}
}

bool Shop::WareHouse3()
{
	if (_WareHouse3 == true) {
		return true;
	}
	else {
		return false;
	}
}

void Shop::writeFileShop()
{
	std::ofstream file;
	file.open("shop.txt");
	if (file.is_open()) {
		_CasualWear == true ? file << 1 << "\n" : file << 0 << "\n";
		_Backpack == true ? file << 1 << "\n" : file << 0 << "\n";
		_Bicycle == true ? file << 1 << "\n" : file << 0 << "\n";
		_GoodClothes == true ? file << 1 << "\n" : file << 0 << "\n";
		_WareHouse1 == true ? file << 1 << "\n" : file << 0 << "\n";
		_WareHouse2 == true ? file << 1 << "\n" : file << 0 << "\n";
		_car == true ? file << 1 << "\n" : file << 0 << "\n";
		_WareHouse3 == true ? file << 1 << "\n" : file << 0 << "\n";
	}
	file.close();
}

void Shop::FileShopReset()
{
	std::ofstream file;
	file.open("shop.txt");
	if (file.is_open()) {
		for (int i = 0; i < 8;++i) {
			file << 0 << "\n";
		}
	}
}

Shop::~Shop()
{
	FileShopReset();
}
