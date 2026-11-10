/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a77cb0; name: _INIT_192
 */


void _INIT_192(void)

{
  DAT_04836e40 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04836e44 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04836e48 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04836e54 = 0;
  DAT_04836e50 = 0;
  DAT_04836e5c = 0xffff;
  DAT_04836e58 = 0xffffffff;
  return;
}


