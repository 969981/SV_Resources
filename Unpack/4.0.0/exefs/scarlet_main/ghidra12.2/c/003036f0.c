/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003036f0; name: FUN_003036f0
 */


void FUN_003036f0(long param_1,void *param_2)

{
  void *__src;
  long lVar1;
  size_t __n;
  long lVar2;
  ulong uVar3;
  
  if ((param_1 == 0) || (param_2 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lVar1 = *(long *)(param_1 + 8);
      if (*(long *)(lVar1 + lVar2) == 0) {
        __n = (size_t)*(byte *)(lVar1 + lVar2 + 8);
        __src = (void *)(lVar1 + lVar2 + 9);
      }
      else {
        __n = *(size_t *)(lVar1 + lVar2 + 8);
        __src = *(void **)(lVar1 + lVar2 + 0x10);
      }
      memcpy(param_2,__src,__n);
      uVar3 = uVar3 + 1;
      param_2 = (void *)((long)param_2 + __n);
      lVar2 = lVar2 + 0x20;
    } while (uVar3 < *(ulong *)(param_1 + 0x10));
  }
  return;
}


