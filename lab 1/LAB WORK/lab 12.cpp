// Name: Muhammad Abdal
// Department: Electrical Engneerinrg
//Roll No:BF25NWELE0701
//Section: B


#include <iostream>   // Input aur Output ke liye library include ki gayi hai

using namespace std;  // Standard namespace use karne ke liye

// Program yahan se start hota hai
int main()
{
    float a = 10.2, b, c;  
    // 'float' = decimal numbers ke liye variable type
    // 'a', 'b', 'c' = variable ke naam
    // 'a' ko initial value 10.2 assign ki gayi hai
    // 'b' aur 'c' abhi empty hain

    cout << "Enter value for a:\n";  
    // User se pehli value input lene ke liye message print hota hai
    cin >> a;  
    // User ki input value variable 'a' me store hoti hai

    cout << "Enter value for b:\n";  
    // User se doosri value input lene ke liye message print hota hai
    cin >> b;  
    // User ki input value variable 'b' me store hoti hai

    c = a + b;  
    // 'c' me 'a' aur 'b' ka sum store hota hai

    cout << "a + b = " << c;  
    // Screen par result print hota hai
    // Agar user ne a=5.5 aur b=4.5 input kiya to output hoga "a + b = 10"

    return 0;  
    // 0 = program successfully khatam ho gaya

} 
// Yahan main function khatam hota hai
