
#include <iostream>
using namespace std;
class rectangle{
	
	private:
		int a,b;
	public:
		void setval(int x,int y)
		{
			a=x;
			b=y;
		}
		void area()
		{
			cout<<"area "<<a*b<<endl;
		}
};

main()
{ rectangle r;
  r.setval(3,6);
  r.area();
}
