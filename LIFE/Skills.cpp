#include "Skills.h"

Skills::Skills()
{
	int s;
	std::ifstream file;
	file.open("skill.txt");
	std::string str;
	if (file.is_open()) {
		getline(file, str);
		if (s = atoi(str.c_str())) {
			_maths = s;
		}
		getline(file, str);
		_plumbingSkills = atoi(str.c_str());

		getline(file, str);
		_cyclistSkill = atoi(str.c_str());

		getline(file, str);
		_secondaryEducation = atoi(str.c_str());

		getline(file, str);
		_goodMemory = atoi(str.c_str());

		getline(file, str);
		_higherEducation = atoi(str.c_str());
		file.close();
	}
	else {
		FileSkillsReset();
	}
	
}
void Skills::WriteFileSkill()
{
	std::ofstream file;
	file.open("skill.txt");
	if (file.is_open()) {
		_maths == true ? file << 1 << "\n" : file << 0 << "\n";
		_plumbingSkills == true ? file << 1 << "\n" : file << 0 << "\n";
		_cyclistSkill == true ? file << 1 << "\n" : file << 0 << "\n";
		_secondaryEducation == true ? file << 1 << "\n" : file << 0 << "\n";
		_goodMemory == true ? file << 1 << "\n" : file << 0 << "\n";
		_higherEducation == true ? file << 1 << "\n" : file << 0 << "\n";

	}
	file.close();
}
void Skills::buyMaths()
{
	_maths = true;
	WriteFileSkill();
}
void Skills::buyPlumbingSkill()
{
	_plumbingSkills = true;
	WriteFileSkill();
}
void Skills::buyCyclistSkill()
{
	_cyclistSkill = true;
	WriteFileSkill();
}
void Skills::buySecondaryEducation()
{
	_secondaryEducation = true;
	WriteFileSkill();
}
void Skills::buyGoodMemory()
{
	_goodMemory = true;
	WriteFileSkill();
}
void Skills::buyHighterEducation()
{
	_higherEducation = true;
	WriteFileSkill();
}
bool Skills::Maths()
{
	if (_maths == true) {
		return true;
	}
	else {
		return false;
	}
}
bool Skills::PlumbingSkill()
{
	if (_plumbingSkills == true) {
		return true;
	}
	else {
		return false;
	}
}
bool Skills::CyclistSkill()
{
	if (_cyclistSkill == true) {
		return true;
	}
	else {
		return false;
	}
}
bool Skills::SecondaryEducation()
{
	if (_secondaryEducation == true) {
		return true;
	}
	else {
		return false;
	}
}
bool Skills::GoodMemory()
{
	if (_goodMemory == true) {
		return true;
	}
	else {
		return false;
	}
}
bool Skills::HighterEducation()
{
	if (_higherEducation == true) {
		return true;
	}
	else {
		return false;
	}
}
/*bool _maths;
	bool _plumbingSkills;
	bool _cyclistSkill;
	bool _secondaryEducation;
	bool _goodMemory;
	bool _higherEducation;*/

void Skills::FileSkillsReset()
{
	std::ofstream file;
	file.open("skill.txt");
	if (file.is_open()) {
		for (int i = 0; i < 6; ++i) {
			file << 0 << "\n";
		}
	}
}

Skills::~Skills()
{
	FileSkillsReset();
}
