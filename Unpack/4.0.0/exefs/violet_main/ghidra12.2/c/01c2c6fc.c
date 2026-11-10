/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c2c6fc; name: FUN_01c2c6fc
 */


undefined4 * FUN_01c2c6fc(byte *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined4 **)(param_1 + 8), puVar2 == (undefined4 *)0x0)) {
    if ((DAT_048119e8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_048119e8);
      if (iVar1 == 0) {
        puVar2 = &DAT_048119e0;
      }
      else {
        DAT_048119e4 = 0xffff;
        DAT_048119e0 = 0xffffffff;
        __cxa_guard_release(&DAT_048119e8);
        puVar2 = &DAT_048119e0;
      }
    }
    else {
      puVar2 = &DAT_048119e0;
    }
  }
  return puVar2;
}


