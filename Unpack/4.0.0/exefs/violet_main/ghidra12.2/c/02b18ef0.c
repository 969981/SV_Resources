/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b18ef0; name: _INIT_386
 */


void _INIT_386(void)

{
  DAT_04840c20 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04840c24 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04840c28 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04840c34 = 0;
  DAT_04840c30 = 0;
  DAT_04840c3c = 0xffff;
  DAT_04840c38 = 0xffffffff;
  return;
}


