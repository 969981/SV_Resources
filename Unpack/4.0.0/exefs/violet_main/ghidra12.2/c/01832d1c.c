/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01832d1c; name: FUN_01832d1c
 */


undefined2 * FUN_01832d1c(byte *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined2 **)(param_1 + 8), puVar2 == (undefined2 *)0x0)) {
    if ((DAT_04813c68 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04813c68);
      if (iVar1 == 0) {
        puVar2 = &DAT_04813c60;
      }
      else {
        DAT_04813c60 = 0;
        __cxa_guard_release(&DAT_04813c68);
        puVar2 = &DAT_04813c60;
      }
    }
    else {
      puVar2 = &DAT_04813c60;
    }
  }
  return puVar2;
}


