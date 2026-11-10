/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c1a8e8; name: FUN_01c1a8e8
 */


undefined8 * FUN_01c1a8e8(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04811620 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04811620);
      if (iVar1 == 0) {
        puVar2 = &DAT_04811618;
      }
      else {
        DAT_04811618 = 0;
        __cxa_guard_release(&DAT_04811620);
        puVar2 = &DAT_04811618;
      }
    }
    else {
      puVar2 = &DAT_04811618;
    }
  }
  return puVar2;
}


