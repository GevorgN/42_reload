/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genavasa <genavasa@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 19:06:10 by genavasa          #+#    #+#             */
/*   Updated: 2023/10/19 18:36:00 by genavasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print(int x, char left_symbol, char middle_symbol, char right_symbol);

void	rush(int x, int y)
{
	int	current_symbol_position;

	current_symbol_position = 1;
	if (x >= 1 && y >= 1)
	{
		while (current_symbol_position <= y)
		{
			if (current_symbol_position == 1)
			{
				print(x, '/', '*', '\\');
			}
			else if (current_symbol_position == y)
			{
				print(x, '\\', '*', '/');
			}
			else
			{
				print(x, '*', ' ', '*');
			}	
			current_symbol_position++;
		}
	}
}

void	print(int x, char left_symbol, char middle_symbol, char right_symbol)
{
	int	current_position;	

	current_position = 1;
	while (current_position <= x)
	{
		if (current_position == 1)
		{
			ft_putchar(left_symbol);
		}
		else if (current_position == x)
		{
			ft_putchar(right_symbol);
		}
		else
		{
			ft_putchar(middle_symbol);
		}
		current_position++;
	}	
	ft_putchar('\n');
}
