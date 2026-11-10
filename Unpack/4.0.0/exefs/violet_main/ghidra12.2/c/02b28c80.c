/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b28c80; name: _INIT_393
 */


void _INIT_393(void)

{
  DAT_04840e90 = NEON_fmov(0x3f780000,4);
  DAT_04840e98 = 0x3f8400003f840000;
  DAT_04840ea0 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04840ea4 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04840ea8 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04840eb4 = 0;
  DAT_04840eb0 = 0;
  DAT_04840ebc = 0xffff;
  DAT_04840eb8 = 0xffffffff;
  return;
}


