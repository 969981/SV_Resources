/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010b6c54; name: FUN_010b6c54
 */


void FUN_010b6c54(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  *param_1 = &DAT_04595498;
  param_1[4] = &PTR_LAB_04595618;
  param_1[5] = &DAT_04595740;
  param_1[0x24] = &PTR_LAB_045957f8;
  param_1[6] = &PTR_LAB_04595798;
  param_1[7] = &PTR_LAB_045957c0;
  FUN_010b70f8();
  lVar9 = param_1[0x54];
  if (lVar9 != 0) {
    lVar8 = param_1[0x56];
    param_1[0x55] = lVar9;
    plVar11 = (long *)param_1[0x57];
    uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,lVar8 - lVar9,4);
    }
    else {
      FUN_00c48fe8(plVar11,lVar9,lVar8 - lVar9,4);
    }
  }
  FUN_010b6fb0(param_1 + 0x50);
  plVar11 = (long *)param_1[0x4c];
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 5;
    do {
      lVar9 = *plVar10;
      iVar5 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x4a));
  plVar11 = (long *)param_1[0x41];
  if (plVar11 != (long *)0x0) {
    plVar12 = (long *)param_1[0x42];
    plVar10 = (long *)*plVar11;
    uVar6 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar6 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,plVar11,0x20,8);
    }
    else {
      FUN_00c48fe8(plVar12,plVar11,0x20,8);
    }
    while (plVar10 != (long *)0x0) {
      plVar11 = (long *)param_1[0x42];
      plVar12 = (long *)*plVar10;
      uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar6 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,plVar10,0x20,8);
        plVar10 = plVar12;
      }
      else {
        FUN_00c48fe8(plVar11,plVar10,0x20,8);
        plVar10 = plVar12;
      }
    }
  }
  lVar9 = param_1[0x3b];
  param_1[0x3b] = 0;
  if (lVar9 != 0) {
    lVar8 = param_1[0x3c];
    plVar11 = (long *)param_1[0x3d];
    uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,lVar8 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar11,lVar9,lVar8 << 3,8);
    }
  }
  plVar11 = (long *)param_1[0x38];
  if (plVar11 != (long *)0x0) {
    lVar9 = plVar11[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_010b6d90;
  }
  if ((long *)param_1[0x36] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x36] + 0x20))();
  }
  if ((long *)param_1[0x32] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x32] + 0x20))();
  }
  FUN_00f43db0(param_1 + 0x27);
  plVar11 = (long *)param_1[0x26];
  if (plVar11 != (long *)0x0) {
    lVar9 = plVar11[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_010b6d90:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_00e6bfa4(param_1);
  return;
}


