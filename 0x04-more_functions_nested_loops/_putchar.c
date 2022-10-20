#include <unistd.h>
#include "main.h"

**/
 * _putchar -write charctar to stdout
 * @c: the charctar to print
 * Return: on succeses 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
