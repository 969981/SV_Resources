/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02735a14; name: FUN_02735a14
 */


void FUN_02735a14(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  long *local_50;
  undefined1 local_48 [24];
  long *local_30;
  undefined8 local_28;
  
  uVar8 = *(undefined8 *)(param_1 + 0x388);
  local_68 = (long *)0xcc7b04092977f1ce;
  puStack_60 = PTR_s_OcclusionQuery_047e1170;
  local_58 = 0x1f;
  local_50 = (long *)0x0;
  FUN_01464dd0(local_48,&local_68,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_28,uVar8,local_48);
  plVar7 = *(long **)(param_1 + 0x438);
  *(undefined8 *)(param_1 + 0x438) = 0;
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
    else if ((int)lVar5 == 0) goto LAB_02735be4;
  }
  uVar8 = local_28;
  local_28 = 0;
  *(undefined8 *)(param_1 + 0x438) = uVar8;
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  uVar8 = *(undefined8 *)(param_1 + 0x438);
  uVar6 = FUN_01464df0(0x3e,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar8,uVar6);
  plVar7 = *(long **)(*(long *)(param_1 + 0x438) + 0x58);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar5 + 1;
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
  FUN_00d819c8(0,plVar7,0);
  local_48[0] = 0;
  FUN_00d829fc(plVar7,param_1 + 0x4a0,local_48);
  local_68 = (long *)0x0;
  local_48[0] = 0;
  FUN_00d8219c(plVar7,0,&local_68,0xffffffff,local_48);
  if (local_68 != (long *)0x0) {
    plVar1 = local_68 + 5;
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
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_02735be4;
  }
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar5 == 0) {
LAB_02735be4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


