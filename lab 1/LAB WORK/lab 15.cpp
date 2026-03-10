// Name: Muhammad Abdal
// Department: Electrical Engneerinrg
//Roll No:BF25NWELE0701
//Section: B

#include <iostream>   // Input aur Output ke liye library include ki gayi hai

using namespace std;  // Standard namespace use karne ke liye

// Program yahan se start hota hai
int main()
{
    int integer1;  
    // Pehla number jo user se input liya jayega

    int integer2;  
    // Doosra number jo user se input liya jayega

    int sum;       
    // Is variable me dono numbers ka sum store hoga

    cout << "Enter first integer\n";  
    // Screen par message print hota hai taake user pehla number input kare

    cin >> integer1;                  
    // User ki input value 'integer1' me store hoti hai

    cout << "Enter second integer\n"; 
    // Screen par message print hota hai taake user doosra number input kare

    cin >> integer2;                  
    // User ki input value 'integer2' me store hoti hai

    sum = integer1 + integer2;  
    // 'integer1' aur 'integer2' ka sum calculate karke 'sum' me store kiya

    cout << "Sum is " << sum << endl; 
    // Screen par "Sum is " aur calculated sum print hota hai
    // 'endl' = new line ke liye

    return 0;  
    // 0 ka matlab hai program successfully khatam ho gaya

} 
// Yahan main function khatam hota hai
