/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0247228c; name: FUN_0247228c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0247228c(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0484a040 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0484a040);
      if (iVar1 == 0) {
        puVar2 = &DAT_04849fc0;
      }
      else {
        DAT_04849ff8 = 0;
        DAT_04849fc0 = 0;
        DAT_04849fc8 = 0;
        DAT_04849fd0 = 0x3f0000003f000000;
        _DAT_04849fd8 = 0x3f800000;
        _DAT_04849ff0 = 10;
        DAT_04849fe8 = _UNK_03cabe58;
        DAT_04849fe0 = _DAT_03cabe50;
        uRam000000000484a008 = DAT_03cab628;
        _DAT_0484a000 = DAT_03cab620;
        uRam000000000484a018 = _UNK_03cabe68;
        _DAT_0484a010 = _DAT_03cabe60;
        uRam000000000484a028 = _UNK_03caa5b8;
        _DAT_0484a020 = _DAT_03caa5b0;
        uRam000000000484a038 = _UNK_03cabe58;
        _DAT_0484a030 = _DAT_03cabe50;
        __cxa_guard_release(&DAT_0484a040);
        puVar2 = &DAT_04849fc0;
      }
    }
    else {
      puVar2 = &DAT_04849fc0;
    }
  }
  return puVar2;
}


