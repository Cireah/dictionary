/*
Skapa en struct som heter pair. Skapa en nyckel och en datatyp i structen. Skapa en klass som heter map.
Anv�nd denna klass f�r att spara v�rden i structen. L�ta anv�ndaren l�gga till ett nytt par i structen genom att
anv�nda cin. L�ta anv�ndaren ta bort ett par genom att d�pa om paret till n�got som signalerar att det �r tomt.
L�ta anv�ndaren rensa hela structen genom att d�pa om allt till namnet som signalerar att det �r tomt. 
L�ta anv�ndaren s�ka p� ett specifikt v�rde genom att skriva in en nyckel och vice versa genom att anv�nda foreach

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