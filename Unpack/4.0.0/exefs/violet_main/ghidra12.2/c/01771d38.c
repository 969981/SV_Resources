/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01771d38; name: FUN_01771d38
 */


void FUN_01771d38(long param_1)

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
  undefined8 local_58;
  undefined *puStack_50;
  undefined8 local_48;
  long *local_40;
  undefined8 local_38;
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
  local_18 = 0;
  FUN_01771f44(&DAT_0485a0a0,param_1 + 0x30,&local_18);
  FUN_017720f8(&local_58,&DAT_0485a0a0);
  plVar7 = *(long **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
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
    else if ((int)lVar5 == 0) goto LAB_01771ef4;
  }
  *(undefined4 *)(param_1 + 0x80) = 0x84;
  *(undefined8 *)(param_1 + 0x78) = local_58;
  local_58 = 0x609265c3a8e5a5e7;
  puStack_50 = PTR_s_SpotLight_047e1558;
  local_48 = 0x1f;
  local_40 = (long *)0x0;
  FUN_012a632c(&local_38,plVar9,&local_58);
  plVar7 = *(long **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
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
    else if ((int)lVar5 == 0) goto LAB_01771ef4;
  }
  uVar8 = local_38;
  local_38 = 0;
  *(undefined8 *)(param_1 + 0xc0) = uVar8;
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))(local_40);
    uVar8 = *(undefined8 *)(param_1 + 0xc0);
  }
  FUN_00eb6400(uVar8);
  FUN_00d100a8(*(undefined8 *)(param_1 + 0xc0));
  *(long *)(param_1 + 0xd8) = param_1;
  FUN_0177258c(DAT_0485a0e8,param_1 + 200,0);
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
LAB_01771ef4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


