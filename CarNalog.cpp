#include <iostream>
#include <math.h>
#include <string>
  using namespace std;

  class Nalog{
  
    protected:
  virtual void nalog()=0;

  };

  

  class Avto: public Nalog{
    public:
      int n,m;
      float sum;
      string color;
 Avto ( int n,float sum,int m,string color){
 this-> n=n;
 this-> sum=sum;
  this-> m=m;
   this-> color=color;
    }
    void nalog()  override{
      int age;
      cout<<"Time from release";
      cin>>age;
      float k;
      k=1;
if (sum >3000000 && sum <5000000 && age>=24 && age <=36 ){
  k=1.1;
}
if (sum >3000000 && sum <5000000  && age>=12 && age <=24){
  k=1.3;
}
if (sum >3000000 && sum <5000000  && age <=12){
  k=1.5;
}
if (sum >5000000 && sum <10000000  && age <=60){
  k=2;
}
if (sum >10000000 && sum <15000000  && age <=120){
  k=3;
}
if (sum >15000000  && age <=240){
  k=3;
}
if (n>0 && n<100){
sum=sum*2.5*(m/12)*k;
}
if (n>100 && n<150){
sum=sum*3.5*(m/12)*k;
}
if (n>150 && n<200){
sum=sum*5*(m/12)*k;
}
if (n>200 && n<250){
sum=sum*7.5*(m/12)*k;
}
if (n>250 ){
sum=sum*15*(m/12)*k;
}

cout<<"For car "<<sum<<endl;
cout<<"Color "<<color<<endl;
  }

  
  };
class Bus: public Nalog{
   public:
       int n, sum,m;
       string name;
 Bus ( int n,int sum,int m,string name){
 this-> n=n;
 this-> sum=sum;
 this-> m=m;
 this-> name=name;
    }
  void nalog() override{
if (n>0 && n<200){
sum=sum*5*(m/12);
}
if (n>200){
sum=sum*10*(m/12);
}
cout<<"For bus "<<sum<<endl;
cout<<"Trip "<<name<<endl;
  }
  };

  class Moto: public Nalog{
     public:
         int n, sum,m;
         bool k;
 Moto ( int n,int sum,int m,bool k){
 this-> n=n;
  this-> m=m;
 this-> sum=sum;
  this-> k=k;
    }
   void nalog() override{
if (n>0 && n<20){
sum=sum*1*(m/12);
}
if (n>20 && n<35){
sum=sum*2*(m/12);
}
if (n>35 ){
sum=sum*5*(m/12);
}
cout<<"For Moto "<<sum<<endl;
  }
  
  };
  class Plane: public Nalog{
     public:
         int sum,m;
         string company;
Plane ( int sum,int m,string company){
this-> m=m;
 this-> sum=sum;
  this-> company=company;
    }
void nalog() override{
sum=sum*25*(m/12);
cout<<"For Plane "<<sum<<endl;
cout<<"Company "<<company<<endl;
  }
  };


int main() {
  int n,sum,m;
   cout <<"Current engine power ";
  cin >> sum;
  cout <<endl;
 cout <<"Price ";
  cin >> n;
  cout <<endl;
   cout <<"Duration of ownership";
  cin >> m;
  cout <<endl;
Car car(n,sum,m,"grey");
car.nalog();
Moto moto(n,sum,m,0);
moto.nalog();
Bus Bus(n,sum,m,"Ivanovo-Moscow");
Bus.nalog();
Plane Plane(sum,m,"American airline");
Plane.nalog();

  return 0;
}