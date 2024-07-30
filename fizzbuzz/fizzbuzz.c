/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:19:23 by davgalle          #+#    #+#             */
/*   Updated: 2024/07/30 11:34:46 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	main()
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5  == 0)
			printf("fizzbuzz");
		else if (i % 3 == 0)
			printf("fizz");
		else if (i % 5 == 0)
			printf("buzz");
		else
			printf("%d", i);
		printf("\n");
		i++;
	}
}
