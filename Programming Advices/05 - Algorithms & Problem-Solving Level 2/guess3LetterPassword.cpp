// Write a program to guess a 3-Letter Password (all capital)

#include <iostream>

using namespace std;

string readPassword()
{
  string password;
  cout << "Enter a 3 Letter Password (All Capital): ";
  cin >> password;
  return password;
}

void guessPassword(string password)
{
  int counter = 0;
  string word = "";

  for (int i = 65; i <= 90; i++)
  {
    for (int j = 65; j <= 90; j++)
    {
      for (int k = 65; k <= 90; k++)
      {
        word = word + (char)i;
        word = word + char(j);
        word = word + (char)k;

        counter++;
        cout << "Trial[" << counter << "]: " << word << endl;

        if (word == password) {
          cout << "\nPassword is: " << word << endl;
          cout << "Found after " << counter << " trial(s)\n";
          return;
        }

        word = "";
      }
    }
  }
}

int main()
{
  guessPassword(readPassword());
}

/*
  Enter a 3 Letter Password (All Capital): AAU
  Trial[1]: AAA
  Trial[2]: AAB
  Trial[3]: AAC
  Trial[4]: AAD
  Trial[5]: AAE
  Trial[6]: AAF
  Trial[7]: AAG
  Trial[8]: AAH
  Trial[9]: AAI
  Trial[10]: AAJ
  Trial[11]: AAK
  Trial[12]: AAL
  Trial[13]: AAM
  Trial[14]: AAN
  Trial[15]: AAO
  Trial[16]: AAP
  Trial[17]: AAQ
  Trial[18]: AAR
  Trial[19]: AAS
  Trial[20]: AAT
  Trial[21]: AAU

  Password is: AAU
  Found after 21 trial(s)
*/