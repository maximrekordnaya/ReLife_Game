#include <SFML/Graphics.hpp>
#include"Player.h"
#include<string>
#include<iostream>

using namespace sf;
//void start();
//void setHealthText(Text text, Player *s);
int main()
{
	int menu = 0;
	int Must = 0;
	int collectBottle = 0;
	int pressWork = 0;
	int pressSkill = 2;
	int pressPlay = 0;
	int pressShop = 0;
	int pressApart = 0;
	int pressMore = 0;
	int die = 0;
	Player* s;
	s = new Player();
	sf::RenderWindow window(sf::VideoMode(850, 850), "SFML works!");
	Image background;
	background.loadFromFile("image/back.jpg");	
	Image background2;
	background2.loadFromFile("image/mainBack.jpg");
	Texture BackgroundTexture;
	BackgroundTexture.loadFromImage(background);
	Sprite BackgroundSprite;
	BackgroundSprite.setTexture(BackgroundTexture);
	BackgroundSprite.setPosition(0, 0);

	Image playBotton;
	playBotton.loadFromFile("image/playBotton.png");

	Image playBotton2;
	playBotton2.loadFromFile("image/playBotton2.png");

	Texture playBottonTexture;
	playBottonTexture.loadFromImage(playBotton);

	Texture playBottonTexture2;
	playBottonTexture2.loadFromImage(playBotton2);

	Sprite playBottonSprite;
	playBottonSprite.setTexture(playBottonTexture);
	playBottonSprite.setPosition(309,639);

	//меню
	Image mainInfo;
	mainInfo.loadFromFile("image/mainInfo.png");
	Image mainInfoExchangeBottle;
	mainInfoExchangeBottle.loadFromFile("image/mainInfoExchangeBottle.png");
	Image mainInfoWork;
	mainInfoWork.loadFromFile("image/mainInfoWork.png");
	Image mainInfoFreeHealth;
	mainInfoFreeHealth.loadFromFile("image/mainInfoFreeHealth.png");
	Image mainInfoFreeSatiety;
	mainInfoFreeSatiety.loadFromFile("image/mainInfoFreeSatiety.png");
	Image mainInfoFreeMood;
	mainInfoFreeMood.loadFromFile("image/mainInfoFreeMood.png");
	Image mainInfoMORE;
	mainInfoMORE.loadFromFile("image/mainInfoMORE.png");
	Image mainInfoBuySkill;
	mainInfoBuySkill.loadFromFile("image/mainInfoBuySkills.png");
	Image mainInfoShop;
	mainInfoShop.loadFromFile("image/mainInfoShop.png");
	Image mainInfoBuyApart;
	mainInfoBuyApart.loadFromFile("image/mainInfoBuyApart.png");
	Texture mainInfoTexture;
	mainInfoTexture.loadFromImage(mainInfo);
	Sprite mainInfoSprite;
	mainInfoSprite.setTexture(mainInfoTexture);
	//текст запасов
	Font font;
	font.loadFromFile("Crosterian.ttf");

	Text _Text("", font, 35);
	Text TextDynamic("", font, 35);

	//WORK
	Image workMenu;
	workMenu.loadFromFile("image/workMenu.png");
	Image workExit;
	workExit.loadFromFile("image/workMenuExit.png");
	Image workExchangeBottle;
	workExchangeBottle.loadFromFile("image/workMenuExchangeBottle.png");

	//SKILL
	Image skillExit;
	skillExit.loadFromFile("image/skillMenuExit.png");
	Image skillMenu;
	skillMenu.loadFromFile("image/skillMenu.png");


	//shop
	Image menuShop;
	menuShop.loadFromFile("image/menuShop.png");
	Image menuShopExit;
	menuShopExit.loadFromFile("image/menuShopExit.png");

	//apart 
	Image menuApart;
	menuApart.loadFromFile("image/menuApart.png");
	Image menuApartExit;
	menuApartExit.loadFromFile("image/menuApartExit.png");

	//more
	Image menuMore;
	menuMore.loadFromFile("image/menuMore.png");
	Image menuMoreExit;
	menuMoreExit.loadFromFile("image/menuMoreExit.png");
	Image menuMoreBottle;
	menuMoreBottle.loadFromFile("image/menuMoreBottle.png");

	//die
	Image died;
	died.loadFromFile("image/die.jpg");
	Image died2;
	died2.loadFromFile("image/die2.jpg");

	while (window.isOpen())
	{
		sf::Event event;
		
			while (window.pollEvent(event))
			{
				
				//start();
				if (event.type == sf::Event::Closed) {
					window.close();
				}
				if (event.type == sf::Event::MouseMoved) {
					std::cout << "y = " << event.mouseMove.y << "\t x = " << event.mouseMove.x << "\n";
				}
				if (pressPlay == 0) {
					if (IntRect(313, 651, 237, 106).contains(Mouse::getPosition(window))) {

						playBottonSprite.setTexture(playBottonTexture2);
						if (Mouse::isButtonPressed(Mouse::Left)) {
							pressPlay = 1;
							BackgroundTexture.loadFromImage(background2);

						}
					}
					else {
						playBottonSprite.setTexture(playBottonTexture);
					}
				}
				else {
					//Change bottle				
					if (menu == 0) {
						if (IntRect(16, 452, 193, 163).contains(Mouse::getPosition(window))) {

							mainInfoTexture.loadFromImage(mainInfoWork);
							if (Mouse::isButtonPressed(Mouse::Left)) {
								menu = 1;
								pressWork = 1;
							}
						}//FREE HEALTH
						else if (IntRect(27, 754, 195, 86).contains(Mouse::getPosition(window))) {

							mainInfoTexture.loadFromImage(mainInfoFreeHealth);
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getHealth() < 100) {
									s->PlusHealth();
								}
							}
						}//FREE SATIETY
						else if (IntRect(232, 754, 195, 86).contains(Mouse::getPosition(window))) {

							mainInfoTexture.loadFromImage(mainInfoFreeSatiety);
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getSatiety() < 100) {
									s->PlusSatiety();
								}
							}
						}//FREE MOOD
						else if (IntRect(443, 754, 195, 86).contains(Mouse::getPosition(window))) {

							mainInfoTexture.loadFromImage(mainInfoFreeMood);
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMood() < 100) {
									s->PlusMood();
								}
							}
						}//MORE
						else if (IntRect(646, 754, 195, 86).contains(Mouse::getPosition(window))) {

							mainInfoTexture.loadFromImage(mainInfoMORE);
							if (Mouse::isButtonPressed(Mouse::Left)) {
								pressMore = 1;
								menu = 1;
							}
						}//SKILL
						else if (IntRect(16, 254, 195, 178).contains(Mouse::getPosition(window))) {

							mainInfoTexture.loadFromImage(mainInfoBuySkill);
							if (Mouse::isButtonPressed(Mouse::Left)) {
								pressSkill = 3;
								menu = 1;
							}
						}//SHOP
						else if (IntRect(647, 255, 193, 176).contains(Mouse::getPosition(window))) {

							mainInfoTexture.loadFromImage(mainInfoShop);
							if (Mouse::isButtonPressed(Mouse::Left)) {
								pressShop = 1;
								menu = 1;
							}
						}
						else if (IntRect(647, 455, 192, 161).contains(Mouse::getPosition(window))) {

							mainInfoTexture.loadFromImage(mainInfoBuyApart);
							if (Mouse::isButtonPressed(Mouse::Left)) {
								pressApart = 1;
								menu = 1;
							}
						}
						else {
							mainInfoTexture.loadFromImage(mainInfo);
						}
						if (IntRect(647, 123, 192, 84).contains(Mouse::getPosition(window))) {

							mainInfoTexture.loadFromImage(mainInfoExchangeBottle);
							if (Mouse::isButtonPressed(Mouse::Left)) {
								s->ExchangeBottles();

							}
						}
					}




					if (pressWork == 1) {//когда в окне работы
						if (IntRect(757, 250, 68, 68).contains(Mouse::getPosition(window))) {

							mainInfoTexture.loadFromImage(workExit);
							if (Mouse::isButtonPressed(Mouse::Left)) {
								pressWork = 0;
								menu = 0;
							}
						}
						else if (IntRect(570, 261, 71, 56).contains(Mouse::getPosition(window))) {

							//mainInfoTexture.loadFromImage(workBottle);
							if (Mouse::isButtonPressed(Mouse::Left)) {
								collectBottle = 1;
								s->collectBottles();
								//mainInfoTexture.loadFromImage(workBottle);
							}
						}
						else if (IntRect(647, 123, 192, 84).contains(Mouse::getPosition(window))) {

							mainInfoTexture.loadFromImage(workExchangeBottle);
							if (Mouse::isButtonPressed(Mouse::Left)) {
								s->ExchangeBottles();

							}
						}
						else if (IntRect(357, 336, 71, 56).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->workDistributeFlyersB()) {
									s->workDistributeFlyers();
								}
								else {
									mainInfoTexture.loadFromFile("image/workFlyersMust.png");
									Must = 1;
								}

							}
						}
						else if (IntRect(352, 418, 71, 56).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->workPlumberB()) {
									s->workPlumber();
								}
								else {
									mainInfoTexture.loadFromFile("image/workPlumberMust.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(482, 495, 71, 56).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->workGlovoB()) {
									s->workGlovo();
								}
								else {
									mainInfoTexture.loadFromFile("image/workGlovoMust.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(355, 565, 71, 56).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->workWaiterB()) {
									s->workWaiter();
								}
								else {
									mainInfoTexture.loadFromFile("image/workWaiterMust.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(367, 639, 71, 56).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->workBusiness1B()) {
									s->workBusiness1();
								}
								else {
									mainInfoTexture.loadFromFile("image/workB1Must.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(367, 708, 71, 56).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->workBusiness2B()) {
									s->workBusiness2();
								}
								else {
									mainInfoTexture.loadFromFile("image/workB2Must.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(367, 777, 71, 56).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->workBusiness3B()) {
									s->workBusiness3();
								}
								else {
									mainInfoTexture.loadFromFile("image/workB3Must.png");
									Must = 1;
								}
							}
						}
						else {
							mainInfoTexture.loadFromImage(workMenu);
						}
					}
					///////










					//— »Ћџ////////////
					if (pressSkill == 3) {
						if (IntRect(757, 250, 68, 68).contains(Mouse::getPosition(window))) {
							mainInfoTexture.loadFromImage(skillExit);
							if (Mouse::isButtonPressed(Mouse::Left)) {
								pressSkill = 2;
								menu = 0;
							}
						}
						else if (IntRect(386, 257, 71, 56).contains(Mouse::getPosition(window))) {

							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 500 && s->MathsB()) {
									s->buyMaths();
									s->writeFileData();
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(647, 123, 192, 84).contains(Mouse::getPosition(window))) {
							mainInfoTexture.loadFromFile("image/skillExchangeBottle.png");
							if (Mouse::isButtonPressed(Mouse::Left)) {
								s->ExchangeBottles();
								s->writeFileData();

							}
						}
						else if (IntRect(530, 341, 71, 56).contains(Mouse::getPosition(window))) {

							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 1700 && s->PlumbingSkillB()) {
									s->buyPlumbingSkill();
									s->writeFileData();
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(577, 410, 71, 56).contains(Mouse::getPosition(window))) {

							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 2000 && s->CyclistSkillB()) {
									s->buyCyclistSkill();
									s->writeFileData();
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(636, 491, 71, 56).contains(Mouse::getPosition(window))) {

							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 2500 && s->SecondaryEducationB()) {
									s->buySecondaryEducation();
									s->writeFileData();
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(518, 574, 71, 56).contains(Mouse::getPosition(window))) {

							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 1000 && s->GoodMemoryB()) {
									s->buyGoodMemory();
									s->writeFileData();
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(624, 645, 71, 56).contains(Mouse::getPosition(window))) {

							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 5000 && s->HighterEducationB()) {
									s->buyHighterEducation();
									s->writeFileData();
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney.png");
									Must = 1;
								}
							}
						}
						else {
							mainInfoTexture.loadFromImage(skillMenu);
						}
					}


					//shop
					if (pressShop == 1) {
						if (IntRect(757, 250, 68, 68).contains(Mouse::getPosition(window))) {
							mainInfoTexture.loadFromImage(menuShopExit);
							if (Mouse::isButtonPressed(Mouse::Left)) {
								pressShop = 0;
								menu = 0;
							}
						}
						else if (IntRect(647, 123, 192, 84).contains(Mouse::getPosition(window))) {
							mainInfoTexture.loadFromFile("image/menuShopExchangeBottle.png");
							if (Mouse::isButtonPressed(Mouse::Left)) {
								s->ExchangeBottles();

							}
						}
						else if (IntRect(544, 264, 71, 56).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 500 && s->CasualWear()) {
									s->buyCasualWear();
									s->writeFileData();
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(244, 337, 71, 56).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 1000 && s->Backback()) {
									s->buyBackpack();
									s->writeFileData();
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(336, 413, 71, 56).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 1500 && s->Bicycle()) {
									s->buyBicycle();
									s->writeFileData();
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(521, 493, 71, 56).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 1700 && s->GoodClothes()) {
									s->buyGoodClothes();
									s->writeFileData();
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(475, 571, 71, 56).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 3000 && s->WareHouse1()) {
									s->buyWarehouse1();
									s->writeFileData();
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(469, 643, 71, 56).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 7000 && s->WareHouse2()) {
									s->buyWarehouse2();
									s->writeFileData();
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(285, 710, 71, 56).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 15000 && s->Car()) {
									s->buyCar();
									s->writeFileData();
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(465, 779, 71, 56).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 100000 && s->WareHouse3()) {
									s->buyWarehouse3();
									s->writeFileData();
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney.png");
									Must = 1;
								}
							}
						}
						else {
							mainInfoTexture.loadFromImage(menuShop);
						}
					}

					//apart shop
					if (pressApart == 1) {
						if (IntRect(757, 250, 68, 68).contains(Mouse::getPosition(window))) {
							mainInfoTexture.loadFromImage(menuApartExit);
							if (Mouse::isButtonPressed(Mouse::Left)) {
								pressApart = 0;
								menu = 0;
							}
						}
						else if (IntRect(647, 123, 192, 84).contains(Mouse::getPosition(window))) {
							mainInfoTexture.loadFromFile("image/menuApartBottle.png");
							if (Mouse::isButtonPressed(Mouse::Left)) {
								s->ExchangeBottles();

							}
						}
						else if (IntRect(224, 260, 71, 56).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 750 && s->Hut()) {
									s->buyHut();
									s->writeFileData();
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(249, 335, 71, 56).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 1500 && s->Basement()) {
									s->buyBasement();
									s->writeFileData();
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(248, 410, 71, 56).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 1500 && s->Attic()) {
									s->buyAttic();
									s->writeFileData();
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(515, 486, 71, 56).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 2000 && s->RoomRent()) {
									s->buyRoomRent();
									s->writeFileData();
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(323, 565, 71, 56).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 3000 && s->Apartment()) {
									s->buyApartment();
									s->writeFileData();
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(166, 644, 71, 56).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 15000 && s->House()) {
									s->buyHouse();
									s->writeFileData();
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(217, 714, 71, 56).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 65000 && s->Villa()) {
									s->buyVilla();
									s->writeFileData();
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney.png");
									Must = 1;
								}
							}
						}
						else {
							mainInfoTexture.loadFromImage(menuApart);
						}
					}




					if (pressMore == 1) {
						if (IntRect(757, 250, 68, 68).contains(Mouse::getPosition(window))) {
							mainInfoTexture.loadFromImage(menuMoreExit);
							if (Mouse::isButtonPressed(Mouse::Left)) {
								pressMore = 0;
								menu = 0;
							}
						}
						else if (IntRect(647, 123, 192, 84).contains(Mouse::getPosition(window))) {
							mainInfoTexture.loadFromImage(menuMoreBottle);
							if (Mouse::isButtonPressed(Mouse::Left)) {
								s->ExchangeBottles();

							}
						}
						else if (IntRect(259, 260, 83, 59).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 100) {
									s->diningRoom();
									
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney2.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(527, 330, 83, 59).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 140) {
									s->shawarmaCheap();
									
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney2.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(345, 403, 83, 59).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 100) {
									s->swing();
									
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney2.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(590, 476, 83, 59).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 200) {
									s->eatSweet();
									
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney2.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(195, 552, 83, 59).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 500) {
									s->Cafe();
									
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney2.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(369, 629, 83, 59).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 1000) {
									s->sanatorium();
									
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney2.png");
									Must = 1;
								}
							}
						}
						else if (IntRect(424, 711, 83, 59).contains(Mouse::getPosition(window))) {
							if (Mouse::isButtonPressed(Mouse::Left)) {
								if (s->getMoney() >= 4000) {
									s->course();
									
								}
								else {
									mainInfoTexture.loadFromFile("image/noMoney2.png");
									Must = 1;
								}
							}
						}
						else {
							mainInfoTexture.loadFromImage(menuMore);
						}
					}



					if (die==1) {
						menu = 1;
						if (IntRect(254, 589, 310, 68).contains(Mouse::getPosition(window))) {
							mainInfoTexture.loadFromImage(died2);
							if (Mouse::isButtonPressed(Mouse::Left)) {
								delete s;
								s = new Player();
								die = 0;
								 pressWork = 0;
								 pressSkill = 2;
								 pressPlay = 1;
								 menu = 0;
								 pressShop = 0;
								 pressApart = 0;
								 pressMore = 0;
								
							}
						}
						else {
							mainInfoTexture.loadFromImage(died);
						}
					}











				}
			}
		
		
		
		window.clear();
		window.draw(BackgroundSprite);
		if (pressPlay==0) {
			window.draw(playBottonSprite);
		}
		else {
			if (pressWork == 1) {
				//mainInfoTexture.loadFromImage(workMenu);				
			}
			
			window.draw(mainInfoSprite);
			//setHealthText(healthText, s);
			if (die==0) {
				_Text.setString(std::to_string(s->getHealth()));
				_Text.setPosition(94, 39);
				window.draw(_Text);

				_Text.setString(std::to_string(s->getSatiety()));
				_Text.setPosition(319, 39);
				window.draw(_Text);

				_Text.setString(std::to_string(s->getMood()));
				_Text.setPosition(528, 39);
				window.draw(_Text);

				TextDynamic.setString(std::to_string(s->getMoney()));
				if (s->getMoney() > 1000) {
					TextDynamic.setCharacterSize(20);
					TextDynamic.setPosition(718, 51);
				}
				else {
					TextDynamic.setPosition(718, 39);
				}
				window.draw(TextDynamic);

				_Text.setString(std::to_string(s->getBottle()));
				_Text.setPosition(80, 153);
				window.draw(_Text);

				_Text.setString(std::to_string(s->getBottlePrice()));
				_Text.setPosition(742, 153);
				window.draw(_Text);
			}
		}
		
		window.display();
		if (Must == 1) {
			Sleep(3000);
			Must = 0;
		}
		if (s->die_()) {
			die = 1;
			s->resetFile();
			
		}
		
	}

	return 0;
}



