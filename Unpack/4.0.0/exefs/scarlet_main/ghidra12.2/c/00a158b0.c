/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a158b0; name: _INIT_152
 */


void _INIT_152(void)

{
  DAT_04832e00 = NEON_fmov(0x3f780000,4);
  DAT_04832e08 = 0x3f8400003f840000;
  DAT_04832e10 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04832e14 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04832e18 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04832e24 = 0;
  DAT_04832e20 = 0;
  DAT_04832e2c = 0xffff;
  DAT_04832e28 = 0xffffffff;
  return;
}


