#include<iostream>
using namespace std;

main(){
cout<<"Enter the student name:";
string name;
cin>>name;
cout<<"Enter matriculation marks (out of 1100):";
float matricMarks;
cin>>matricMarks;
cout<<"Enter intermidiate marks (out of 550):";
float interMarks;
cin>>interMarks;
cout<<"Enter your ecat marks:";
float ecatMarks;
cin>>ecatMarks;
float matricPercentage;
matricPercentage=(matricMarks/1100)*100;
float interPercentage;
interPercentage=(interMarks/550)*100;
float ecatPercentage;
ecatPercentage=(ecatMarks/400)*100;
float Aggregate;
Aggregate=(ecatPercentage*0.50)+(interPercentage*0.40)+(matricPercentage*0.10);
cout<<"Aggregate score is"<<Aggregate<<"in %";
}

