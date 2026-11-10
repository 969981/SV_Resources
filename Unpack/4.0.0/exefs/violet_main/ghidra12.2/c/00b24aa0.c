/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b24aa0; name: _INIT_286
 */


void _INIT_286(void)

{
  DAT_04839f84 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04839f88 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04839f8c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04839f94 = 0;
  DAT_04839f90 = 0;
  DAT_04839f9c = 0xffff;
  DAT_04839f98 = 0xffffffff;
  return;
}


