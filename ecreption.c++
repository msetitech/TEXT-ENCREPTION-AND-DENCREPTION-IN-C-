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
        encrypted += char(encryptedChar);
    }
    return encrypted;
}

// Dencereption Function 
string dencrypt(string text, int key){
    string dencrypted = "";
    for(char c : text){
        int dencryptedChar = (c - key);
        if(dencryptedChar < 32){
            dencryptedChar = 127 - (32 - dencryptedChar);
        }
        dencrypted += char(dencryptedChar);
    }
    return dencrypted;
}


int main(){
    string message;
    int key;

    cout << "Enter MEssage to Encrepti: ";
    getline(cin, message);

    cout << "Enter Encreprion Key 1-94 : ";
    cin >> key;
    if(key < 1 || key > 94){
        cout << "Key Must be Between 1 - 94: ";
        return 1;
    }
    string encrtptedMessage = encrypt(message, key);
    cout << "Encrepted Message: " <<  encrtptedMessage << endl;

    string dencreptedMassege = dencrypt(encrtptedMessage, key);
    cout << "Dencrepted Message : " << dencreptedMassege << endl;

    return 0;
}