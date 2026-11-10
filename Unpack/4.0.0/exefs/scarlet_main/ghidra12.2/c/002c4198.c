/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002c4198; name: FUN_002c4198
 */


void FUN_002c4198(long *param_1,byte *param_2,byte *param_3)

{
  ulong uVar1;
  void *pvVar2;
  byte bVar3;
  undefined *puVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  *param_1 = (long)(PTR_DAT_047cc850 + 0x10);
  param_1[1] = 1;
  if ((*param_2 & 1) == 0) {
    lVar8 = *(long *)(param_2 + 8);
    lVar7 = *(long *)param_2;
    param_1[4] = *(long *)(param_2 + 0x10);
    param_1[3] = lVar8;
    param_1[2] = lVar7;
    bVar3 = *param_3;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 8);
    pvVar2 = *(void **)(param_2 + 0x10);
    if (uVar1 < 0x17) {
      pvVar5 = (void *)((long)param_1 + 0x11);
      *(char *)(param_1 + 2) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 002c42dc to 002c42e3 has its CatchHandler @ 002c430c */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar6 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
      param_1[3] = uVar1;
      param_1[4] = (long)pvVar5;
      param_1[2] = uVar6 | 1;
    }
    memcpy(pvVar5,pvVar2,uVar1 + 1);
    bVar3 = *param_3;
  }
  if ((bVar3 & 1) == 0) {
    lVar8 = *(long *)(param_3 + 8);
    lVar7 = *(long *)param_3;
    param_1[7] = *(long *)(param_3 + 0x10);
    param_1[6] = lVar8;
    param_1[5] = lVar7;
  }
  else {
    uVar1 = *(ulong *)(param_3 + 8);
    pvVar2 = *(void **)(param_3 + 0x10);
    if (uVar1 < 0x17) {
      pvVar5 = (void *)((long)param_1 + 0x29);
      *(char *)(param_1 + 5) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002c42e4 to 002c42e7 has its CatchHandler @ 002c42e8 */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar6 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
      param_1[6] = uVar1;
      param_1[7] = (long)pvVar5;
      param_1[5] = uVar6 | 1;
    }
    memcpy(pvVar5,pvVar2,uVar1 + 1);
  }
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  puVar4 = PTR_LAB_047cc858;
  param_1[0x13] = 0;
  param_1[0x11] = (long)puVar4;
  param_1[0x12] = (long)param_1;
  return;
}


