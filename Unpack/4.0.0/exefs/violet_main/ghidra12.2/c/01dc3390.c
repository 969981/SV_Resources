/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc3390; name: FUN_01dc3390
 */


void FUN_01dc3390(undefined1 param_1 [16],float param_2,undefined4 param_3,long param_4,int param_5,
                 int param_6,int param_7,undefined4 param_8,int param_9,undefined4 param_10)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  float *pfVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  long lStack_d0;
  long local_c8;
  long *local_c0;
  undefined1 auStack_b8 [24];
  long *local_a0;
  long *local_88;
  
  FUN_01dc1dc4(auStack_b8,param_4,param_6,param_7);
  local_88 = *(long **)(param_4 + 0x6cd0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x58))();
  }
  fVar17 = (float)FUN_01dc1eb0(&local_88,auStack_b8);
  fVar19 = param_2;
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x60))();
  }
  pfVar7 = (float *)FUN_01dc3bc0(param_4);
  plVar5 = (long *)PTR_DAT_047d8b70;
  plVar11 = (long *)PTR_PTR_047d4508;
  if (pfVar7 == (float *)0x0) goto LAB_01dc38dc;
  lVar13 = 0;
  do {
    plVar16 = *(long **)(param_4 + (ulong)*(byte *)(param_4 + 0x68da + lVar13) * 0x98 + 0x30);
    plVar14 = plVar11;
    local_d8 = plVar5;
    if (plVar16 != (long *)0x0) {
      plVar14 = plVar16 + 7;
      local_d8 = plVar16 + 6;
    }
    lVar12 = *(long *)(param_4 + 0x6cd0);
    local_d8 = (long *)*local_d8;
    lStack_d0 = *plVar14;
    if (plVar16 == (long *)0x0) {
      local_c8 = 0;
    }
    else {
      local_c8 = plVar16[8];
      local_c0 = (long *)0x0;
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
    local_c0 = plVar16;
    lVar12 = FUN_00c8c7b4(*(undefined8 *)(lVar12 + 0x170),&local_d8);
    bVar1 = *(byte *)(lVar12 + 0x58);
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
    if ((bVar1 & 1) == 0) {
      *(undefined1 *)((long)pfVar7 + 9) = *(undefined1 *)(param_4 + lVar13 + 0x68da);
      break;
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0x1e);
  if (param_5 == 1) {
    if (param_9 < 1) {
      fVar18 = *(float *)(param_4 + 0x6908);
      fVar19 = *(float *)(param_4 + 0x690c);
    }
    else {
      fVar18 = *(float *)(param_4 + 0x6914);
      fVar19 = *(float *)(param_4 + 0x6918);
    }
  }
  else {
    if (param_5 != 0) goto LAB_01dc38dc;
    local_e0 = *(long **)(param_4 + 0x6cd0);
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x58))();
    }
    FUN_01dc1dc4(&local_d8,param_4,param_8,param_9);
    fVar18 = (float)FUN_01dc1eb0(&local_e0,&local_d8);
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x60))();
    }
  }
  *pfVar7 = (fVar18 - fVar17) * 0.25;
  pfVar7[1] = (fVar19 - param_2) * 0.25;
  *(char *)(pfVar7 + 2) = (char)param_5;
  *(undefined2 *)((long)pfVar7 + 10) = 0x104;
  plVar14 = *(long **)(param_4 + 0x6cd0);
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x58))(plVar14);
  }
  plVar15 = *(long **)(param_4 + (ulong)*(byte *)((long)pfVar7 + 9) * 0x98 + 0x30);
  plVar16 = plVar11;
  local_d8 = plVar5;
  if (plVar15 != (long *)0x0) {
    plVar16 = plVar15 + 7;
    local_d8 = plVar15 + 6;
  }
  local_d8 = (long *)*local_d8;
  lStack_d0 = *plVar16;
  if (plVar15 == (long *)0x0) {
    local_c8 = 0;
  }
  else {
    local_c8 = plVar15[8];
  }
  local_c0 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  local_c0 = plVar15;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x58))(plVar14);
    lVar13 = FUN_00c8c7b4(plVar14[0x2e],&local_d8);
    (**(code **)(*plVar14 + 0x60))(plVar14);
    if (lVar13 != 0) {
      *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) | 1;
    }
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x60))(plVar14);
  }
  if (param_6 == 0) {
LAB_01dc36a0:
    lVar13 = 0x68bc;
  }
  else if (param_6 == 2) {
    lVar13 = 0x68f8;
  }
  else {
    if (param_6 != 1) goto LAB_01dc36a0;
    lVar13 = 0x68b0;
  }
  bVar1 = *(byte *)(param_4 + lVar13 + (long)param_7);
  plVar14 = *(long **)(param_4 + 0x6cd0);
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x58))(plVar14);
  }
  plVar15 = *(long **)(param_4 + (ulong)bVar1 * 0x98 + 0x30);
  plVar16 = plVar11;
  local_d8 = plVar5;
  if (plVar15 != (long *)0x0) {
    plVar16 = plVar15 + 7;
    local_d8 = plVar15 + 6;
  }
  local_d8 = (long *)*local_d8;
  lStack_d0 = *plVar16;
  if (plVar15 == (long *)0x0) {
    local_c8 = 0;
  }
  else {
    local_c8 = plVar15[8];
  }
  local_c0 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  local_c0 = plVar15;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x58))(plVar14);
    lVar13 = FUN_00c8c7b4(plVar14[0x2e],&local_d8);
    (**(code **)(*plVar14 + 0x60))(plVar14);
    if (lVar13 != 0) {
      *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe;
    }
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x60))(plVar14);
  }
  plVar14 = *(long **)(param_4 + 0x6cd0);
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x58))(plVar14);
  }
  plVar16 = *(long **)(param_4 + (ulong)*(byte *)((long)pfVar7 + 9) * 0x98 + 0x30);
  if (plVar16 != (long *)0x0) {
    plVar11 = plVar16 + 7;
    plVar5 = plVar16 + 6;
  }
  local_d8 = (long *)*plVar5;
  lStack_d0 = *plVar11;
  if (plVar16 == (long *)0x0) {
    local_c8 = 0;
  }
  else {
    local_c8 = plVar16[8];
  }
  local_c0 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x18))(plVar16);
  }
  local_c0 = plVar16;
  if (plVar14 == (long *)0x0) {
    lVar13 = 0;
  }
  else {
    lVar13 = FUN_00c8c7b4(plVar14[0x2e],&local_d8);
  }
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x60))(plVar14);
  }
  if (lVar13 != 0) {
    fVar19 = *(float *)(*(long *)(lVar13 + 0x18) + 0x30);
    *(float *)(lVar13 + 0x34) = param_2 - *(float *)(*(long *)(lVar13 + 0x18) + 0x34);
    *(undefined4 *)(lVar13 + 0x38) = param_3;
    *(float *)(lVar13 + 0x30) = fVar17 - fVar19;
    *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) | 0x10;
  }
  if (param_6 == 0) {
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    lVar13 = *(long *)PTR_DAT_047d4ca0;
    *(long *)PTR_DAT_047d4ca8 = lVar13;
    plVar11 = *(long **)(lVar13 + 0x1c8);
    plVar5 = *(long **)(lVar13 + 0x1c0);
    do {
      if (plVar5 == plVar11) {
        lVar13 = 0;
        break;
      }
      lVar13 = *plVar5;
      uVar10 = FUN_01dc3ca0(lVar13 + 0x28);
      plVar5 = plVar5 + 1;
    } while ((uVar10 & 1) == 0);
    param_10 = FUN_0149c05c(lVar13);
  }
  else if (1 < param_6 - 1U) {
    param_10 = 0;
  }
  FUN_01dc0268(&local_d8);
  local_e8 = (long *)thunk_FUN_010f26f8(local_d8,param_6,param_10,param_7);
  if (local_e8 != (long *)0x0) {
    plVar11 = local_e8 + 5;
    do {
      lVar13 = *plVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = (int)lVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar13 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  pcVar8 = (char *)FUN_013f728c(&local_e8);
  if (local_e8 != (long *)0x0) {
    plVar11 = local_e8 + 5;
    do {
      lVar13 = *plVar11;
      iVar6 = (int)lVar13 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_e8 + 0x10))();
    }
    else if ((int)lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_0149c1c0(&local_d8);
  uVar2 = *(undefined1 *)((long)pfVar7 + 9);
  local_f0 = (long *)0x0;
  if (*pcVar8 == '\0') {
    plVar11 = (long *)FUN_00d44228();
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    if (local_f0 != (long *)0x0) {
      lVar13 = *local_f0;
      local_f0 = plVar11;
      (**(code **)(lVar13 + 0x20))();
      plVar11 = local_f0;
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar9 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar9;
    FUN_00cf9884(&local_d8,uVar9,pcVar8);
    plVar11 = local_f0;
    local_f0 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))();
    }
    local_f0 = local_d8;
    plVar11 = local_f0;
  }
  local_f0 = plVar11;
  FUN_01dc1b80(uVar2,&local_f0);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
LAB_01dc38dc:
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  return;
}


