#include <iostream>
#include <string>

using namespace std;

int main() {
   string s = "Kf!tvjt!uspq!gpsu!\"";
   for(char c : s) {
      cout << static_cast<char>(c - 1);
   }
   cout << endl;
}
