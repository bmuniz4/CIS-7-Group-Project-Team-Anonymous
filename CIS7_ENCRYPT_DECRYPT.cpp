#include <iostream>
#include <string> //will input and output a string

using namespace std;

//create new key to be same length as the message
string newKey(string stringToBe, string key){
  for(int i = 0; ; i++){
    if(stringToBe.size() == i){
      i = 0;
    }
    if(key.size() == stringToBe.size()){
      break;
    }
    key.push_back(key[i]);
  }
  return key; 
}

//encrypt function
string encrypt(string stringToBe, string key){
  string newMessage = "";
  for(int i = 0; i < stringToBe.size(); i++){
    newMessage += char(((stringToBe[i] + key[i]) % 26) + 'A');
  }
  return newMessage;
}

//decrypt function
string decrypt(string stringToBe, string key){
  string newMessage = "";
  for(int i = 0; i < stringToBe.size(); i++){
    newMessage += char((((stringToBe[i] - key[i] + 26) % 26 ) + 'A'));
  }
  return newMessage;
}


int main() {
  //Variables
  bool start = true;
  int choice;
  string stringToBe,
         key;
  
  //this will keep the menu going 
  while(start == true ){

    //Starter menu
    cout << "Welcome. This program will use Vigenere Cipher "
    << "to encode \nor decode your message.\n" ;
    cout <<"Please select from the following (Input number only): \n" ;
    //the choices available to the user
    cout << "1. Encrpyt " << endl << "2. Decrypt " << endl << "3. End program" << endl;
    cin >> choice;

    //Encrpyt
    if(choice == 1){
      cout << "Please enter the message you want to encrypt (No spaces allowed, and all CAPS):" << endl;
      cin >> stringToBe;
      cout << "Please enter the key (No spaces allowed, and all CAPS): " << endl;
      cin >> key;

      //Step 1: generate a key length of the message
      string key1 = newKey(stringToBe, key);
      //Step 2: encrypt the message with the message and new key made
      string newMessage = encrypt(stringToBe, key1);
      //Step 3: Reveal the new message
      cout << "The encrypted message is: " << newMessage << endl;
      
    }

    //Decrypt
    if(choice == 2){
      cout << "Please enter the message you want to decrypt: (No spaces allowed, and all CAPS):" << endl;
      cin >> stringToBe;
      cout << "Please enter the key (No spaces allowed, and all CAPS): " << endl;
      cin >> key;

      //Step 1: generate a key to be length of message
      string key1 = newKey(stringToBe, key);
      //Step 2: decrypt the message
      string newMessage = decrypt(stringToBe, key1);
      //Step 3: Reveal new message
      cout << "The decrypted message is: " << newMessage << endl;
    }
    
    //End program
    if(choice == 3){
      start = false;
    }
  }
}