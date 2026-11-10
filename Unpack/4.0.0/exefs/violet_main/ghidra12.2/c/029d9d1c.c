/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029d9d1c; name: FUN_029d9d1c
 */


void FUN_029d9d1c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = param_1[0x12];
  *param_1 = &PTR_FUN_04608b90;
  if (lVar8 != 0) {
    lVar9 = param_1[0x13];
    lVar7 = lVar8;
    if (lVar9 != lVar8) {
      if (*(long **)(lVar9 + -0x20) != (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + -0x20) + 0x20))();
      }
      if (*(long **)(lVar9 + -0x40) != (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + -0x40) + 0x20))();
      }
      if (*(long **)(lVar9 + -0x60) != (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + -0x60) + 0x20))();
      }
      FUN_00db2234(lVar9 + -0x220);
      if (lVar9 + -0x220 != lVar8) {
        if (*(long **)(lVar9 + -0x240) != (long *)0x0) {
          (**(code **)(**(long **)(lVar9 + -0x240) + 0x20))();
        }
        if (*(long **)(lVar9 + -0x260) != (long *)0x0) {
          (**(code **)(**(long **)(lVar9 + -0x260) + 0x20))();
        }
        if (*(long **)(lVar9 + -0x280) != (long *)0x0) {
          (**(code **)(**(long **)(lVar9 + -0x280) + 0x20))();
        }
        FUN_00db2234(lVar9 + -0x440);
        if (lVar9 + -0x440 != lVar8) {
          do {
            if (*(long **)(lVar9 + -0x460) != (long *)0x0) {
              (**(code **)(**(long **)(lVar9 + -0x460) + 0x20))();
            }
            if (*(long **)(lVar9 + -0x480) != (long *)0x0) {
              (**(code **)(**(long **)(lVar9 + -0x480) + 0x20))();
            }
            if (*(long **)(lVar9 + -0x4a0) != (long *)0x0) {
              (**(code **)(**(long **)(lVar9 + -0x4a0) + 0x20))();
            }
            FUN_00db2234(lVar9 + -0x660);
            lVar9 = lVar9 + -0x220;
          } while (lVar8 + 0x440 != lVar9);
        }
      }
      lVar7 = param_1[0x12];
    }
    lVar9 = param_1[0x14];
    plVar6 = (long *)param_1[0x15];
    param_1[0x13] = lVar8;
    uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar5 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar7,lVar9 - lVar7,8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar7,lVar9 - lVar7,8);
    }
  }
  if (param_1[0xb] != 0) {
    FUN_00db2128();
    lVar7 = param_1[0xb];
    lVar8 = param_1[0xd];
    plVar6 = (long *)param_1[0xe];
    uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar5 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar7,lVar8 - lVar7,8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar7,lVar8 - lVar7,8);
    }
  }
  if ((long *)param_1[10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[10] + 0x20))();
  }
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0x20))();
  }
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar8 = *plVar1;
      iVar4 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x029d9f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x10))();
      return;
    }
    if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


