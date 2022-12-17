#include <iostream>
#include <vector>

int main()
{
    int idx{};
    int vec_num;
    std::vector<int> numbers = { 1, 2, 3,-2 , 4, 5, -3 };
    
    for (size_t i = 0; i < numbers.size(); i++)
    {
        if (numbers[i]>0)
        {
            idx = i;
            std::cout << idx<<std::endl;
        }
    }
    std::cin >> vec_num;
    auto iter1 = numbers.cbegin(); // константный итератор указывает на первый элемент
    
    numbers.insert(iter1+idx+1, vec_num);

    for (int n : numbers)
        
        std::cout << n << "\t";      // 5    3   10


    
    std::cout << std::endl;
    return 0;
}