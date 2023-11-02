/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:43:25 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/08 10:16:24 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*int	main()
{
	char a = 'a';
	char b = '1';
	char c = ',';
	printf("%d\n%d\n%d\n", ft_isalnum(a), ft_isalnum(b), ft_isalnum(c));
}*/
