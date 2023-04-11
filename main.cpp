//
//  main.cpp
//  CS 232 Recursion WriteBackward Lab
//
//  Created by Melissa Gio on 3/7/23.
//

#include <iostream>
#include <string>
using namespace std;

//function prototype
void writeBackward(string userInputPar);

int main() {
    //declaration
    string userInput = "";
    
    //get user input
    cout << "Enter a text message: ";
    getline(cin, userInput); //will get the spaces as well if there is more than one word
    
    //output
    writeBackward(userInput);
    
    return 0;
}

//function definition
//version 1
/*
void writeBackward(string userInputPar) { //strip away the last character approach
    int lenOfString = userInputPar.length();
    // 0 1 2
    // T o m
    
    if (lenOfString > 0) {
        cout << userInputPar.substr(lenOfString - 1, 1); //will grab the last character which will be m in tom
        
        writeBackward(userInputPar.substr(0, lenOfString - 1)); //well send the second character which is o in tom
        
        
    } else { //else if the lenOfString is 0 then do nothing
        
    }
    cout << endl;
}
 */

//version 2
void writeBackward(string userInputPar) { //strip away the first character approach
    //write the first character of userInputPar only after you have written the rest of the userInputPar backwards
    int lengthOfString = userInputPar.length();
    if (lengthOfString > 0 ) {
        writeBackward(userInputPar.substr(1, lengthOfString - 1));
        cout << userInputPar.substr(0, 1);
        
    } else {
        
    }
    cout << endl;

}
