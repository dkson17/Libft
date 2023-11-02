# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 16:09:40 by dakataso          #+#    #+#              #
#    Updated: 2023/05/11 12:02:20 by dakataso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			ft_atoi.c ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c ft_strjoin.c ft_strtrim.c \
			ft_itoa.c ft_striteri.c ft_strmapi.c ft_split.c \
			 
BONSRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \

OBJS	= $(SRCS:%.c=%.o)
BONOBJS = $(BONSRCS:%.c=%.o)
HEADER := libft.h
CFLAGS	= -Wall -Wextra -Werror
ARFLAGS := rcs


$(NAME): $(OBJS) $(HEADER)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	
all:	$(NAME) bonus
		
bonus: $(BONOBJS) $(HEADER)
	$(AR) $(ARFLAGS) $(NAME) $(BONOBJS)

clean:
		$(RM) $(OBJS) 
		$(RM) $(BONOBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all bonus clean fclean re
