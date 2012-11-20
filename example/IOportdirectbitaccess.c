typedef union access
{
                        __IO uint32_t  all;
                    struct  {
                                                __IO uint32_t  PIN0:1;
                                                __IO uint32_t  PIN1:1;
                                                __IO uint32_t  PIN2:1;
                                                __IO uint32_t  PIN3:1;
                                                __IO uint32_t  PIN4:1;
                                                __IO uint32_t  PIN5:1;
                                                __IO uint32_t  PIN6:1;
                                                __IO uint32_t  PIN7:1;
                                                __IO uint32_t  PIN8:1;
                                                __IO uint32_t  PIN9:1;
                                                __IO uint32_t PIN10:1;
                                                __IO uint32_t PIN11:1;
                                                __IO uint32_t PIN12:1;
                                                __IO uint32_t PIN13:1;
                                                __IO uint32_t PIN14:1;
                                                __IO uint32_t PIN15:1;
                                                __IO uint32_t PIN16:1;
                                                __IO uint32_t PIN17:1;
                                                __IO uint32_t PIN18:1;
                                                __IO uint32_t PIN19:1;
                                                __IO uint32_t PIN20:1;
                                                __IO uint32_t PIN21:1;
                                                __IO uint32_t PIN22:1;
                                                __IO uint32_t PIN23:1;
                                                __IO uint32_t PIN24:1;
                                                __IO uint32_t PIN25:1;
                                                __IO uint32_t PIN26:1;
                                                __IO uint32_t PIN27:1;
                                                __IO uint32_t PIN28:1;
                                                __IO uint32_t PIN29:1;
                                                __IO uint32_t PIN30:1;
                                                __IO uint32_t PIN31:1;
                    }bit; 
}port_t;         

//#define PORT0 *(volatile unsigned char *)(0x20cb)

#define PORT_0             ((port_t   *) 0X50000000 )
#define DIR_0                     ((port_t   *) 0X50008000 )
#define PORT_1             ((port_t   *) 0X50010000 )
#define DIR_1                     ((port_t   *) 0X50018000 )
#define PORT_2             ((port_t   *) 0X50020000 )
#define DIR_2                     ((port_t   *) 0X50028000 )
#define PORT_3             ((port_t   *) 0X50030000 )
#define DIR_3                     ((port_t   *) 0X50038000 )


/*SAMPLE

         PORT_0->bit.PIN0=0;
         PORT_0->all=0XFFFF;
         PORT_1.>bit.PIN1=PORT_0->bit.PIN0=0;
*/ 