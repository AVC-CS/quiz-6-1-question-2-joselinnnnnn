#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// just coppied the [5 - 2] code will fix
int writeFile(string);
void readFile(string);

int writeFile(string filename){
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
return empN;
}

void readFile(string filename){
ifstream ifs;
    ofstream ofs;
    int empN;
    int IDs;
    string name;
    string dept;
    double salary;

    ifs.open("employee.txt");
    if (!ifs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

cout << "Please enter the number of employees: ";
   cin >> empN; 





cout << "\n ID  Name  department   salary" << endl;

for (int i = 0; i < numEmployees; i++){

      ifs >> IDs;
      ifs >> name;
      ifs >> dept;
      ifs >> salary;
 
      cout << IDs << " ";
      cout << name << " ";
      cout << dept << " ";
      cout << salary << " " << endl;
   
}
}

