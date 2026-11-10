/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01588c90; name: FUN_01588c90
 */


undefined8 * FUN_01588c90(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04806610 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04806610);
      if (iVar1 == 0) {
        puVar2 = &DAT_04806600;
      }
      else {
        DAT_04806600 = 0xffffffff;
        DAT_04806608 = 0;
        __cxa_guard_release(&DAT_04806610);
        puVar2 = &DAT_04806600;
      }
    }
    else {
      puVar2 = &DAT_04806600;
    }
  }
  return puVar2;
}


