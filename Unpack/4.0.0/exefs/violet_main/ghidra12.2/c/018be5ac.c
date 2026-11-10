/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018be5ac; name: FUN_018be5ac
 */


void FUN_018be5ac(long param_1)

{
  long *plVar1;
  int *piVar2;
  short *psVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  short sVar12;
  long *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *local_40;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_58 = *(undefined8 **)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  local_48 = *(undefined8 *)(param_1 + 0x40);
  local_40 = (long *)0x0;
  FUN_00e25df8(&local_38,&local_58);
  plVar1 = (long *)(param_1 + 0x88);
  FUN_00dbd160(plVar1,&local_38);
  puVar9 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    psVar3 = (short *)(local_38 + 3);
    do {
      sVar12 = *psVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar7) {
        *psVar3 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      piVar2 = (int *)((long)local_38 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_28 = *puVar9;
        FUN_00c44438(lVar11 + 0x8040,&local_28);
      }
    }
    else if (sVar12 == 0) goto LAB_018be718;
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  lVar11 = *plVar1;
  if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
    psVar3 = (short *)(lVar11 + 0x1a);
    sVar12 = *(short *)(lVar11 + 0x1a);
    do {
      sVar5 = *psVar3;
      if (sVar5 == sVar12) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar7) {
          *psVar3 = sVar12 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_018be8e0;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_018be8e0:
        bVar7 = false;
      }
      if (bVar7) {
        if (*(long *)(lVar11 + 0x10) != 0) {
          local_60 = (long *)(*(long *)(lVar11 + 0x10) + -0x28);
          goto LAB_018be900;
        }
        break;
      }
      sVar12 = sVar5;
    } while (sVar5 != 0);
  }
  if (((*PTR_DAT_047d4df8 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar11 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar11;
  FUN_018be9dc(&local_60,lVar11 + 0xb090);
  plVar8 = local_60;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_00c43ef0(&local_58,local_60 + 6);
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  plVar4 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    plVar4 = plVar8 + 5;
  }
  if ((long *)local_58[2] == plVar4) {
    FUN_00e29918(&local_38,&local_58);
  }
  puVar9 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    psVar3 = (short *)(local_58 + 3);
    do {
      sVar12 = *psVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar7) {
        *psVar3 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      piVar2 = (int *)((long)local_58 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_28 = *puVar9;
        FUN_00c44438(lVar11 + 0x8040,&local_28);
      }
    }
    else if (sVar12 == 0) goto LAB_018be718;
  }
  FUN_00dbd160(plVar1,&local_38);
  puVar9 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    psVar3 = (short *)(local_38 + 3);
    do {
      sVar12 = *psVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar7) {
        *psVar3 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      piVar2 = (int *)((long)local_38 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_58 = (undefined8 *)*puVar9;
        FUN_00c44438(lVar11 + 0x8040,&local_58);
      }
    }
    else if (sVar12 == 0) {
LAB_018be718:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_60 != (long *)0x0) {
LAB_018be900:
    (**(code **)(*local_60 + 0x60))();
  }
  return;
}


