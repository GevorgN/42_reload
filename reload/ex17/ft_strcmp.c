/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genavasa <genavasa@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:47:20 by genavasa          #+#    #+#             */
/*   Updated: 2024/01/13 19:01:04 by genavasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (flag == 0)
	{
		if (s1[i] > s2[i])
		{
			flag = 1;
		}
		else if (s1[i] < s2[i])
		{
			flag = -1;
		}
		if (s1[i] != '\0')
		{
			break ;
		}
		i++;
	}
	return (flag);
}
