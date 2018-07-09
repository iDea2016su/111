#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int i=0;
void print_exit()
{
	cout<<"The exit pid :"<<getpid()<<endl;
}

int main(int argc,char * argv[])
{
	pid_t pid;
	atexit(print_exit);//注册该进程退出时的回调函数
	cout<<"test"<<endl;
	i++;
	pid = fork();
	pid = fork();
	cout<<"fork result:"<<pid<<endl;
	cout<<"value: "<<i++<<endl;
}
