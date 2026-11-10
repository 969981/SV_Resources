/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b1f360; name: _INIT_390
 */


void _INIT_390(void)

{
  DAT_04840d18 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04840d1c = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04840d20 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04840d2c = 0;
  DAT_04840d28 = 0;
  DAT_04840d34 = 0xffff;
  DAT_04840d30 = 0xffffffff;
  return;
}


