/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020f9d68; name: FUN_020f9d68
 */


void FUN_020f9d68(long param_1)

{
  int *piVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  short *psVar10;
  short sVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  lVar8 = *(long *)(param_1 + 0x120);
  if ((lVar8 == 0) || (*(short *)(lVar8 + 0x1a) == 0)) {
    return;
  }
  psVar10 = (short *)(lVar8 + 0x1a);
  sVar11 = *(short *)(lVar8 + 0x1a);
LAB_020f9db0:
  sVar2 = *psVar10;
  if (sVar2 == sVar11) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar10,0x10);
    if (bVar4) {
      *psVar10 = sVar11 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_020f9dd8;
    bVar4 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_020f9dd8:
    bVar4 = false;
  }
  if (!bVar4) {
    sVar11 = sVar2;
    if (sVar2 == 0) {
      return;
    }
    goto LAB_020f9db0;
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if (lVar8 == 0) {
    return;
  }
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  FUN_00c43ef0(&local_50,param_1 + 0x98);
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  lVar9 = 0;
  if (param_1 != 0) {
    lVar9 = param_1 + 0x28;
  }
  if (local_50[2] == lVar9) {
    FUN_01856290(&local_60,&local_50);
  }
  puVar5 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    psVar10 = (short *)(local_50 + 3);
    do {
      sVar11 = *psVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar10,0x10);
      if (bVar4) {
        *psVar10 = sVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar11 == 1) {
      piVar1 = (int *)((long)local_50 + 0x1c);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_28 = *puVar5;
        FUN_00c44438(lVar9 + 0x8040,&local_28);
      }
    }
    else if (sVar11 == 0) goto LAB_020f9ec4;
  }
  puVar5 = local_60;
  if (local_60 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    psVar10 = (short *)(local_60 + 3);
    puVar12 = (undefined8 *)*local_60;
    do {
      sVar11 = *psVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar10,0x10);
      if (bVar4) {
        *psVar10 = sVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar11 == 1) {
      piVar1 = (int *)((long)local_60 + 0x1c);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_50 = (undefined8 *)*puVar5;
        FUN_00c44438(lVar9 + 0x8040,&local_50);
      }
    }
    else if (sVar11 == 0) goto LAB_020f9ec4;
  }
  if ((*(char *)(param_1 + 0x1a0) == '\0') || (*(undefined8 **)(param_1 + 0x198) == puVar12))
  goto LAB_020f9e80;
  FUN_01f8c918(&local_50);
  if (local_50 == (undefined8 *)0x0) {
LAB_020fa008:
    *(undefined8 *)(param_1 + 400) = 0xffffffffffffffff;
    goto LAB_020f9e80;
  }
  if (*(short *)((long)local_50 + 0x1a) != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_020fa008;
    if (*(short *)((long)local_50 + 0x1a) == 0) goto LAB_020fa0fc;
    psVar10 = (short *)((long)local_50 + 0x1a);
    sVar11 = *(short *)((long)local_50 + 0x1a);
    do {
      sVar2 = *psVar10;
      if (sVar2 == sVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar10,0x10);
        if (bVar4) {
          *psVar10 = sVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_020fa0c0;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_020fa0c0:
        bVar4 = false;
      }
      if (bVar4) {
        lVar9 = local_50[2];
        if (lVar9 != 0) {
          FUN_0198491c(*(undefined8 *)(lVar9 + 0x2e8),*(undefined8 *)(param_1 + 400));
          (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))(lVar9 + -0x28);
        }
        break;
      }
      sVar11 = sVar2;
    } while (sVar2 != 0);
  }
LAB_020fa0fc:
  puVar5 = local_50;
  *(undefined8 *)(param_1 + 400) = 0xffffffffffffffff;
  if (local_50 != (undefined8 *)0x0) {
    psVar10 = (short *)(local_50 + 3);
    do {
      sVar11 = *psVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar10,0x10);
      if (bVar4) {
        *psVar10 = sVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar11 == 1) {
      piVar1 = (int *)((long)local_50 + 0x1c);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_60 = (undefined8 *)*puVar5;
        FUN_00c44438(lVar9 + 0x8040,&local_60);
      }
    }
    else if (sVar11 == 0) {
LAB_020f9ec4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
LAB_020f9e80:
  if (*(long *)(param_1 + 400) == -1) {
    *(undefined8 **)(param_1 + 0x198) = puVar12;
    *(undefined1 *)(param_1 + 0x1a0) = 1;
    uVar13 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x110));
    local_50 = puVar12;
    uVar7 = FUN_018f2e1c(uVar13,*(undefined8 *)(lVar8 + 0x2e8),&local_50);
    *(undefined8 *)(param_1 + 400) = uVar7;
  }
  (**(code **)(*(long *)(lVar8 + -0x28) + 0x60))((long *)(lVar8 + -0x28));
  return;
}


