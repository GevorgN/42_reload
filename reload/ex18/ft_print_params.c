/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genavasa <genavasa@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:02:11 by genavasa          #+#    #+#             */
/*   Updated: 2024/01/13 19:22:41 by genavasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argv, char *argc[])
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	if (argv >= 1)
	{
		while (i < argv)
		{
			while (argc[i][j] != '\0')
			{
				ft_putchar(argc[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
			j = 0;
		}
	}
	return (0);
}
