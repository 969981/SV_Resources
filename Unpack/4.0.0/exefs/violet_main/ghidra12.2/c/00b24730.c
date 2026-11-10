/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b24730; name: _INIT_285
 */


void _INIT_285(void)

{
  undefined *puVar1;
  
  DAT_04839d58 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04839d5c = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04839d60 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04839d6c = 0;
  DAT_04839d68 = 0;
  DAT_04839d74 = 0xffff;
  DAT_04839d70 = 0xffffffff;
  DAT_04839d80 = 0;
  DAT_04839d88 = 0;
  DAT_04839d90 = 0;
  DAT_04839d98 = 0;
  FUN_00100190(&LAB_00b24098,&DAT_04839d80,&PTR_LOOP_04483000);
  puVar1 = PTR_LAB_047daa48;
  DAT_04839e00 = 0;
  DAT_04839e08 = 0;
  DAT_04839e10 = 0;
  DAT_04839e18 = 0;
  FUN_00100190(PTR_LAB_047daa48,&DAT_04839e00,&PTR_LOOP_04483000);
  DAT_04839e80 = 0;
  DAT_04839e88 = 0;
  DAT_04839e90 = 0;
  DAT_04839e98 = 0;
  FUN_00100190(puVar1,&DAT_04839e80,&PTR_LOOP_04483000);
  DAT_04839f00 = 0;
  DAT_04839f08 = 0;
  DAT_04839f10 = 0;
  DAT_04839f18 = 0;
  FUN_00100190(&LAB_00b240b8,&DAT_04839f00,&PTR_LOOP_04483000);
  DAT_04839f80 = 0;
  return;
}


