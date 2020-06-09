#include <iostream>
#include <string>
#include<bits/stdc++.h> 
using namespace std;



// void function that prints all possible routes
void printRoutes()
{
  cout << " There are 6 different possible route combinations:" << endl;
  cout << "-------------------------------------------------------------" << endl;
  cout << " Riverside -> Perris -> Moreno Valley -> Hemet -> Riverside." << endl;
  cout << " Riverside -> Perris -> Hemet -> Moreno Valley -> Riverside." << endl;
  cout << " Riverside -> Hemet -> Moreno Valley -> Perris -> Riverside." << endl;
  cout << " Riverside -> Hemet -> Perris -> Moreno Valley -> Riverside." << endl; 
  cout << " Riverside -> Moreno Valley -> Hemet -> Perris -> Riverside." << endl;
  cout << " Riverside -> Moreno Valley -> Perris -> Hemet -> Riverside." << endl;
  cout << endl << endl;
}

// void function that prints breadth first search for each city to terminal
 void bFirstSearch(string r, string p, string m, string h)
{
  cout << " The different Breath First Search for each city are as follows:" << endl;
  cout << "-----------------------------------------------------------------" << endl;
  cout << " From " << r << " you can traverse to " << p << ", " << m << ", and " << h << "." << endl;
  cout << " From " << p << " you can traverse to " << r << ", " << m << ", and " << h << "." << endl;
  cout << " From " << m << " you can traverse to " << p << ", " << r << ", and " << h << "." << endl;
  cout << " From " << h << " you can traverse to " << p << ", " << m << ", and " << r << "." << endl;
  cout << endl << endl;
}

// void function to find the lowest mileage trip
void lMilesTrip(string r, string m, string h, string p, int a, int b, int c, int d)
{
  int total; 
  total = a + b + c + d;
  cout << " The Lowest Mileage Trip is as follows:  " << endl;
  cout << "---------------------------------------------------------------------" << endl;
  cout << " " << r << " to " << m << " to " << h << " to " << p << " and back to " << r  << "." << endl;
  cout << " The total comes out to: " << total << " miles." << endl;
  cout << endl << endl;  
}

// void function that passes in strings and prints to terminal
void adjacencyMatrix(string r, string m, string p, string h, int rP, int rM, int rH, int pM, int pH, int mH)
{
  int riv, mor, per, hem;
  riv = 0;
  mor = 0;
  per = 0;
  hem = 0;

  cout << " The adjacency Matrix is as follows:" << endl;
  cout << "---------------------------------------------------------" << endl;
  cout << "              Riverside   Perris   Moreno Valley   Hemet" << endl;
  cout << "    Riverside" << "     " << riv << "         " << rP << "           " << rM << "          " << rH << endl;
  cout << "       Perris" << "    " << rP <<  "          " << per << "           " << pM << "          " << pH << endl;
  cout << "Moreno Valley" << "     " << riv << "         " << rP << "           " << rM << "          " << rH << endl;
  cout << "        Hemet" << "    " << rH << "         " << pH << "           " << mH << "           " << hem << endl;
  cout << endl << endl;

}


int main() 
{
  // Create Strings to act as each city
  string r, p, m, h;
  // Create Integers to hold menu input section and adjacencies
  int selection, rP, rM, rH, pM, pH, mH;
  // Assign strings and integers values
  r = "Riverside";
  p = "Perris";
  m = "Moreno Valley";
  h = "Hemet";
  rP = 24;
  rM = 16;
  rH = 33;
  pM = 18;
  pH = 30;
  mH = 26;


  // Wrap the enirety of the menu inside a do while loop so it will repeat
  do {

  // Creates a Visual Menu for the User
  cout << "-------------MENU-------------" << endl;
  cout << " 1. Route Combinations" << endl;
  cout << " 2. Breadth First Search" << endl;
  cout << " 3. Lowest Mileage Trip " << endl;
  cout << " 4. Adjacency Matrix (Map and Roads) " << endl;
  cout << " 5. Exit..." << endl;
  cout << "-------------------------" << endl;

  // Have the user enter input for the menu selection
  cout << "Please select an option and press return: ";
  cin >> selection;
  cout << endl;
  // Create a functional Menu using a switch statment
  switch (selection)
{
case 1:
  if (selection == 1)
  {
    printRoutes(); // Calls function to print route combinations to terminal
  }
break;
case 2:
  if (selection == 2)
  {
    bFirstSearch(r, p, m, h);
  }
break;
case 3:
  if (selection == 3)
  {
    lMilesTrip(r, m, h, p, rM, mH, pH, rP);
  }
break;
case 4:
  if (selection == 4)
  {
    adjacencyMatrix(r, m, p, h, rP, rM, rH, pM, pH, mH);
  }
break;
case 5:
  if (selection == 5)
  {
    cout << "Exiting..." << endl;
  }
break;
default:
cout << "Not a Valid Menu Selection. \n"
<< "Please select again." << endl;
cout << endl;
break;
}
// end of the switch statment
  } while (selection != 5); // end of the do while loop
   
  //End of the program and menu loop 
  cout << endl;
  cout << "Thank you for using our program have a great day..." << endl;

  return 0;
}