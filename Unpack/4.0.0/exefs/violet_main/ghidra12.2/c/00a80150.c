/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a80150; name: _INIT_200
 */


void _INIT_200(void)

{
  DAT_04836f40 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04836f44 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04836f48 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04836f54 = 0;
  DAT_04836f50 = 0;
  DAT_04836f5c = 0xffff;
  DAT_04836f58 = 0xffffffff;
  return;
}


