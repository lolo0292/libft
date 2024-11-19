/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleichtn <lleichtn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:55:02 by lleichtn          #+#    #+#             */
/*   Updated: 2024/11/19 18:43:12 by lleichtn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *r;

	r = malloc(sizeof(t_list));
	if (!r)
		return(NULL);
	r->content = content;
	r->next = NULL;
	return (r);
}