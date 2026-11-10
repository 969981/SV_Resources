/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b6ac0; name: _INIT_80
 */


void _INIT_80(void)

{
  DAT_047f9e20 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_047f9e24 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_047f9e28 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_047f9e3c = 0xffff;
  DAT_047f9e34 = 0;
  DAT_047f9e30 = 0;
  DAT_047f9e38 = 0xffffffff;
  return;
}


