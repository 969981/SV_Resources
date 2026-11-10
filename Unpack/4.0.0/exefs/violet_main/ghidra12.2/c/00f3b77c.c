/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f3b77c; name: FUN_00f3b77c
 */


void FUN_00f3b77c(long param_1)

{
  long lVar1;
  
  do {
    lVar1 = param_1;
    param_1 = lVar1;
    if (*(long *)(lVar1 + 0x1a8) != 0) {
      param_1 = *(long *)(lVar1 + 0x1a8);
    }
  } while (param_1 != lVar1);
  if ((*(byte *)(lVar1 + 0x1b8) >> 4 & 1) == 0) {
    return;
  }
  FUN_00f3a870(lVar1 + 0x1f0);
  return;
}


