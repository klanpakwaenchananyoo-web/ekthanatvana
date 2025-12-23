#include<iostream>
using namespace std;

int main(){
	int count[5] = {0, 0, 0, 0, 0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade;
    int studentCount = 1; 
    int totalValid = 0;   

	cout << "Please input grade of each student (A-F) or input 0 to exit.";
	do{
		cout << "Student [" << studentCount <<"]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		 if(grade == '0') { // เงื่อนไขหยุดทำงานเมื่อใส่ 0
            break;
        }
        
        if(grade == 'A'){ 
            count[0]++;
            totalValid++;
            studentCount++;
        }else if(grade == 'B'){ 
            count[1]++;
            totalValid++;
            studentCount++;
        }else if(grade == 'C'){ 
            count[2]++;
            totalValid++;
            studentCount++;
        }else if(grade == 'D'){ 
            count[3]++;
            totalValid++;
            studentCount++;
        }else if(grade == 'F'){ 
            count[4]++;
            totalValid++;
            studentCount++;
        }else{ 
            cout << "Wrong input. Please input again." << endl;
        } 
	}while(true);
	
	
	cout << "In total ? students.";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] << ", ";	
    cout << "D = " << count[3] << ", ";	
    cout << "F = " << count[4] << endl;	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
