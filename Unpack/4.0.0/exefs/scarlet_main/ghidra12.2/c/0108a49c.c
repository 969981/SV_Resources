/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0108a49c; name: FUN_0108a49c
 */


void FUN_0108a49c(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  
  *param_1 = &DAT_045aaf38;
  param_1[4] = &PTR_LAB_045ab0a0;
  param_1[5] = &DAT_045ab1c8;
  param_1[6] = &PTR_LAB_045ab220;
  param_1[7] = &PTR_LAB_045ab248;
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x55));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x52));
  plVar11 = (long *)param_1[0x47];
  if (plVar11 != (long *)0x0) {
    plVar9 = (long *)*plVar11;
    FUN_0108a8e4(plVar11 + 0x216);
    plVar12 = (long *)param_1[0x48];
    uVar6 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar6 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,plVar11,0x10e8,8);
    }
    else {
      FUN_00c48fe8(plVar12,plVar11,0x10e8,8);
    }
    while (plVar9 != (long *)0x0) {
      plVar12 = (long *)*plVar9;
      FUN_0108a8e4(plVar9 + 0x216);
      plVar11 = (long *)param_1[0x48];
      uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar6 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,plVar9,0x10e8,8);
        plVar9 = plVar12;
      }
      else {
        FUN_00c48fe8(plVar11,plVar9,0x10e8,8);
        plVar9 = plVar12;
      }
    }
  }
  lVar10 = param_1[0x41];
  param_1[0x41] = 0;
  if (lVar10 != 0) {
    lVar7 = param_1[0x42];
    plVar11 = (long *)param_1[0x43];
    uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar10,lVar7 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar11,lVar10,lVar7 << 3,8);
    }
  }
  lVar10 = param_1[0x3b];
  if (lVar10 != 0) {
    lVar7 = param_1[0x3d];
    plVar11 = (long *)param_1[0x3e];
    param_1[0x3c] = lVar10;
    uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar10,lVar7 - lVar10,0x10);
    }
    else {
      FUN_00c48fe8(plVar11,lVar10,lVar7 - lVar10,0x10);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x39));
  lVar10 = param_1[0x31];
  if (lVar10 != 0) {
    lVar7 = param_1[0x33];
    plVar11 = (long *)param_1[0x34];
    param_1[0x32] = lVar10;
    uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar10,lVar7 - lVar10,8);
    }
    else {
      FUN_00c48fe8(plVar11,lVar10,lVar7 - lVar10,8);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x2f));
  plVar11 = (long *)param_1[0x2c];
  if (plVar11 != (long *)0x0) {
    plVar9 = plVar11 + 5;
    do {
      lVar10 = *plVar9;
      iVar5 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_0108a6b4;
  }
  plVar11 = (long *)param_1[0x2b];
  if (plVar11 != (long *)0x0) {
    plVar9 = plVar11 + 5;
    do {
      lVar10 = *plVar9;
      iVar5 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
LAB_0108a6b4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  plVar11 = (long *)param_1[0x24];
  if (plVar11 != (long *)0x0) {
    plVar12 = (long *)param_1[0x25];
    plVar9 = plVar11;
    if (plVar12 != plVar11) {
      do {
        plVar12 = plVar12 + -1;
        plVar9 = (long *)*plVar12;
        if (plVar9 != (long *)0x0) {
          lVar10 = plVar9[6];
          psVar1 = (short *)(lVar10 + 0x1a);
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
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar9 + 0x50))();
          }
          else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      } while (plVar12 != plVar11);
      plVar9 = (long *)param_1[0x24];
    }
    lVar10 = param_1[0x26];
    plVar12 = (long *)param_1[0x27];
    param_1[0x25] = plVar11;
    uVar6 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,plVar9,lVar10 - (long)plVar9,8);
    }
    else {
      FUN_00c48fe8(plVar12,plVar9,lVar10 - (long)plVar9,8);
    }
  }
  FUN_00e6bfa4(param_1);
  return;
}


