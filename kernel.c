void main(void) //fonction chargée en premier par boot.S
{
    int runshell = 1;
    free_vram();
    nextpage();
    
    ktab("BOOT\n", 0x03);
    ktab("Aferfer", 0x03);
   
    while(runshell)
    {
	shell();
    }
}
