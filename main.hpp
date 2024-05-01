#include <iostream>
#include <string>
#include <fstream>

using namespace std;


void writeFile(string);
void readFile(string);

void writeFile(string filename){
      int empN;
    ofstream ofs;
    int IDs;
    string name;
    string dept;
    double salary;

    ofs.open("employee.txt");
    if (!ofs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    cout << "Please enter the number of employees: ";
    cin >> empN;
  

    for(int i = 0; i < empN; i++){
        cin >> IDs;
        cin >> name;
        cin >> dept;
        cin >> salary;
          
        ofs << IDs << " ";
        ofs << name << " ";
        ofs << dept << " ";
        ofs << salary << " ";
        ofs << endl << " ";
    }

    ofs.close();

}

void readFile(string filename){
    //
}

