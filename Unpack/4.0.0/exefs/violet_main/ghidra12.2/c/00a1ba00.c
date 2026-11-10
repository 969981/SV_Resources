/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a1ba00; name: _INIT_154
 */


void _INIT_154(void)

{
  DAT_04834180 = NEON_fmov(0x3f780000,4);
  DAT_04834188 = 0x3f8400003f840000;
  DAT_04834190 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04834194 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04834198 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_048341a4 = 0;
  DAT_048341a0 = 0;
  DAT_048341ac = 0xffff;
  DAT_048341a8 = 0xffffffff;
  return;
}


