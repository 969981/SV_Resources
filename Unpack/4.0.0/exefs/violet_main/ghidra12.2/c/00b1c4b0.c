/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b1c4b0; name: _INIT_270
 */


void _INIT_270(void)

{
  DAT_04839840 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04839844 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04839848 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04839860 = NEON_fmov(0x3f780000,4);
  DAT_04839850 = 0;
  DAT_04839854 = 0;
  DAT_0483985c = 0xffff;
  DAT_04839858 = 0xffffffff;
  DAT_04839868 = 0x3f8400003f840000;
  return;
}


