/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ae0400; name: _INIT_240
 */


void _INIT_240(void)

{
  DAT_04838e98 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04838e9c = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04838ea0 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04838eac = 0;
  DAT_04838ea8 = 0;
  DAT_04838eb4 = 0xffff;
  DAT_04838eb0 = 0xffffffff;
  DAT_04838eb8 = 0;
  FUN_00100190(PTR_FUN_047da7b8,&DAT_04838eb8,&PTR_LOOP_04483000);
  return;
}


