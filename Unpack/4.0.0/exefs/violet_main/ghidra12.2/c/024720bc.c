/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024720bc; name: FUN_024720bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_024720bc(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04849f80 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04849f80);
      if (iVar1 == 0) {
        puVar2 = &DAT_04849f00;
      }
      else {
        DAT_04849f18 = 0;
        DAT_04849f00 = 0;
        DAT_04849f08 = 0;
        _DAT_04849f10 = 0x3f000000;
        DAT_04849f30 = 0x50000000a;
        DAT_04849f38 = 0;
        DAT_04849f28 = _UNK_03cabe58;
        DAT_04849f20 = _DAT_03cabe50;
        uRam0000000004849f48 = DAT_03cab628;
        _DAT_04849f40 = DAT_03cab620;
        uRam0000000004849f58 = _UNK_03cabe68;
        _DAT_04849f50 = _DAT_03cabe60;
        uRam0000000004849f68 = _UNK_03caa5b8;
        _DAT_04849f60 = _DAT_03caa5b0;
        uRam0000000004849f78 = _UNK_03cabe58;
        _DAT_04849f70 = _DAT_03cabe50;
        __cxa_guard_release(&DAT_04849f80);
        puVar2 = &DAT_04849f00;
      }
    }
    else {
      puVar2 = &DAT_04849f00;
    }
  }
  return puVar2;
}


