/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a2d7d0; name: _INIT_333
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_333(void)

{
  uRam000000000483ae98 = DAT_03cab628;
  _DAT_0483ae90 = DAT_03cab620;
  uRam000000000483aea8 = _UNK_03cabe68;
  _DAT_0483aea0 = _DAT_03cabe60;
  uRam000000000483aeb8 = _UNK_03caa5b8;
  _DAT_0483aeb0 = _DAT_03caa5b0;
  DAT_0483ae38 = NEON_fmov(0x3f780000,4);
  DAT_0483ae48 = 0;
  DAT_0483ae50 = 0;
  DAT_0483ae58 = 0x3f8000003f800000;
  DAT_0483ae60 = 0x3f8000003f800000;
  DAT_0483ae68 = 0;
  DAT_0483ae70 = 0x3f800000;
  DAT_0483ae40 = 0x3f8400003f840000;
  DAT_0483ae78 = 0;
  DAT_0483ae80 = 0x3f80000000000000;
  FUN_00100190(FUN_02a2d874,&DAT_0483aec0,&PTR_LOOP_04483000);
  return;
}


