#pragma once
#include"Skills.h"
class Apartments
{
	bool _hut;
	bool _basement;
	bool _attic;
	bool _roomRent;
	bool _apartment;
	bool _house;
	bool _villa;
public:
	Apartments();
	void WriteFileApart();
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
	void FileApartReset();
	~Apartments();
};

