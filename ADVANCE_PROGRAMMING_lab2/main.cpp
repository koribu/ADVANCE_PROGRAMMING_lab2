#include <vector>

#include "Character.h"
#include "Weapon.h"

int main()
{
	int choose;
	string n, x;
	int h, a,del;
	vector<Character*> chars;
	cout << "Greetings Dear Player! Welcome to Ultimate Role Playing Game!!!\n\n" << "What do you want to do?\n\n\n";
	do
	{
		cout << "1. Create new character\n\n2. View all characters\n\n3.Delete a character\n\n4. Exit\n\nPlease enter your choose!\n\n";
		cin >> choose;
		switch (choose)
		{
		case 1:
		
			cout << "1. Orc     2. Undead     3. Elf" << endl << endl;
			cin >> a;
			switch (a)
			{
			case 1:
				cout << "What is the name of your Orc: " << endl;
				cin >> n;
				cout << "How much health does " << n << " have:" << endl;
				cin >> h;
				cout << "What is that grawing sound " << n << " does:" << endl;
				cin >> x;
				chars.push_back(new Orc(n, h, x));
				break;
			case 2:
				cout << "What is the name of your Undead: " << endl;
				cin >> n;
				cout << "How much health does " << n << " have:" << endl;
				cin >> h;
				cout << "What is that moaring sound: " << n << " does:" << endl;
				cin >> x;
				chars.push_back(new Undead(n, h, x));
				break;

			case 3:
				cout << "What is the name of your Undead: " << endl;
				cin >> n;
				cout << "How much health does " << n << " have:" << endl;
				cin >> h;
				cout << "How does " << n << " solute:" << endl;
				cin >> x;
				chars.push_back(new Elf(n, h, x));
				break;
			}

			break;
		case 2:
			for(int i = 0; i<chars.size(); i++)
			{
				cout << i+1<<"- ";
				chars[i]->DisplayInfo();
			}

			break;
		case 3:
			
			cout << "Which one you want to eliminate!" << endl << endl;
			for (int i = 0; i < chars.size(); i++)
			{
				cout << i + 1 << "- ";
				chars[i]->DisplayInfo();
			}
			cin >> del;
			chars.erase(chars.begin() + del);
			break;
		}
	}
	while (choose != 4);
	
	
}