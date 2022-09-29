/*
Skapa en struct som heter pair. Skapa en nyckel och en datatyp i structen. Skapa en klass som heter map.
Använd denna klass för att spara värden i structen. Låta användaren lägga till ett nytt par i structen genom att
använda cin. Låta användaren ta bort ett par genom att döpa om paret till något som signalerar att det är tomt.
Låta användaren rensa hela structen genom att döpa om allt till namnet som signalerar att det är tomt. 
Låta användaren söka på ett specifikt värde genom att skriva in en nyckel och vice versa genom att använda foreach

im waaay too stupid for this
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Structing {
	string key;
	string value;
};

class Map
{
public:
	Structing structy;
	vector<Structing> vect;

	void InputPair()
	{
		cout << "input\n";
		string keyinput;
		string valueinput;
		cin >> keyinput;
		cin >> valueinput;
		structy.key = keyinput;
		structy.value = valueinput;
		vect.push_back(structy);
	}

	void SearchKey()
	{
		cout << "searchkey\n";
		string searchkeyinput;
		cin >> searchkeyinput;
		if (structy.key == searchkeyinput)
		{
			cout << structy.key << "\n" << structy.value;
		}
	}
	void RemovePair()
	{
		cout << "removepair\n";
		string removepairinput;
		cin >> removepairinput;
		if (structy.key == removepairinput || structy.value == removepairinput)
		{
			structy.key = "null";
			structy.value = "null";
		}
	}
	void ClearStruct()
	{
		cout << "clearstruct\n";
		structy = {};
	}
	void SearchValue()
	{
		cout << "searchvalue\n";
		string searchvalueinput;
		cin >> searchvalueinput;
		if (structy.value == searchvalueinput)
		{
			cout << structy.key << "\n" << structy.value;
		}
	}
};

int main() 
{
	Map map;
	map.InputPair();
	map.RemovePair();
	map.SearchKey();
	map.SearchValue();
	map.ClearStruct();
}