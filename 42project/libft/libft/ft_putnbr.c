/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparbhoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 14:40:54 by dparbhoo          #+#    #+#             */
/*   Updated: 2016/01/14 14:46:11 by dparbhoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int power;

	power = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	while (power <= n)
	{
		power = power * 10;
	}
	while (power >= 1)
	{
		ft_putchar(n / power + 48);
		n = n % power;
		power = power / 10;
	}
}
