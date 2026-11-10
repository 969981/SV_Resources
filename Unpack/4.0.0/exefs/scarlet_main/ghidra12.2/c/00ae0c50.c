/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ae0c50; name: _INIT_243
 */


void _INIT_243(void)

{
  DAT_04838f00 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04838f04 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04838f08 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04838f14 = 0;
  DAT_04838f10 = 0;
  DAT_04838f1c = 0xffff;
  DAT_04838f18 = 0xffffffff;
  return;
}


