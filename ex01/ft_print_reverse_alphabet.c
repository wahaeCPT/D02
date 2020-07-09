/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 13:46:59 by wkoela            #+#    #+#             */
/*   Updated: 2020/07/09 14:38:22 by wkoela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){
		write(1 ,&c, 1);
}
void ft_print_reverse_alphabet(void){
		int c;
		c= 'z';
		while (c >= 'a'){
				ft_putchar(c);
			c--;
		
	}		
}

