#include <iostream>
#include <string>
using namespace std;

int main() {
    string str,og;

    cout<<"Enter the String is : ";
    cin>>str;
og=str;
    // Manual reversal
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        // Swap characters at positions left and right
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        // Move towards the middle
        left++;
        right--;
    }
    
    if(og==str){
        cout<<"Palindrome String "<<endl;
    }
else{
            cout<<"Not Palindrome String "<<endl;

}

    return 0;
}
