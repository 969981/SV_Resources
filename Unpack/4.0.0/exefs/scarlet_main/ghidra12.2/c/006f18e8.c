/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006f18e8; name: FUN_006f18e8
 */


void FUN_006f18e8(long *param_1,long param_2)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = (long)(PTR_DAT_047cff40 + 0x10);
  lVar6 = *(long *)(param_2 + 8);
  param_1[2] = *(long *)(param_2 + 0x10);
  param_1[1] = lVar6;
  plVar3 = (long *)FUN_01cf7e20();
  param_1[6] = (long)plVar3;
  if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
    lVar7 = *(long *)(param_2 + 0x20);
    lVar6 = *(long *)(param_2 + 0x18);
    param_1[5] = *(long *)(param_2 + 0x28);
    param_1[4] = lVar7;
    param_1[3] = lVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x20);
    pvVar2 = *(void **)(param_2 + 0x28);
    if (uVar1 < 0x17) {
      pvVar5 = (void *)((long)param_1 + 0x19);
      *(char *)(param_1 + 3) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
      param_1[4] = uVar1;
      param_1[5] = (long)pvVar5;
      param_1[3] = uVar4 | 1;
    }
    memcpy(pvVar5,pvVar2,uVar1 + 1);
  }
  plVar3 = (long *)FUN_01cf7e20();
  param_1[10] = (long)plVar3;
  if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
    lVar7 = *(long *)(param_2 + 0x40);
    lVar6 = *(long *)(param_2 + 0x38);
    param_1[9] = *(long *)(param_2 + 0x48);
    param_1[8] = lVar7;
    param_1[7] = lVar6;
    return;
  }
  uVar1 = *(ulong *)(param_2 + 0x40);
  pvVar2 = *(void **)(param_2 + 0x48);
  if (uVar1 < 0x17) {
    pvVar5 = (void *)((long)param_1 + 0x39);
    *(char *)(param_1 + 7) = (char)((int)uVar1 << 1);
  }
  else {
    if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 006f1a4c to 006f1a53 has its CatchHandler @ 006f1a54 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
    param_1[7] = uVar4 | 1;
    param_1[8] = uVar1;
    param_1[9] = (long)pvVar5;
  }
  memcpy(pvVar5,pvVar2,uVar1 + 1);
  return;
}


