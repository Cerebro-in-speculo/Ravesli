#include<iostream>
#include<algorithm>

int main()
{
    const int lenght{7};
    int date[lenght]{30,50,20,10,40,100,0};

    int countMin{0};
    int countMax{0};
    int countMinAG{0};

    //V1

    for(int i=0;i<lenght-1;++i)
    {
        for(int j=i+1;j<lenght;++j)
            if(date[i]>date[j])
                {
                    int temp=date[i];
                    date[i]=date[j];
                    date[j]=temp;
                    ++countMin;
                }

    }

    for(int i=0;i<lenght;++i)
        std::cout<<date[i]<<" ";
    std::cout<<"iteration countMin = "<<countMin<<'\n';

    //V2

    for(int i=0;i<lenght-1;++i)
    {
        for(int j=i+1;j<lenght;++j)
            if(date[i]<date[j])
                {
                    int temp=date[i];
                    date[i]=date[j];
                    date[j]=temp;
                    ++countMax;
                }

    }

    for(int i=0;i<lenght;++i)
        std::cout<<date[i]<<" ";
    std::cout<<"iteration countMax = "<<countMax<<'\n';

    //V3

    for(int i=0;i<lenght-1;++i)
    {
        for(int j=i+1;j<lenght-j-1;++j)
            if(date[i]>date[j])
                {
                    int temp=date[i];
                    date[i]=date[j];
                    date[j]=temp;
                    ++countMinAG;
                }

    }

    for(int i=0;i<lenght;++i)
        std::cout<<date[i]<<" ";
    std::cout<<"iteration countMinAG = "<<countMinAG<<'\n';

    //V4

    std::sort(date,date+lenght);

        for(int i=0;i<lenght;++i)
        std::cout<<date[i]<<" ";
    std::cout<<'\n';

    //system("pause");
    return 0;
}
