/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b1b630; name: _INIT_266
 */


void _INIT_266(void)

{
  DAT_048396d8 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_048396dc = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_048396e0 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_048396f8 = NEON_fmov(0x3f780000,4);
  DAT_048396e8 = 0;
  DAT_048396ec = 0;
  DAT_048396f4 = 0xffff;
  DAT_048396f0 = 0xffffffff;
  DAT_04839700 = 0x3f8400003f840000;
  return;
}


