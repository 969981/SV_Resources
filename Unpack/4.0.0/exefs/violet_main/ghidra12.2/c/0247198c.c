/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0247198c; name: FUN_0247198c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0247198c(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04849c90 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04849c90);
      if (iVar1 == 0) {
        puVar2 = &DAT_04849c10;
      }
      else {
        DAT_04849c28 = 0;
        DAT_04849c10 = 0;
        DAT_04849c18 = 0;
        _DAT_04849c20 = 0x3f000000;
        DAT_04849c40 = 0xa0000000a;
        DAT_04849c48 = 0;
        DAT_04849c38 = _UNK_03cabe58;
        DAT_04849c30 = _DAT_03cabe50;
        uRam0000000004849c58 = DAT_03cab628;
        _DAT_04849c50 = DAT_03cab620;
        uRam0000000004849c68 = _UNK_03cabe68;
        _DAT_04849c60 = _DAT_03cabe60;
        uRam0000000004849c78 = _UNK_03caa5b8;
        _DAT_04849c70 = _DAT_03caa5b0;
        uRam0000000004849c88 = _UNK_03cabe58;
        _DAT_04849c80 = _DAT_03cabe50;
        __cxa_guard_release(&DAT_04849c90);
        puVar2 = &DAT_04849c10;
      }
    }
    else {
      puVar2 = &DAT_04849c10;
    }
  }
  return puVar2;
}


