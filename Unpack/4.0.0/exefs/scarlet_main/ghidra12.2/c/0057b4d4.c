/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0057b4d4; name: FUN_0057b4d4
 */


void * FUN_0057b4d4(long param_1,void *param_2,long *param_3)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  size_t __n;
  
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  if ((*(byte *)(uVar2 + 8) & 1) == 0) {
    pvVar1 = (void *)(uVar2 + 9);
    uVar3 = (ulong)(*(byte *)(uVar2 + 8) >> 1);
  }
  else {
    uVar3 = *(ulong *)(uVar2 + 0x10);
    pvVar1 = *(void **)(uVar2 + 0x18);
  }
  __n = (size_t)(int)uVar3;
  if (*param_3 - (long)param_2 < (long)__n) {
    pvVar1 = (void *)FUN_0052c7dc(param_3,pvVar1,uVar3 & 0xffffffff,param_2);
    return pvVar1;
  }
  memcpy(param_2,pvVar1,__n);
  return (void *)((long)param_2 + __n);
}


