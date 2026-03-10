// Name: Muhammad Abdal
// Department: Electrical Engneerinrg
//Roll No:BF25NWELE0701
//Section: B


#include <iostream>   // Input aur Output ke liye library include ki gayi hai

using namespace std;  // Standard namespace use karne ke liye

// Program yahan se start hota hai
int main()
{
    char a = 'a';  
    // 'char' = single character type variable
    // 'a' = variable ka naam
    // 'a' = initial value (single character) assign ki gayi hai

    cout << "Enter an alphabet for a:\n";  
    // Screen par message print karta hai
    // \n = cursor next line par le jata hai

    cin >> a;  
    // 'cin' = user se input lene ke liye
    // '>>' = input value variable 'a' me store karna
    // User koi single alphabet enter kar sakta hai

    cout << "a = " << a;  
    // Screen par "a = " aur user ki input value print hoti hai
    // Agar user 'z' input kare to "a = z" print hoga

    return 0;  
    // 0 ka matlab hai program successfully khatam ho gaya

} 
// Yahan main function khatam hota hai
