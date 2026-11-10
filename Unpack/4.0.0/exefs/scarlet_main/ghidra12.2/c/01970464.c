/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01970464; name: FUN_01970464
 */


void FUN_01970464(long param_1,undefined4 param_2,long param_3,uint param_4,undefined4 param_5)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  undefined4 uVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  MutexType *pMVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  short sVar18;
  long *plVar19;
  int iVar20;
  undefined8 *local_f0;
  code *local_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined1 auStack_d0 [96];
  undefined8 local_70 [3];
  long *local_58;
  
  FUN_010f42fc(&local_f0);
  puVar9 = local_f0;
  if (local_f0 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_f0 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_f0 + 0x1a);
    sVar18 = *(short *)((long)local_f0 + 0x1a);
    do {
      sVar5 = *psVar1;
      if (sVar5 == sVar18) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar18 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_019704fc;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_019704fc:
        bVar7 = false;
      }
      if (bVar7) {
        plVar19 = (long *)0x0;
        if (local_f0[2] != 0) {
          plVar19 = (long *)(local_f0[2] + -0x28);
        }
        goto LAB_01970524;
      }
      sVar18 = sVar5;
    } while (sVar5 != 0);
  }
  plVar19 = (long *)0x0;
LAB_01970524:
  psVar1 = (short *)(local_f0 + 3);
  do {
    sVar18 = *psVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar7) {
      *psVar1 = sVar18 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar18 == 1) {
    piVar2 = (int *)((long)local_f0 + 0x1c);
    do {
      iVar12 = *piVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar17 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar17;
      local_70[0] = *puVar9;
      FUN_00c44438(lVar17 + 0x8040,local_70);
    }
  }
  else if (sVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  if (plVar19 == (long *)0x0) {
    return;
  }
  iVar12 = *(int *)(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0x1a8) == 0) {
    *(undefined4 *)(param_1 + 0x1a4) = param_2;
    local_f0 = (undefined8 *)0x122e7207bd67361b;
    local_e8 = (code *)&DAT_03c3c6f0;
    local_e0 = 2;
    local_d8 = (long *)0x0;
    FUN_0116b840(local_70,param_2);
    (**(code **)(*plVar19 + 0x130))(plVar19,&local_f0,local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
  }
  else if (*(int *)(param_1 + 0x1a8) == 1) {
    *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x1a0);
    FUN_019fdb2c();
  }
  if (*(int *)(param_1 + 0x1b4) != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x1b0);
    if (*(int *)(param_1 + 0x1b4) == 1) {
      FUN_019fdb60(param_1);
    }
    uVar13 = FUN_020e0b24(uVar4);
    if ((uVar13 & 1) == 0) goto LAB_01970658;
  }
  pMVar14 = (MutexType *)(**(code **)(*plVar19 + 0x170))(plVar19);
  nn::os::LockMutex(pMVar14);
  iVar11 = (**(code **)(*plVar19 + 0x158))(plVar19);
  puVar8 = PTR_DAT_047d8b70;
  if (0 < iVar11) {
    iVar20 = 0;
    do {
      plVar15 = (long *)(**(code **)(*plVar19 + 0x160))(plVar19,iVar20);
      if (plVar15 == (long *)0x0) break;
      plVar3 = (long *)puVar8;
      if (*(long *)(param_1 + 400) != 0) {
        plVar3 = (long *)(*(long *)(param_1 + 400) + 0x30);
      }
      if (*plVar15 == *plVar3) {
        if (iVar12 == 0) {
          nn::os::UnlockMutex(pMVar14);
          goto LAB_01970658;
        }
        if (((*PTR_DAT_047d8280 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8280);
        }
        uVar16 = *(undefined8 *)PTR_DAT_047d8288;
        *(undefined8 *)PTR_DAT_047d8290 = uVar16;
        FUN_013ee4a0(0,uVar16,(int)plVar15[4],4);
        break;
      }
      iVar20 = iVar20 + 1;
    } while (iVar11 != iVar20);
  }
  nn::os::UnlockMutex(pMVar14);
  if (**(char **)(param_3 + 8) == '\0') {
    FUN_0135d26c(local_70,param_1 + 400);
    local_e0 = 0;
    local_d8 = (long *)0x0;
    local_f0 = (undefined8 *)0x0;
    local_e8 = (code *)0x0;
    FUN_0131fc3c(plVar19,local_70,&local_f0,param_5);
    pcVar10 = local_e8;
    bVar7 = local_e8 != (code *)0x0;
    local_e8 = (code *)0x0;
    if (bVar7) {
      local_e0 = 0;
      local_d8 = (long *)0x0;
      local_f0 = (undefined8 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar10)(auStack_d0);
    }
  }
  else {
    FUN_0135d26c(&local_f0,param_1 + 400);
    FUN_020e0d5c(plVar19,&local_f0,param_3,param_4 & 1,param_5);
    local_58 = local_d8;
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
LAB_01970658:
  lVar17 = plVar19[0x13];
  psVar1 = (short *)(lVar17 + 0x1a);
  do {
    sVar18 = *psVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar7) {
      *psVar1 = sVar18 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar18 == 1) {
    *(undefined8 *)(lVar17 + 0x10) = 0;
    (**(code **)(*plVar19 + 0x50))(plVar19);
  }
  else if (sVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


