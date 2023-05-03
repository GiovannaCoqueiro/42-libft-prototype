/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:04:39 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/05/03 14:04:40 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t	len;

	len = nmemb * size;
	if (nmemb != len / size)
		return (NULL);
	arr = malloc(len);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, len);
	return (arr);
}
