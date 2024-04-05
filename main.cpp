//
// Created by Odiljon G'ulomov
// Date:03/04/2024

#include <iostream>
using namespace std;

bool a(int n) {
    if (n <= 1) 
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
void printPattern(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << j;
        }
    
        for (int mid = 0; mid < i; ++mid) {
            cout << "  ";
        }
        for (int mid = 1; mid < i; ++mid) {
            cout << "";
        }
        for (int desc = n - i; desc >= 1; --desc) {
            cout << desc;
        }
        cout << "\n"; 
    }
}
int tribonacci(int n) {
    if(n == 0) return 0;
    if(n == 1 || n == 2) return 1;
    
    int a = 0, b = 1, c = 1;
 
    int next;

    for(int i = 3; i <= n; i++) {
        next = a + b + c;
        a = b;
        b = c;
        c = next;
    }

    return c;
}
char caesarCipher(char ch, int shiftFactor) {
    if (ch >= 'A' && ch <= 'Z') {
        return (ch - 'A' + shiftFactor) % 26 + 'A';
    } else if (ch >= 'a' && ch <= 'z') {
        return (ch - 'a' + shiftFactor) % 26 + 'a';
    }
    return ch;
}
int main() {
    cout << "PROBLEM 1\n";
    int N, primeCount = 0;
    cin >> N;

    for(int i = 1; i <= N; i++) {
        if(a(i)) {
            primeCount++;
        }
    }
    cout << primeCount << endl;
    
    cout << "PROBLEM 2\n";
    int number;
    cin >> number;

    if (number >= 0 && number < 10) {
        printPattern(number);
    } else{
        cout << "Invalid input " << endl;
    }
    
    /*cout << "PROBLEM 3\n";
    int n;
    cin >> n;
    cout << tribonacci(n) << endl; 
    
    cout << "PROBLEM 4\n";
    int N1;
    cin >> N1;
    bool found = false;
    for (int x = -10; x <= 10; x++) {
        for (int y = -3; y <= 3; y++) {
            for (int z = 2; z <= 6; z++) {
                if (4*x - 2*y + 3*z == 20) {
                    if (x*y*z < N1 && x*x + y*y + z*z > 8) {
                        cout << "Solution: " << x << ' ' << y << ' ' << z << '\n';
                        found = true;
                    }
                }
            }
        }
    }
    if (!found) {
        cout << "No solutions found." << endl;
    }
    
    cout << "PROBLEM 5\n"; 
    char ch;
    int shiftFactor, rounds;
    cin >> ch >> shiftFactor >> rounds;

    for (int i = 0; i < rounds; ++i) {
        ch = caesarCipher(ch, shiftFactor);
    }
    cout << ch << endl;*/
    return 0;
}
