/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017e7b18; name: FUN_017e7b18
 */


void FUN_017e7b18(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long *plVar13;
  
  *param_1 = (long)&DAT_0459cf40;
  param_1[4] = (long)&PTR_LAB_0459cf80;
  pcVar11 = (code *)param_1[0x3b];
  if (pcVar11 != (code *)0x0) {
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    (*pcVar11)(param_1 + 0x3e);
  }
  if ((long *)param_1[0x37] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x37] + 0x20))();
  }
  if ((long *)param_1[0x33] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x33] + 0x20))();
  }
  lVar12 = param_1[0x2b];
  if (lVar12 != 0) {
    lVar10 = param_1[0x2d];
    plVar7 = (long *)param_1[0x2e];
    param_1[0x2c] = lVar12;
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar12,lVar10 - lVar12,4);
    }
    else {
      FUN_00c48fe8(plVar7,lVar12,lVar10 - lVar12,4);
    }
  }
  plVar7 = (long *)param_1[0x2a];
  if (plVar7 != (long *)0x0) {
    plVar13 = plVar7 + 5;
    do {
      lVar12 = *plVar13;
      iVar5 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar12 == 0) goto LAB_017e7f44;
  }
  plVar7 = (long *)param_1[0x29];
  if (plVar7 != (long *)0x0) {
    plVar13 = plVar7 + 5;
    do {
      lVar12 = *plVar13;
      iVar5 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar12 == 0) goto LAB_017e7f44;
  }
  plVar7 = (long *)param_1[0x28];
  if (plVar7 != (long *)0x0) {
    plVar13 = plVar7 + 5;
    do {
      lVar12 = *plVar13;
      iVar5 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar12 == 0) goto LAB_017e7f44;
  }
  if (param_1[0x21] != 0) {
    FUN_01595d28(param_1 + 0x21);
    lVar10 = param_1[0x21];
    lVar12 = param_1[0x23];
    plVar7 = (long *)param_1[0x24];
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar10,lVar12 - lVar10,8);
    }
    else {
      FUN_00c48fe8(plVar7,lVar10,lVar12 - lVar10,8);
    }
  }
  lVar12 = param_1[0x1a];
  if (lVar12 != 0) {
    lVar10 = param_1[0x1b];
    if (lVar10 == lVar12) {
      lVar10 = lVar12;
    }
    else {
      FUN_01168d28(lVar10 + -0x40);
      if (((lVar10 + -0x40 != lVar12) && (FUN_01168d28(lVar10 + -0x80), lVar10 + -0x80 != lVar12))
         && (FUN_01168d28(lVar10 + -0xc0), lVar10 + -0xc0 != lVar12)) {
        do {
          FUN_01168d28(lVar10 + -0x100);
          lVar10 = lVar10 + -0x40;
        } while (lVar12 + 0xc0 != lVar10);
      }
      lVar10 = param_1[0x1a];
    }
    lVar8 = param_1[0x1c];
    plVar7 = (long *)param_1[0x1d];
    param_1[0x1b] = lVar12;
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar6 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar10,lVar8 - lVar10,8);
    }
    else {
      FUN_00c48fe8(plVar7,lVar10,lVar8 - lVar10,8);
    }
  }
  plVar7 = (long *)param_1[0x13];
  if (plVar7 != (long *)0x0) {
    plVar13 = (long *)param_1[0x14];
    if (plVar13 == plVar7) {
      plVar13 = plVar7;
    }
    else {
      do {
        plVar13 = plVar13 + -1;
        plVar9 = (long *)*plVar13;
        if (plVar9 != (long *)0x0) {
          plVar2 = plVar9 + 5;
          do {
            lVar12 = *plVar2;
            iVar5 = (int)lVar12 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar9 + 0x10))();
          }
          else if ((int)lVar12 == 0) goto LAB_017e7f44;
        }
      } while (plVar13 != plVar7);
      plVar13 = (long *)param_1[0x13];
    }
    lVar12 = param_1[0x15];
    plVar9 = (long *)param_1[0x16];
    param_1[0x14] = (long)plVar7;
    uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar6 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,plVar13,lVar12 - (long)plVar13,8);
    }
    else {
      FUN_00c48fe8(plVar9,plVar13,lVar12 - (long)plVar13,8);
    }
  }
  plVar7 = (long *)param_1[0x11];
  if (plVar7 != (long *)0x0) {
    plVar13 = plVar7 + 5;
    do {
      lVar12 = *plVar13;
      iVar5 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar12 == 0) goto LAB_017e7f44;
  }
  plVar7 = (long *)param_1[0x10];
  if (plVar7 != (long *)0x0) {
    plVar13 = plVar7 + 5;
    do {
      lVar12 = *plVar13;
      iVar5 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar12 == 0) goto LAB_017e7f44;
  }
  plVar7 = (long *)param_1[0xf];
  if (plVar7 != (long *)0x0) {
    plVar13 = plVar7 + 5;
    do {
      lVar12 = *plVar13;
      iVar5 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar12 == 0) goto LAB_017e7f44;
  }
  plVar7 = (long *)param_1[0xe];
  if (plVar7 != (long *)0x0) {
    plVar13 = plVar7 + 5;
    do {
      lVar12 = *plVar13;
      iVar5 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar12 == 0) {
LAB_017e7f44:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_017e7ff0(param_1 + 6);
  puVar1 = PTR_DAT_047dcf30 + 0x50;
  *param_1 = (long)(PTR_DAT_047dcf30 + 0x10);
  param_1[4] = (long)puVar1;
                    /* WARNING: Could not recover jumptable at 0x017e7ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0xd0))();
  return;
}


