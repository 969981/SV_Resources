/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00960340; name: _INIT_147
 */


void _INIT_147(void)

{
  DAT_04810f08 = NEON_fmov(0x3f780000,4);
  DAT_04810f10 = 0x3f8400003f840000;
  DAT_04810f18 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04810f1c = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04810f20 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04810f2c = 0;
  DAT_04810f28 = 0;
  DAT_04810f34 = 0xffff;
  DAT_04810f30 = 0xffffffff;
  return;
}


