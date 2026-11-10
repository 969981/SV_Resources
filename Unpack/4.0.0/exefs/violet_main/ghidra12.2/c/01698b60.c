/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01698b60; name: FUN_01698b60
 */


void FUN_01698b60(long *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  
LAB_01698b84:
  plVar15 = param_2 + -1;
  plVar11 = param_1;
LAB_01698b88:
  param_1 = plVar11;
  lVar14 = (long)param_2 - (long)param_1;
  uVar13 = lVar14 >> 3;
  if (uVar13 < 2) {
    return;
  }
  switch(uVar13) {
  case 2:
    goto switchD_01698bb8_caseD_2;
  case 3:
    FUN_016992e0(param_1,param_1 + 1,plVar15);
    return;
  case 4:
    FUN_01699100(param_1,param_1 + 1,param_1 + 2,plVar15);
    return;
  case 5:
    FUN_01699540(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar15);
    return;
  default:
    if (lVar14 < 0x38) {
      FUN_01699770();
      return;
    }
    uVar10 = uVar13;
    if ((long)uVar13 < 0) {
      uVar10 = uVar13 + 1;
    }
    plVar11 = (long *)((long)param_1 + (uVar10 & 0x3ffffffffffffffe) * 4);
    if (lVar14 < 0x1f39) {
      iVar6 = FUN_016992e0(param_1,plVar11,plVar15);
    }
    else {
      uVar10 = uVar13 + 3;
      if (-1 < (long)uVar13) {
        uVar10 = uVar13;
      }
      lVar14 = (uVar10 & 0x7ffffffffffffffc) * 2;
      iVar6 = FUN_01699540(param_1,(long)param_1 + lVar14,plVar11,(long)plVar11 + lVar14,plVar15);
    }
    lVar14 = *param_1;
    uVar2 = *(uint *)(lVar14 + 0x1f8);
    if (*(uint *)(*plVar11 + 0x1f8) <= uVar2) break;
    plVar9 = plVar15;
    goto LAB_01698d60;
  }
  plVar9 = param_2;
  while (plVar16 = plVar9, param_1 + 2 != plVar16) {
    plVar9 = plVar16 + -1;
    if (*(uint *)(plVar16[-2] + 0x1f8) < *(uint *)(*plVar11 + 0x1f8)) goto code_r0x01698e2c;
  }
  plVar9 = param_1 + 1;
  if (*(uint *)(*plVar15 + 0x1f8) <= uVar2) {
    if (plVar9 == plVar15) {
      return;
    }
    plVar9 = param_1 + 2;
    while (lVar14 = plVar9[-1], *(uint *)(lVar14 + 0x1f8) <= uVar2) {
      plVar9 = plVar9 + 1;
      if (param_2 == plVar9) {
        return;
      }
    }
    plVar9[-1] = 0;
    lVar12 = *plVar15;
    *plVar15 = 0;
    plVar9[-1] = lVar12;
    plVar11 = (long *)*plVar15;
    *plVar15 = 0;
    if (plVar11 != (long *)0x0) {
      plVar16 = plVar11 + 5;
      do {
        lVar12 = *plVar16;
        iVar6 = (int)lVar12 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
      else if ((int)lVar12 == 0) goto LAB_016990cc;
    }
    *plVar15 = lVar14;
  }
  if (plVar9 == plVar15) {
    return;
  }
  plVar16 = plVar15;
  while( true ) {
    plVar11 = plVar9 + -1;
    do {
      plVar9 = plVar11;
      plVar11 = plVar9 + 1;
      lVar14 = *plVar11;
    } while (*(uint *)(lVar14 + 0x1f8) <= *(uint *)(*param_1 + 0x1f8));
    plVar9 = plVar9 + 2;
    do {
      plVar16 = plVar16 + -1;
    } while (*(uint *)(*param_1 + 0x1f8) < *(uint *)(*plVar16 + 0x1f8));
    if (plVar16 <= plVar11) break;
    *plVar11 = 0;
    lVar12 = *plVar16;
    *plVar16 = 0;
    *plVar11 = lVar12;
    plVar11 = (long *)*plVar16;
    *plVar16 = 0;
    if (plVar11 != (long *)0x0) {
      plVar8 = plVar11 + 5;
      do {
        lVar12 = *plVar8;
        iVar6 = (int)lVar12 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
      else if ((int)lVar12 == 0) goto LAB_016990cc;
    }
    *plVar16 = lVar14;
  }
  goto LAB_01698b88;
code_r0x01698e2c:
  *param_1 = 0;
  plVar9 = plVar16 + -2;
  lVar12 = *plVar9;
  *plVar9 = 0;
  *param_1 = lVar12;
  plVar8 = (long *)*plVar9;
  *plVar9 = 0;
  if (plVar8 != (long *)0x0) {
    plVar7 = plVar8 + 5;
    do {
      lVar12 = *plVar7;
      iVar5 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar12 == 0) goto LAB_016990cc;
  }
  iVar6 = iVar6 + 1;
  plVar16[-2] = lVar14;
LAB_01698d60:
  plVar16 = param_1 + 1;
  plVar8 = plVar16;
  if (plVar16 < plVar9) {
    while( true ) {
      plVar16 = plVar8 + -1;
      do {
        plVar8 = plVar16;
        plVar16 = plVar8 + 1;
        lVar14 = *plVar16;
      } while (*(uint *)(lVar14 + 0x1f8) < *(uint *)(*plVar11 + 0x1f8));
      plVar8 = plVar8 + 2;
      do {
        plVar9 = plVar9 + -1;
      } while (*(uint *)(*plVar11 + 0x1f8) <= *(uint *)(*plVar9 + 0x1f8));
      if (plVar9 < plVar16) break;
      *plVar16 = 0;
      lVar12 = *plVar9;
      *plVar9 = 0;
      *plVar16 = lVar12;
      plVar7 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 5;
        do {
          lVar12 = *plVar1;
          iVar5 = (int)lVar12 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        else if ((int)lVar12 == 0) goto LAB_016990cc;
      }
      *plVar9 = lVar14;
      iVar6 = iVar6 + 1;
      plVar7 = plVar9;
      if (plVar11 != plVar16) {
        plVar7 = plVar11;
      }
      plVar11 = plVar7;
    }
  }
  if ((plVar16 != plVar11) &&
     (lVar14 = *plVar16, *(uint *)(*plVar11 + 0x1f8) < *(uint *)(lVar14 + 0x1f8))) {
    *plVar16 = 0;
    lVar12 = *plVar11;
    *plVar11 = 0;
    *plVar16 = lVar12;
    plVar9 = (long *)*plVar11;
    *plVar11 = 0;
    if (plVar9 != (long *)0x0) {
      plVar8 = plVar9 + 5;
      do {
        lVar12 = *plVar8;
        iVar5 = (int)lVar12 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      else if ((int)lVar12 == 0) goto LAB_016990cc;
    }
    iVar6 = iVar6 + 1;
    *plVar11 = lVar14;
  }
  if (iVar6 == 0) {
    uVar13 = FUN_029e3da0(param_1,plVar16);
    uVar10 = FUN_029e3da0(plVar16 + 1,param_2);
    if ((uVar10 & 1) != 0) goto LAB_01699088;
    plVar11 = plVar16 + 1;
    if ((uVar13 & 1) != 0) goto LAB_01698b88;
  }
  if ((long)param_2 - (long)plVar16 <= (long)plVar16 - (long)param_1) {
    FUN_01698b60(plVar16 + 1,param_2);
    param_2 = plVar16;
    goto LAB_01698b84;
  }
  FUN_01698b60(param_1,plVar16);
  plVar11 = plVar16 + 1;
  goto LAB_01698b88;
LAB_01699088:
  param_2 = plVar16;
  if ((uVar13 & 1) != 0) {
    return;
  }
  goto LAB_01698b84;
switchD_01698bb8_caseD_2:
  lVar14 = *param_1;
  if (*(uint *)(lVar14 + 0x1f8) <= *(uint *)(*plVar15 + 0x1f8)) {
    return;
  }
  *param_1 = 0;
  lVar12 = *plVar15;
  *plVar15 = 0;
  *param_1 = lVar12;
  plVar11 = (long *)*plVar15;
  *plVar15 = 0;
  if (plVar11 != (long *)0x0) {
    plVar9 = plVar11 + 5;
    do {
      lVar12 = *plVar9;
      iVar6 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar12 == 0) {
LAB_016990cc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *plVar15 = lVar14;
  return;
}


