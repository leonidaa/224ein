/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:54:40 by aganea            #+#    #+#             */
/*   Updated: 2024/07/17 21:10:44 by aganea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void);
void	ft_print_numbers(void)
{
		char c;
		//int i;

		c='0';
		while(c<='9')
		{
				write(1,&c,1);
				//write(1," ",1);
				c++;
		}
}
/*
int	main(void)
{
		ft_print_numbers();
		return(0);
}
*/


