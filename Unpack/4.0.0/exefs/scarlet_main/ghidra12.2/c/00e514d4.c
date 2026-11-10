/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e514d4; name: FUN_00e514d4
 */


void FUN_00e514d4(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *local_60;
  undefined4 local_54;
  long *local_50;
  undefined *puStack_48;
  undefined8 local_40;
  long *local_38;
  
  lVar7 = *param_2;
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == -1) {
LAB_00e51738:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar8 = *(long **)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = lVar7;
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 5;
    do {
      lVar7 = *plVar2;
      iVar3 = (int)lVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    else if ((int)lVar7 == 0) goto LAB_00e51760;
    lVar7 = *(long *)(param_1 + 0x40);
  }
  *(bool *)(param_1 + 0x4d) = lVar7 != 0;
  if (lVar7 != 0) {
    local_50 = (long *)&DAT_c861cf4a2c84b1cb;
    puStack_48 = PTR_s_EnablePartialBlendShape_047e10c8;
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    local_54 = 1;
    (**(code **)(*(long *)(lVar7 + 0x30) + 0x58))((long *)(lVar7 + 0x30),&local_50,&local_54);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 200);
    uVar6 = (**(code **)(*(long *)(*(long *)(param_1 + 0x40) + 0x30) + 0x28))();
    (**(code **)(*(long *)(*(long *)(param_1 + 0x40) + 0x30) + 0x20))(&local_50);
    FUN_00c4b998(uVar11,1,uVar6,&local_50);
    if (local_50 != (long *)0x0) {
      plVar8 = local_50 + 5;
      do {
        lVar7 = *plVar8;
        iVar3 = (int)lVar7 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
      else if ((int)lVar7 == 0) {
LAB_00e51760:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (*(int *)(param_1 + 0x50) == 1) {
      FUN_00c896e4(*(undefined8 *)(*(long *)(param_1 + 0x98) + 200),1,0xd,param_1 + 0x90);
    }
  }
  FUN_00e51788(param_1 + 0x58,param_4);
  lVar7 = *(long *)(param_1 + 0x58);
  if (*(long *)(param_1 + 0x60) == lVar7) {
    bVar5 = false;
  }
  else {
    uVar10 = 0;
    do {
      plVar8 = *(long **)(*(long *)(param_1 + 0x130) + uVar10 * 8);
      local_60 = *(long **)(param_1 + 0x90);
      if (local_60 != (long *)0x0) {
        plVar2 = local_60 + 5;
        do {
          lVar9 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = (int)lVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((int)lVar9 == -1) goto LAB_00e51738;
      }
      (**(code **)(*plVar8 + 0x28))
                (plVar8,lVar7 + uVar10 * 8,&local_60,*(undefined4 *)(param_1 + 0x50));
      if (local_60 != (long *)0x0) {
        plVar8 = local_60 + 5;
        do {
          lVar7 = *plVar8;
          iVar3 = (int)lVar7 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *(int *)plVar8 = iVar3;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*local_60 + 0x10))();
        }
        else if ((int)lVar7 == 0) goto LAB_00e51760;
      }
      lVar7 = *(long *)(param_1 + 0x58);
      uVar10 = uVar10 + 1;
      lVar9 = *(long *)(param_1 + 0x60) - lVar7;
    } while (uVar10 < (ulong)(lVar9 >> 3));
    bVar5 = lVar9 != 0;
  }
  *(byte *)(param_1 + 0x4d) = *(byte *)(param_1 + 0x4d) & bVar5;
  return;
}


