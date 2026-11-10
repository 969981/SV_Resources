/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00925850; name: _INIT_146
 */


void _INIT_146(void)

{
  DAT_04806520 = NEON_fmov(0x3f780000,4);
  DAT_04806528 = 0x3f8400003f840000;
  DAT_04806530 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04806534 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04806538 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04806544 = 0;
  DAT_04806540 = 0;
  DAT_0480654c = 0xffff;
  DAT_04806548 = 0xffffffff;
  return;
}


