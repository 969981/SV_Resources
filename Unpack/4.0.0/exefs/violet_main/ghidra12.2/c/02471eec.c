/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02471eec; name: FUN_02471eec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_02471eec(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04849ec0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04849ec0);
      if (iVar1 == 0) {
        puVar2 = &DAT_04849e40;
      }
      else {
        DAT_04849e78 = 0;
        DAT_04849e58 = 0;
        DAT_04849e40 = 0;
        DAT_04849e48 = 0;
        _DAT_04849e50 = 0x3f000000;
        _DAT_04849e70 = 10;
        DAT_04849e68 = _UNK_03cabe58;
        DAT_04849e60 = _DAT_03cabe50;
        uRam0000000004849e88 = DAT_03cab628;
        _DAT_04849e80 = DAT_03cab620;
        uRam0000000004849e98 = _UNK_03cabe68;
        _DAT_04849e90 = _DAT_03cabe60;
        uRam0000000004849ea8 = _UNK_03caa5b8;
        _DAT_04849ea0 = _DAT_03caa5b0;
        uRam0000000004849eb8 = _UNK_03cabe58;
        _DAT_04849eb0 = _DAT_03cabe50;
        __cxa_guard_release(&DAT_04849ec0);
        puVar2 = &DAT_04849e40;
      }
    }
    else {
      puVar2 = &DAT_04849e40;
    }
  }
  return puVar2;
}


