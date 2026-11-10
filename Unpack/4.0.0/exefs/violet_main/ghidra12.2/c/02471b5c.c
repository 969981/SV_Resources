/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02471b5c; name: FUN_02471b5c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_02471b5c(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04849d50 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04849d50);
      if (iVar1 == 0) {
        puVar2 = &DAT_04849cd0;
      }
      else {
        DAT_04849d00 = 0x100000001;
        DAT_04849cd0 = 0;
        DAT_04849cd8 = 0;
        DAT_04849ce8 = _UNK_03caa988;
        DAT_04849ce0 = _DAT_03caa980;
        DAT_04849cf8 = _UNK_03cabe58;
        DAT_04849cf0 = _DAT_03cabe50;
        _DAT_04849d08 = 1;
        uRam0000000004849d18 = DAT_03cab628;
        _DAT_04849d10 = DAT_03cab620;
        uRam0000000004849d28 = _UNK_03cabe68;
        _DAT_04849d20 = _DAT_03cabe60;
        uRam0000000004849d38 = _UNK_03caa5b8;
        _DAT_04849d30 = _DAT_03caa5b0;
        uRam0000000004849d48 = _UNK_03cabe58;
        _DAT_04849d40 = _DAT_03cabe50;
        __cxa_guard_release(&DAT_04849d50);
        puVar2 = &DAT_04849cd0;
      }
    }
    else {
      puVar2 = &DAT_04849cd0;
    }
  }
  return puVar2;
}