/*

void main()
{
	while (1) {

		Player* s = new Player();
		int menu = 1;

		do {
			s->info();
			std::cout << "Work(1)\n";
			std::cout << "Exchange bottles(2)\n";
			std::cout << "Replenish stock(3)\n";
			std::cout << "Store(4)\n";
			std::cout << "Housing(5)\n";
			std::cout << "Skills(6)\n";
			try {
				std::cout << "menu: ";
				std::cin >> menu;
				throw menu;
			}
			catch (int menu) {
				int choice = 0;
				switch (menu)
				{

				case 1:

					do {
						system("cls");
						s->info();
						std::cout << "Collect bottle(1)\n";
						std::cout << "Distribute Flyers(2)\n";
						std::cout << "Plumber(3)\n";
						std::cout << "Glovo(4)\n";
						std::cout << "Waiter(5)\n";
						std::cout << "Business 1(6)\n";
						std::cout << "Business 2(7)\n";
						std::cout << "Business 3(8)\n";
						std::cout << "Exit(0)\n\n";
						std::cout << "Enter number: ";
						std::cin >> choice;
						switch (choice)
						{
						case 1:
							system("cls");
							s->collectBottles();
							break;
						case 2:
							system("cls");
							s->workDistributeFlyers();
							break;
						case 3:
							system("cls");
							s->workPlumber();
							break;
						case 4:
							system("cls");
							s->workGlovo();
							break;
						case 5:
							system("cls");
							s->workWaiter();
							break;
						case 6:
							system("cls");
							s->workBusiness1();
							break;
						case 7:
							system("cls");
							s->workBusiness2();
							break;
						case 8:
							system("cls");
							s->workBusiness3();
							break;
						}
						if (choice == 0) {
							system("cls");
							//s->info();
							break;
						}
						if (s->die_() == 1) {
							break;
						}

					} while (choice != 0);
					break;
				case 2:

					s->ExchangeBottles();
					system("cls");
					//s->info();
					break;
				case 3:
					do {
						system("cls");
						s->info();
						std::cout << "Dining room 100$(1)\n";
						std::cout << "Shawarma Cheap 140$(2)\n";
						std::cout << "Eat sweet 200$(3)\n";
						std::cout << "Swing 300$(4)\n";
						std::cout << "Cafe 500$(5)\n";
						std::cout << "Sanatorium 1000$(6)\n";
						std::cout << "Course 4000$(7)\n";

						std::cout << "Plus health FREE(8)\n";
						std::cout << "Plus satiety FREE(9)\n";
						std::cout << "Plus mood FREE(10)\n";
						std::cout << "Exit(0)\n\n";
						std::cout << "Enter number: ";
						std::cin >> choice;
						switch (choice)
						{
						case 1:
							system("cls");
							s->diningRoom();
							break;
						case 2:
							system("cls");
							s->shawarmaCheap();
							break;
						case 3:
							system("cls");
							s->eatSweet();
							break;
						case 4:
							system("cls");
							s->swing();
							break;
						case 5:
							system("cls");
							s->Cafe();
							break;
						case 6:
							system("cls");
							s->sanatorium();
							break;
						case 7:
							system("cls");
							s->course();
							break;
						case 8:
							system("cls");
							s->PlusHealth();
							break;
						case 9:
							system("cls");
							s->PlusSatiety();
							break;
						case 10:
							system("cls");
							s->PlusMood();
							break;
						}
						if (choice == 0) {
							system("cls");
							//s->info();
							break;
						}
						if (s->die_() == 1) {
							break;
						}

					} while (choice != 0);
					break;
				case 4:
					system("cls");
					s->info();
					s->ShopBuy();
					break;
				case 5:
					system("cls");
					s->info();
					s->ApartBuy();
					break;
				case 6:
					system("cls");
					s->info();
					s->SkillBuy();
					break;
				}
			}
		} while (s->die_() == 0);
		int newPers = 0;
		std::cout << "You Die\n";
		std::cout << "Create new person(1)";
		try {
			std::cin >> newPers;
			throw newPers;
		}
		catch (int ex) {
			if (ex == 0) {
				s->resetFile();
				delete s;
				break;
			}

		}
		system("cls");
		s->resetFile();
		delete s;
	}
}

*/
