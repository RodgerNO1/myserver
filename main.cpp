#include <iostream>
#include "MyServer.h"
MyServer *s=NULL;
int main()
{
	s=new MyServer();
	s->start();
	//system("pause");
	return 0;
}