/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_env.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:15:10 by otitebah          #+#    #+#             */
/*   Updated: 2023/06/23 03:38:13 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "execution.h"

t_list	*create_node(char *value)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	node->value = ft_strdup(value);
	node->next = NULL;
	return (node);
}

void	add_node(t_list **head, t_list *new_node)
{
	while ((*head)->next)
		(*head) = (*head)->next;
	(*head)->next = new_node;
}

t_list	*get_env(char **env)
{
	t_list	*head;
	t_list	*temp;
	int		x;

	x = 0;
	if (env == NULL || *env == NULL)
		return (env_i(&head));
	x = 0;
	head = create_node(env[x]);
	x = 1;
	temp = head;
	while (env[x])
	{
		add_node(&head, create_node(env[x]));
		x++;
	}
	head = temp;
	return (head);
}

t_list	*get_expo(char **env)
{
	t_list	*head;
	t_list	*temp;
	int		x;

	x = 0;
	if (env == NULL || *env == NULL)
		return (env_i(&head));
	x = 0;
	head = create_node(env[x]);
	x = 1;
	temp = head;
	while (env[x])
	{
		add_node(&head, create_node(env[x]));
		x++;
	}
	head = temp;
	return (head);
}
