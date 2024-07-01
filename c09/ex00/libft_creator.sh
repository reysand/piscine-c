# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/01 10:48:45 by fhelena           #+#    #+#              #
#    Updated: 2024/07/01 10:48:46 by fhelena          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

clang -c ft_putchar.c
clang -c ft_swap.c
clang -c ft_putstr.c
clang -c ft_strlen.c
clang -c ft_strcmp.c

ar rcvs libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
