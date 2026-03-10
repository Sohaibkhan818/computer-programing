// Name: Muhammad Abdal
// Department: Electrical Engneerinrg
//Roll No:BF25NWELE0701
//Section: B

#include <iostream>
using namespace std; 

// Program yahan se start hota hai
int main()
{
    int num1;  
    // Pehla integer variable, user se input liya jayega

    int num2;  
    // Doosra integer variable, user se input liya jayega

    cout << "Enter two integers, and I will tell you\n"
            << "the relationships they satisfy: ";
    // Screen par message print hota hai taake user do integers input kare

    cin >> num1 >> num2;   
    // User ki input values 'num1' aur 'num2' me store hoti hain

    if (num1 == num2)                                
        cout << num1 << " is equal to " << num2 << endl;  
    // Agar num1 aur num2 barabar hain, message print hoga

    if (num1 != num2)
        cout << num1 << " is not equal to " << num2 << endl;  
    // Agar num1 aur num2 barabar nahi hain, message print hoga

    if (num1 < num2)
        cout << num1 << " is less than " << num2 << endl;  
    // Agar num1 chhota hai num2 se, message print hoga

    if (num1 > num2)
        cout << num1 << " is greater than " << num2 << endl;  
    // Agar num1 bara hai num2 se, message print hoga

    if (num1 <= num2)
        cout << num1 << " is less than or equal to "
               << num2 << endl;  
    // Agar num1 chhota ya barabar hai num2 ke, message print hoga

    if (num1 >= num2)
        cout << num1 << " is greater than or equal to "
               << num2 << endl;  
    // Agar num1 bara ya barabar hai num2 ke, message print hoga

    return 0;  
    // 0 ka matlab hai program successfully khatam ho gaya

} 
// Yahan main function khatam hota hai
