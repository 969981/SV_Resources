/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0096ffd0; name: _INIT_149
 */


void _INIT_149(void)

{
  DAT_04815c80 = NEON_fmov(0x3f780000,4);
  DAT_04815c88 = 0x3f8400003f840000;
  DAT_04815c90 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04815c94 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04815c98 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04815ca4 = 0;
  DAT_04815ca0 = 0;
  DAT_04815cac = 0xffff;
  DAT_04815ca8 = 0xffffffff;
  return;
}


