/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b6eba0; name: _INIT_402
 */


void _INIT_402(void)

{
  DAT_04841fd8 = NEON_fmov(0x3f780000,4);
  DAT_04841fe0 = 0x3f8400003f840000;
  DAT_04841fe8 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04841fec = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04841ff0 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04841ffc = 0;
  DAT_04841ff8 = 0;
  DAT_04842004 = 0xffff;
  DAT_04842000 = 0xffffffff;
  return;
}


