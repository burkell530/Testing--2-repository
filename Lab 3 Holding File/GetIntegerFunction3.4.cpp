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
#include <limits>
#include <bitset>

using std::string;
using std::setfill;
using std::setw;
using std::cerr;
using std::cout;
using std::cin;
using std::endl;
using std::stringstream;

char GetSingleCharacter(string user_string_);
int GetInteger(int min_num_ = INT_MIN, int max_num_ = INT_MAX);

int main() {
  int min_num_ = INT_MIN;
  int max_num_ = INT_MAX;
  int integer_to_get_ = 5;
  /*cout << "Please enter a digit";
  //bool good_int_ = false;

  cin >> integer_to_get_;
      // What state are our flags?
  cout << "\ngoodbit value: " << std::ios_base::goodbit << endl;
  cout << "badbit value:  " << std::ios_base::badbit << endl;
  cout << "eofbit value:  " << std::ios_base::eofbit << endl;
  cout << "failbit value: " << std::ios_base::failbit << endl;
  cout << "Current value: " << cin.rdstate() << endl;
  std::bitset<3> state(cin.rdstate());
  cout << "In binary: " << state << endl;

    // Reset flags and clear the buffer
  cin.clear();
  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  */

    // Let's make sure we get an integer
  cout << "Please enter an integer: ";


  // Loop while input is bad. Could be any of the three error bits
  while (!(cin >> integer_to_get_)) {
    cout << "Try again!" << endl;  //output try again
    cin.clear(); // clear the buffer
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore stuff.
  }
    /*
    if (integer_to_get_ < max_num_) {
      cout << "Enter high_int_ error message here";
      cout << "Try Again!: " << endl;
      cin.clear();
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } else if (integer_to_get_ > min_num_) {
      cout << "Enter low_int_ error message here";
      cout << "Try Again!: " << endl;
      cin.clear();
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } else {
      cout << "Enter invalid_int_ error message here";
      cout << "Try Again!: " << endl;
      cin.clear();
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  }
  */
  cout << "You entered: " << integer_to_get_;
  return 0;
}


 /*
    if (cin.fail())
      cout << "error message invalid int";
    else if (user_int_ < min_num_)
      cout << "error message low_int_";
    else if (user_int_ > min_num_)
      cout << "error message high_int_";
    else
      good_int_ = true;
      return user_int_;

  //string user_string_ = "Hello";
  //GetSingleCharacter(user_string_);
}
*/

/*char GetSingleCharacter(string user_string_) {
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
*/
