#include<iostream>
using namespace std;

class student
{
  public:
 student()  //null constructors
  {
    this->name="Hamza";
    this->seatno=48;
    this->index=0;
    this->course[0] = "BSCS 401";
    this->course[1] = "BSCS 402";
  };

  student(string name,int seat , string course[10]) //perimetrized constructor
  {
    int i;
    this->name=name;
    this->seatno=seat;
    this->index=0;
    for(i=0;i<10;i++)
    {
      this->course[i] = course[i];

    }
  };

 student (student& clone)  //copy constructor
  {
    int i;
    this->name=clone.name;
    this->seatno=clone.seatno;
    this->index=clone.index;
    for(i=0 ; i <= index;i++)
    {
    this->course[i]=clone.course[i];
    };
  };

  void  setname(string name)  //setters functions
  {
    this->name=name;
  }
  void  setseatno(int seat)
  {
    this->seatno=seat;
  };
  void  setcourse(string course[10])
{
  int i;
  for(i=0;i<10;i++)
  {
    this->course[i]=course[i];
  }
};

string  getname()  //getters functions
{
  return this->name;
};

int  getseatno()
{
  return this->seatno;
};

string  getcourse()
{
  int i;
  for(i=0 ; i < index ; i++)
  {
    cout<<"Course:"<<i<<this->course[i]<<endl;
    //return this->course[i];
  }
};

string  getcourse(int index)
{
  return this->course[index];
};

void  addcourse(string course) //For adding courses
{
  this->course[index] = course;
  index ++;
};

 void operator = (const student& S) //assignment operator
{
  int i;
  this->name = S.name ;
  this->seatno = S.seatno;
  this->index = S.index;
  for(i=0 ; i < this->index ; i++)
  {
    this->course[i] = S.course[i];
  }
};
void display()
{
  cout<<"Name :" <<this->name<<endl;
  cout<<"Seat No :" <<this->seatno<<endl;
  cout<<"Courses :"<<endl;
  for(int i = 0 ; i < index ; i++)
  {
    cout<<this->course[i]<<endl;
  }

};

  private:
  string name;
  int seatno;
  string course[10];
  int index;
};
ostream& operator <<(ostream& o , student& S) //ostream
{
  return o <<"Name :"<< S.getname() <<endl << "Seat No :"<< S.getseatno() << endl << S.getcourse()<<endl;
};
