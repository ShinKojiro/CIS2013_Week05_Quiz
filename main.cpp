#include <iostream>
#include <string>

using namespace std;

const int MAX = 30;
int student[MAX];
string name[MAX];
//char letterGrade[] = { A, B, C, D, F};
int count = 0;
int studentNumber;

void menu(){

    cout << "**********************************" << endl;
    cout << "      What do you want to do?" << endl;
    cout << "      a) Add a Student" << endl;
    cout << "      b) Set a Students Grade" << endl;
    cout << "      c) Print all grades" << endl;
    cout << "      z) End Program" << endl;
    cout << "**********************************" << endl;

    
}

void addStudent(int x){
    cout << "Enter Student's name: ";
    cin >> name[x];
    cout << name[x] << " assigned student number " << count + 1 << endl;
}

void setGrade(int z){
    cout << "Enter Student " << studentNumber << "'s grade: ";
    cin >> student[studentNumber - 1];
}

void printGrades(int y){
    cout << name[y] << "'s grade is " << student[y] << endl;
}

int main(){
    bool notDone = true;
    char c;
    
    while(notDone){
        menu();

        cin >> c;

        switch(c){
            case 'a':
            case 'A':
                addStudent(count);
                count++;
            break;
            case 'b':
            case 'B':
                cout << "Which student? (Enter student number)";
                cin >> studentNumber;
                setGrade(student[studentNumber - 1]);
            break;
            case 'c':
            case 'C':
                for(int i = 0; i < count; i++){
                    printGrades(i);
                }
                
            break;
            case 'z':
            case 'Z':
                notDone = false;
            break;
            default:
                cout << "That is not a valid selection" << endl;
        }
    }
}