/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a19bf0; name: _INIT_153
 */


void _INIT_153(void)

{
  DAT_048337e8 = NEON_fmov(0x3f780000,4);
  DAT_048337f0 = 0x3f8400003f840000;
  DAT_048337f8 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_048337fc = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04833800 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_0483380c = 0;
  DAT_04833808 = 0;
  DAT_04833814 = 0xffff;
  DAT_04833810 = 0xffffffff;
  return;
}


