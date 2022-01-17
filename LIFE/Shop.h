#pragma once
#include"Apartments.h"
class Shop
{
	bool _CasualWear;
	bool _Backpack;
	bool _Bicycle;
	bool _GoodClothes;
	bool _WareHouse1;
	bool _WareHouse2;
	bool _car;
	bool _WareHouse3;
public:
	Shop();
	void buyCasualWear();
	void buyBackpack();
	void buyBicycle();
	void buyGoodClothes();
	void buyWarehouse1();
	void buyWarehouse2();
	void buyCar();
	void buyWarehouse3();
	bool CasualWear();
	bool Backback();
	bool Bicycle();
	bool GoodClothes();
	bool WareHouse1();
	bool WareHouse2();
	bool Car();
	bool WareHouse3();
	void writeFileShop();
	void FileShopReset();
	~Shop();
};

