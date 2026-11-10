/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018dac28; name: FUN_018dac28
 */


void FUN_018dac28(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 local_50;
  undefined *puStack_48;
  undefined8 local_40;
  long *local_38;
  undefined8 local_18;
  
  puVar6 = (undefined8 *)FUN_00f351bc();
  puVar6 = (undefined8 *)FUN_00e514cc(*puVar6);
  plVar9 = (long *)*puVar6;
  if (plVar9 != (long *)0x0) {
    plVar7 = plVar9 + 5;
    do {
      lVar5 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_50 = 0xceed8cb7fadcadb9;
  puStack_48 = PTR_s_IrradianceVolume_047e1588;
  local_40 = 0x1f;
  local_38 = (long *)0x0;
  FUN_012a632c(&local_18,plVar9,&local_50);
  plVar7 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
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
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_018dae88;
  }
  uVar8 = local_18;
  local_18 = 0;
  *(undefined8 *)(param_1 + 0x30) = uVar8;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))(local_38);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_00eb6400(uVar8);
  FUN_00d100a8(*(undefined8 *)(param_1 + 0x30));
  local_50 = 0x3ec97bb01f9f4caa;
  puStack_48 = PTR_s_SpecularProbe_047e1590;
  local_40 = 0x1f;
  local_38 = (long *)0x0;
  FUN_012a632c(&local_18,plVar9,&local_50);
  plVar7 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
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
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_018dae88;
  }
  uVar8 = local_18;
  local_18 = 0;
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))(local_38);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
  }
  FUN_00eb6400(uVar8);
  FUN_00d100a8(*(undefined8 *)(param_1 + 0x38));
  uVar8 = FUN_00e31554();
  local_50 = 1;
  FUN_011b3e90(uVar8,param_1 + 0x48,&local_50);
  FUN_011b35a0(&local_18,uVar8);
  plVar7 = *(long **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
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
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_018dae88;
  }
  *(undefined8 *)(param_1 + 0x90) = local_18;
  *(undefined4 *)(param_1 + 0x98) = 0x24;
  *(long *)(param_1 + 0x140) = param_1;
  FUN_0177258c(DAT_0485a0e8,param_1 + 0x130,0);
  if (plVar9 != (long *)0x0) {
    plVar7 = plVar9 + 5;
    do {
      lVar5 = *plVar7;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    else if ((int)lVar5 == 0) {
LAB_018dae88:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


