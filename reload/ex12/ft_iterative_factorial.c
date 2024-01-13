/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genavasa <genavasa@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:15:19 by genavasa          #+#    #+#             */
/*   Updated: 2024/01/13 17:56:47 by genavasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;
	int	i;

	fac = 1;
	i = 1;
	if (nb > 12)
	{
		return (0);
	}
	while (i <= nb)
	{
		fac = fac * i;
		i++;
	}
	return (fac);
}
