/**
 * Author: Anuj R. Sharma
 *  This program is to reverse integer
 */

#include <iostream>
#include <algorithm>
#include <string>

int rev(int x) {
        int a = 1;
        if(x < 0) //Mistake 1: Do not use sign = x / abs(x), as x can be zero
            a = -1;

        std::string str = std::to_string(x);
        std::reverse(str.begin(), str.end());
        return a * stoi(str); // this is important to give back the sign of the integer
}

int main()
{
    std::cout << rev(-12345);
    return 0;
}

