#pragma once
#include<iostream>
using namespace std;
class String
{
public:
	String(); // ctor for 80 lines
	String(const size_t size); 
	String(const String& str);//copy
	String(String&& other);//MOVE CTOR
	void setLine(char* line);
	void print();
	static void swap(String& one, String& two);

	String(const char* str);
	~String();
	String& operator=(const String& other);
	String& operator=(String&& other);

	void setStringSize(const size_t& size);
	const char* getStr() const
	{
		return line;
	}
private:
	char* line = nullptr;
	size_t size = 0;

};
