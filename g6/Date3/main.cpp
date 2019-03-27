#include <iostream>

int main()
{
    int array[] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };

    int scoreDate=sizeof(array)/sizeof(array[0]);

    for(int i=0;i<scoreDate;++i)
        std::cout<<array[i]<<" ";
    std::cout<<'\n';

	system("pause");
    return 0;
}
