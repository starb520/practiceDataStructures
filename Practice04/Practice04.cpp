

#include <string>
#include <list>
#include <vector>
#include <iostream>
using namespace std;

/**************************************
* Practice using data structures.
***************************************/
int main()
{
   // create an empty list
   list<string> listData;

    // variable to hold user input so it can be added to the list
   string userInput;
   cout << "Please enter 10 words: " << endl;

   // prompt the user for ten items, add the items to the listData
   for (int i = 0; i < 10; i++) 
   {
      cout << "> ";
      getline(cin, userInput);
      listData.push_back(userInput);
   }

   // print out the input added to the data list
   cout << "The data in listData displayed forwards is: " << endl;
   for (string word : listData)   
   {
      cout << '\t' << word << endl;
   }

   // create an empty vector
   vector<string> vectorData;

   // add the listData to the newly created vector, vectorData
   for (auto it = listData.begin(); it != listData.end(); it++)
   {
      vectorData.push_back(*it);
   }

   // iterate through the vectorData backwards and display each element
   cout << "The data in vectorData displayed backwards is: " << endl;
   for (auto i = vectorData.size() - 1; i > 0; i--)
   {
      cout << '\t' << vectorData[i] << endl;
    }
  
   cout << endl;


}


