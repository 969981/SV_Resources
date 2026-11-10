/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004c3314; name: FUN_004c3314
 */


void FUN_004c3314(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  pvVar2 = (void *)param_1[1];
  if ((ulong)(param_1[2] - (long)pvVar2 >> 3) < param_2) {
    lVar6 = (long)pvVar2 - *param_1 >> 3;
    uVar1 = lVar6 + param_2;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_1[2] - *param_1;
    uVar5 = lVar4 >> 2;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0xffffffffffffffe < (ulong)(lVar4 >> 3)) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
    }
    pvVar2 = (void *)(lVar4 + lVar6 * 8);
    memset(pvVar2,0,param_2 * 8);
    pvVar3 = (void *)*param_1;
    __n = param_1[1] - (long)pvVar3;
    if (0 < (long)__n) {
      memcpy((void *)((long)pvVar2 - __n),pvVar3,__n);
      pvVar3 = (void *)*param_1;
    }
    *param_1 = (long)((long)pvVar2 - __n);
    param_1[1] = (long)((long)pvVar2 + param_2 * 8);
    param_1[2] = lVar4 + uVar1 * 8;
    if (pvVar3 != (void *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
      return;
    }
  }
  else {
    pvVar3 = pvVar2;
    if (param_2 != 0) {
      pvVar3 = (void *)((long)pvVar2 + param_2 * 8);
      memset(pvVar2,0,param_2 * 8);
    }
    param_1[1] = (long)pvVar3;
  }
  return;
}


