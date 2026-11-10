/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0322bd4c; name: FUN_0322bd4c
 */


ulong FUN_0322bd4c(long param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  void *__dest;
  long lVar2;
  ulong __n;
  size_t __n_00;
  ulong uVar3;
  
  __n_00 = *(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28);
  __dest = (void *)(*(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28));
  __n = param_3;
  if (__n_00 < param_3) {
    do {
      memcpy(__dest,param_2,__n_00);
      uVar1 = *(long *)(param_1 + 0x28) + __n_00;
      *(ulong *)(param_1 + 0x28) = uVar1;
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        do {
          if (uVar1 < uVar3 || uVar1 - uVar3 == 0) {
            *(undefined8 *)(param_1 + 0x28) = 0;
            break;
          }
          lVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
                            (*(long **)(param_1 + 0x18),*(long *)(param_1 + 0x20) + uVar3,
                             uVar1 - uVar3);
          uVar3 = lVar2 + uVar3;
        } while (lVar2 != 0);
      }
      __n = __n - __n_00;
      if (uVar1 != (long)(int)uVar3) {
        return param_3 - __n;
      }
      param_2 = (void *)((long)param_2 + __n_00);
      __n_00 = *(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28);
      __dest = (void *)(*(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28));
    } while (__n_00 < __n);
  }
  memcpy(__dest,param_2,__n);
  *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + __n;
  return param_3;
}


