/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002ce838; name: FUN_002ce838
 */


void FUN_002ce838(undefined8 *param_1,void *param_2,void *param_3)

{
  void *__src;
  long lVar1;
  size_t sVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = param_1[2];
  sVar2 = (long)param_3 - (long)param_2;
  uVar4 = (long)sVar2 >> 2;
  pvVar3 = (void *)*param_1;
  if (uVar4 <= (ulong)(lVar1 - (long)pvVar3 >> 2)) {
    uVar5 = param_1[1] - (long)pvVar3 >> 2;
    __src = (void *)((long)param_2 + (param_1[1] - (long)pvVar3));
    if (uVar4 <= uVar5) {
      __src = param_3;
    }
    sVar2 = (long)__src - (long)param_2;
    if (sVar2 != 0) {
      memmove(pvVar3,param_2,sVar2);
    }
    if (uVar5 < uVar4) {
      pvVar3 = (void *)param_1[1];
      sVar2 = (long)param_3 - (long)__src;
      if (0 < (long)sVar2) {
        memcpy(pvVar3,__src,sVar2);
        pvVar3 = (void *)((long)pvVar3 + sVar2);
      }
      param_1[1] = pvVar3;
    }
    else {
      param_1[1] = (long)pvVar3 + sVar2;
    }
    return;
  }
  if (pvVar3 != (void *)0x0) {
    param_1[1] = pvVar3;
    FUN_0049e790(PTR_LAB_047cba48,pvVar3);
    lVar1 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (uVar4 >> 0x3e == 0) {
    if (uVar4 <= (ulong)(lVar1 >> 1)) {
      uVar4 = lVar1 >> 1;
    }
    if (0x1ffffffffffffffe < (ulong)(lVar1 >> 2)) {
      uVar4 = 0x3fffffffffffffff;
    }
    if (uVar4 >> 0x3e == 0) {
      pvVar3 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4 * 4);
      param_1[2] = (void *)((long)pvVar3 + uVar4 * 4);
      *param_1 = pvVar3;
      param_1[1] = pvVar3;
      if (0 < (long)sVar2) {
        memcpy(pvVar3,param_2,sVar2);
        pvVar3 = (void *)((long)pvVar3 + sVar2);
      }
      param_1[1] = pvVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_length_error();
}


