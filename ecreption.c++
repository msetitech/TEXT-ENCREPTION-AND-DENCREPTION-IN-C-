#include<iostream>
#include<string>
using namespace std;


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