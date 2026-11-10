/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ca7fa8; name: FUN_00ca7fa8
 */


void FUN_00ca7fa8(long *param_1,long param_2,uint param_3)

{
  long *plVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  int local_24;
  
  lVar8 = param_1[7];
  if (lVar8 != 0) {
    piVar9 = (int *)(lVar8 + 0x28);
    do {
      iVar2 = *piVar9;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar6) {
        *piVar9 = iVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar7 = *(long **)(param_2 + 0x38);
  *(long *)(param_2 + 0x38) = lVar8;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar8 = *plVar1;
      iVar2 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar2;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *(int *)(param_2 + 0x40) = (int)param_1[8];
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)((long)param_1 + 0x44);
  piVar9 = (int *)*param_1;
  piVar3 = (int *)param_1[1];
  if (piVar9 == piVar3) {
    return;
  }
  iVar2 = *piVar9;
  local_24 = iVar2;
  if ((param_3 >> 2 & 1) == 0) {
    uVar5 = iVar2 - 1;
    if ((param_3 >> 1 & 1) == 0) {
      local_24 = 0;
      if (uVar5 < 0x19 && (param_3 & 1) != 0) {
        local_24 = iVar2;
      }
      FUN_00c85118(param_2,&local_24,piVar9 + 1);
      if (piVar9 + 2 == piVar3) {
        return;
      }
      local_24 = 0;
      if (piVar9[2] - 1U < 0x19 && (param_3 & 1) != 0) {
        local_24 = piVar9[2];
      }
      FUN_00c85118(param_2,&local_24,piVar9 + 3);
      piVar9 = piVar9 + 4;
      while (piVar9 != piVar3) {
        local_24 = 0;
        if (*piVar9 - 1U < 0x19 && (param_3 & 1) != 0) {
          local_24 = *piVar9;
        }
        FUN_00c85118(param_2,&local_24,piVar9 + 1);
        piVar9 = piVar9 + 2;
      }
      return;
    }
    bVar6 = 7 < iVar2 - 0x1aU;
    if ((param_3 & 1) == 0) {
      if (bVar6 || uVar5 < 0x19) {
        iVar2 = 0;
      }
      local_24 = iVar2;
      FUN_00c85118(param_2,&local_24,piVar9 + 1);
      if (piVar9 + 2 == piVar3) {
        return;
      }
      local_24 = piVar9[2];
      if (7 < local_24 - 0x1aU || local_24 - 1U < 0x19) {
        local_24 = 0;
      }
      FUN_00c85118(param_2,&local_24,piVar9 + 3);
      piVar9 = piVar9 + 4;
      while (piVar9 != piVar3) {
        local_24 = *piVar9;
        if (7 < local_24 - 0x1aU || local_24 - 1U < 0x19) {
          local_24 = 0;
        }
        FUN_00c85118(param_2,&local_24,piVar9 + 1);
        piVar9 = piVar9 + 2;
      }
      return;
    }
    if (bVar6 && 0x18 < uVar5) {
      iVar2 = 0;
    }
    local_24 = iVar2;
    FUN_00c85118(param_2,&local_24,piVar9 + 1);
    if (piVar9 + 2 == piVar3) {
      return;
    }
    local_24 = piVar9[2];
    if (7 < local_24 - 0x1aU && 0x18 < local_24 - 1U) {
      local_24 = 0;
    }
    FUN_00c85118(param_2,&local_24,piVar9 + 3);
    piVar9 = piVar9 + 4;
    while (piVar9 != piVar3) {
      local_24 = *piVar9;
      if (7 < local_24 - 0x1aU && 0x18 < local_24 - 1U) {
        local_24 = 0;
      }
      FUN_00c85118(param_2,&local_24,piVar9 + 1);
      piVar9 = piVar9 + 2;
    }
    return;
  }
  bVar6 = 0x18 < iVar2 - 1U;
  if ((param_3 >> 1 & 1) == 0) {
    if (bVar6) {
      if ((iVar2 - 0x1aU < 8) || (3 < iVar2 - 0x22U)) goto LAB_00ca8384;
    }
    else if ((param_3 & 1) == 0) {
LAB_00ca8384:
      local_24 = 0;
    }
    FUN_00c85118(param_2,&local_24,piVar9 + 1);
    if (piVar9 + 2 == piVar3) {
      return;
    }
    local_24 = piVar9[2];
    if (local_24 - 1U < 0x19) {
      if ((param_3 & 1) != 0) goto LAB_00ca8194;
    }
    else if ((7 < local_24 - 0x1aU) && (local_24 - 0x22U < 4)) goto LAB_00ca8194;
    local_24 = 0;
LAB_00ca8194:
    FUN_00c85118(param_2,&local_24,piVar9 + 3);
    piVar9 = piVar9 + 4;
    do {
      if (piVar9 == piVar3) {
        return;
      }
      local_24 = *piVar9;
      if (local_24 - 1U < 0x19) {
        if ((param_3 & 1) == 0) {
LAB_00ca83d4:
          local_24 = 0;
        }
      }
      else if (local_24 - 0x1aU < 8 || 3 < local_24 - 0x22U) goto LAB_00ca83d4;
      FUN_00c85118(param_2,&local_24,piVar9 + 1);
      piVar9 = piVar9 + 2;
    } while( true );
  }
  if (bVar6) {
    if (0xb < iVar2 - 0x1aU) goto LAB_00ca821c;
  }
  else if ((param_3 & 1) == 0) {
LAB_00ca821c:
    local_24 = 0;
  }
  FUN_00c85118(param_2,&local_24,piVar9 + 1);
  if (piVar9 + 2 == piVar3) {
    return;
  }
  local_24 = piVar9[2];
  if (local_24 - 1U < 0x19) {
    if ((param_3 & 1) != 0) goto LAB_00ca8084;
  }
  else if (local_24 - 0x1aU < 0xc) goto LAB_00ca8084;
  local_24 = 0;
LAB_00ca8084:
  FUN_00c85118(param_2,&local_24,piVar9 + 3);
  piVar9 = piVar9 + 4;
  do {
    if (piVar9 == piVar3) {
      return;
    }
    local_24 = *piVar9;
    if (local_24 - 1U < 0x19) {
      if ((param_3 & 1) == 0) {
LAB_00ca8398:
        local_24 = 0;
      }
    }
    else if (0xb < local_24 - 0x1aU) goto LAB_00ca8398;
    FUN_00c85118(param_2,&local_24,piVar9 + 1);
    piVar9 = piVar9 + 2;
  } while( true );
}


