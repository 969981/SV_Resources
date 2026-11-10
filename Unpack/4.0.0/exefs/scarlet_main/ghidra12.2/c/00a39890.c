/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a39890; name: _INIT_166
 */


void _INIT_166(void)

{
  DAT_04835ad0 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04835ad4 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04835ad8 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04835ae4 = 0;
  DAT_04835ae0 = 0;
  DAT_04835aec = 0xffff;
  DAT_04835ae8 = 0xffffffff;
  FUN_00100190(FUN_00a3959c,&DAT_04835b28,&PTR_LOOP_04483000);
  FUN_00100190(FUN_00a3959c,&DAT_04835b40,&PTR_LOOP_04483000);
  return;
}


