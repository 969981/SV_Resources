/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008f3340; name: _INIT_136
 */


void _INIT_136(void)

{
  DAT_04800878 = NEON_fmov(0x3f780000,4);
  DAT_04800880 = 0x3f8400003f840000;
  DAT_04800888 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_0480088c = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04800890 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_0480089c = 0;
  DAT_04800898 = 0;
  DAT_048008a4 = 0xffff;
  DAT_048008a0 = 0xffffffff;
  return;
}


