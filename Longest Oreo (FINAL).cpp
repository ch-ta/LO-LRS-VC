#include <iostream>
#include <string>
#include <list>
#include <vector>
#include "timer.h"

using namespace std;

string longest_oreo(string);

int main()
{
	string s = "RNKyeacPFnLjIOfTSyXvQyjIXEIzoGapTBQtIlQWXdkyOQCEDrdrqeeVuXdMsNwVwxOQOTzgtgVJktofSKesmacwfgppnplOFfbhGBAIugGFCofWHmXcfTfWNJQzuokJMvmYHtmGELFchhyWgUBOHaUdEQOzbJBtDpGIYRWIWwUBqnhXsYKPWSpTOWGjzWGjKXmioeRBUvUOgQzfaQIdMaKYdsCcHkPVHgdgFrrTyAREOpIHnVqGINcqeXyFzkOKPxfqOJqeXJIsMfqLMqQhaWyJHWMyoNDJgBTfQyUMPOfBzePTNwxuVvvyrgxzrKjpZjxSPricYnohPxhDmnxeQuLKroMvxJPgtxPmGRcXcWduFqhzGHlauQbmgIPBNIUrYJcasxyTdFXGwEtTYzyIZjCCQHzKHAHrVvPuxfoKLjswSjDaxIassfWQsMAEqtraNMdlfDiKxztGneWHjinMMkOEWhXNSuasIOXVLjqtQGKJgPvhcbwabvKhEqdxSVLzNIkZHQcaAseZxpMvyPBbHVEKOwZRAXXgFIpzrxTRVEUBYNvJTzqBLWbWWktmZpKUeZLqaauMASmdvsJpWipMbaIHdprnQfrLZLEigcOJmJLAfzEGrFkfTtEooDAINkFXWRqKyjxgUxenXiNiXGERoFvAYzLVoWFzCZbrcEzNBQbHpxCJRwfmtwcOXVeOoOXEUPqsyMNfOdZOCpxUafQyaFQgQZMeVXYsEUWKnSNLTLzTEqQEZLLBTCwJZwGhuBEwOUruiLFIrAoDhhGIdyfPfLzyBizlXtQI";
	Timer timer_;

	cout << "Original String: " << s << endl;

	timer_.reset();
	cout << "The \"Longest Oreo\" substring: " << longest_oreo(s) << endl;
	double time = timer_.elapsed();
	cout << "Time: " << time << " seconds" << endl;

	return 0;
}

string longest_oreo(string s) {
	/* String cannot be empty. */
	if (s.empty())
		return "";

	string longestOreo = "";
	int maxLen = 0;
	int start = 0;
	int end = 0;

	for (int i = 0; i < s.length(); i++) {
		// Pick ending point 
		for (int j = i; j < s.length(); j++) {
			if (s[i] == s[j] && (j - i + 1) > maxLen) {
				maxLen = j - i + 1;
				start = i;
				end = j;
			}

		}
	}

	for (int i = end; i >= start; i--)
		longestOreo.push_back(s[i]);

	return longestOreo;
}