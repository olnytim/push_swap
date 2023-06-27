NAME 		=	push_swap
#
LIBFT_PATH 	=	libft
LIBFTA 		=	$(LIBFT_PATH)/libft.a
PREF_S 		=	src
PREF_OBJ 	=	obj
#
HF_DIR 		=	hf
HEADER 		=	-I$(HF_DIR)
#
SRCS 		=	$(addprefix $(PREF_S)/, push_swap.c parse.c stack.c checker.c sp_commands.c r_commands.c rr_commands.c useful.c sorting.c)
OBJS 		=	$(patsubst $(PREF_S)/%.c, $(PREF_OBJ)/%.o, $(SRCS))
DEPS 		=	$(OBJS:.o=.d)
#
CC 			=	cc
FLAGS 		=	-Wall -Werror -Wextra
FSANITIZE 	=	-fsanitize=address -g3
#
all:	$(NAME)
#
$(NAME):	$(OBJS) $(LIBFTA)
			@$(CC) $(FLAGS) $(OBJS) $(LIBFTA) -o $@
			@echo "Executable file $(NAME) created successfully!"
#
$(PREF_OBJ)/%.o:	$(PREF_S)/%.c Makefile
			@mkdir -p $(PREF_OBJ)
			@$(CC) $(FLAGS) $(HEADER) -MMD -c $< -o $@
#
$(LIBFTA):
			@make -C $(LIBFT_PATH)
#
-include $(DEPS)
#
clean:
			@rm -rf $(PREF_OBJ)
			@$(MAKE) -C $(LIBFT_PATH) clean
#
fclean:		clean
			@rm -f $(NAME)
			@rm -f $(LIBFTA)
#
re:			fclean all
#
.PHONY :	all clean fclean re
