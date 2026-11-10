/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02acecb0; name: _INIT_366
 */


void _INIT_366(void)

{
  DAT_048405a8 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_048405ac = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_048405b0 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_048405c8 = NEON_fmov(0x3f780000,4);
  DAT_048405b8 = 0;
  DAT_048405bc = 0;
  DAT_048405c4 = 0xffff;
  DAT_048405c0 = 0xffffffff;
  DAT_048405d0 = 0x3f8400003f840000;
  return;
}


