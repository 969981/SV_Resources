/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029b6be8; name: FUN_029b6be8
 */


void FUN_029b6be8(long *param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  size_t __n;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  void *__dest;
  ulong uVar6;
  
  uVar6 = (long)param_3 - (long)param_2 >> 6;
  __dest = (void *)*param_1;
  if ((ulong)(param_1[2] - (long)__dest >> 6) < uVar6) {
    FUN_029b6e44(param_1);
    uVar2 = param_1[4];
    if (0x7ffffffffffffffe < uVar2) {
      uVar2 = 0x7fffffffffffffff;
    }
    if (uVar2 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar3 = param_1[2] - *param_1 >> 5;
    if (uVar6 <= uVar3) {
      uVar6 = uVar3;
    }
    if (uVar2 >> 1 <= (ulong)(param_1[2] - *param_1 >> 6)) {
      uVar6 = uVar2;
    }
    FUN_029b6edc(param_1,uVar6);
    lVar4 = param_1[1];
    if (param_2 != param_3) {
      do {
        FUN_029b6d4c(param_1 + 3,lVar4,param_2);
        param_2 = (void *)((long)param_2 + 0x40);
        lVar4 = lVar4 + 0x40;
      } while (param_3 != param_2);
    }
    param_1[1] = lVar4;
  }
  else {
    pvVar5 = (void *)((long)param_2 + (param_1[1] - (long)__dest));
    uVar2 = param_1[1] - (long)__dest >> 6;
    pvVar1 = pvVar5;
    if (uVar6 <= uVar2) {
      pvVar1 = param_3;
    }
    __n = (long)pvVar1 - (long)param_2;
    if (__n != 0) {
      memmove(__dest,param_2,__n);
    }
    if (uVar2 < uVar6) {
      lVar4 = param_1[1];
      if (pvVar1 != param_3) {
        do {
          FUN_029b6d4c(param_1 + 3,lVar4,pvVar5);
          pvVar5 = (void *)((long)pvVar5 + 0x40);
          lVar4 = lVar4 + 0x40;
        } while (param_3 != pvVar5);
      }
      param_1[1] = lVar4;
    }
    else {
      param_1[1] = (long)__dest + __n;
    }
  }
  return;
}


