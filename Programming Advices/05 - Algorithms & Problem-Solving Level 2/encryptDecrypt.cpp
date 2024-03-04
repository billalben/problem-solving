// Write a program to read a text and encrypt it, decrypt it.

#include <iostream>

using namespace std;

string readText()
{
  string text;
  cout << "Enter a text: ";
  getline(cin, text);
  return text;
}

string encryptText(string text, short encryptionKey)
{
  for (short i = 0; i < text.length(); i++)
  {
    text[i] = (char)((int)text[i] + encryptionKey);
  }
  return text;
}

string decryptText(string text, short encryptionKey)
{
  for (short i = 0; i < text.length(); i++)
  {
    text[i] = char((int)text[i] - encryptionKey);
  }
  return text;
}

int main()
{
  const short int encryptionKey = 2; // This is the key to encrypt and decrypt the text

  string text = readText();
  string encryptedText = encryptText(text, encryptionKey);
  string decryptedText = decryptText(encryptedText, encryptionKey);

  cout << "\nText Before Encryption: " << text << endl;
  cout << "Text After Encrypted: " << encryptedText << endl;
  cout << "Text After Decrypted: " << decryptedText << endl;
}

/*
  Enter a text: Mohammed

  Text Before Encryption: Mohammed
  Text After Encrypted: Oqjcoogf
  Text After Decrypted: Mohammed
*/
