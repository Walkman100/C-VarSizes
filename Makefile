# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarter <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/12 13:33:41 by mcarter           #+#    #+#              #
#    Updated: 2019/07/12 13:59:39 by mcarter          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCCFLAGS = -Wall -Wextra -Werror
NAME = VarSizes
OFILES = bin/put.o bin/len.o bin/pad.o bin/main.o
HFILE = src/VarSizes.h

all: $(NAME)

$(NAME): $(OFILES) $(HFILE) bin
	gcc $(GCCFLAGS) $(OFILES) -o $(NAME)

clean:
	rm -rf bin/
	rm -f $(NAME)

re: fclean all

bin/put.o: src/put.c $(HFILE) bin
	gcc $(GCCFLAGS) -c src/put.c -o bin/put.o

bin/len.o: src/len.c $(HFILE) bin
	gcc $(GCCFLAGS) -c src/len.c -o bin/len.o

bin/pad.o: src/pad.c $(HFILE) bin
	gcc $(GCCFLAGS) -c src/pad.c -o bin/pad.o

bin/main.o: src/main.c $(HFILE) bin
	gcc $(GCCFLAGS) -c src/main.c -o bin/main.o

bin:
	mkdir bin