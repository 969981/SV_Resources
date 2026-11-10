/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001eed9c; name: FUN_001eed9c
 */


long FUN_001eed9c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x108);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x120);
    if (lVar1 == 0) {
      if (((ulong)*(uint *)(param_1 + 0x96c) <= *(ulong *)(param_1 + 0x8e8)) ||
         (lVar1 = *(long *)(param_1 + 0x138), lVar1 == 0)) {
        if (*(int *)(param_1 + 0x94c) < 1) {
          return 0;
        }
        lVar1 = FUN_001f9f30(param_1 + 0x20);
        return lVar1;
      }
      param_1 = param_1 + 0x138;
    }
    else {
      param_1 = param_1 + 0x120;
    }
  }
  else {
    param_1 = param_1 + 0x108;
  }
  FUN_001f920c(param_1);
  *(undefined1 *)(lVar1 + 0x90) = 0;
  return lVar1;
}


