#include <iostream>
#include <string>

int main()
{
        std::string d = "0123456789ABCDEF";

        int num = 43421;
        std::string res;

        while(num > 0)
        {
                res = d[num % 16] + res;
                num /= 16;
        }

        std::cout << res << std::endl;
}
