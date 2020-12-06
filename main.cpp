#include <iostream>
#include <vector>
#include<string>
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
string s;
  //  vector<string> my;//i have forget how to use the vector,so you have to remember how to use the vector,at least you have fine figure.so you can like play guitar,try to practise forever
    while (cin>>s){
        vector<string> saveString;
        for (int i = 0; i <s.size() ; ++i) {
            saveString.push_back(s.substr(i));//to save the string in it.

        }
        for (int j = 0; j <saveString.size() ; ++j) {
            cout<<saveString[j]<<endl;
        }
        //cout<<saveString<<endl;

        return 0;
    }


    //return 0;
    //now let us write code now.
    //continute to write code.
}
