/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010349bc; name: FUN_010349bc
 */


void FUN_010349bc(undefined8 *param_1,long param_2,int param_3)

{
  short *psVar1;
  int *piVar2;
  long lVar3;
  short sVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  long *plVar11;
  long *plVar10;
  long lVar12;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x120));
  plVar10 = (long *)**(long **)(param_2 + 0x28);
  plVar5 = (long *)(*(long **)(param_2 + 0x28))[1];
  if (plVar10 != plVar5) {
LAB_010349fc:
    plVar11 = plVar10 + 1;
    lVar12 = *plVar10;
    if (*(int *)(lVar12 + 0xd8) != param_3) goto code_r0x01034a0c;
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_00c43ef0(&local_50,lVar12 + 0x30);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    lVar3 = 0;
    if (lVar12 != 0) {
      lVar3 = lVar12 + 0x28;
    }
    if (local_50[2] == lVar3) {
      FUN_01010bec(&local_60,&local_50);
    }
    puVar8 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50 + 3);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_50 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_28 = *puVar8;
          FUN_00c44438(lVar12 + 0x8040,&local_28);
        }
      }
      else if (sVar4 == 0) goto LAB_01034b10;
    }
    *param_1 = 0;
    param_1[1] = 0;
    FUN_01034dc0(param_1,&local_60);
    if (local_60 == (undefined8 *)0x0) goto LAB_01034aac;
    psVar1 = (short *)(local_60 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 != 1) goto LAB_01034b0c;
    piVar2 = (int *)((long)local_60 + 0x1c);
    do {
      iVar9 = *piVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    goto LAB_01034bac;
  }
LAB_01034a14:
  plVar10 = (long *)**(long **)(param_2 + 0x48);
  do {
    if (plVar10 == (long *)(*(long **)(param_2 + 0x48))[1]) {
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_01034aac;
    }
    lVar12 = *plVar10;
    iVar9 = 0xffffff;
    if (*(long *)(lVar12 + 0x340) != -1) {
      iVar9 = (int)*(long *)(lVar12 + 0x340);
    }
    plVar10 = plVar10 + 1;
  } while (iVar9 != param_3);
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  FUN_00c43ef0(&local_50,lVar12 + 0x30);
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  lVar3 = 0;
  if (lVar12 != 0) {
    lVar3 = lVar12 + 0x28;
  }
  if (local_50[2] == lVar3) {
    FUN_01402fe8(&local_60,&local_50);
  }
  puVar8 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_28 = *puVar8;
        FUN_00c44438(lVar12 + 0x8040,&local_28);
      }
    }
    else if (sVar4 == 0) goto LAB_01034b10;
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_01f8abf0(param_1,&local_60);
  if (local_60 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_60 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_60 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_01034bac:
      puVar8 = local_60;
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_50 = (undefined8 *)*puVar8;
        FUN_00c44438(lVar12 + 0x8040,&local_50);
      }
    }
    else {
LAB_01034b0c:
      if (sVar4 == 0) {
LAB_01034b10:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
LAB_01034aac:
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x120));
  return;
code_r0x01034a0c:
  plVar10 = plVar11;
  if (plVar5 == plVar11) goto LAB_01034a14;
  goto LAB_010349fc;
}


