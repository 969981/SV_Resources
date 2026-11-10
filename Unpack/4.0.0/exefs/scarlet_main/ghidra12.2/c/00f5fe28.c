/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f5fe28; name: FUN_00f5fe28
 */


void FUN_00f5fe28(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  long *plVar10;
  long lVar11;
  char *pcVar12;
  long *plVar13;
  char *pcVar14;
  
  *param_1 = &DAT_045d1180;
  param_1[4] = &PTR_LAB_045d11b8;
  FUN_00f60478(param_1 + 0x47);
  FUN_00f60478(param_1 + 0x3a);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x38));
  plVar10 = (long *)param_1[0x2d];
  if (plVar10 != (long *)0x0) {
    plVar13 = (long *)param_1[0x2e];
    plVar5 = plVar10;
    if (plVar13 != plVar10) {
      do {
        plVar13 = plVar13 + -1;
        plVar5 = (long *)*plVar13;
        if (plVar5 != (long *)0x0) {
          plVar1 = plVar5 + 5;
          do {
            lVar11 = *plVar1;
            iVar4 = (int)lVar11 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*plVar5 + 0x10))();
          }
          else if ((int)lVar11 == 0) goto LAB_00f602dc;
        }
      } while (plVar13 != plVar10);
      plVar5 = (long *)param_1[0x2d];
    }
    lVar11 = param_1[0x2f];
    plVar13 = (long *)param_1[0x30];
    param_1[0x2e] = plVar10;
    uVar6 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,plVar5,lVar11 - (long)plVar5,8);
    }
    else {
      FUN_00c48fe8(plVar13,plVar5,lVar11 - (long)plVar5,8);
    }
  }
  lVar11 = param_1[0x26];
  if (lVar11 != 0) {
    lVar7 = param_1[0x27];
    lVar8 = lVar11;
    if (lVar7 != lVar11) {
      if (*(long **)(lVar7 + -8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar7 + -8) + 0x20))();
      }
      if (lVar7 + -0x20 != lVar11) {
        do {
          if (*(long **)(lVar7 + -0x28) != (long *)0x0) {
            (**(code **)(**(long **)(lVar7 + -0x28) + 0x20))();
          }
          lVar7 = lVar7 + -0x20;
        } while (lVar11 + 0x20 != lVar7);
      }
      lVar8 = param_1[0x26];
    }
    lVar7 = param_1[0x28];
    plVar10 = (long *)param_1[0x29];
    param_1[0x27] = lVar11;
    uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar6 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar7 - lVar8,8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar8,lVar7 - lVar8,8);
    }
  }
  plVar10 = (long *)param_1[0x1e];
  if (plVar10 != (long *)0x0) {
    plVar13 = (long *)param_1[0x1f];
    plVar5 = plVar10;
    if (plVar13 != plVar10) {
      do {
        plVar5 = plVar13 + -2;
        plVar13 = plVar13 + -7;
        if ((long *)*plVar5 != (long *)0x0) {
          (**(code **)(*(long *)*plVar5 + 0x20))();
        }
        plVar5 = (long *)*plVar13;
        if (plVar5 != (long *)0x0) {
          plVar1 = plVar5 + 5;
          do {
            lVar11 = *plVar1;
            iVar4 = (int)lVar11 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*plVar5 + 0x10))();
          }
          else if ((int)lVar11 == 0) goto LAB_00f602dc;
        }
      } while (plVar13 != plVar10);
      plVar5 = (long *)param_1[0x1e];
    }
    lVar11 = param_1[0x20];
    plVar13 = (long *)param_1[0x21];
    param_1[0x1f] = plVar10;
    uVar6 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,plVar5,lVar11 - (long)plVar5,8);
    }
    else {
      FUN_00c48fe8(plVar13,plVar5,lVar11 - (long)plVar5,8);
    }
  }
  pcVar12 = (char *)param_1[0x16];
  if (pcVar12 != (char *)0x0) {
    pcVar14 = (char *)param_1[0x17];
    pcVar9 = pcVar12;
    if (pcVar14 != pcVar12) {
      pcVar9 = pcVar14 + -0x28;
      if (*pcVar9 != '\0') {
        if (*(long **)(pcVar14 + -8) != (long *)0x0) {
          (**(code **)(**(long **)(pcVar14 + -8) + 0x20))();
        }
        *pcVar9 = '\0';
      }
      if (pcVar9 != pcVar12) {
        pcVar9 = pcVar14 + -0x50;
        if (*pcVar9 != '\0') {
          if (*(long **)(pcVar14 + -0x30) != (long *)0x0) {
            (**(code **)(**(long **)(pcVar14 + -0x30) + 0x20))();
          }
          *pcVar9 = '\0';
        }
        if (pcVar9 != pcVar12) {
          pcVar9 = pcVar14 + -0x78;
          if (*pcVar9 != '\0') {
            if (*(long **)(pcVar14 + -0x58) != (long *)0x0) {
              (**(code **)(**(long **)(pcVar14 + -0x58) + 0x20))();
            }
            *pcVar9 = '\0';
          }
          if (pcVar9 != pcVar12) {
            do {
              if (pcVar14[-0xa0] != '\0') {
                if (*(long **)(pcVar14 + -0x80) != (long *)0x0) {
                  (**(code **)(**(long **)(pcVar14 + -0x80) + 0x20))();
                }
                pcVar14[-0xa0] = '\0';
              }
              pcVar14 = pcVar14 + -0x28;
            } while (pcVar12 + 0x78 != pcVar14);
          }
        }
      }
      pcVar9 = (char *)param_1[0x16];
    }
    lVar11 = param_1[0x18];
    plVar10 = (long *)param_1[0x19];
    param_1[0x17] = pcVar12;
    uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,pcVar9,lVar11 - (long)pcVar9,8);
    }
    else {
      FUN_00c48fe8(plVar10,pcVar9,lVar11 - (long)pcVar9,8);
    }
  }
  plVar10 = (long *)param_1[0x15];
  if (plVar10 != (long *)0x0) {
    plVar5 = plVar10 + 5;
    do {
      lVar11 = *plVar5;
      iVar4 = (int)lVar11 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_00f602dc;
  }
  FUN_00f6036c(param_1 + 8,param_1[0xe]);
  lVar11 = param_1[8];
  param_1[8] = 0;
  if (lVar11 != 0) {
    lVar8 = param_1[9];
    plVar10 = (long *)param_1[10];
    uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,lVar8 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar11,lVar8 << 3,8);
    }
  }
  plVar10 = (long *)param_1[7];
  if (plVar10 != (long *)0x0) {
    plVar5 = plVar10 + 5;
    do {
      lVar11 = *plVar5;
      iVar4 = (int)lVar11 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar11 == 0) {
LAB_00f602dc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (param_1[6] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00f5ffcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1[6] + 0x20) + 0x18))();
  return;
}


