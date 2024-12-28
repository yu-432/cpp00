# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/27 21:03:57 by yooshima          #+#    #+#              #
#    Updated: 2024/12/28 13:57:50 by yooshima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook
CPP			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS		= main.cpp contact.cpp phonebook.cpp
OBJS		= $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all