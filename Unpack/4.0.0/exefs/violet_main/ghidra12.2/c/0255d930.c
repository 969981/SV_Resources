/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0255d930; name: FUN_0255d930
 */


undefined8 * FUN_0255d930(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0484fe98 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0484fe98);
      if (iVar1 == 0) {
        puVar2 = &DAT_0484fe88;
      }
      else {
        DAT_0484fe88 = 0x3f000000bf800000;
        DAT_0484fe90 = 0x3f000000;
        __cxa_guard_release(&DAT_0484fe98);
        puVar2 = &DAT_0484fe88;
      }
    }
    else {
      puVar2 = &DAT_0484fe88;
    }
  }
  return puVar2;
}


