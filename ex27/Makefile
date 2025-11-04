# 1. Configuración general
TARGET = ft_display_file
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Werror -Wextra -g

# 2. Regla principal
all: $(TARGET)

# 3. Construir ejecutable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

# 4. Compilar
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# 5. Limpieza
clean:
	rm -f $(OBJ)

fclean:
	rm -f $(TARGET)

re: 
	flcean all

.PHONY: all clean fclean re
