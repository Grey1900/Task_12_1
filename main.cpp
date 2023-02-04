/******************************************************************************/
/* File Name: Task_12_1                                                       */
/* Data: 04.02.2023                                                           */
/* Developer: Sergey Plotnikov                                                */
/* Description: Solution for task 1 of Block 12 of the C++ study course       */
/******************************************************************************/

#include <iostream>
#include <string>

int main()
{
    std::string listTenants[10];
    std::string tenants;

    for (int i = 0; i < 10; i++)
    {
        std::cout << "Enter information about " << i+1 << "nd tenants: ";
        std::cin >> tenants;
    }



    for (int j = 0; j < 3; j++)
    {
        std::cout << "Enter number of apartment: ";
        int tenantsNum;
        std::cin >> tenantsNum;
        if (tenantsNum <= 10)
            std::cout << listTenants[tenantsNum];
        else
            std::cout << "Wrong number";
    }


    return 0;
}

