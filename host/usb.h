int usb_init(void);
void usb_done(void);
void usb_test(void);
int usb_start_transfer ( void) ;

#define USB_BUF_SIZE 256*1024
#define N_OF_TRANSFERS 5