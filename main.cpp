// File name: ~ftp/pub/class/cplusplus/Pointer/PointerSimple.cpp
// Credit to: ftp://www.cs.uregina.ca/pub/class/cplusplus/Pointer.html
// Purpose:   A simple program demonstrating the use of pointers.

#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    Solution() = default;

    std::vector<std::string> fizzBuzz(int n) {
        ostringstream oss;
        vector<string> vec (n);

        bool flag = false;
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0) {
                oss << "Fizz";
                flag = true;
            }
            if (i % 5 == 0) {
                oss << "Buzz";
                flag = true;
            }

            if (!flag) {oss << i; }
            flag = false;
            
            vec.at(i-1) = oss.str();
            oss.clear();
            oss.str("");
        }
        return vec;
    }
}; 


int main()
{
	// declare an integer and a float variable
	int IntNum; 
	float FloatNum;
	
	// declare integer and float pointers
	int *pIntNum;
	float *pFloatNum;
	
	// initialize the integer and float variables
	IntNum = 10;
	FloatNum = 12.34;
	
	// store addresses in pointers
	pIntNum = &IntNum;
	pFloatNum = &FloatNum;

	// print out the original values
        cout << "Before increment: " << endl;
	cout << "\t IntNum is: " << IntNum << endl;
	cout << "\t FloatNum is: " << FloatNum << endl;
	
	// note that we need to dereference a pointer in order
	// to extract the value it contains.
	cout << "\t pIntNum contains: " << *pIntNum << endl;
	cout << "\t pFloatNum contains: " << *pFloatNum << endl;

	// increment values of the integer and float variables 
	(*pIntNum)++;  // dereference and then increment
	(*pFloatNum)++;

	// print out the values after increment
        cout << "After increment: " << endl;
	cout << "\t IntNum is: " << IntNum << endl;
	cout << "\t FloatNum is: " << FloatNum << endl;

	cout << "\t pIntNum contains: " << *pIntNum << endl;
	cout << "\t pFloatNum contains: " << *pFloatNum << endl;

    Solution s = Solution();
    auto v = s.fizzBuzz(3);

    for (auto el: v) {
        std::cout << el << std::endl;
    }

    std::cout << std::endl << std::endl << "Let's try this again." << std::endl << std::endl;
    v = s.fizzBuzz(50);

    for (auto el: v) {
        std::cout << el << std::endl;
    }

	return 0;
}
