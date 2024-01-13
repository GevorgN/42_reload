/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genavasa <genavasa@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:57:28 by genavasa          #+#    #+#             */
/*   Updated: 2024/01/13 18:15:47 by genavasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	num;

	num = 1;
	if (nb == 0)
	{
		return (0);
	}
	while (num * num < nb)
	{
		if (num == 46341)
		{
			return (0);
		}
		num++;
	}
	if (num * num == nb)
	{
		return (num);
	}
	return (0);
}
