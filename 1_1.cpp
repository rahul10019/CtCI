//1.1 Is Unique

#include <iostream>
using namespace std;

bool hasUniqueCharacters(string inputStr) {
  bool returnVal = true;
  unsigned int asciiMap[256] = {0};
  for(int i = 0; i < inputStr.length(); ++i) {
    char c = inputStr.at(i);
    if(asciiMap[(int)c] > 0) {
      returnVal = false;
      break;      
    } else {
      ++asciiMap[(int)c];
    }
  }
  return returnVal;
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