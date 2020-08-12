//1.1 Is Unique

#include <iostream>
using namespace std;

const int MAX_CHAR = 256;

bool hasUniqueCharacters(string inputStr) {
  // if string length in greater than 256, 
  // some characters were repeated
  if(inputStr.length() > MAX_CHAR)
    return false;
  
  bool asciiMap[MAX_CHAR] = {false};
  for(int i = 0; i < inputStr.length(); ++i) {
    if(asciiMap[int(inputStr[i])] == true)
      return false;      
    else
      asciiMap[int(inputStr[i])] = true;
  }
  return true;
}

int main() {
  cout << "Enter string" << endl;
  string inputStr;
  cin >> inputStr;
  if(hasUniqueCharacters(inputStr)) {
    cout << "Entered string - " << inputStr << " has unique characters" << endl;
  } else {
    cout << "Entered string - " << inputStr << " does not have unique characters" << endl;
  }
  return 0;
}