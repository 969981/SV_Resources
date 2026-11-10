/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 009f9ed0; name: _INIT_151
 */


void _INIT_151(void)

{
  DAT_0481bdb0 = NEON_fmov(0x3f780000,4);
  DAT_0481bdb8 = 0x3f8400003f840000;
  DAT_0481bdc0 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_0481bdc4 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_0481bdc8 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_0481bdd4 = 0;
  DAT_0481bdd0 = 0;
  DAT_0481bddc = 0xffff;
  DAT_0481bdd8 = 0xffffffff;
  return;
}


