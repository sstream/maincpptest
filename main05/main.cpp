#include <iostream>
#include <sstream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{
    char ori[10];
    ori[0] = 0x45;
    ori[1] = 0x7;

    stringstream t_ssm;
    t_ssm << std::setfill('0') << std::setw(2) << std::hex << (unsigned int)ori[0]
          << std::setfill('0') << std::setw(2) << std::hex << (unsigned int)ori[1];

    cout << "t_ssm ori is [" << t_ssm.str() << "]." << endl;

    int t_decnum = 0;
    t_ssm >> t_decnum;

    t_ssm.str("");
    t_ssm.clear();

    t_ssm << std::dec << t_decnum;

    char des[10] = {0,};
    t_ssm >> des;
    cout << "des is [" << des << "]." << endl;

    t_ssm.str("");
    t_ssm.clear();

    return 0;
}
