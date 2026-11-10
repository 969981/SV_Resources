/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0247245c; name: FUN_0247245c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0247245c(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0484a100 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0484a100);
      if (iVar1 == 0) {
        puVar2 = &DAT_0484a080;
      }
      else {
        DAT_0484a080 = 0;
        DAT_0484a088 = 0;
        DAT_0484a090 = 0x3f8000003f000000;
        DAT_0484a098 = 0;
        DAT_0484a0b8 = 0;
        _DAT_0484a0b0 = 10;
        DAT_0484a0a8 = _UNK_03cabe58;
        DAT_0484a0a0 = _DAT_03cabe50;
        uRam000000000484a0c8 = DAT_03cab628;
        _DAT_0484a0c0 = DAT_03cab620;
        uRam000000000484a0d8 = _UNK_03cabe68;
        _DAT_0484a0d0 = _DAT_03cabe60;
        uRam000000000484a0e8 = _UNK_03caa5b8;
        _DAT_0484a0e0 = _DAT_03caa5b0;
        uRam000000000484a0f8 = _UNK_03cabe58;
        _DAT_0484a0f0 = _DAT_03cabe50;
        __cxa_guard_release(&DAT_0484a100);
        puVar2 = &DAT_0484a080;
      }
    }
    else {
      puVar2 = &DAT_0484a080;
    }
  }
  return puVar2;
}


