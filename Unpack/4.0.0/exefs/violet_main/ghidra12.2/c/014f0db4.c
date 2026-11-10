/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014f0db4; name: FUN_014f0db4
 */


void FUN_014f0db4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  plVar11 = (long *)param_1[0x26];
  *param_1 = &DAT_045d6e70;
  param_1[4] = &PTR_LAB_045d6f08;
  param_1[6] = &PTR_LAB_045d6f38;
  if (plVar11 != (long *)0x0) {
    plVar9 = (long *)param_1[0x27];
    if (plVar9 == plVar11) {
      plVar9 = plVar11;
    }
    else {
      do {
        plVar9 = plVar9 + -1;
        plVar6 = (long *)*plVar9;
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 5;
          do {
            lVar5 = *plVar1;
            iVar4 = (int)lVar5 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*plVar6 + 0x10))();
          }
          else if ((int)lVar5 == 0) goto LAB_014f0fec;
        }
      } while (plVar9 != plVar11);
      plVar9 = (long *)param_1[0x26];
    }
    lVar5 = param_1[0x28];
    plVar6 = (long *)param_1[0x29];
    param_1[0x27] = plVar11;
    uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if ((uVar7 & 1) != 0) {
      lVar10 = FUN_00c4e600();
      if (0 < *(int *)(lVar10 + 0x12c8)) {
        FUN_00c48fe8(plVar6,plVar9,lVar5 - (long)plVar9,8);
        goto LAB_014f0e64;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,plVar9,lVar5 - (long)plVar9,8);
  }
LAB_014f0e64:
  plVar11 = (long *)param_1[0x25];
  if (plVar11 != (long *)0x0) {
    plVar9 = plVar11 + 5;
    do {
      lVar5 = *plVar9;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_014f0fec;
  }
  if (param_1[0x1d] != 0) {
    FUN_014f110c();
    lVar10 = param_1[0x1d];
    lVar5 = param_1[0x1f];
    plVar11 = (long *)param_1[0x20];
    uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if ((uVar7 & 1) != 0) {
      lVar8 = FUN_00c4e600();
      if (0 < *(int *)(lVar8 + 0x12c8)) {
        FUN_00c48fe8(plVar11,lVar10,lVar5 - lVar10,8);
        goto LAB_014f0ed4;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar10,lVar5 - lVar10,8);
  }
LAB_014f0ed4:
  if (param_1[0x15] != 0) {
    FUN_014f110c();
    lVar10 = param_1[0x15];
    lVar5 = param_1[0x17];
    plVar11 = (long *)param_1[0x18];
    uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if ((uVar7 & 1) != 0) {
      lVar8 = FUN_00c4e600();
      if (0 < *(int *)(lVar8 + 0x12c8)) {
        FUN_00c48fe8(plVar11,lVar10,lVar5 - lVar10,8);
        goto LAB_014f0f20;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar10,lVar5 - lVar10,8);
  }
LAB_014f0f20:
  plVar11 = (long *)param_1[0x14];
  if (plVar11 != (long *)0x0) {
    plVar9 = plVar11 + 5;
    do {
      lVar5 = *plVar9;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_014f0fec;
  }
  plVar11 = (long *)param_1[0x13];
  if (plVar11 != (long *)0x0) {
    plVar9 = plVar11 + 5;
    do {
      lVar5 = *plVar9;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_014f0fec;
  }
  plVar11 = (long *)param_1[0x12];
  if (plVar11 != (long *)0x0) {
    plVar9 = plVar11 + 5;
    do {
      lVar5 = *plVar9;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_014f0fec;
  }
  FUN_00f31bf0(param_1 + 0xb);
  plVar11 = (long *)param_1[8];
  if (plVar11 != (long *)0x0) {
    plVar9 = plVar11 + 5;
    do {
      lVar5 = *plVar9;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_014f0fec;
  }
  plVar11 = (long *)param_1[7];
  if (plVar11 != (long *)0x0) {
    plVar9 = plVar11 + 5;
    do {
      lVar5 = *plVar9;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x014f1108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x10))();
      return;
    }
    if ((int)lVar5 == 0) {
LAB_014f0fec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


