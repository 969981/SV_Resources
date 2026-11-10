/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0091f570; name: _INIT_145
 */


void _INIT_145(void)

{
  DAT_04805500 = NEON_fmov(0x3f780000,4);
  DAT_04805508 = 0x3f8400003f840000;
  DAT_04805510 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04805514 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04805518 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04805524 = 0;
  DAT_04805520 = 0;
  DAT_0480552c = 0xffff;
  DAT_04805528 = 0xffffffff;
  return;
}


