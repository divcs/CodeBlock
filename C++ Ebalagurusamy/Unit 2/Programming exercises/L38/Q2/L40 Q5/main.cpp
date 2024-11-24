// using algorithm remove_copy_if

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if a number is composite
bool isComposite(int num)
{
 if (num <= 1)
  return false; // Numbers <= 1 are not composite
 for (int i = 2; i * i <= num; ++i)
 {
  if (num % i == 0)
   return true; // Composite if divisible by another number
 }
 return false; // Not composite
}

// Function to filter out non-composite numbers
bool filterNonComposite(int num)
{
 return !isComposite(num); // Returns true if the number is not composite
}

int main()
{
 int n;
 cin >> n;

 // Validate n
 if (n < 1 || n > 15)
 {
  cout << "-1";
  return 0;
 }

 vector<int> numbers(n);
 for (int i = 0; i < n; ++i)
 {
  cin >> numbers[i];
 }

 vector<int> compositeNumbers;

 // Use remove_copy_if to collect composite numbers
 remove_copy_if(numbers.begin(), numbers.end(), back_inserter(compositeNumbers), filterNonComposite);

 // Output the composite numbers
 cout << "Composite numbers: ";
 for (int num : compositeNumbers)
 {
  cout << num << " ";
 }
 cout << endl;

 return 0;
}
