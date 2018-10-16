#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct student
{
    int ID;
    string name;
    int age;
    string gender;
    double score;
    char grade;
}s[5];

int main()
{
    cout<<"Enter Student Details:"<<endl;

    for(int i=0;i<5;++i)
    {
        s[i].ID=i+1;
        cout<<"Enter ID Number:"<<endl;
        cin>>s[i].ID;

        cout<<"Enter Name:"<<endl;
        cin>>s[i].name;

        cout<<"Enter Age:"<<endl;
        cin>>s[i].age;

        cout<<"Enter Gender:"<<endl;
        cin>>s[i].gender;

        cout<<"Enter Score:"<<endl;
        cin>>s[i].score;
    }
    cout<<"Student Details are as follow:"<<endl;

    for(int i=0;i<5;++i)
    {
        cout<<"ID :"<<s[i].ID<<endl;
        cout<<"name :"<<s[i].name<<endl;
        cout<<"age :"<<s[i].age<<endl;
        cout<<"gender :"<<s[i].gender<<endl;
        cout<<"score :"<<s[i].score<<endl;
    }

    for(int i=0;i<5;++i)
    {
    if(s[i].score>=80&&s[i].score<=100)
    {
        cout<<"grade is A"<<endl;
    }
    else if(s[i].score>=70&&s[i].score<=79)
    {
        cout<<"grade is B"<<endl;
    }
    else if(s[i].score>=60&&s[i].score<=69)
    {
        cout<<"grade is C"<<endl;
    }
    else if(s[i].score>=50&&s[i].score<=59)
    {
        cout<<"grade is D"<<endl;
    }
    else if(s[i].score>=40&&s[i].score<=49)
    {
        cout<<"grade is E"<<endl;
    }
    else if(s[i].score>=0&&s[i].score<=39)
    {
        cout<<"grade is F"<<endl;
    }
    }


    fstream file;
    file.open ("details.txt");
    file<<"ID\t\tname\tgender\tage\tscore\tgrade"<<endl;
    for(int i=0;i<5;++i)
    {
        file<<s[i].ID<<"\t"<<s[i].name<<"\t"<<s[i].age<<"\t"<<s[i].gender<<"\t"<<s[i].score<<"\t"<<s[i].grade;
    }

   double averageAge;
    averageAge=(s[0].age+s[1].age+s[2].age+s[3].age+s[4].age)/5.0;
    cout<<"Average age is:"<<averageAge<<endl;

double averageScore;
    averageScore=(s[0].score+s[1].score+s[2].score+s[3].score+s[4].score)/5.0;
    cout<<"Average score is:"<<averageScore<<endl;





}
