/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b130d8; name: FUN_01b130d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01b130d8(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04803150 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04803150);
      if (iVar1 == 0) {
        puVar2 = &DAT_04803138;
      }
      else {
        DAT_04803138 = 0;
        DAT_04803140 = 0xa0a0a0a000a0000;
        _DAT_04803148 = 10;
        __cxa_guard_release(&DAT_04803150);
        puVar2 = &DAT_04803138;
      }
    }
    else {
      puVar2 = &DAT_04803138;
    }
  }
  return puVar2;
}


