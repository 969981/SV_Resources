/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 009661e0; name: _INIT_148
 */


void _INIT_148(void)

{
  DAT_04812a30 = NEON_fmov(0x3f780000,4);
  DAT_04812a38 = 0x3f8400003f840000;
  DAT_04812a40 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04812a44 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04812a48 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04812a54 = 0;
  DAT_04812a50 = 0;
  DAT_04812a5c = 0xffff;
  DAT_04812a58 = 0xffffffff;
  return;
}


