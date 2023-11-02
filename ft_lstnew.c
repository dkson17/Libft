/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:03:36 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/19 16:17:16 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*int main(void)
{
	char *content = "Hello world!";
	t_list *new_node = ft_lstnew(content);

	if (new_node == NULL)
	{
		printf("Failed to create a new node.\n");
		return 1;
	}
	printf("Content of the new node: %s\n", (char *)new_node->content);
	free(new_node);
	return 0;
}*/
