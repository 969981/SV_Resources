/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b1ea50; name: _INIT_276
 */


void _INIT_276(void)

{
  DAT_04839b30 = NEON_fmov(0x3f780000,4);
  DAT_04839b38 = 0x3f8400003f840000;
  DAT_04839b40 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04839b44 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04839b48 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04839b54 = 0;
  DAT_04839b50 = 0;
  DAT_04839b5c = 0xffff;
  DAT_04839b58 = 0xffffffff;
  return;
}


