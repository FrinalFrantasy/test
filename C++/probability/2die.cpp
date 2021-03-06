#include <random>
#include <iostream>

int main()
{
    std::mt19937 rng;
    rng.seed(std::random_device()());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(1,6); // distribution in range [1, 6]

    int Rolls;
    std::cout << "\nHow many rolls? ";
    std::cin >> Rolls;
    
    int Roll1 = 0;
    int Roll2 = 0;
    int T02 = 0;
    int T03 = 0;
    int T04 = 0;
    int T05 = 0;
    int T06 = 0;
    int T07 = 0;
    int T08 = 0;
    int T09 = 0;
    int T10 = 0;
    int T11 = 0;
    int T12 = 0;
    int Count = 0;
    
    while (Count < Rolls)
		    {
		      Roll1 = dist6(rng);
		      Roll2 = dist6(rng);
		      if (Roll1+Roll2==2) T02++;
		      if (Roll1+Roll2==3) T03++;
		      if (Roll1+Roll2==4) T04++;
		      if (Roll1+Roll2==5) T05++;
		      if (Roll1+Roll2==6) T06++;
		      if (Roll1+Roll2==7) T07++;
		      if (Roll1+Roll2==8) T08++;
		      if (Roll1+Roll2==9) T09++;
		      if (Roll1+Roll2==10) T10++;
		      if (Roll1+Roll2==11) T11++;
		      if (Roll1+Roll2==12) T12++;
		      Count++;
		    }

    std::cout << "02: " << T02 << std::endl;
    std::cout << "03: " << T03 << std::endl;
    std::cout << "04: " << T04 << std::endl;
    std::cout << "05: " << T05 << std::endl;
    std::cout << "06: " << T06 << std::endl;
    std::cout << "07: " << T07 << std::endl;
    std::cout << "08: " << T08 << std::endl;
    std::cout << "09: " << T09 << std::endl;
    std::cout << "10: " << T10 << std::endl;
    std::cout << "11: " << T11 << std::endl;
    std::cout << "12: " << T12 << std::endl;
}
