NAME		=	push_swap
BNAME		=	checker
SRC_DIR		=	src/
OBJ_DIR		=	obj/
BONUS_DIR	=	bonus/
LIBFT		=	libft
PRINTF		=	libft/ft_printf
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -g
RM			=	rm -f

PSW_DIR 	=	push_swap/
MAND_FILES	=	push_swap quicksort sortage
COMM_DIR	=	common/
COMM_FILES	=	push_moves rev_rot_moves rotation_moves swap_moves utils
BONUS_FILES	=	checker bonus_utils

SRC_FILES	=	$(addprefix $(PSW_DIR), $(MAND_FILES))
COM_FILES	=	$(addprefix $(COMM_DIR), $(COMM_FILES))
SRC_BFILES	=	$(addprefix $(BONUS_DIR), $(BONUS_FILES))

SRC			=	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ			=	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

COMMON		=	$(addprefix $(SRC_DIR), $(addsuffix .c, $(COM_FILES)))
COBJ		=	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(COM_FILES)))

BSRC		=	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_BFILES)))
BOBJ		=	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_BFILES)))

OBJF		=	.cache_exists

all:			$(NAME)

$(NAME):		$(OBJ) $(COBJ) $(OBJF)
				@make -C $(LIBFT)
				@cp libft/libft.a .
				@make -C $(PRINTF)
				@cp libft/ft_printf/libftprintf.a .
				@$(CC) $(CFLAGS) $(OBJ) $(COBJ) libft.a libftprintf.a -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(OBJF)
				@$(CC) $(CFLAGS) -c $< -o $@

$(OBJF):
				@mkdir -p $(OBJ_DIR)
				@mkdir -p $(OBJ_DIR)$(PSW_DIR)
				@mkdir -p $(OBJ_DIR)$(COMM_DIR)
				@mkdir -p $(OBJ_DIR)$(BONUS_DIR)
				@touch $(OBJF)

bonus:			$(BNAME)

$(BNAME):		$(BOBJ) $(COBJ) $(OBJF)
				@make -C $(LIBFT)
				@cp libft/libft.a .
				@make -C $(PRINTF)
				@cp libft/ft_printf/libftprintf.a .
				@$(CC) $(CFLAGS) $(BOBJ) $(COBJ) libft.a libftprintf.a -o $(BNAME)
clean:
				@$(RM) -r $(OBJ_DIR)
				@make clean -C $(LIBFT)
				@make clean -C $(PRINTF)
				@$(RM) $(OBJF)

fclean:			clean
				@$(RM) $(NAME)
				@$(RM) libft.a
				@$(RM) $(LIBFT)/libft.a
				@$(RM) libftprintf.a
				@$(RM) $(LIBFT)/ft_printf/libftprintf.a
				@rm -rf *.dSYM
				@find . -name ".DS_Store" -delete

re:				fclean all

.PHONY:			all clean fclean re
