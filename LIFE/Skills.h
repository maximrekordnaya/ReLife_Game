#pragma once
#include<iostream>
#include<Windows.h>
#include<fstream>
#include<string>
#include<time.h>
#include<stdlib.h>


class Skills
{
	bool _maths;
	bool _plumbingSkills;
	bool _cyclistSkill;
	bool _secondaryEducation;
	bool _goodMemory;
	bool _higherEducation;
public:
	Skills();
	void WriteFileSkill();
	void buyMaths();
	void buyPlumbingSkill();
	void buyCyclistSkill();
	void buySecondaryEducation();
	void buyGoodMemory();
	void buyHighterEducation();
	bool Maths();
	bool PlumbingSkill();
	bool CyclistSkill();
	bool SecondaryEducation();
	bool GoodMemory();
	bool HighterEducation();
	void FileSkillsReset();
	~Skills();
};

