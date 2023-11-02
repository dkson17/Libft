/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:19:02 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/19 16:33:24 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL)
		return ;
	if (new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int main(void)
{
	t_list *head = NULL;
	    char *new_content = "New Node";
	    t_list *new_node = (t_list *)malloc(sizeof(t_list));
	    new_node->content = new_content;
	    new_node->next = NULL;
	    ft_lstadd_front(&head, new_node);
	    char *first_content = "First";
	    t_list *first_node = (t_list *)malloc(sizeof(t_list));
	    first_node->content = first_content;
	    first_node->next = NULL;
	    ft_lstadd_front(&head, first_node);
	    t_list *current = head;
	    while (current != NULL)
	    {
		printf("%s\n", (char *)current->content);
		current = current->next;
	    }
	    free(new_node);
	    free(first_node);

	    return 0;
}*/
