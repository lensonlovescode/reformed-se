#include <main.h>
#include <stdio.h>
#include <stdlib.h>
/* main: this is the main function
 * argc: this is the number of arguments
 * argv: this are the arguments
 *
 *
 */
int main(){

	struct Employee employees[5] = {
		{"mutugi", 100000, 2023}
		{"papu", 105000, 2022}
		{"alvis", 110000, 2021}
		{"shirleen",115000, 2020}
		{"travis", 120000, 2021}
	};

	int sal;
	int j;
	int i;
	j = 1;
	i = 0;

	while (i < 5)
	{
		sal = employees[i].salary;

		if (employees[j].salary > sal)
		{
			j++;
			sal = employees[i].salary;
		}
		i++;
	}

	printf("sal");

	return (sal);
}	
