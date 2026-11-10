/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029c15dc; name: FUN_029c15dc
 */


void FUN_029c15dc(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  size_t __n;
  long lVar4;
  long lVar5;
  void *__src;
  
  lVar2 = FUN_029c2518(param_1,(param_1[1] - *param_1 >> 2) + 1);
  __src = (void *)*param_1;
  lVar4 = param_1[1];
  lVar5 = lVar4 - (long)__src;
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_029c255c(lVar2);
    __src = (void *)*param_1;
    lVar4 = param_1[1];
  }
  puVar1 = (undefined4 *)(lVar3 + (lVar5 >> 2) * 4);
  __n = lVar4 - (long)__src;
  *puVar1 = *param_2;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar1 - __n),__src,__n);
  }
  *param_1 = (long)((long)puVar1 - __n);
  param_1[1] = (long)(puVar1 + 1);
  param_1[2] = lVar3 + lVar2 * 4;
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}


