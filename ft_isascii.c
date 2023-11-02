/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:16:56 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/08 10:25:48 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*int main()
{
	char a = 0;
	char b = 57;
	char c = '\xE9';
	printf("%d\n%d\n%d\n", ft_isascii(a), ft_isascii(b), ft_isascii(c));
}*/
