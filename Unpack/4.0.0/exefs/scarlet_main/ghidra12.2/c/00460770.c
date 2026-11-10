/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00460770; name: FUN_00460770
 */


void FUN_00460770(long param_1,void *param_2,size_t param_3)

{
  void *__dest;
  ulong uVar1;
  size_t __n;
  ulong __n_00;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xe0);
  if (lVar2 != 0) {
    __n = 0x10 - lVar2;
    __dest = (void *)(param_1 + lVar2 + 0xd0);
    if (param_3 < __n) {
      memcpy(__dest,param_2,param_3);
      __n_00 = lVar2 + param_3;
      goto LAB_00460820;
    }
    memcpy(__dest,param_2,__n);
    FUN_00460840(param_1,param_1 + 0xd0,0x10,1);
    param_2 = (void *)((long)param_2 + __n);
    param_3 = param_3 - __n;
  }
  __n_00 = param_3 & 0xf;
  uVar1 = param_3 & 0xfffffffffffffff0;
  if (uVar1 != 0) {
    FUN_00460840(param_1,param_2,uVar1,1);
    param_2 = (void *)((long)param_2 + uVar1);
  }
  if (__n_00 != 0) {
    memcpy((void *)(param_1 + 0xd0),param_2,__n_00);
  }
LAB_00460820:
  *(ulong *)(param_1 + 0xe0) = __n_00;
  return;
}


