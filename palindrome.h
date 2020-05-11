#ifndef PALINDROME_H_INCLUDED
#define PALINDROME_H_INCLUDED
bool isPalindrome(const std::string & text)
{
    std::string reverseString = text;
    std::reverse(reverseString.begin(),reverseString.end());
    return( reverseString == text) ? true : false;
}
#endif // PALINDROME_H_INCLUDED
