/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b05550; name: _INIT_376
 */


void _INIT_376(void)

{
  DAT_04840a00 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04840a04 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04840a08 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04840a14 = 0;
  DAT_04840a10 = 0;
  DAT_04840a1c = 0xffff;
  DAT_04840a18 = 0xffffffff;
  return;
}


