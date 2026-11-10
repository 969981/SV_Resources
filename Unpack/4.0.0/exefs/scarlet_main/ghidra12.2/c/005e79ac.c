/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005e79ac; name: FUN_005e79ac
 */


void FUN_005e79ac(undefined4 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  plVar3 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 8) = plVar3;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    uVar7 = *(undefined8 *)(param_2 + 4);
    uVar6 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar7;
    *(undefined8 *)(param_1 + 2) = uVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 4);
    pvVar2 = *(void **)(param_2 + 6);
    if (uVar1 < 0x17) {
      pvVar5 = (void *)((long)param_1 + 9);
      *(char *)(param_1 + 2) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
      *(ulong *)(param_1 + 4) = uVar1;
      *(void **)(param_1 + 6) = pvVar5;
      *(ulong *)(param_1 + 2) = uVar4 | 1;
    }
    memcpy(pvVar5,pvVar2,uVar1 + 1);
  }
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  plVar3 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 0x12) = plVar3;
  if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
    uVar7 = *(undefined8 *)(param_2 + 0xe);
    uVar6 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xe) = uVar7;
    *(undefined8 *)(param_1 + 0xc) = uVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0xe);
    pvVar2 = *(void **)(param_2 + 0x10);
    if (uVar1 < 0x17) {
      pvVar5 = (void *)((long)param_1 + 0x31);
      *(char *)(param_1 + 0xc) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 005e7b8c to 005e7b93 has its CatchHandler @ 005e7be0 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
      *(ulong *)(param_1 + 0xe) = uVar1;
      *(void **)(param_1 + 0x10) = pvVar5;
      *(ulong *)(param_1 + 0xc) = uVar4 | 1;
    }
    memcpy(pvVar5,pvVar2,uVar1 + 1);
  }
  plVar3 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 0x1a) = plVar3;
  if ((*(byte *)(param_2 + 0x14) & 1) == 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x16);
    uVar6 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x16) = uVar7;
    *(undefined8 *)(param_1 + 0x14) = uVar6;
    return;
  }
  uVar1 = *(ulong *)(param_2 + 0x16);
  pvVar2 = *(void **)(param_2 + 0x18);
  if (uVar1 < 0x17) {
    pvVar5 = (void *)((long)param_1 + 0x51);
    *(char *)(param_1 + 0x14) = (char)((int)uVar1 << 1);
  }
  else {
    if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 005e7b94 to 005e7b9b has its CatchHandler @ 005e7b9c */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
    *(ulong *)(param_1 + 0x14) = uVar4 | 1;
    *(ulong *)(param_1 + 0x16) = uVar1;
    *(void **)(param_1 + 0x18) = pvVar5;
  }
  memcpy(pvVar5,pvVar2,uVar1 + 1);
  return;
}


