#define	LCD_COMMAND	0
#define LCD_DATA 1

void LCD5110_init(void);

void LCD5110_write_char(unsigned char c);

void LCD5110_write_char_inv(unsigned char c);

void LCD5110_clear(void);

void LCD5110_set_XY(unsigned char X, unsigned char Y);

void LCD5110_write_string(char *s);

void LCD5110_write_Dec(unsigned int buffer);

void LCD5110_Led(unsigned char c);
