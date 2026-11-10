/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a2bbf0; name: _INIT_155
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_155(void)

{
  undefined *puVar1;
  
  DAT_04834c30 = NEON_fmov(0x3f780000,4);
  DAT_04834c38 = 0x3f8400003f840000;
  DAT_04834c40 = 0xffffffffffffffff;
  DAT_04834c48 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04834c4c = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04834c50 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  puVar1 = PTR_LAB_047d4118;
  uRam0000000004834cb8 = DAT_03cab628;
  _DAT_04834cb0 = DAT_03cab620;
  DAT_04834c5c = 0;
  DAT_04834c58 = 0;
  DAT_04834c64 = 0xffff;
  DAT_04834c60 = 0xffffffff;
  DAT_04834c68 = 0;
  DAT_04834c70 = 0;
  uRam0000000004834cc8 = _UNK_03cabe68;
  _DAT_04834cc0 = _DAT_03cabe60;
  DAT_04834c78 = 0x3f8000003f800000;
  DAT_04834c80 = 0x3f8000003f800000;
  DAT_04834c88 = 0;
  DAT_04834c90 = 0x3f800000;
  DAT_04834c98 = 0;
  DAT_04834ca0 = 0x3f80000000000000;
  DAT_04834ce0 = 0x7115b972e4af905f;
  DAT_04834ce8 = "CreateSample";
  uRam0000000004834cd8 = _UNK_03caa5b8;
  _DAT_04834cd0 = _DAT_03caa5b0;
  DAT_04834cf0 = 0xc;
  DAT_04834cf8 = 0;
  FUN_00100190(PTR_LAB_047d4118,&DAT_04834ce0,&PTR_LOOP_04483000);
  DAT_04834d10 = 0xc;
  DAT_04834d18 = 0;
  DAT_04834d00 = 0x66dc8709666a48df;
  DAT_04834d08 = "RemoveSample";
  FUN_00100190(puVar1,&DAT_04834d00,&PTR_LOOP_04483000);
  return;
}


