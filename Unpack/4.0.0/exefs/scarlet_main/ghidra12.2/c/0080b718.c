/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0080b718; name: FUN_0080b718
 */


void FUN_0080b718(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  
  plVar3 = (long *)FUN_01cf7e20();
  param_1[3] = (ulong)plVar3;
  if ((*param_2 & 1) == 0) {
    uVar1 = *param_2;
    uVar4 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = uVar4;
    *param_1 = uVar1;
  }
  else {
    uVar1 = param_2[1];
    pvVar2 = (void *)param_2[2];
    if (uVar1 < 0x17) {
      pvVar5 = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
      param_1[1] = uVar1;
      param_1[2] = (ulong)pvVar5;
      *param_1 = uVar4 | 1;
    }
    memcpy(pvVar5,pvVar2,uVar1 + 1);
  }
  plVar3 = (long *)FUN_01cf7e20();
  param_1[7] = (ulong)plVar3;
  if ((param_2[4] & 1) == 0) {
    uVar1 = param_2[4];
    uVar4 = param_2[6];
    param_1[5] = param_2[5];
    param_1[6] = uVar4;
    param_1[4] = uVar1;
  }
  else {
    uVar1 = param_2[5];
    pvVar2 = (void *)param_2[6];
    if (uVar1 < 0x17) {
      pvVar5 = (void *)((long)param_1 + 0x21);
      *(char *)(param_1 + 4) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
      param_1[4] = uVar4 | 1;
      param_1[5] = uVar1;
      param_1[6] = (ulong)pvVar5;
    }
    memcpy(pvVar5,pvVar2,uVar1 + 1);
  }
  uVar1 = param_2[8];
  *(byte *)((long)param_1 + 0x44) = *(byte *)((long)param_2 + 0x44);
  *(int *)(param_1 + 8) = (int)uVar1;
  return;
}


