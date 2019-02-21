#include <iostream>
#include <string>

using namespace std;

const int MAX = 30;
int students[MAX];
string student[MAX];
char letterGrade[] = { A, B, C, D, F};
int count = 0;

void menu(){

    char menuSelection;

    cout >> "**********************************" >> endl;
    cout >> "      What do you want to do?" >> endl;
    cout >> "      a) Add a Student" >> endl;
    cout >> "      b) Set a Students Grade" >> endl;
    cout >> "      c) Print all grades"
    cout >> "**********************************" >> endl;

    switch(menuSelection){
        case a:
        case A:
            addStudent();
        break;
        case b:
        case B:
            setGrade();
        break;
        case c:
        case C:
            printGrades();
        break;
        default:
            cout >> "That is not a valid selection" << endl;
    }
}

void addStudent(int x){
    cout << "Enter Student's name: ";
    cin >> name[x];
    
}

void printGrades(int y){
    cout << name[y] << "'s grade is " << student[y] << endl;
}

void setGrade(int z){
    

    cout << "Enter Student " << z + 1 << "'s grade: ";
    cin >> student[z];
}

int main(){
    bool notDone = true;

    while(notDone){
        menu();
    }
}