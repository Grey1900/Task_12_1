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

    for (int i = 0; i < 10; i++)
    {
        std::cout << "Enter information about " << i+1 << "nd tenants: ";
        std::cin >> listTenants[i];
    }

    int tenantsNum;

    for (int j = 0; j < 3; j++)
    {
        std::cout << "Enter number of apartment: ";
        std::cin >> tenantsNum;

        if (tenantsNum <= 10 && tenantsNum > 0)
            std::cout << listTenants[tenantsNum - 1] << std::endl;
        else
            std::cout << "Wrong apartment number";
    }
    return 0;
}