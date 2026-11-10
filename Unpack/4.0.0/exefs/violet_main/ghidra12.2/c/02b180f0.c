/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b180f0; name: _INIT_385
 */


void _INIT_385(void)

{
  DAT_04840c00 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04840c04 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04840c08 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04840c14 = 0;
  DAT_04840c10 = 0;
  DAT_04840c1c = 0xffff;
  DAT_04840c18 = 0xffffffff;
  return;
}


