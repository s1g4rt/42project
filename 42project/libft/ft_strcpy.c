/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparbhoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 18:40:09 by dparbhoo          #+#    #+#             */
/*   Updated: 2016/01/14 15:58:03 by dparbhoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	 *ft_strcpy(char *dest,const char *src)
{
	int i;

	i = 0;
	while(src[i] != '\0')
	{	
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}