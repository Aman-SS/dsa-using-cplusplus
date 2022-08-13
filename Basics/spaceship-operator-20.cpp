#include <bits/stdc++.h>
#include <compare>
using namespace std;

int main()
{
    auto result = (10 <=> 20) > 0; // gcc 11 is C++ 17.. spaceship operator <=> requires C++ 20
    std::cout << result << std::endl;
}