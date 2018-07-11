#pragma once
#include <iostream>

class Solution
{
public:
	Solution();
	virtual ~Solution();
};

/// <summary> Multiples of 3 and 5
/// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
/// Find the sum of all the multiples of 3 or 5 below 1000.
/// </summary>
class Solution001 : public Solution
{
public: 
	Solution001(const unsigned& max);
	virtual ~Solution001(); 
};

/// <summary> Even Fibonacci numbers
/// Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms 
/// will be:
/// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
/// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
/// </summary>
class Solution002 : public Solution
{
public:
	Solution002(const unsigned& max);
	virtual ~Solution002();
};

/// <summary> Largest prime factor
/// The prime factors of 13195 are 5, 7, 13 and 29.
/// What is the largest prime factor of the number 600851475143 ?
/// </summary>
class Solution003 : public Solution
{
public:
	Solution003();
	virtual ~Solution003();
};