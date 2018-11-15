#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 //Do some stuff with L1, L2, ...
 // ...

int menuChoice = 0;

while (menuChoice != 6){

int pos = 0, element = 0;

cout << endl << "Select which number you would like:" << endl << endl;
  cout << "\t1. Add Element" << endl;
  cout << "\t2. Remove Element" << endl;
  cout << "\t3. Clear Elements" << endl;
  cout << "\t4. Display List Size & Contents" << endl;
  cout << "\t5. Display Element at a specified position" << endl;
  cout << endl << "Press #6 key to Exit" << endl;
  cout << endl << "I would like to choose: #";
  cin >> menuChoice;
    
  switch (menuChoice)
  {
    case 1:
      cout <<"++++++++++++++++++++" << endl;
      cout << endl << "You have selected #" << menuChoice << endl;
      cout <<"++++++++++++++++++++" << endl;
      cout << "What element would you like to add?" << endl;
      	cin>> element;
      cout << endl << "At what position would you like to add element" << endl;
		if (L1.size() == 0){
			cout << "no elements are in the list currently, so starting at position 1 will be a good choice" << endl;
			
			}
		cin >> pos;
		L1.insert(element, pos);
		
      break;
    case 2:
      cout <<"++++++++++++++++++++" << endl;
      cout << endl << "You have selected #" << menuChoice << endl;
      cout <<"++++++++++++++++++++" << endl;
      cout << "At what position would you like to remove an element" << endl;
      	cin >> pos;
			L1.remove(pos);
      break;
    case 3:
      cout <<"++++++++++++++++++++" << endl;
      cout << endl << "You have selected #" << menuChoice << endl;
      cout <<"++++++++++++++++++++" << endl;
      cout << endl << "Clearing all elements...";
      cout << "...";
      	L1.clear();
      cout << "........................";
      break;
    case 4:
      cout <<"++++++++++++++++++++" << endl;
      cout << endl << "You have selected #" << menuChoice << endl;
      cout <<"++++++++++++++++++++" << endl;
      cout << endl << "Processing...";
      cout << "...";
      cout << "......";
      cout << ".........";
      cout << "..........................";
      cout << endl << endl << "List Size:" << endl; 
      cout << "\t" << L1.size() << " elements" << endl << "List Contents:" << endl << endl;
      L1.display();
      break;
    case 5:
      cout <<"++++++++++++++++++++" << endl;
      cout << endl << "You have selected #" << menuChoice << endl;
      cout <<"++++++++++++++++++++" << endl;
      cout << "What element would you like to display?" << endl;
      cin >> pos;
      L1.getElement(pos);
      break;
    case 6:
      cout << endl << "Exiting...";
      cout << "...";
      cout << "..................";
      cout << endl;
      break;
    default:
      cout << endl << "Invalid Choice";
      break;
  }

}

}
