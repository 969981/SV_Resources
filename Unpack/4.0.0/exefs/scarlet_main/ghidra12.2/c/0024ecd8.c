/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0024ecd8; name: FUN_0024ecd8
 */


void FUN_0024ecd8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long *plVar8;
  Result *pRVar9;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  size_t __n;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int local_60 [2];
  int local_58 [2];
  
  pRVar9 = (Result *)local_60;
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar14 = param_2[3];
  uVar5 = param_2[2];
  uVar16 = param_2[5];
  uVar15 = param_2[4];
  uVar18 = param_2[7];
  uVar17 = param_2[6];
  uVar20 = param_2[9];
  uVar19 = param_2[8];
  plVar1 = param_2 + 10;
  param_1[0xe] = 0;
  param_1[7] = uVar18;
  param_1[6] = uVar17;
  param_1[9] = uVar20;
  param_1[8] = uVar19;
  param_1[3] = uVar14;
  param_1[2] = uVar5;
  param_1[5] = uVar16;
  param_1[4] = uVar15;
  if (param_1 != param_2) {
    plVar4 = (long *)param_2[0xe];
    if (plVar4 == (long *)0x0) {
      param_1[0xe] = 0;
    }
    else if (plVar4 == plVar1) {
      param_1[0xe] = param_1 + 10;
      (**(code **)(*(long *)param_2[0xe] + 0x28))();
    }
    else {
      uVar5 = (**(code **)(*plVar4 + 0x38))();
      param_1[0xe] = uVar5;
    }
  }
  plVar4 = (long *)*param_2;
  param_1[0x10] = plVar4;
  uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,0x148,8);
  FUN_006c5720(uVar5,param_1[0x10]);
  param_1[0x11] = uVar5;
  param_1[0x12] = plVar4;
  uVar11 = param_2[1];
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  plVar4 = (long *)FUN_01cf7e20();
  param_1[0x16] = plVar4;
  if (uVar11 != 0) {
    if (0x92492492492492 < uVar11) {
                    /* try { // try from 0024f0a8 to 0024f0af has its CatchHandler @ 0024f110 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = uVar11 * 0x1c0;
    pvVar6 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,lVar12,8);
    param_1[0x13] = pvVar6;
    param_1[0x15] = (void *)((long)pvVar6 + lVar12);
    memset(pvVar6,0,((lVar12 - 0x1c0U) / 0x1c0) * 0x1c0 + 0x1c0);
    param_1[0x14] = (void *)((long)pvVar6 + lVar12);
  }
  uVar11 = param_2[1];
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  plVar4 = (long *)FUN_01cf7e20();
  param_1[0x1a] = plVar4;
  if (uVar11 != 0) {
    if (uVar11 >> 0x3d != 0) {
                    /* try { // try from 0024f0b0 to 0024f0b7 has its CatchHandler @ 0024f0b8 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    __n = uVar11 * 8;
    pvVar6 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,__n,8);
    param_1[0x17] = pvVar6;
    param_1[0x19] = (void *)((long)pvVar6 + __n);
    memset(pvVar6,0,__n);
    param_1[0x18] = (void *)((long)pvVar6 + __n);
  }
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x1b),false,0);
  plVar4 = (long *)param_1[0x10];
  param_1[0x24] = 0;
  puVar7 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x40,0x10);
  *puVar7 = 0;
  puVar7[6] = 0;
  param_1[0x26] = puVar7;
  param_1[0x27] = plVar4;
  if (param_1[1] == 0) {
    return;
  }
  puVar2 = (undefined8 *)param_1[0x18];
  puVar13 = (undefined8 *)param_1[0x17];
  if ((undefined8 *)param_1[0x17] != puVar2) {
    do {
      uVar5 = (**(code **)(*(long *)param_1[0x10] + 0x10))((long *)param_1[0x10],param_1[2],0x1000);
      puVar7 = puVar13 + 1;
      *puVar13 = uVar5;
      puVar13 = puVar7;
    } while (puVar2 != puVar7);
    puVar7 = (undefined8 *)param_1[0x26];
  }
  *puVar7 = param_1[0x11];
  lVar12 = param_1[0x26];
  plVar4 = (long *)(lVar12 + 0x10);
  if (plVar4 != plVar1) {
    plVar8 = *(long **)(lVar12 + 0x30);
    if (plVar8 != (long *)0x0) {
      if (plVar8 == plVar4) {
        pcVar10 = *(code **)(*plVar8 + 0x10);
      }
      else {
        pcVar10 = *(code **)(*plVar8 + 0x18);
      }
      (*pcVar10)();
    }
    plVar8 = (long *)param_2[0xe];
    if (plVar8 != (long *)0x0) {
      if (plVar8 == plVar1) {
        *(long **)(lVar12 + 0x30) = plVar4;
        (**(code **)(*(long *)param_2[0xe] + 0x28))((long *)param_2[0xe],plVar4);
        lVar12 = param_1[1];
      }
      else {
        uVar5 = (**(code **)(*plVar8 + 0x38))();
        *(undefined8 *)(lVar12 + 0x30) = uVar5;
        lVar12 = param_1[1];
      }
      goto joined_r0x0024ef60;
    }
    *(undefined8 *)(lVar12 + 0x30) = 0;
  }
  lVar12 = param_1[1];
joined_r0x0024ef60:
  if (lVar12 != 0) {
    lVar12 = 0;
    uVar11 = 0;
    do {
      pvVar6 = *(void **)(param_1[0x17] + uVar11 * 8);
      if (*(int *)(param_2 + 4) == -1) {
        iVar3 = FUN_0024f1c0(param_2[5]);
        local_58[0] = nn::os::CreateThread
                                ((ThreadType *)(param_1[0x13] + lVar12),
                                 (_func_void_void_ptr *)&LAB_0024f180,(void *)param_1[0x26],pvVar6,
                                 param_1[2],*(int *)(param_2 + 3),iVar3);
        if (local_58[0] != 0) {
          pRVar9 = (Result *)local_58;
          goto LAB_0024f094;
        }
        iVar3 = -1;
      }
      else {
        local_60[0] = nn::os::CreateThread
                                ((ThreadType *)(param_1[0x13] + lVar12),
                                 (_func_void_void_ptr *)&LAB_0024f180,(void *)param_1[0x26],pvVar6,
                                 param_1[2],*(int *)(param_2 + 3),*(int *)(param_2 + 4));
        if (local_60[0] != 0) {
LAB_0024f094:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0,pRVar9,"");
        }
        iVar3 = -3;
      }
      nn::os::SetThreadCoreMask((ThreadType *)(param_1[0x13] + lVar12),iVar3,param_2[5]);
      nn::os::SetThreadName((ThreadType *)(param_1[0x13] + lVar12),(char *)(param_2 + 6));
      nn::os::StartThread((ThreadType *)(param_1[0x13] + lVar12));
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x1c0;
    } while (uVar11 < (ulong)param_1[1]);
  }
  return;
}


