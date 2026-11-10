/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00973e70; name: _INIT_150
 */


void _INIT_150(void)

{
  DAT_04816d50 = NEON_fmov(0x3f780000,4);
  DAT_04816d58 = 0x3f8400003f840000;
  DAT_04816d60 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04816d64 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04816d68 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04816d74 = 0;
  DAT_04816d70 = 0;
  DAT_04816d7c = 0xffff;
  DAT_04816d78 = 0xffffffff;
  return;
}


