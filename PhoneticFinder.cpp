#include <iostream>
#include"string"
#include "PhoneticFinder.hpp"
#include <stdexcept>
using namespace phonetic;
using namespace std;
namespace phonetic{
string find(string text,string word){
size_t i,bw,ew,z;
i=0;
			while((word[i]==' ')&&(i<word.size())){
			i++;
					}
 if(i==word.size()) {
throw runtime_error("The word " + word + " is not in the text");
}
			bw=i;
			while((word[i]!=' ')&&(i<word.size())){
			i++;
				}
		ew=i-1;
		z=bw;
std::string s;
s="";

		for(i=0;i<text.size();i++){
if((text[i]!=' ')&&(sameL(text[i],word[z]))&&(z<=ew)) {
			z++;
s=s+text[i];
     		    }else{
       			       z=bw;
                s="";
     			} 
if ((z==ew+1)&&((i==text.size()-1)||((i+1<text.size())&&(text[i+1]==' ')))){
return s;
                   }



}
 throw runtime_error(word+"is not a full word in the sentence");
return "Did not find the word '"+word+"' in the text";
}
}
bool sameL(char a,char b){
if((b==a-32)||(b==a+32)||(b==a)) return true;
if(((a=='v')||(a=='w')||(a=='V')||(a=='W'))&&((b=='v')||(b=='w')||(b=='V')||(b=='W')))return true;
if(((a=='b')||(a=='f')||(a=='p')||(a=='B')||(a=='F')||(a=='P'))&&((b=='b')||(b=='f')||(b=='p')||(b=='B')||(b=='F')||(b=='P')))return true;
if(((a=='g')||(a=='j')||(a=='G')||(a=='J'))&&((b=='g')||(b=='j')||(b=='G')||(b=='J')))return true;
if(((a=='c')||(a=='k')||(a=='q')||(a=='C')||(a=='K')||(a=='Q'))&&((b=='c')||(b=='k')||(b=='q')||(b=='C')||(b=='K')||(b=='Q')))return true;
if(((a=='s')||(a=='z')||(a=='S')||(a=='Z'))&&((b=='s')||(b=='z')||(b=='S')||(b=='Z')))return true;
if(((a=='d')||(a=='t')||(a=='D')||(a=='T'))&&((b=='d')||(b=='t')||(b=='D')||(b=='T')))return true;
if(((a=='o')||(a=='u')||(a=='O')||(a=='U'))&&((b=='o')||(b=='u')||(b=='O')||(b=='U')))return true;
if(((a=='i')||(a=='y')||(a=='I')||(a=='Y'))&&((b=='i')||(b=='y')||(b=='I')||(b=='Y')))return true;
return false;
}
