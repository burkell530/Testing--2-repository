/*
 * charfromstrng.cpp
 *
 *  Created on: Mar 7, 2014
 *      Author: j
 */
#include <string>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <climits>

using std::string;
using std::setfill;
using std::setw;
using std::cerr;
using std::cout;
using std::cin;
using std::endl;
using std::stringstream;

char GetSingleCharacter(string user_string_);

int main()
{
  //string user_string_ = "Hello";
  //GetSingleCharacter(user_string_);
}

char GetSingleCharacter(string user_string_) {
  bool good_char_ = false;
  char user_char_;
  int count = 0;
  cout << "Please enter a character: ";
  do {
    cin >> user_char_;
    for (unsigned int i = 0; i < user_string_.length(); i++) {
      if (user_char_ == user_string_.at(i)) {
        count++;
        cout << "Success at if ";
      }
    }
    if (count > 0 ) {
      cout << user_char_;
      good_char_ = true;
    } else {
      cout << "Try Again: ";
    }
  } while (good_char_ == false);
  return 0;
}
