#include <iostream>
#include <vector>

/* This was written by Charles Thomas Wallace Truscott for github.com/ctwtruscottwatters */
/* 7th of December 2021 */

int odd_numbers [30];
int even_numbers [30];
double even_odd_context_one [30];
double even_odd_context_two [30];
int main(void) {
	std::cout << "\n\n";
	std::cout << "\t" << "Authored by Charles T.W. Truscott Watters as a simple practical exercise\t7/12/2021\n\n";
	std::cout << "\t" << "Even and Odd Numbers and their decimal halves (via Mathematical Proof)\n\n";
	for(int i = 1; i <= 30; ++i) {
		even_numbers[i] = 2 * i;
		odd_numbers[i] = 2 * i + 1;
		even_odd_context_one[i] = (double) i;
		even_odd_context_two[i] = (double) i + 0.5;
	}
	for(int j = 1; j <= 30; ++j) {
		std::cout << "\t" << "Even Numbers |" << "\t" << "Odd Numbers |" << "\t" << "1/2 * (2n) |" << "\t" << "1/2 * (2n + 1)" << "  |" << std::endl;
		std::cout << "\t" << "----------------------------------------------------------------\n";
		std::cout << "\t" << even_numbers[j] << "\t\t" << odd_numbers[j] << "\t\t" << even_odd_context_one [j] << "\t\t" << (double) even_odd_context_two[j] << "\t\t|"<< std::endl;
		std::cout << "\t" << "----------------------------------------------------------------\n";

	}
	std::cout << "\n\n";
	std::cout << "\t" << "Authored by Charles T.W. Truscott Watters as a simple practical exercise\t7/12/2021\n\n";
	return 0;
}