#include<iostream>
#include<string>
using namespace std;


// Encreption Function
string encrypt(string text, int key){
    string encrypted = "";
    for(char c : text){
        int encryptedChar = (c + key);
        if(encryptedChar > 126){
            encryptedChar = 32 + (encryptedChar - 127);
        }
        encrypted = char(encryptedChar);
    }
    return encrypted;
}

// Dencereption Function 
string dencrypt(string text, int key){
    string dencrypt = "";
    for(char c : text){
        int dencryptedChar = (c - key);
        if(dencryptedChar < 32){
            dencryptedChar = 127 - (32 - dencryptedChar);
        }
        dencrypt += char(dencryptedChar);
    }
    return dencrypt;
}


int main(){
    string message;
    int key;

    cout << "Enter MEssage to Encrepti: ";
    getline(cin, message);

    cout << "Enter Encreprion Key 1-94 : ";
    cin >> key;
    if(key < 1 || key >> 94){
        cout << "Key Must be Between 1 - 94: ";
        return 1;
    }


    return 0;
}