#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<string> myList;
	string going = "";
	vector<string>::const_iterator iter;
	cout << "What do u want?\n";

	while (going != "4")
	{
		cout << "\nShow games - 1\n";
		cout << "Add new game - 2\n";
		cout << "Remove game - 3\n";
		cout << "Quit - 4\n";
		cout << "Enter: ";
		cin >> going;
		cout << endl;;

		if (going == "1")
		{	
			if (myList.empty())
			{
				cout << "\nYour list is empty\n\n";
			}
			else
			{
				for (iter = myList.begin(); iter != myList.end(); ++iter) {
					cout << *iter << endl;
				}
			}
			continue;
		}
		else if (going == "2")
		{
			string add;
			cout << "Name game: ";
			cin >> add;
			iter = find(myList.begin(), myList.end(), add);
			if (iter != myList.end())
			{
				cout << "You added it game\n";
				cout << "Try add another game\n";
			}
			else
			{
				myList.push_back(add);
				cout << "You added: " << add << " \n";
			}
			continue;
		}		
		else if (going == "3")
		{
			string add;
			cout << "Name game: ";
			cin >> add;
			iter = find(myList.begin(), myList.end(), add);
			if (iter != myList.end())
			{
				myList.erase(iter);
			}
			else
			{
				cout << add << " is missing\n";
			}
			continue;
		}
		else if (going == "4")
		{

		}
		else
		{
			cout << "Wrong chose\n";
			continue;
		}
	}

	cout << "Thank's you\n";
	return 0;
}