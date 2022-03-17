#include "main.h"
/**
 * _isdigit - checkes for digit 0 through 9
 * @c: the char to be checked
 * Return: 1 if c is digit, otherwise 0
 */

int _isdigit(int c)
{

  return (((c > 47 && c < 58)) ? 1 : 0);
}

