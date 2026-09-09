#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    void desplay(){
        cout<<name<<" "<<"and his age is :"<<age<<endl;
    }

};

int main(){
    student s1;

    s1.name="Nishant";

    s1.age=20;
    s1.display();
    
    return 0;

}
