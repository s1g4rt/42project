/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparbhoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 19:47:42 by dparbhoo          #+#    #+#             */
/*   Updated: 2015/12/11 20:03:18 by dparbhoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int result;
	int index;
	result = 0;
	index = 0;
	if (str[index] == '-')
	{
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		reslut = result * 10 + (str[index] - '0');
		index++;
	}
	if (str[0] = '-')
	{
		return (-result);
	}
	return (result);
}
