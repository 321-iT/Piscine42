# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    generate.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/21 17:49:00 by ascotto-          #+#    #+#              #
#    Updated: 2021/09/23 17:17:21 by ascotto-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

for i in {1..500}
do
        rm -rf /maps/test* && ./perl_generator.pl 100 100 55 > maps/test_map${i}
done
