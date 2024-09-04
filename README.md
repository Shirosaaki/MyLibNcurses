# MyLibNcurses

## Description

This is a mini library that simplifies the usage of the ncurses library in C.

## Compilation

To compile, simply run ```make```. When compiling your code, you can add: ```-L<pathToThisLib> -lmyncurses -lncurses```

## Functions

### N_INIT

This is the first function you need to use to initialize the ncurses environment.

The prototype is:

```
void n_init(int color, int cursor)
```

The first parameter determines whether you will use color: pass 1 to enable it, or 0 if you won't use it.

The second parameter determines whether you want the cursor visible: pass 0 to hide it, or 1 to show it.

### N_CREATE_COLOR

This function creates color pairs in ncurses.

The prototype is:

```
void n_create_color(int n, int color1, int color2)
```

The first parameter is the number of the color pair, the second is the text color, and the third is the background color.

### N_ACTIVE_COLOR

This function applies the specified color pair until you deactivate it.

The prototype is:

```
void n_active_color(int n)
```

As you understand, n is the number of the color pair.

### N_DESACTIVE_COLOR

This function deactivates the color pair activated by N_ACTIVE_COLOR.

The prototype is:

```
void n_desactive_color(int n)
```

As you understand, n is the number of the color pair.

### N_PRINT_WITH_COLOR

This function prints your text using the specified color pair.

The prototype is:

```
void n_print_with_color(char *str, int color)
```

### N_PRINT_WITH_COLOR_AT

This function prints your text using the specified color pair at the specified position.

The prototype is:

```
void n_print_with_color_at(char *str, int color, int x, int y)
```

### N_GETLINE

This function captures input from the user.

The prototype is:

```
char *n_getline(char *str, int size)
```

The size parameter is used for memory allocation. If you've already allocated memory for str, pass 0. If str is not yet allocated, specify the size you want to allocate.
