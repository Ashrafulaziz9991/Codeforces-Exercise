#include <iostream>
#include <string>

int main() {
    std::string code;
    char specificNumber;

    // Input the code as a string
    std::cout << "Enter the code: ";
    getline(std::cin, code);

    // Input the specific number to count
    std::cout << "Enter the specific number: ";
    std::cin >> specificNumber;

    // Count the occurrences of the specific number
    int count = 0;
    for (char c : code) {
        if (c == specificNumber) {
            count++;
        }
    }

    // Output the result
    std::cout << "Occurrences of " << specificNumber << ": " << count << std::endl;

    return 0;
}
