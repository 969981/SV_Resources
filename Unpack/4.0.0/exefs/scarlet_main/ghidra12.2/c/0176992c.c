/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0176992c; name: FUN_0176992c
 */


void FUN_0176992c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_28;
  
  puVar7 = (undefined8 *)FUN_00f351bc();
  puVar7 = (undefined8 *)FUN_00e514cc(*puVar7);
  plVar9 = (long *)*puVar7;
  if (plVar9 != (long *)0x0) {
    plVar8 = plVar9 + 5;
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
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_60 = (long *)&DAT_69bd0c30cda452a3;
  puStack_58 = PTR_s_SkyBox_047e15a8;
  local_50 = 0x1f;
  local_48 = (long *)0x0;
  FUN_012a632c(&local_80,plVar9,&local_60);
  plVar8 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
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
    else if ((int)lVar5 == 0) goto LAB_01769c58;
  }
  uVar11 = local_80;
  local_80 = 0;
  *(undefined8 *)(param_1 + 0x30) = uVar11;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))(local_48);
    uVar11 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_00eb6400(uVar11);
  puVar7 = (undefined8 *)FUN_00e31554();
  plVar8 = (long *)FUN_0145966c();
  uVar6 = (**(code **)(*plVar8 + 0x88))();
  local_60 = (long *)*puVar7;
  FUN_01769d14(&local_80,local_60,&local_60);
  puVar10 = (undefined8 *)(param_1 + 0x40);
  local_60 = (long *)*puVar10;
  *puVar10 = 0;
  FUN_01769ca8(&local_60);
  uVar11 = local_80;
  local_80 = 0;
  *puVar10 = uVar11;
  FUN_01769ca8(&local_80);
  puVar7 = (undefined8 *)FUN_0166cefc();
  local_50 = 0x1f;
  local_48 = (long *)0x0;
  local_60 = (long *)&DAT_69bd0c30cda452a3;
  puStack_58 = PTR_s_SkyBox_047e14c8;
  local_70 = 8;
  local_68 = (long *)0x0;
  local_80 = 0x544dab2ba88444e3;
  pcStack_78 = "[SkyBox]";
  FUN_00dfeda8(&local_28,*puVar7,&local_60,&local_80,0);
  plVar8 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
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
    else if ((int)lVar5 == 0) goto LAB_01769c58;
  }
  uVar11 = local_28;
  local_28 = 0;
  *(undefined8 *)(param_1 + 0x38) = uVar11;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 200);
  FUN_01769dd0(&local_60,puVar10);
  FUN_00c4b998(uVar11,2,uVar6,&local_60);
  if (local_60 != (long *)0x0) {
    plVar8 = local_60 + 5;
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
      (**(code **)(*local_60 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_01769c58;
  }
  FUN_00d100a8(*(undefined8 *)(param_1 + 0x30));
  lVar5 = *(long *)(param_1 + 0x38);
  uVar11 = FUN_015f804c(*(undefined8 *)(param_1 + 0x30));
  FUN_00d10690(*(undefined8 *)(lVar5 + 200),0,uVar11);
  FUN_00eb2d18(*(undefined8 *)(*(long *)(param_1 + 0x38) + 200),0,1);
  FUN_00eb3bec(*(undefined8 *)(*(long *)(param_1 + 0x38) + 200),1);
  FUN_00eb6a8c(*(undefined8 *)(*(long *)(param_1 + 0x38) + 200),3);
  FUN_00eb4900(*(undefined8 *)(*(long *)(param_1 + 0x38) + 200),0);
  FUN_00eacd1c(*(undefined8 *)(param_1 + 0x38),0,0,0);
  if (plVar9 != (long *)0x0) {
    plVar8 = plVar9 + 5;
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
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    else if ((int)lVar5 == 0) {
LAB_01769c58:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


