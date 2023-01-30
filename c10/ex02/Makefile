# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llevasse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/19 14:44:34 by llevasse          #+#    #+#              #
#    Updated: 2022/08/20 08:45:33 by llevasse         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

all:
ifneq (, $(wildcard ft_tail))

else
	gcc -Wall -Wextra -Werror ft_tail.c ft_atoi.c -o ft_tail
endif

clean:
ifneq (, $(wildcard *.o))
	rm *.o
endif

fclean: clean
ifneq (, $(wildcard ft_tail))
	rm ft_tail
endif
