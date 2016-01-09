/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparbhoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 18:40:09 by dparbhoo          #+#    #+#             */
/*   Updated: 2016/01/09 19:01:00 by dparbhoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	 *ft_strcpy(char *s1,const char *s2)
{
	size_t n;

	n = 0;
	while(s2[n] != '\0')
	{	
		s1[n] = s2[n];
		n++;
	}
	s1[n] = '\0';
	return(s1);
}
