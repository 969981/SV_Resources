/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024727fc; name: FUN_024727fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_024727fc(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined **)(param_1 + 8), puVar2 == (undefined *)0x0)) {
    if ((DAT_0484a290 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0484a290);
      if (iVar1 != 0) {
        memset(&DAT_0484a200,0,0x90);
        DAT_0484a280 = 0;
        DAT_0484a210 = 0x3e99999a3e99999a;
        DAT_0484a218 = 0x3f800000;
        DAT_0484a230 = 0x50000000a;
        uRam000000000484a248 = DAT_03cab628;
        _DAT_0484a240 = DAT_03cab620;
        uRam000000000484a258 = _UNK_03cabe68;
        _DAT_0484a250 = _DAT_03cabe60;
        uRam000000000484a228 = _UNK_03cabe58;
        _DAT_0484a220 = _DAT_03cabe50;
        uRam000000000484a268 = _UNK_03caa5b8;
        _DAT_0484a260 = _DAT_03caa5b0;
        uRam000000000484a278 = _UNK_03cabe58;
        _DAT_0484a270 = _DAT_03cabe50;
        __cxa_guard_release(&DAT_0484a290);
      }
      puVar2 = &DAT_0484a200;
    }
    else {
      puVar2 = &DAT_0484a200;
    }
  }
  return puVar2;
}


