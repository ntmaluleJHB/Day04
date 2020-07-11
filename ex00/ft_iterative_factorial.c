/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntmalule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 15:11:24 by ntmalule          #+#    #+#             */
/*   Updated: 2020/07/11 15:42:19 by ntmalule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_iterative_factorial(int nb)
{
	int ans;
	ans = nb;
	if(nb < 1)
	{
		return(0);
	}
	else
	{
		nb--;
		while (nb >=1 )
		{
			ans = ans * (nb);
			nb--;	
		}
	}
	printf("answ %d", ans);
	return(ans);
}
