/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01770efc; name: FUN_01770efc
 */


void FUN_01770efc(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *local_50;
  undefined1 *local_48;
  undefined *puStack_40;
  undefined8 local_38;
  long *local_30;
  long *local_28;
  
  puVar6 = (undefined8 *)FUN_00f351bc();
  puVar6 = (undefined8 *)FUN_00e514cc(*puVar6);
  plVar7 = (long *)*puVar6;
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
  local_48 = &DAT_5df8a77c4b1003f0;
  puStack_40 = PTR_s_DefaultDiffusePrb_047e1280;
  local_38 = 0x1f;
  local_30 = (long *)0x0;
  FUN_00fff044(&local_28,plVar7,&local_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  local_48 = &DAT_805357d99b3be92e;
  puStack_40 = PTR_s_SpecularDiffusePrb_047e1288;
  local_38 = 0x1f;
  local_30 = (long *)0x0;
  FUN_00fff044(&local_50,plVar7,&local_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  FUN_00e20390(param_1,&local_28);
  FUN_00e20adc(param_1,&local_50);
  FUN_00e21228(param_1,&local_28);
  FUN_00e1f9d0(param_1,&local_50);
  if (local_50 != (long *)0x0) {
    plVar1 = local_50 + 5;
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
      (**(code **)(*local_50 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_017710b4;
  }
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 5;
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
      (**(code **)(*local_28 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_017710b4;
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
LAB_017710b4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


