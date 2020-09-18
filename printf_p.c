#include "printf.h"


void    ft_DecToHexa_plus(size_t n)
{
    if (n > 15)
    {
        ft_DecToHexa_plus(n / 16);
        n %= 16;
    }
   if (n > 9)
        ft_putchar_fd(n + 87, 0);
    else
        ft_putchar_fd(n + 48, 0);
}

void    find_length_hexa(int n)
{
    if (n > 15)
    {
        find_length_hexa(n / 16);
        n %= 16;
    }
   if (n > 9)
        length_value++;
    else
        length_value++;
}

void printf_p(va_list *my_list)
{
    size_t p;
    length_value = 0;

    p = va_arg(*my_list, size_t);
    find_length_hexa(p);
    length_value += 2;

    
    if (((cad).flag_precision > (length_value - 2)))
	{
		(cad).flag_zero = 1;
		(cad).flag_minus = -1;
		(cad).flag_width = (((cad).flag_precision + 2));
		(cad).flag_width -= length_value;
	}
	else
	{
		(cad).flag_zero = -1;
		(cad).flag_width -= length_value;
	}
    if ((cad).flag_minus == -1)
    {
        if ((cad).flag_zero == -1)
		{
            while((cad).flag_width-- > 0)
                (cad).flag_zero == 1 ? write(1, "0", 1) : write(1, "*", 1);
			write(1, "0x", 2);
        }
        else
        {
			write(1, "0x", 2);
            while((cad).flag_width-- > 0)
                (cad).flag_zero == 1 ? write(1, "0", 1) : write(1, "*", 1); 
        }
        ft_DecToHexa_plus((size_t)p);
    }
    else
	{
        write(1, "0x", 2);
		ft_DecToHexa_plus((size_t)p);
		while ((cad).flag_width-- > 0)
			write(1, "*", 1);
	}
    
    
    
    
    
    
    
    
    
    
    
    /*
    
    if ((cad).flag_minus == -1)
	{
        if ((cad).flag_zero != 1)
        {
            printf("\na\n");
            while((cad).flag_width-- > 0)
                (cad).flag_zero == 1 ? write(1, "0", 1) : write(1, "*", 1);
            write(1, "0x", 2);
            ft_DecToHexa_plus((size_t)p);
        }
        else
        {
            printf("\nb\n");
            write(1, "0x", 2);
            while((cad).flag_width-- > 0)
                write(1, "*", 1);
            ft_DecToHexa_plus((size_t)p); 
        }
        
    }
    else
    {
        if ((cad).flag_zero != 1)
        {
            printf("\nc\n");
            write(1, "0x", 2);
            ft_DecToHexa_plus((size_t)p);
            while((cad).flag_width-- > 0)
                (cad).flag_zero == 1 ? write(1, "0", 1) : write(1, "*", 1);
        }
        else
        {
            printf("\nd\n");
            write(1, "0x", 2);
            ft_DecToHexa_plus((size_t)p);
            while((cad).flag_width-- > 0)
                write(1, "*", 1);
                //(cad).flag_zero == 1 ? write(1, "0", 1) : write(1, "*", 1); 
            
        }        
    }*/
    
}



/*
void	printf_p(va_list *my_list)
{
    //size_t c;
    if(pas == 0)
    {
        p = va_arg(*my_list, size_t);
        l_value = 0;
        find_value_Hexa(p);
        l_value += 2;
        //printf("l_value %d\n", l_value);
        pas = 1;
    }
    else
    {
        //write(1, "0x", 2);
        ft_DecToHexa_plus((size_t)p);
        pas = 0;
    }
}*/