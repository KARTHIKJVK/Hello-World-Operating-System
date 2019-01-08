void printf(char* str)
{
    unsigned short* VideoMemory = (unsigned short*)0xb80000;
    for(int i=0; str[i]!='\0';++i){
        VideoMemory[i] =  (VideoMemory[i] & 0xFF00) | str[i];
    }
} 


void kmain(void)
{
    printf("Hello karthik cmon you can build an operating system");

    while(1);
}
