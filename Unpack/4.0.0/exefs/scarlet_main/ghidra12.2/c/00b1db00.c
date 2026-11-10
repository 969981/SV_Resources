/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b1db00; name: _INIT_274
 */


void _INIT_274(void)

{
  undefined *puVar1;
  
  DAT_04839930 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04839934 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04839938 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  puVar1 = PTR_LAB_047daa30;
  DAT_04839944 = 0;
  DAT_04839940 = 0;
  DAT_0483994c = 0xffff;
  DAT_04839948 = 0xffffffff;
  DAT_04839950 = 0;
  DAT_04839958 = 0;
  DAT_04839960 = 0;
  DAT_04839968 = 0;
  FUN_00100190(PTR_LAB_047daa30,&DAT_04839950,&PTR_LOOP_04483000);
  DAT_048399d0 = 0;
  DAT_048399d8 = 0;
  DAT_048399e0 = 0;
  DAT_048399e8 = 0;
  FUN_00100190(puVar1,&DAT_048399d0,&PTR_LOOP_04483000);
  DAT_04839a50 = 0;
  DAT_04839a58 = 0;
  DAT_04839a60 = 0;
  DAT_04839a68 = 0;
  FUN_00100190(&LAB_00b1dbf8,&DAT_04839a50,&PTR_LOOP_04483000);
  return;
}


