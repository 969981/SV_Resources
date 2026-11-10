/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b0aa10; name: _INIT_380
 */


void _INIT_380(void)

{
  DAT_04840a80 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04840a84 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04840a88 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04840a94 = 0;
  DAT_04840a90 = 0;
  DAT_04840a9c = 0xffff;
  DAT_04840a98 = 0xffffffff;
  return;
}


