/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:48:08 by wkoela            #+#    #+#             */
/*   Updated: 2020/07/09 15:04:05 by wkoela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){
		write(1 ,&c, 1);
}
void ft_print_numbers(void) {
		int c;
		c = '0';
			while(c <= '9'){
				ft_putchar(c);
				c++;
			}

}

