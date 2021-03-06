#include "stdafx.h"
#include "RepeatedString.h"

// elegant approach using STL and lambdas
unsigned long long  repeatedStringElegant(string s, unsigned long long n) {
	auto is_a = [](char letter) { return letter == 'a'; };

	unsigned long long count = (count_if(begin(s), end(s), is_a)) * (n / s.size());

	int more_letters_to_check = n % s.size();

	return count += count_if(begin(s), begin(s) + more_letters_to_check, is_a);

}

//for loop old approach
unsigned long long  repeatedStringOldSchool(string s, unsigned long long n) {
	long long count = 0;
	for (int i = 0; i < s.length(); i++)
		if (s[i] == 'a')
			count++;

	if (n > s.length()) {
		count = count*(n / s.length());
		n = n%s.length();
	}

	for (int i = 0; i < n; i++)
		if (s[i] == 'a')
			count++;

	return count;
}


