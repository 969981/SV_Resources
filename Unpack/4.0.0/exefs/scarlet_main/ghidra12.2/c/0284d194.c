/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0284d194; name: FUN_0284d194
 */


void FUN_0284d194(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *local_58;
  undefined8 uStack_50;
  long local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  *param_1 = &PTR_FUN_045e4400;
  param_1[4] = &PTR_LAB_045e44b0;
  param_1[5] = &PTR_LAB_045e44d0;
  param_1[6] = &PTR_LAB_045e44f0;
  param_1[7] = &PTR_LAB_045e4568;
  if (((*PTR_DAT_047da9b8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047da9b8), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047daa28,PTR_DAT_047da9c0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da9b8);
  }
  lVar9 = *(long *)PTR_DAT_047da9c0;
  *(long *)PTR_DAT_047da9c8 = lVar9;
  if (lVar9 != 0) {
    local_48 = lVar9 + 0x28;
    local_40 = 1;
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    FUN_01ea2bf8(param_1,&local_58);
    puVar12 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_58 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_58 + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_38 = *puVar12;
          FUN_00c44438(lVar9 + 0x8040,&local_38);
        }
      }
      else if (sVar3 == 0) goto LAB_0284d36c;
    }
  }
  thunk_FUN_02789fe4();
  lVar9 = param_1[0x4e];
  if (lVar9 != 0) {
    lVar10 = param_1[0x50];
    param_1[0x4f] = lVar9;
    plVar13 = (long *)param_1[0x51];
    uVar7 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar9,lVar10 - lVar9,8);
    }
    else {
      FUN_00c48fe8(plVar13,lVar9,lVar10 - lVar9,8);
    }
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x4a));
  if (param_1[0x28] != 0) {
    plVar13 = (long *)param_1[0x22];
    lVar9 = param_1[0x28] << 3;
    uVar11 = param_1[0x26];
    uVar7 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,uVar11,lVar9,8);
    }
    else {
      FUN_00c48fe8(plVar13,uVar11,lVar9,8);
    }
  }
  puVar12 = (undefined8 *)param_1[0x1e];
  if (puVar12 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar12 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar12 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_38 = *puVar12;
        FUN_00c44438(lVar9 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) goto LAB_0284d36c;
  }
  FUN_0284d568(param_1 + 0x17);
  FUN_0284d5cc(param_1 + 0xf);
  plVar13 = (long *)param_1[0xe];
  if (plVar13 != (long *)0x0) {
    lVar9 = plVar13[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_0284d36c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  lVar9 = param_1[10];
  param_1[10] = 0;
  if (lVar9 != 0) {
    FUN_0284d674(param_1 + 0xb);
  }
  FUN_018dd220(param_1 + 9);
  return;
}


