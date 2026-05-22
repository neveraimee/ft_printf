#include "ft_printf.h"

int ft_printf_str(char *str);
int ft_printf_hex(unsigned long nbr, char format);
int ft_printf_ptr(void *ptr)
{
	int count;

	write(1, "0x", 2);
	count = ft_printf_hex((unsigned long)ptr, 'x');
	return (count + 2);
}

// #include <stdio.h>
// int main (void)
// {
// 	int x;
// 	void *ptr;

// 	ptr = &x;
// 	int ft = ft_printf("char: %p\n", ptr);
//  	int og = printf("char: %p\n", ptr);
//  	printf("ft: %d | og: %d\n", ft, og);

// 	ft = ft_printf("%p\n", NULL);
// 	og = printf("%p\n", NULL);

// 	ft_printf(" %p %p ", (void *)0, (void *)0);
// 	printf(" %p %p ", (void *)0, (void *)0);
// }
// #include <stdio.h>
// #include <limits.h>

// int main(void)
// {
//     printf("og: ");
//     printf(" %p %p ", (void *)LONG_MIN, (void *)LONG_MAX);
//     printf("\n");
//     printf("ft: ");
//     ft_printf(" %p %p ", (void *)LONG_MIN, (void *)LONG_MAX);
//     printf("\n\n");

//     printf("og: ");
//     printf(" %p %p ", (void *)ULONG_MAX, (void *)-ULONG_MAX);
//     printf("\n");
//     printf("ft: ");
//     ft_printf(" %p %p ", (void *)ULONG_MAX, (void *)-ULONG_MAX);
//     printf("\n\n");
// }
// #include <stdio.h>
// #include <limits.h>
// int main(void)
// {
//     printf(" %p ", (void *)LONG_MAX);
//     printf("\n");
//     ft_printf(" %p ", (void *)LONG_MAX);
//     printf("\n");
// }

// #include <stdio.h>

// int main()
// {
// 	ft_printf("%p %p", 0, 0);
// 	char *str = "hi";
// 	printf(" %p %p", 0, 0);
// }