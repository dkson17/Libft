/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:55:21 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/08 11:00:43 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*#include <string.h>

int main() {
    char str[50] = "Hello, world!";
    printf("Original string: %s\n", str);
    
    // Clear the string using memset
    ft_bzero(str, sizeof(str));
    printf("Modified string: %s\n", str);

    return 0;
}*/
