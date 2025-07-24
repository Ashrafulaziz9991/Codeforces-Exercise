#include <iostream>
int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int s;
    std::cin >> s;
    int current_passengers = 0, capacity = 0;
    while (s--)
    {
        int a, b;
        std::cin >> a >> b;
        current_passengers -= a;
        current_passengers += b;

        if (current_passengers > capacity)
            capacity = current_passengers;
    }
    std::cout << capacity << std::endl;
    return 0;
}