/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:29:25 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/22 12:37:38 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

/*void deleteContent(void *content)
{
    char *str = (char *)content;
    free(str);
}

int main(void)
{
    t_list *node = (t_list *)malloc(sizeof(t_list));
    node->content = malloc(sizeof(char) * 10);
    strcpy(node->content, "Example");
    node->next = NULL;

    ft_lstdelone(node, deleteContent);
}*/
