#include <iostream>
class Interest {
    public:
        // Constructor with dynamic initialization for integer 'rate'
        Interest(int principal, int year, int rate)
            : principal(principal), year(year), rate(static_cast<float>(rate)) {
            calculate_simple_interest();
        }
        // Constructor with dynamic initialization for float 'rate'
        Interest(int principal, int year, float rate = 2.5)
            : principal(principal), year(year), rate(rate) {
            calculate_simple_interest();
        }
        // Function to calculate simple interest
        void calculate_simple_interest() {
            simple_interest = (principal * year * rate) / 100;
        }
        // Function to display the calculated simple interest
        void display_simple_interest() {
            std::cout << "Simple Interest: " << simple_interest << std::endl;
        }
    private:
        int principal;
        int year;
        float rate;
        float simple_interest;
};
int main() {
    Interest interest1(1000, 2, 3); // Integer rate
    interest1.display_simple_interest();
    Interest interest2(2000, 3); // Default float rate (2.5)
    interest2.display_simple_interest();
    Interest interest3(3000, 4, 4.5f); // Float rate
    interest3.display_simple_interest();
    return 0;
}
