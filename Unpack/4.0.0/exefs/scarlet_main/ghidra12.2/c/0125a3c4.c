/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0125a3c4; name: FUN_0125a3c4
 */


void FUN_0125a3c4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *local_88;
  undefined8 uStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long *local_60;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  plVar11 = (long *)*param_3;
  plVar10 = (long *)PTR_DAT_047d8b70;
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 6;
  }
  local_78 = *plVar10;
  plVar10 = (long *)PTR_PTR_047d4508;
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 7;
  }
  lStack_70 = *plVar10;
  if (plVar11 == (long *)0x0) {
    local_68 = 0;
  }
  else {
    local_68 = plVar11[8];
  }
  local_60 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  local_60 = plVar11;
  FUN_0140f318(local_58,param_2,&local_78);
  puVar12 = local_58[0];
  if (local_58[0] == (undefined8 *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_58[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_58[0] + 0x1a);
      sVar9 = *(short *)((long)local_58[0] + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_0125a5e0;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0125a5e0:
          bVar5 = false;
        }
        if (bVar5) {
          plVar10 = (long *)0x0;
          if (local_58[0][2] != 0) {
            plVar10 = (long *)(local_58[0][2] + -0x28);
          }
          goto LAB_0125a608;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
    plVar10 = (long *)0x0;
LAB_0125a608:
    psVar1 = (short *)(local_58[0] + 3);
    do {
      sVar9 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      piVar2 = (int *)((long)local_58[0] + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_88 = (undefined8 *)*puVar12;
        FUN_00c44438(lVar8 + 0x8040,&local_88);
      }
    }
    else if (sVar9 == 0) goto LAB_0125a51c;
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (plVar10 == (long *)0x0) {
    return;
  }
  puVar12 = (undefined8 *)*param_1;
  (**(code **)(*plVar10 + 0x18))(local_58,plVar10);
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  if ((long *)local_58[0][2] == plVar10 + 5) {
    FUN_00c9ea00(&local_88,local_58);
  }
  puVar6 = local_58[0];
  if (local_58[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58[0] + 3);
    do {
      sVar9 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      piVar2 = (int *)((long)local_58[0] + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_48 = *puVar6;
        FUN_00c44438(lVar8 + 0x8040,&local_48);
      }
    }
    else if (sVar9 == 0) goto LAB_0125a51c;
  }
  if (local_88 != (undefined8 *)0x0) {
    if (*(short *)((long)local_88 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_88 + 0x1a);
      sVar9 = *(short *)((long)local_88 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_0125a660;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0125a660:
          bVar5 = false;
        }
        if (bVar5) {
          lVar8 = local_88[2];
          if (lVar8 == 0) goto LAB_0125a6b8;
          FUN_01766830(lVar8 + 0xe0,*puVar12);
          FUN_017c3020(lVar8 + 0xe0,puVar12[1]);
          (**(code **)(*(long *)(lVar8 + -0x28) + 0x60))(lVar8 + -0x28);
          break;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
      if (local_88 == (undefined8 *)0x0) goto LAB_0125a4cc;
    }
LAB_0125a6b8:
    puVar12 = local_88;
    psVar1 = (short *)(local_88 + 3);
    do {
      sVar9 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      piVar2 = (int *)((long)local_88 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_58[0] = (undefined8 *)*puVar12;
        FUN_00c44438(lVar8 + 0x8040,local_58);
      }
    }
    else if (sVar9 == 0) {
LAB_0125a51c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
LAB_0125a4cc:
  FUN_0125a850(plVar10,param_1[1]);
  (**(code **)(*plVar10 + 0x60))(plVar10);
  return;
}


