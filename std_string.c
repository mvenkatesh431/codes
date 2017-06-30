#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  //string str = "Venkatesh";
  string str;

  cout << "Enter something : ";
  cin >> str;
    // To get morethan one word.
//  getline(cin,str);

  string str2 {"macha"};

  string str3;

  str3 = str+ " " + str2;

  cout << str3 <<endl;

   cout <<"Length : " << str.length() <<endl;
   cout << str.size() <<endl;

   // if we can .at() for 1 size array, Segmentation fault. so check before doing this.
   if(str.length() >=4)
      cout << str.at(3) <<endl;

   cout << str.empty()<< endl;

   //str.resize(10);

  //  cout << "Length after the Resize : " << str.length() <<endl;
  //  cout << str << endl;

   // We can fill str using the str.resize().

   //str.resize(str.size() + 2, 'M');
   // this will add MMMM to the end of the string, based on the size of str.
  //  str.resize(10, 'M');
  //  cout << str << endl;

   // clear the string.
  //  str.clear();
  //  cout << str << endl;

  // Comparing the strings.
  cout << "Comparision : " << str.compare(str2) << endl;

  cout << str2.find('m')<<endl;
  cout << str2.find("cha")<<endl;

  cout << str2.substr(3)<<endl;

    cout << str2.substr(1,4)<<endl;
  return 0;
}
