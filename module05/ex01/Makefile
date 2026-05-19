NAME = $(BINDIR)/Bureaucrat

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

BINDIR = bin
OBJDIR = .objs

SRCS =	main.cpp		\
		Bureaucrat.hpp	\
		Bureaucrat.cpp	\
		Form.hpp		\
		Form.cpp

OBJS = $(SRCS:%.cpp=$(OBJDIR)/%.o)

GREEN = \033[0;32m
YELLOW = \033[0;33m
NC = \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@mkdir -p $(BINDIR)
	@$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@printf "$(GREEN)🎉 Executable $(NAME) successfully created!$(NC)\n"

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	@$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	@if [ -d "$(OBJDIR)" ] && $(RM) "$(OBJDIR)"; then \
		printf "$(YELLOW)🧹 Objects cleaned$(NC)\n"; \
	fi

fclean: clean
	@if [ -d "$(BINDIR)" ] && $(RM) "$(BINDIR)"; then \
		printf "$(YELLOW)🗑️ Executable removed$(NC)\n"; \
	fi

re: fclean all

.PHONY: all clean fclean re
