#include<iostream>
using namespace std;

class student {
    public:
    string name;
    int age;

    void display(){
        cout<<name <<" "<<age<<endl;

    }
};

int main(){
    student s1;
    s1.name="ashish";
    s1.age=18;

    s1.display();
    return 0;
}

