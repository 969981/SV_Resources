/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a30120; name: _INIT_156
 */


void _INIT_156(void)

{
  DAT_04835208 = NEON_fmov(0x3f780000,4);
  DAT_04835210 = 0x3f8400003f840000;
  DAT_04835218 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_0483521c = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04835220 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_0483522c = 0;
  DAT_04835228 = 0;
  DAT_04835234 = 0xffff;
  DAT_04835230 = 0xffffffff;
  return;
}


