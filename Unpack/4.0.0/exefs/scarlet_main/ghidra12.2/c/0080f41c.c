/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0080f41c; name: FUN_0080f41c
 */


void FUN_0080f41c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  void *__src;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  void *__dest;
  ulong uVar5;
  
  plVar4 = (long *)FUN_01cf7e20();
  param_1[3] = (ulong)plVar4;
  if ((*param_2 & 1) == 0) {
    uVar1 = *param_2;
    uVar5 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = uVar5;
    *param_1 = uVar1;
  }
  else {
    uVar1 = param_2[1];
    __src = (void *)param_2[2];
    if (uVar1 < 0x17) {
      __dest = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar5 = uVar1 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar5,1);
      param_1[1] = uVar1;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar5 | 1;
    }
    memcpy(__dest,__src,uVar1 + 1);
  }
  *(short *)(param_1 + 4) = (short)param_2[4];
  plVar4 = (long *)FUN_01cf7e20();
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = (ulong)plVar4;
  lVar3 = param_2[6] - param_2[5];
  if (lVar3 != 0) {
    if (0x249249249249249 < (ulong)((lVar3 >> 4) * 0x6db6db6db6db6db7)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,lVar3,8);
    param_1[7] = uVar5 + (lVar3 >> 4) * 0x10;
    param_1[5] = uVar5;
    param_1[6] = uVar5;
    uVar2 = param_2[6];
    for (uVar1 = param_2[5]; uVar1 != uVar2; uVar1 = uVar1 + 0x70) {
      FUN_005e79ac(uVar5,uVar1);
      uVar5 = uVar5 + 0x70;
    }
    param_1[6] = uVar5;
  }
  uVar1 = param_2[9];
  uVar5 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar5;
  param_1[9] = uVar1;
  return;
}


