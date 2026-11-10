/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034f890; name: FUN_0034f890
 */


void FUN_0034f890(long param_1)

{
  void *__ptr;
  long lVar1;
  ulong uVar2;
  
  free(*(void **)(param_1 + 0x20));
  __ptr = *(void **)(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      free(*(void **)((long)__ptr + lVar1));
      free(*(void **)(*(long *)(param_1 + 0x10) + lVar1 + 8));
      __ptr = *(void **)(param_1 + 0x10);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (uVar2 < *(ulong *)(param_1 + 8));
  }
  free(__ptr);
  return;
}


