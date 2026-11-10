/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018879a4; name: FUN_018879a4
 */


void FUN_018879a4(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  undefined8 local_38;
  
  plVar8 = *(long **)(*param_2 + 0xb8);
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 5;
    do {
      lVar10 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)lVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar10 == -1) goto LAB_01887c70;
  }
  puVar5 = (undefined8 *)FUN_00f351bc();
  puVar5 = (undefined8 *)FUN_00e514cc(*puVar5);
  plVar9 = (long *)*puVar5;
  if (plVar9 != (long *)0x0) {
    plVar6 = plVar9 + 5;
    do {
      lVar10 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)lVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar10 == -1) {
LAB_01887c70:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_58 = 0xe9cc127eac0e0df1;
  pcStack_50 = PTR_s_CopyImage_047d8ad8;
  local_48 = 0x1f;
  local_40 = (long *)0x0;
  FUN_012a632c(&local_38,plVar9,&local_58);
  plVar6 = *(long **)(param_1 + 0x3a0);
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar10 = *plVar1;
      iVar4 = (int)lVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_01887c48;
  }
  uVar7 = local_38;
  local_38 = 0;
  *(undefined8 *)(param_1 + 0x3a0) = uVar7;
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))(local_40);
    uVar7 = *(undefined8 *)(param_1 + 0x3a0);
  }
  FUN_00eb6400(uVar7);
  FUN_00d100a8(*(undefined8 *)(param_1 + 0x3a0));
  puVar5 = (undefined8 *)FUN_0166cefc();
  local_58 = 0xa300e8697cb0089a;
  pcStack_50 = "[Copy to ScanBuffer]";
  local_48 = 0x14;
  local_40 = (long *)0x0;
  FUN_01343d88(&local_38,*puVar5,plVar8 + 7,&local_58,0);
  plVar6 = *(long **)(param_1 + 0x398);
  *(undefined8 *)(param_1 + 0x398) = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar10 = *plVar1;
      iVar4 = (int)lVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_01887c48;
  }
  uVar7 = local_38;
  local_38 = 0;
  *(undefined8 *)(param_1 + 0x398) = uVar7;
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (*(long *)(param_1 + 0x3a0) != 0) {
    lVar10 = *(long *)(param_1 + 0x398);
    uVar7 = FUN_015f804c();
    FUN_00d10690(*(undefined8 *)(lVar10 + 200),0,uVar7);
  }
  FUN_016a74cc(*(undefined8 *)(param_1 + 0x398),0,param_1 + 0x390,0);
  FUN_00eacd1c(*(undefined8 *)(param_1 + 0x398),0,0,0);
  FUN_00eb3bec(*(undefined8 *)(*(long *)(param_1 + 0x398) + 200),0);
  FUN_00eb2d18(*(undefined8 *)(*(long *)(param_1 + 0x398) + 200),0,1);
  *(undefined4 *)(*(long *)(param_1 + 0x398) + 0xf0) = 0x80000000;
  if (plVar9 != (long *)0x0) {
    plVar6 = plVar9 + 5;
    do {
      lVar10 = *plVar6;
      iVar4 = (int)lVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    else if ((int)lVar10 == 0) goto LAB_01887c48;
  }
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 5;
    do {
      lVar10 = *plVar9;
      iVar4 = (int)lVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    else if ((int)lVar10 == 0) {
LAB_01887c48:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


