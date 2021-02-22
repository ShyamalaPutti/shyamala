#include<iostream>
using namespace std;
bool isVowel(char c)
{
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' )
	return true;
	else 
	return false;
}
string reverseVowelOnly(string s)
{
	string vowel;
	int j=0;
	for(int i=0;i<s.length();i++)
	{
		if(isVowel(s[i]))
		vowel[j++] = s[i];
	}
	for(int i=0;i<s.length();i++)
	{
		if(isVowel(s[i]))
		s[i] = vowel[--j];
	}
	return s;
}
int main()
{
	string s;
	getline(cin,s);
	cout<<reverseVowelOnly(s);
	return 0;
}
