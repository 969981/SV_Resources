/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0247262c; name: FUN_0247262c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0247262c(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0484a1c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0484a1c0);
      if (iVar1 == 0) {
        puVar2 = &DAT_0484a140;
      }
      else {
        DAT_0484a140 = 0;
        DAT_0484a148 = 0;
        DAT_0484a150 = 0x3f8000003f000000;
        DAT_0484a158 = 0;
        DAT_0484a178 = 0;
        _DAT_0484a170 = 10;
        DAT_0484a168 = _UNK_03cabe58;
        DAT_0484a160 = _DAT_03cabe50;
        uRam000000000484a188 = DAT_03cab628;
        _DAT_0484a180 = DAT_03cab620;
        uRam000000000484a198 = _UNK_03cabe68;
        _DAT_0484a190 = _DAT_03cabe60;
        uRam000000000484a1a8 = _UNK_03caa5b8;
        _DAT_0484a1a0 = _DAT_03caa5b0;
        uRam000000000484a1b8 = _UNK_03cabe58;
        _DAT_0484a1b0 = _DAT_03cabe50;
        __cxa_guard_release(&DAT_0484a1c0);
        puVar2 = &DAT_0484a140;
      }
    }
    else {
      puVar2 = &DAT_0484a140;
    }
  }
  return puVar2;
}


