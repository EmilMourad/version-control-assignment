#include <iostream>
#include <vector>

int getSum(std::vector<int> &elements)
{
    int sum = 0;
    for (auto element : elements)
        sum += element;
    return sum;
}

int main()
{
    std::vector<int> elements;
    for (int i = 1; i <= 10; i++)
        elements.push_back(i);
    int ans = getSum(elements);
    std::cout << ans << "\n";
    return 0;
}