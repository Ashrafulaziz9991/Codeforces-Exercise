#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> shapes = {
            {"Tetrahedron", 4},
            {"Cube", 6},
            {"Octahedron", 8},
            {"Dodecahedron", 12},
            {"Icosahedron", 20}
    };
    int sum = 0;
    cin.ignore();
    string s;
    getline(cin, s);
    if(shapes.count(s)>0)
    sum += shapes.count[s];
    cout<<sum;
    return  0;
}
/*
 * #include <iostream>
#include <unordered_map>
#include <string>

int main() {
    std::unordered_map<std::string, int> shapes = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };

    int sum = 0;
    std::string s;
    std::getline(std::cin, s);

    if (shapes.find(s) != shapes.end()) {
        sum += shapes[s];
    }

    std::cout << "Total sum: " << sum << std::endl;

    return 0;
}
*/
/*
#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    // Define a map to store the number of faces each polyhedron type has
    unordered_map<string, int> faces = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };

    int n;
    cin >> n;

    int total_faces = 0;

    // Iterate through each polyhedron in Anton's collection
    for (int i = 0; i < n; ++i) {
        string polyhedron;
        cin >> polyhedron;

        // Add the corresponding number of faces to the total count*/
