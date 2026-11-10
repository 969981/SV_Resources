/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ae0c50; name: _INIT_243
 */


void _INIT_243(void)

{
  DAT_04838f00 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04838f04 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04838f08 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04838f14 = 0;
  DAT_04838f10 = 0;
  DAT_04838f1c = 0xffff;
  DAT_04838f18 = 0xffffffff;
  return;
}


