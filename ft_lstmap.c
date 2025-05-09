/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatsuya < skatsuya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 06:47:23 by skatsuya          #+#    #+#             */
/*   Updated: 2025/05/07 07:12:26 by skatsuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	if (!lst || !f || !del)
		return (NULL);
	t_list *new_list;
	*new_list = NULL;
	while ()

}
