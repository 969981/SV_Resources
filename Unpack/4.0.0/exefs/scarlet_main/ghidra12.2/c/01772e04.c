/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01772e04; name: FUN_01772e04
 */


void FUN_01772e04(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined *puStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar7 = FUN_00e31554();
  puVar8 = (undefined8 *)FUN_00f351bc();
  puVar8 = (undefined8 *)FUN_00e514cc(*puVar8);
  plVar10 = (long *)*puVar8;
  if (plVar10 != (long *)0x0) {
    plVar9 = plVar10 + 5;
    do {
      lVar5 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)lVar5 + 1;
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
  local_38 = 1;
  FUN_012a6760(uVar7,param_1 + 0x30,&local_38,10,10);
  FUN_00d08d60(&local_60,uVar7,10,10);
  plVar9 = *(long **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
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
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_01773060;
  }
  *(undefined8 *)(param_1 + 0x78) = local_60;
  uVar6 = FUN_00d08d40(10,10);
  *(undefined4 *)(param_1 + 0x80) = uVar6;
  local_60 = 0xb0028654dbc57b4f;
  puStack_58 = PTR_s_Light_047e1548;
  local_50 = 0x1f;
  local_48 = (long *)0x0;
  FUN_012a632c(&local_40,plVar10,&local_60);
  plVar9 = *(long **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
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
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_01773060;
  }
  uVar7 = local_40;
  local_40 = 0;
  *(undefined8 *)(param_1 + 0xc0) = uVar7;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))(local_48);
    uVar7 = *(undefined8 *)(param_1 + 0xc0);
  }
  local_70 = 0x1f;
  local_68 = (long *)0x0;
  local_80 = 0xef2fed89a983fbd7;
  puStack_78 = PTR_s_LightType_047e1550;
  local_a0 = 0xff3b6436877936f1;
  puStack_98 = PTR_s_Point_047dcf18;
  local_90 = 0x1f;
  local_88 = (long *)0x0;
  FUN_00d0fefc(uVar7,&local_80,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  FUN_00eb6400(*(undefined8 *)(param_1 + 0xc0));
  FUN_00d100a8(*(undefined8 *)(param_1 + 0xc0));
  *(long *)(param_1 + 0xd8) = param_1;
  FUN_0177258c(DAT_0485a0e8,param_1 + 200,0);
  if (plVar10 != (long *)0x0) {
    plVar9 = plVar10 + 5;
    do {
      lVar5 = *plVar9;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar5 == 0) {
LAB_01773060:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


