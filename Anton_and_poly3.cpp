#include <iostream>
using namespace std;
int main()
{
    int t, count=0;
    cin>>t;
    string s[t];
    for (int i = 0; i < t; ++i) {
        cin>>s[i];
        if (s[i] == "Tetrahedron"){
            count+=4;
        }
        else if(s[i] == "Cube"){
            count+=6;
        }
        else if(s[i] == "Octahedron"){
            count+=8;
        }
        else if(s[i] == "Dodecahedron"){
            count+=12;
        }
        else if(s[i] == "Icosahedron"){
            count+=20;
        }
    }
    cout<<count;

    return  0;
}
/*
 *  Cube. Cube has 6 square faces.
Octahedron. Octahedron has 8 triangular faces.
Dodecahedron. Dodecahedron has 12 pentagonal faces.
Icosahedron.*/