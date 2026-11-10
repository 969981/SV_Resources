/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00aa0d50; name: _INIT_228
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_228(void)

{
  DAT_04838310 = NEON_fmov(0x3f780000,4);
  DAT_04838318 = 0x3f8400003f840000;
  DAT_04838320 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04838324 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04838328 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04838334 = 0;
  DAT_04838330 = 0;
  DAT_0483833c = 0xffff;
  DAT_04838338 = 0xffffffff;
  DAT_04838348 = _UNK_03cabc18;
  DAT_04838340 = _DAT_03cabc10;
  return;
}


