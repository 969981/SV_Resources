/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e7f170; name: FUN_01e7f170
 */


void FUN_01e7f170(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  short *psVar4;
  int *piVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long local_40;
  undefined8 local_38;
  
  *param_1 = (long)&DAT_04552450;
  param_1[4] = (long)&PTR_LAB_045524f8;
  param_1[5] = (long)&PTR_LAB_04552548;
  if (param_1[0x25] != 0) {
    FUN_014ece90();
  }
  plVar10 = (long *)param_1[0x26];
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar10 + 3;
    do {
      sVar6 = (short)*plVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *(short *)plVar3 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar5 = (int *)((long)plVar10 + 0x1c);
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
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_40 = *plVar10;
        FUN_00c44438(lVar13 + 0x8040,&local_40);
      }
    }
    else if (sVar6 == 0) goto LAB_01e7f33c;
  }
  plVar10 = (long *)param_1[0x25];
  if (plVar10 != (long *)0x0) {
    lVar13 = plVar10[6];
    psVar4 = (short *)(lVar13 + 0x1a);
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
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_01e7f57c(param_1 + 0x1e);
  lVar11 = param_1[0x1c];
  lVar13 = tpidr_el0;
  if (*(long *)(lVar13 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar13 + 0x30) = DAT_04859430;
  }
  local_40 = *(long *)(lVar13 + 0x30);
  local_38 = *(undefined8 *)(lVar13 + 0x38);
  *(long *)(lVar13 + 0x30) = lVar11;
  *(undefined2 *)(lVar13 + 0x38) = 1;
  plVar10 = (long *)param_1[0x1d];
  param_1[0x1d] = 0;
  if (plVar10 == (long *)0x0) {
    *(long *)(lVar13 + 0x30) = local_40;
    *(undefined2 *)(lVar13 + 0x38) = (undefined2)local_38;
  }
  else {
    (**(code **)(*plVar10 + 8))();
    plVar10 = (long *)param_1[0x1d];
    *(long *)(lVar13 + 0x30) = local_40;
    *(undefined2 *)(lVar13 + 0x38) = (undefined2)local_38;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
  }
  pcVar12 = (code *)param_1[0xb];
  if (pcVar12 != (code *)0x0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    (*pcVar12)(param_1 + 0xe);
  }
  *param_1 = (long)&DAT_045521e0;
  param_1[4] = (long)&PTR_LAB_04552288;
  param_1[5] = (long)&PTR_LAB_045522d8;
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 0x20))();
  }
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  plVar10 = (long *)param_1[6];
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar10 + 3;
    do {
      sVar6 = (short)*plVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *(short *)plVar3 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar5 = (int *)((long)plVar10 + 0x1c);
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
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_40 = *plVar10;
        FUN_00c44438(lVar13 + 0x8040,&local_40);
      }
    }
    else if (sVar6 == 0) {
LAB_01e7f33c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


