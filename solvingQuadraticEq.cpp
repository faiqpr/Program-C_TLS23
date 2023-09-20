#include <iostream> 
#include <cmath> 

using namespace std;

int main() { 
    // Menginisiasi variabel input
    int a, b, c; 
    double d, x1, x2; 

    // Input nilai a, b, dan c
    cout << "Masukkan nilai a, b, dan c untuk persamaan ax^2 + bx + c = 0" << "\n";
    cout << "Nilai a: "; cin >> a; 
    cout << "Nilai b: "; cin >> b; 
    cout << "Nilai c: "; cin >> c; 

    // Mencari nilai diskriminan
    d = b*b - 4*a*c; 
    
    // Jika diskriminan > 0
    if (d > 0) { 
        cout << "Terdapat 2 solusi real:" << "\n"; 
        x1 = (-b + sqrt(d))/(2*a); 
        x2 = (-b - sqrt(d))/(2*a); 
        cout << x1 << " dan " << x2; 
    } 
    // Jika diskriminan = 0
    else if (d == 0) {
        cout << "Terdapat 1 solusi real:" << "\n"; 
        x1 = -b/(2*a); 
        cout << x1; 
    }
    // Jika diskriminan < 0
    else { 
        cout << "Terdapat 2 solusi kompleks:" << "\n";
        // Memisahkan bagian real dan imaginer 
        double real, imgnr; 
        real = -b/(2*a); 
        imgnr = sqrt(-d)/(2*a); 
        cout << real << " + " << abs(imgnr) << " i " << " dan "; 
        cout << real << " - " << abs(imgnr) << " i " ; 
    }

    return 0; 
}