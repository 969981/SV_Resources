/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a6d2b0; name: _INIT_181
 */


void _INIT_181(void)

{
  DAT_04836738 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_0483673c = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04836740 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_0483674c = 0;
  DAT_04836748 = 0;
  DAT_04836754 = 0xffff;
  DAT_04836750 = 0xffffffff;
  FUN_00100190(&LAB_00a6cc5c,&DAT_04836758,&PTR_LOOP_04483000);
  FUN_00100190(&LAB_00a6ccd4,&DAT_04836760,&PTR_LOOP_04483000);
  FUN_00100190(&LAB_00a6ccec,&DAT_04836768,&PTR_LOOP_04483000);
  return;
}


