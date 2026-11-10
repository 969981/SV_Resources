/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e73058; name: FUN_01e73058
 */


void FUN_01e73058(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  short *psVar4;
  int *piVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  *param_1 = (long)&DAT_04551f48;
  param_1[4] = (long)&PTR_LAB_04551fc0;
  param_1[5] = (long)&PTR_LAB_04552010;
  if (((*PTR_DAT_047da800 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047da800), iVar9 != 0))
  {
    FUN_00100190(&LAB_00ae336c,PTR_DAT_047da808,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da800);
  }
  lVar10 = *(long *)PTR_DAT_047da808;
  *(long *)PTR_DAT_047da810 = lVar10;
  if (lVar10 != 0) {
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    FUN_01e734a0(&local_48,param_1 + 8);
    FUN_01e73700(lVar10,&local_48);
    puVar12 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      psVar4 = (short *)(local_48 + 3);
      do {
        sVar6 = *psVar4;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar4,0x10);
        if (bVar8) {
          *psVar4 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        piVar5 = (int *)((long)local_48 + 0x1c);
        do {
          iVar9 = *piVar5;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar8) {
            *piVar5 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_38 = *puVar12;
          FUN_00c44438(lVar10 + 0x8040,&local_38);
        }
      }
      else if (sVar6 == 0) goto LAB_01e73244;
    }
  }
  if ((char)param_1[0x75b] != '\0') {
    plVar11 = (long *)param_1[0x75d];
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 1;
      do {
        lVar10 = *plVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar10 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        std::__shared_weak_count::__release_weak();
      }
    }
    *(undefined1 *)(param_1 + 0x75b) = 0;
  }
  if ((char)param_1[0x758] != '\0') {
    FUN_01e73724(param_1 + 0x759);
    *(undefined1 *)(param_1 + 0x758) = 0;
  }
  if (*(char *)((long)param_1 + 0x3264) != '\0') {
    *(char *)((long)param_1 + 0x3264) = '\0';
  }
  if (*(char *)((long)param_1 + 0x2a14) != '\0') {
    *(undefined1 *)((long)param_1 + 0x2a14) = 0;
  }
  if (*(char *)((long)param_1 + 0x2a04) != '\0') {
    if ((char)param_1[0x541] != '\0') {
      *(undefined1 *)(param_1 + 0x541) = 0;
    }
    *(undefined1 *)((long)param_1 + 0x2a04) = 0;
  }
  if ((char)param_1[0x436] != '\0') {
    *(undefined1 *)(param_1 + 0x436) = 0;
  }
  if (*(char *)((long)param_1 + 0x195e) != '\0') {
    *(undefined1 *)((long)param_1 + 0x195e) = 0;
  }
  if (*(char *)((long)param_1 + 0x110c) != '\0') {
    *(char *)((long)param_1 + 0x110c) = '\0';
  }
  if (*(char *)((long)param_1 + 0x8ba) != '\0') {
    *(undefined1 *)((long)param_1 + 0x8ba) = 0;
  }
  if ((char)param_1[0xd] != '\0') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  puVar12 = (undefined8 *)param_1[0xb];
  if (puVar12 != (undefined8 *)0x0) {
    psVar4 = (short *)(puVar12 + 3);
    do {
      sVar6 = *psVar4;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar8) {
        *psVar4 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar5 = (int *)((long)puVar12 + 0x1c);
      do {
        iVar9 = *piVar5;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar8) {
          *piVar5 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_38 = *puVar12;
        FUN_00c44438(lVar10 + 0x8040,&local_38);
      }
    }
    else if (sVar6 == 0) goto LAB_01e73244;
  }
  FUN_01e72aa4(param_1 + 8);
  puVar2 = PTR_DAT_047d8c78 + 0x88;
  puVar3 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar2;
  param_1[5] = (long)puVar3;
  puVar12 = (undefined8 *)param_1[6];
  if (puVar12 != (undefined8 *)0x0) {
    psVar4 = (short *)(puVar12 + 3);
    do {
      sVar6 = *psVar4;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar8) {
        *psVar4 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar5 = (int *)((long)puVar12 + 0x1c);
      do {
        iVar9 = *piVar5;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar8) {
          *piVar5 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_38 = *puVar12;
        FUN_00c44438(lVar10 + 0x8040,&local_38);
      }
    }
    else if (sVar6 == 0) {
LAB_01e73244:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


