/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:26:11 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/08 10:35:06 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int main()
{
	char a = 32;
	char b = 57;
	char c = 9;
	printf("%d\n%d\n%d\n", ft_isprint(a), ft_isprint(b), ft_isprint(c));
}*/
