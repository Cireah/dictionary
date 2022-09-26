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

struct MinStruct {
	string key;
	string value;
};

class Map
{
public:
	MinStruct minstruct;
	vector<MinStruct> structs;

	void InputPair()
	{
		string keyinput;
		string valueinput;
		cin >> keyinput;
		cin >> valueinput;
		minstruct.key = keyinput;
		minstruct.value = valueinput;
		structs.push_back(minstruct);
	}

	void SearchKeyPair()
	{
		string searchkeyinput;
		cin >> searchkeyinput;
		if (minstruct.key == searchkeyinput)
		{
			cout << minstruct.key;
			cout << minstruct.value;
		}
	}
};

int main() 
{
	Map map;
	map.InputPair();
	map.SearchKeyPair();
}