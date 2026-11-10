/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02713284; name: FUN_02713284
 */


void FUN_02713284(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  *param_1 = &PTR_FUN_045d1118;
  param_1[4] = &PTR_LAB_045d1150;
  plVar6 = (long *)param_1[0x1f];
  if (plVar6 != (long *)0x0) {
    plVar10 = plVar6 + 5;
    do {
      lVar11 = *plVar10;
      iVar5 = (int)lVar11 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar11 == 0) {
LAB_02713614:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar11 = param_1[0x18];
  if (lVar11 != 0) {
    lVar9 = param_1[0x19];
    if (lVar9 == lVar11) {
      lVar9 = lVar11;
    }
    else {
      if (*(long **)(lVar9 + -0x18) != (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + -0x18) + 0x20))();
      }
      if (lVar9 + -0x38 != lVar11) {
        if (*(long **)(lVar9 + -0x50) != (long *)0x0) {
          (**(code **)(**(long **)(lVar9 + -0x50) + 0x20))();
        }
        if (lVar9 + -0x70 != lVar11) {
          if (*(long **)(lVar9 + -0x88) != (long *)0x0) {
            (**(code **)(**(long **)(lVar9 + -0x88) + 0x20))();
          }
          if (lVar9 + -0xa8 != lVar11) {
            if (*(long **)(lVar9 + -0xc0) != (long *)0x0) {
              (**(code **)(**(long **)(lVar9 + -0xc0) + 0x20))();
            }
            if (lVar9 + -0xe0 != lVar11) {
              if (*(long **)(lVar9 + -0xf8) != (long *)0x0) {
                (**(code **)(**(long **)(lVar9 + -0xf8) + 0x20))();
              }
              if (lVar9 + -0x118 != lVar11) {
                do {
                  if (*(long **)(lVar9 + -0x130) != (long *)0x0) {
                    (**(code **)(**(long **)(lVar9 + -0x130) + 0x20))();
                  }
                  lVar9 = lVar9 + -0x38;
                } while (lVar11 + 0x118 != lVar9);
              }
            }
          }
        }
      }
      lVar9 = param_1[0x18];
    }
    lVar2 = param_1[0x1a];
    plVar6 = (long *)param_1[0x1b];
    param_1[0x19] = lVar11;
    uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar7 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar9,lVar2 - lVar9,8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar9,lVar2 - lVar9,8);
    }
  }
  lVar11 = param_1[0x11];
  if (lVar11 != 0) {
    lVar9 = param_1[0x12];
    if (lVar9 == lVar11) {
      lVar9 = lVar11;
    }
    else {
      FUN_00ec38e0(lVar9 + -0x108);
      if (((lVar9 + -0x108 != lVar11) && (FUN_00ec38e0(lVar9 + -0x210), lVar9 + -0x210 != lVar11))
         && (FUN_00ec38e0(lVar9 + -0x318), lVar9 + -0x318 != lVar11)) {
        do {
          FUN_00ec38e0(lVar9 + -0x420);
          lVar9 = lVar9 + -0x108;
        } while (lVar11 + 0x318 != lVar9);
      }
      lVar9 = param_1[0x11];
    }
    lVar2 = param_1[0x13];
    plVar6 = (long *)param_1[0x14];
    param_1[0x12] = lVar11;
    uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar7 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar9,lVar2 - lVar9,8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar9,lVar2 - lVar9,8);
    }
  }
  plVar6 = (long *)param_1[10];
  if (plVar6 != (long *)0x0) {
    plVar10 = (long *)param_1[0xb];
    if (plVar10 == plVar6) {
      plVar10 = plVar6;
    }
    else {
      do {
        plVar10 = plVar10 + -1;
        plVar8 = (long *)*plVar10;
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 5;
          do {
            lVar11 = *plVar1;
            iVar5 = (int)lVar11 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
          else if ((int)lVar11 == 0) goto LAB_02713614;
        }
      } while (plVar10 != plVar6);
      plVar10 = (long *)param_1[10];
    }
    lVar11 = param_1[0xc];
    plVar8 = (long *)param_1[0xd];
    param_1[0xb] = plVar6;
    uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar7 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,plVar10,lVar11 - (long)plVar10,8);
    }
    else {
      FUN_00c48fe8(plVar8,plVar10,lVar11 - (long)plVar10,8);
    }
  }
  if ((long *)param_1[9] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x027134dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[9] + 0x20))();
  return;
}


