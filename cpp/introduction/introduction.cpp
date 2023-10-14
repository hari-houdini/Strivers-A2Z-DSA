/**
 * Could use #include<bits/stdc++.h> which includes all possible header files together
 * rather than including everything one by one.
 *
 * But I'm not doing it here, because of all the disadvantages it comes with
 * https://www.geeksforgeeks.org/bitsstdc-h-c/
 */
#include<iostream>

using namespace std;

/**
 * Once the code is written, run the following code
 * "g++ -std=c++17 -o ${optionalExecutableFile} ${file} && ./${optionalExecutableFile} < input.txt > output.txt"
 * In this instance,
 * "g++ -std=c++17 -o main.exe introduction.cpp && ./main.exe < input.txt > output.txt"
 */
int main() {
  /**
   * To know more about datatypes and its sizes:
   * https://www.geeksforgeeks.org/data-types-in-c/
   */
  int x;
  long long y = 1500000000000;

  float a = 5.6;
  double b = 222333333.6688888;

  cin >> x;
  cout << "Int: " << x << "\nLong Long: " << y;
  cout << "\nFloat: " << a << "\nDouble: " << b;

  /**
   * String datatype is a class based implementation rather than the usual char array method we used to do
   * It handles dynamic memory allocation and resizing, making string manipulation easier and safer.
   * To know more: https://www.geeksforgeeks.org/stdstring-class-in-c/
   */
  string s1, s2;

  /**
   * Terminates as soon as it encounters a space or a newline
  */
  cin >> s1;

  /**
   * Terminates only on a newline
   */
  getline(cin, s2);

  cout << "\nCin way string: " << s1;
  cout << "\nGetline way string: " << s2;

  /**
   * Can store all 256 characters, 0-255 ASCII characters
   * IMPORTANT: Use single quotes for char and double quotes for string
   */
  char ch = '/';

  cin >> ch;
  cout << "\nCharacter: " << ch;

  return 0;
}
