/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:36:43 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/16 14:37:18 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*handle_min_int(void)
{
	char	*min_str;

	min_str = ft_strdup("-2147483648");
	if (!min_str)
		return (NULL);
	return (min_str);
}

char	*ft_itoa(int n)
{
	int		nlen;
	char	*str;
	int		sign;

	if (n == INT_MIN)
		return (handle_min_int());
	nlen = num_len(n);
	str = (char *)malloc((nlen + 1) * sizeof(char));
	if (n == 0)
		str[0] = '0';
	if (!str)
		return (NULL);
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		str[0] = '-';
	}
	str[nlen] = '\0';
	while (n != 0)
	{
		str[--nlen] = '0' + (n % 10) * sign;
		n = n / 10;
	}
	return (str);
}

/*int	main()
{
	int a = -13977753;
	int b = 38741;
	int c = 2147483647;
	int d = -2147483648;
	char *s1 = ft_itoa(a);
	char *s2 = ft_itoa(b);
	char *s3 = ft_itoa(c);
	char *s4 = ft_itoa(d);
	printf("%s\n%s\n%s\n%s\n", s1, s2, s3, s4);
	free(s1);
	free(s2);
	free(s3);
	free(s4);
}*/
