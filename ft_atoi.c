/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:39:50 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/09 09:55:23 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	int		result;

	result = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			sign = -sign;
	}
	while (*str >= 48 && *str <= 57)
	{
		result = result * 10 + (*str++ - 48);
	}
	return (sign * result);
}

/*int	main()
{
	char *s = " \n \t-1234";
	char *c = "--1234";
	char d[] = "12345";
    char j[] = "  +42";
    char k[] = "hello123";
    char l[] = "-91987659978896796";

	printf("%d\n%d\n", ft_atoi(s), atoi(s));
	printf("%d\n%d\n", ft_atoi(c), atoi(c));
	printf("%d\n%d\n", ft_atoi(d), atoi(d));
	printf("%d\n%d\n", ft_atoi(j), atoi(j));
	printf("%d\n%d\n", ft_atoi(k), atoi(k));
	printf("%d\n%d\n", ft_atoi(l), atoi(l));
}*/
