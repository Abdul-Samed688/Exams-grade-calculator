#include<iostream>
using namespace std;

const char *findGrade (float[], int);

int
main () 
{
  
int i, n, s, a_1_a, a_1_b, a_2_a, a_2_b, b_1_a, b_1_b, b_2_a, b_2_b, c_1_a,
    c_1_b, c_2_a, c_2_b, d_1, d_2, e_1_a, e_1_b, e_2_a, e_2_b;
  
string d;
  
cout << "Are you a student or a tutor ? ";
  
cin >> d;
  
if (d == "student")
    
    {
      
cout << "Enter Number of Subjects : ";
      
cin >> n;
      
float mark[n];
      
cout << "Enter Marks obtained in all " << n <<
	" Subjects starting from first to last: ";
      
for (i = 0; i < n; i++)
	
cin >> mark[i];	// receive grades one after the other based on the number of grades inputted above.
      cout << " \nGrade = " << findGrade (mark, n);	// displays your final grade
      cout << endl;
    
}
  
  else if (d == "tutor")
    
    {
      
 
cout << "Enter the Grade range Below : ";
      
cout << "For A1 enter upper limit ";
      
cin >> a_1_a;		//upper
      cout << "For A1 enter lower limit ";
      
cin >> a_1_b;		//lower limit
      cout << "For A2 enter upper limit ";
      
cin >> a_2_a;		//A2 UPPER LIMIT
      cout << "For A2 enter lower limit ";
      
cin >> a_2_b;		//A2 LOWER LIMIT
      cout << "For B1 enter upper limit ";
      
cin >> b_1_a;		//B1 UPPER LIMIT
      cout << "For B1 enter LOWER limit ";
      
cin >> b_1_b;		//B1 LOWER LIMIT
      cout << "For B2 enter upper limit ";
      
cin >> b_2_a;		//B2 UPPER LIMIT
      cout << "For B2 enter lower limit ";
      
cin >> b_2_b;		//B2 LOWER LIMIT
      cout << "For C1 enter upper limit ";
      
cin >> c_1_a;
      
cout << "For C1 enter lowe limit ";
      
cin >> c_1_b;
      
cout << "For C2 enter upper limit ";
      
cin >> c_2_a;
      
cout << "For C2 enter lower limit ";
      
cin >> c_2_b;
      
cout << "For D enter upper limit ";
      
cin >> d_1;
      
cout << "For D enter lower limit ";
      
cin >> d_2;
      
cout << "For E1 enter upper limit ";
      
cin >> e_1_a;
      
cout << "For E1 enter upper limit ";
      
cin >> e_1_b;
      
cout << "For E2 enter upper limit ";
      
cin >> e_2_a;
      
cout << "For E2 enter upper limit ";
      
cin >> e_2_b;		//E2 LOWER LIMIT
      // GRADE INPUT
      cout << "Enter the number of subjects : ";
      
cin >> n;
      
float mark[n];
      
cout << "Enter Marks obtained in all " << n <<
	" Subjects starting from first to last: ";
      
for (i = 0; i < n; i++)
	
cin >> mark[i];
      
 
	//Grade comparison &computation
      int i;
      
float sum = 0, avg;
      
for (i = 0; i < n; i++)
	
sum = sum + mark[i];	// sums all your grades
      avg = sum / n;
      
if (avg >= a_1_b && avg <= a_1_a)
	
cout << "A1";
      
      else if (avg >= a_2_b && avg < a_2_a)
	
cout << "A2";
      
      else if (avg >= b_1_b && avg < b_1_a)
	
cout << "B1";
      
      else if (avg >= b_2_b && avg < b_2_a)
	
cout << "B2";
      
      else if (avg >= c_1_b && avg < c_1_a)
	
cout << "C1";
      
      else if (avg >= c_2_b && avg < c_2_a)
	
cout << "C2";
      
      else if (avg >= d_2 && avg < d_1)
	
cout << "D";
      
      else if (avg >= e_1_b && avg < e_1_a)
	
cout << "E1";
      
      else if (avg >= e_2_b && avg < e_2_a)
	
cout << "E2";
      
      else
	
cout << "Invalid!";
    
}
  
return 0;
  
    /// for student with predefined grade points
}


const char *
findGrade (float mark[], int n) 
{
  
int i;
  
float sum = 0, avg;
  
for (i = 0; i < n; i++)
    
sum = sum + mark[i];	// sums all your grades
  avg = sum / n;
  
cout << "your average grade is : " << avg << " equivalent to ";	// displays your avaerage grade.
  if (avg >= 91 && avg <= 100)
    
return "A1";
  
  else if (avg >= 81 && avg < 91)
    
return "A2";
  
  else if (avg >= 71 && avg < 81)
    
return "B1";
  
  else if (avg >= 61 && avg < 71)
    
return "B2";
  
  else if (avg >= 51 && avg < 61)
    
return "C1";
  
  else if (avg >= 41 && avg < 51)
    
return "C2";
  
  else if (avg >= 33 && avg < 41)
    
return "D";
  
  else if (avg >= 21 && avg < 33)
    
return "E1";
  
  else if (avg >= 0 && avg < 21)
    
return "E2";
  
  else
    
return "Invalid!";

 
 
 
}



