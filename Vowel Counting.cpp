#include <iostream>
#include <string>
#include "timer.h"

using namespace std;

unsigned vowel_counting(string);
bool isVowel(char);

int main()
{
	string s = "RNKyeacPFnLjIOfTSyXvQyjIXEIzoGapTBQtIlQWXdkyOQCEDrdrqeeVuXdMsNwVwxOQOTzgtgVJktofSKesmacwfgppnplOFfbhGBAIugGFCofWHmXcfTfWNJQzuokJMvmYHtmGELFchhyWgUBOHaUdEQOzbJBtDpGIYRWIWwUBqnhXsYKPWSpTOWGjzWGjKXmioeRBUvUOgQzfaQIdMaKYdsCcHkPVHgdgFrrTyAREOpIHnVqGINcqeXyFzkOKPxfqOJqeXJIsMfqLMqQhaWyJHWMyoNDJgBTfQyUMPOfBzePTNwxuVvvyrgxzrKjpZjxSPricYnohPxhDmnxeQuLKroMvxJPgtxPmGRcXcWduFqhzGHlauQbmgIPBNIUrYJcasxyTdFXGwEtTYzyIZjCCQHzKHAHrVvPuxfoKLjswSjDaxIassfWQsMAEqtraNMdlfDiKxztGneWHjinMMkOEWhXNSuasIOXVLjqtQGKJgPvhcbwabvKhEqdxSVLzNIkZHQcaAseZxpMvyPBbHVEKOwZRAXXgFIpzrxTRVEUBYNvJTzqBLWbWWktmZpKUeZLqaauMASmdvsJpWipMbaIHdprnQfrLZLEigcOJmJLAfzEGrFkfTtEooDAINkFXWRqKyjxgUxenXiNiXGERoFvAYzLVoWFzCZbrcEzNBQbHpxCJRwfmtwcOXVeOoOXEUPqsyMNfOdZOCpxUafQyaFQgQZMeVXYsEUWKnSNLTLzTEqQEZLLBTCwJZwGhuBEwOUruiLFIrAoDhhGIdyfPfLzyBizlXtQI";
	Timer timer_;

	cout << "String in question: " << s << endl;

	timer_.reset();
	cout << "The number of vowel(s) in the string is " << vowel_counting(s) << "." << endl;
	double time = timer_.elapsed();
	cout << "Time: " << time << " seconds" << endl;

	return 0;
}

unsigned vowel_counting(string s) {
	unsigned vowel_count = 0;
	for (int i = 0; i < s.length(); i++) {
		if (isVowel(s[i]))
			vowel_count++;
	}
	return vowel_count;
}

bool isVowel(char c) {
	switch (c) {
	/* Letter 'A' */
	case 65: 
		return true;
	/* Letter 'E' */
	case 69:
		return true;
	/* Letter 'I' */
	case 73:
		return true;
	/* Letter 'O' */
	case 79:
		return true;
	/* Letter 'U' */
	case 85:
		return true;
	/* Letter 'a' */
	case 97:
		return true;
	/* Letter 'e' */
	case 101:
		return true;
	/* Letter 'i' */
	case 105:
		return true;
	/* Letter 'o' */
	case 111:
		return true;
	/* Letter 'u' */
	case 117:
		return true;
	/* Consonant Letters & Punctuations */
	default:
		return false;
	}
}