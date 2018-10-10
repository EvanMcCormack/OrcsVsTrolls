//Author: Evan McCormack

#include<iostream>
#include"orc.h"
#include"Troll.h"
#include"Character.h"
#include<string>

//Variables used in multiple functions
const int PLAYER_MILITIA = 5;
const int ENEMY_MILITIA = 5;
int currentTroops = 0;
std::string weapon = "";
Character * m_playerUnits[PLAYER_MILITIA];
Character * m_enemyUnits[ENEMY_MILITIA];
const std::string DIVIDER = "************************************************************************************************************************";

//Functions used
int playerChoice();
void militiaSetup(int playerChar);
int playerOption();
void barracks();
//Character player;

int main()
{
	int playerChar = playerChoice();
	int option = 0;
	militiaSetup(playerChar);
	option = playerOption();
	if (option == 1)
	{
		orc player;
	}
	else if (option == 2)
	{
		troll player;
	}

	barracks();

	system("Pause");
}

int playerChoice()
{
	std::string choice = "";
	std::cout << "Which race do you want to be: Orc or Troll" << std::endl;
	std::cin >> choice;

	if (choice == "orc" || choice == "Orc" || choice == "ORC")
	{
		weapon = "Axe";
		return 0;
	}
	else if (choice == "troll" || choice == "Troll" || choice == "TROLL")
	{
		weapon = "Club";
		return 1;
	}
}

void militiaSetup(int playerChar)
{
	//Assigns orc to the players army if they chose orc
	if (playerChar == 0)
	{
		for (int i = 0; i < PLAYER_MILITIA - 3; i++)
		{
			m_playerUnits[i] = new orc;
			currentTroops++;
		}

		for (int i = 0; i < ENEMY_MILITIA - 3; i++)
		{
			m_enemyUnits[i] = new troll;
		}
	}
	else if (playerChar == 1) // Assigns trolls to the players army if they picked troll
	{
		for (int i = 0; i < PLAYER_MILITIA - 3; i++)
		{
			m_playerUnits[i] = new troll;
			currentTroops++;
		}

		for (int i = 0; i < ENEMY_MILITIA - 3; i++)
		{
			m_enemyUnits[i] = new orc;
		}
	}
}

int playerOption()
{
	int answer;
	std::cout << DIVIDER << std::endl;
	std::cout << "Troops Owned: " << currentTroops << std::endl;
	std::cout << "What do you want to do?" << std::endl;
	std::cout << "1) Barracks for more troops" << std::endl;
	std::cout << "2) Blacksmith for " << weapon << std::endl;
	std::cout << DIVIDER << std::endl;
	std::cin >> answer;
	return answer;
}

void barracks()
{
	int buying = 0;
	std::cout << DIVIDER << std::endl;
	std::cout << "It costs 25 gold for every troop you want" << std::endl;
	std::cout << "So how many do you want?" << std::endl;
	std::cin >> buying;
	buying = buying * 25;
}
