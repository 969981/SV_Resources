/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d08acc; name: FUN_00d08acc
 */


void FUN_00d08acc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 local_58;
  undefined *puStack_50;
  undefined8 local_48;
  long *local_40;
  undefined8 local_38;
  long *local_18;
  
  local_18 = (long *)FUN_00e31554();
  local_18 = (long *)*local_18;
  if (local_18 != (long *)0x0) {
    plVar10 = local_18 + 5;
    do {
      lVar5 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) goto LAB_00d08d0c;
  }
  puVar7 = (undefined8 *)FUN_00f351bc();
  puVar7 = (undefined8 *)FUN_00e514cc(*puVar7);
  plVar10 = (long *)*puVar7;
  if (plVar10 != (long *)0x0) {
    plVar8 = plVar10 + 5;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) {
LAB_00d08d0c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_58 = 0xf29f7305d88d881b;
  puStack_50 = PTR_s_PointWind_047e16b8;
  local_48 = 0x1f;
  local_40 = (long *)0x0;
  FUN_012a632c(&local_38,plVar10,&local_58);
  plVar8 = *(long **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
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
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_00d08ce4;
  }
  uVar9 = local_38;
  local_38 = 0;
  *(undefined8 *)(param_1 + 0xc0) = uVar9;
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))(local_40);
    uVar9 = *(undefined8 *)(param_1 + 0xc0);
  }
  FUN_00eb6400(uVar9);
  FUN_00d100a8(*(undefined8 *)(param_1 + 0xc0));
  local_58 = 0;
  FUN_012a6760(&local_18,param_1 + 0x30,&local_58,10,10);
  FUN_00d08d60(&local_38,&local_18,10,10);
  plVar8 = *(long **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
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
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_00d08ce4;
  }
  *(undefined8 *)(param_1 + 0x78) = local_38;
  uVar6 = FUN_00d08d40(10,10);
  *(undefined4 *)(param_1 + 0x80) = uVar6;
  if (plVar10 != (long *)0x0) {
    plVar8 = plVar10 + 5;
    do {
      lVar5 = *plVar8;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar5 == 0) goto LAB_00d08ce4;
  }
  if (local_18 != (long *)0x0) {
    plVar10 = local_18 + 5;
    do {
      lVar5 = *plVar10;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_18 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
LAB_00d08ce4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


