// Name: Muhammad Abdal
// Department: Electrical Engneerinrg
//Roll No:BF25NWELE0701
//Section: B

#include <iostream>   // Input aur Output ke liye library include ki gayi hai

using namespace std;  // Standard namespace use karne ke liye

// Program yahan se start hota hai
int main()
{
    float a = 10.2;  
    // 'float' = decimal numbers (fractional numbers) ke liye variable type
    // 'a' = variable ka naam
    // 10.2 = initial value decimal number ke sath assign ki gayi hai

    cout << "Enter value for a:\n";  
    // Screen par message print karta hai
    // \n = cursor next line par le jata hai

    cin >> a;  
    // 'cin' = user se input lene ke liye
    // '>>' = input value variable 'a' me store karna
    // User decimal value bhi de sakta hai

    cout << "a = " << a;  
    // Screen par "a = " aur user ki input value print hoti hai
    // Agar user 5.5 input kare to "a = 5.5" print hoga

    return 0;  
    // 0 ka matlab hai program successfully khatam ho gaya

} 
// Yahan main function khatam hota hai

