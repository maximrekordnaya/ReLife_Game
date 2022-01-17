#pragma once

/*#include"Health.h"
#include"Satiety.h"
#include"Mood.h"*/
#include"Shop.h"

class Player
{
	int _health;
	int _satiety;
	int _mood;
	int* _bottle;
	int _bottlePrice;
	int _money;
	Shop* shop;
	Apartments* apart;
	Skills* skill;
public:
	Player();
	int getHealth();
	int getSatiety();
	int getMood();
	int getBottle();
	int getBottlePrice();
	void info();
	void resetFile();
	void showHSM();
	void collectBottles();
	void SetBottlePrice();
	void ExchangeBottles();
	int getMoney();
	bool die_();
	void writeFileData();
	void PlusHealth();
	void PlusSatiety();
	void PlusMood();
	void NotMoreThan100();
	void ShopBuy();
	void ApartBuy();
	void SkillBuy();
	void workDistributeFlyers();
	void workPlumber();
	void workGlovo();
	void workWaiter();
	void workBusiness1();
	void workBusiness2();
	void workBusiness3();

	bool workDistributeFlyersB();
	bool workPlumberB();
	bool workGlovoB();
	bool workWaiterB();
	bool workBusiness1B();
	bool workBusiness2B();
	bool workBusiness3B();

	void buyMaths();
	void buyPlumbingSkill();
	void buyCyclistSkill();
	void buySecondaryEducation();
	void buyGoodMemory();
	void buyHighterEducation();
	bool MathsB();
	bool PlumbingSkillB();
	bool CyclistSkillB();
	bool SecondaryEducationB();
	bool GoodMemoryB();
	bool HighterEducationB();

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

	void buyHut();
	void buyBasement();
	void buyAttic();
	void buyRoomRent();
	void buyApartment();
	void buyHouse();
	void buyVilla();
	bool Hut();
	bool Basement();
	bool Attic();
	bool RoomRent();
	bool Apartment();
	bool House();
	bool Villa();


	void diningRoom();
	void shawarmaCheap();
	void eatSweet();
	void swing();
	void Cafe();
	void sanatorium();
	void course();
	~Player();
};

