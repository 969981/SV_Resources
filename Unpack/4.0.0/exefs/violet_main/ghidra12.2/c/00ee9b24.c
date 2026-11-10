/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ee9b24; name: FUN_00ee9b24
 */


void FUN_00ee9b24(long *param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *local_68;
  long *local_48;
  
  plVar6 = (long *)param_1[0x17];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar10 = *plVar1;
      iVar5 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_00ee9e84;
  }
  plVar6 = (long *)param_1[0x13];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar10 = *plVar1;
      iVar5 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_00ee9e84;
  }
  plVar6 = (long *)param_1[0x11];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar10 = *plVar1;
      iVar5 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_00ee9e84;
  }
  plVar6 = (long *)param_1[0xb];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar10 = *plVar1;
      iVar5 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
LAB_00ee9e84:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar10 = param_1[7];
  param_1[7] = 0;
  if (lVar10 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar2 = *(int *)(lVar11 + 0x12c8);
    iVar5 = iVar2 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar5;
    if (*(int *)(lVar11 + 0x12cc) <= iVar2) {
      *(int *)(lVar11 + 0x12cc) = iVar5;
    }
    FUN_00dd9528(lVar10);
    plVar6 = (long *)param_1[8];
    lVar11 = param_1[9];
    lVar8 = param_1[10];
    uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar7 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar10,lVar11,lVar8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar10,lVar11,lVar8);
    }
    lVar10 = FUN_00c4e600();
    iVar5 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar6 = (long *)FUN_00c4e600();
      if (plVar6[600] != 0) {
        local_68 = plVar6 + plVar6[600] * 3;
        local_48 = plVar6;
        FUN_00c4ea30(&local_48,&local_68);
        plVar12 = (long *)*plVar6;
        plVar1 = plVar6;
        if (plVar6[600] != 0) {
          plVar1 = plVar6 + plVar6[600] * 3;
        }
        if (plVar1 == plVar6) {
          lVar8 = 0;
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          lVar8 = 0;
          plVar13 = plVar6;
          do {
            (**(code **)(*(long *)*plVar13 + 0xd0))();
            if ((long *)*plVar13 != plVar12) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar6 + lVar8 * 3,plVar13);
              plVar12 = (long *)*plVar13;
              lVar8 = lVar11;
            }
            plVar13 = plVar13 + 3;
            lVar11 = lVar11 + 1;
          } while (plVar1 != plVar13);
        }
        (**(code **)(*plVar12 + 0x100))(plVar12,plVar6 + lVar8 * 3,plVar6 + lVar11 * 3);
        plVar6[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  lVar10 = *param_1;
  if (lVar10 != 0) {
    lVar11 = lVar10;
    lVar8 = param_1[1];
    if (param_1[1] != lVar10) {
      do {
        lVar11 = lVar8 + -0x30;
        if (*(char *)(lVar8 + -0x28) != '\0') {
          if (*(long **)(lVar8 + -8) != (long *)0x0) {
            (**(code **)(**(long **)(lVar8 + -8) + 0x20))();
          }
          *(undefined1 *)(lVar8 + -0x28) = 0;
        }
        lVar8 = lVar11;
      } while (lVar10 != lVar11);
      lVar11 = *param_1;
    }
    param_1[1] = lVar10;
    lVar10 = param_1[2];
    plVar6 = (long *)param_1[3];
    uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar11,lVar10 - lVar11,8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar11,lVar10 - lVar11,8);
    }
  }
  return;
}


