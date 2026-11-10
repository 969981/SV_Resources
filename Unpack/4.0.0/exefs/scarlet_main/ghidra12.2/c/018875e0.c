/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018875e0; name: FUN_018875e0
 */


void FUN_018875e0(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *local_c8;
  long local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_50;
  undefined1 auStack_48 [8];
  
  plVar10 = *(long **)(*param_2 + 0xb0);
  if (plVar10 != (long *)0x0) {
    plVar7 = plVar10 + 5;
    do {
      lVar6 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_01887948;
  }
  FUN_0167119c(plVar10,param_1 + 0x3a8,param_1 + 0x3b0,0);
  local_80 = 1;
  uStack_78 = 2;
  local_68 = 0x400000003;
  uStack_60 = 5;
  local_90 = 0;
  uStack_88 = 0;
  local_70 = 0x200000038;
  local_a0 = *(undefined8 *)(param_1 + 0x3a8);
  uStack_98 = *(undefined8 *)(param_1 + 0x3b0);
  local_58 = 0x200000008;
  local_c0 = *param_2;
  lVar5 = FUN_00cf3764(&local_50,*(undefined8 *)(local_c0 + 8),&local_c0);
  lVar6 = 0;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x28);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == -1) goto LAB_01887948;
    lVar6 = lVar5;
  }
  FUN_0117e220(lVar6,&local_a0,1,1,0);
  plVar7 = *(long **)(param_1 + 0x390);
  *(undefined8 *)(param_1 + 0x390) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 5;
    do {
      lVar6 = *plVar9;
      iVar2 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar6 == 0) goto LAB_01887970;
  }
  *(long *)(param_1 + 0x390) = lVar5;
  puVar8 = (undefined8 *)FUN_00f351bc();
  puVar8 = (undefined8 *)FUN_00e514cc(*puVar8);
  plVar7 = (long *)*puVar8;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 5;
    do {
      lVar6 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) {
LAB_01887948:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_c0 = -0x24ad04fe93314ae;
  puStack_b8 = PTR_s_RT_MainColorLDR_047d8e48;
  local_b0 = 0x1f;
  local_a8 = (long *)0x0;
  FUN_01344120(plVar7,&local_c0,(long *)(param_1 + 0x390));
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  plVar9 = (long *)FUN_01887998();
  if (1 < (ulong)((*(long *)(*plVar9 + 0x38) - *(long *)(*plVar9 + 0x30) >> 4) * -0x5555555555555555
                 )) {
    uVar11 = 1;
    do {
      plVar9 = (long *)FUN_0145966c();
      (**(code **)(*plVar9 + 0x108))(&local_c0,plVar9,uVar11);
      local_50 = *param_2;
      local_c8 = (long *)FUN_00cf3764(auStack_48,*(undefined8 *)(local_50 + 8),&local_50);
      if (local_c8 != (long *)0x0) {
        plVar9 = local_c8 + 5;
        do {
          lVar6 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *(int *)plVar9 = (int)lVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((int)lVar6 == -1) goto LAB_01887948;
      }
      FUN_0117e220(local_c8,&local_a0,1,1,0);
      FUN_01344120(plVar7,&local_c0,&local_c8);
      if (local_c8 != (long *)0x0) {
        plVar9 = local_c8 + 5;
        do {
          lVar6 = *plVar9;
          iVar2 = (int)lVar6 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *(int *)plVar9 = iVar2;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 == 0) {
          (**(code **)(*local_c8 + 0x10))();
        }
        else if ((int)lVar6 == 0) goto LAB_01887970;
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      uVar11 = uVar11 + 1;
      plVar9 = (long *)FUN_01887998();
    } while (uVar11 < (ulong)((*(long *)(*plVar9 + 0x38) - *(long *)(*plVar9 + 0x30) >> 4) *
                             -0x5555555555555555));
  }
  FUN_01887c98(param_1,param_2);
  FUN_018879a4(param_1,param_2);
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 5;
    do {
      lVar6 = *plVar9;
      iVar2 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar6 == 0) goto LAB_01887970;
  }
  if (plVar10 != (long *)0x0) {
    plVar7 = plVar10 + 5;
    do {
      lVar6 = *plVar7;
      iVar2 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar6 == 0) {
LAB_01887970:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


