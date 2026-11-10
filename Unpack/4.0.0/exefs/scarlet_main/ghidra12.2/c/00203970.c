/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00203970; name: FUN_00203970
 */


void FUN_00203970(ulong *param_1,ulong *param_2)

{
  void *pvVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  
  plVar2 = (long *)FUN_01cf7e20();
  param_1[3] = (ulong)plVar2;
  if ((*param_2 & 1) == 0) {
    uVar3 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    *param_1 = uVar5;
  }
  else {
    uVar5 = param_2[1];
    pvVar1 = (void *)param_2[2];
    if (uVar5 < 0x17) {
      puVar4 = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar5 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar3 = uVar5 + 0x10 & 0xfffffffffffffff0;
      puVar4 = (undefined1 *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar3,1);
      param_1[1] = uVar5;
      param_1[2] = (ulong)puVar4;
      *param_1 = uVar3 | 1;
    }
    memcpy(puVar4,pvVar1,uVar5 + 1);
  }
  plVar2 = (long *)FUN_01cf7e20();
  param_1[7] = (ulong)plVar2;
  if ((param_2[4] & 1) == 0) {
    uVar3 = param_2[5];
    uVar5 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    param_1[4] = uVar5;
    return;
  }
  uVar5 = param_2[5];
  pvVar1 = (void *)param_2[6];
  if (uVar5 < 0x17) {
    puVar4 = (undefined1 *)((long)param_1 + 0x21);
    *(char *)(param_1 + 4) = (char)((int)uVar5 << 1);
  }
  else {
    if (0xffffffffffffffef < uVar5) {
                    /* try { // try from 00203aa8 to 00203aaf has its CatchHandler @ 00203ab0 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    uVar3 = uVar5 + 0x10 & 0xfffffffffffffff0;
    puVar4 = (undefined1 *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar3,1);
    param_1[4] = uVar3 | 1;
    param_1[5] = uVar5;
    param_1[6] = (ulong)puVar4;
  }
  memcpy(puVar4,pvVar1,uVar5 + 1);
  return;
}


