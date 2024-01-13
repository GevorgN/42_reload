/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gevorg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:06:48 by gevorg            #+#    #+#             */
/*   Updated: 2024/01/13 20:03:41 by genavasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n > 0)
	{
		ft_putchar("P");
	}
	else
	{
		ft_putchar("N");
	}
}
/*
int	main(void)
{
	int i = 0;
	ft_is_negative(i);
}*/
