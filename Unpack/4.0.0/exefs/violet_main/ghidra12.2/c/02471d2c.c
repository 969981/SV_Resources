/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02471d2c; name: FUN_02471d2c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_02471d2c(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04849e00 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04849e00);
      if (iVar1 == 0) {
        puVar2 = &DAT_04849d90;
      }
      else {
        uRam0000000004849da8 = _UNK_03caa948;
        _DAT_04849da0 = _DAT_03caa940;
        uRam0000000004849db8 = _UNK_03cabe58;
        _DAT_04849db0 = _DAT_03cabe50;
        DAT_04849d90 = 0;
        DAT_04849d98 = 0;
        uRam0000000004849dc8 = DAT_03cab628;
        _DAT_04849dc0 = DAT_03cab620;
        uRam0000000004849dd8 = _UNK_03cabe68;
        _DAT_04849dd0 = _DAT_03cabe60;
        uRam0000000004849de8 = _UNK_03caa5b8;
        _DAT_04849de0 = _DAT_03caa5b0;
        uRam0000000004849df8 = _UNK_03cabe58;
        _DAT_04849df0 = _DAT_03cabe50;
        __cxa_guard_release(&DAT_04849e00);
        puVar2 = &DAT_04849d90;
      }
    }
    else {
      puVar2 = &DAT_04849d90;
    }
  }
  return puVar2;
}


