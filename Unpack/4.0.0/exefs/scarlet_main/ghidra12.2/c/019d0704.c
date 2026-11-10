/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019d0704; name: FUN_019d0704
 */


void FUN_019d0704(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  long local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  undefined8 local_18;
  
  FUN_00d1a22c(param_1,0);
  *param_1 = &PTR_FUN_0455f130;
  param_1[4] = &PTR_LAB_0455f270;
  param_1[5] = &DAT_0455f398;
  param_1[6] = &PTR_LAB_0455f3f0;
  param_1[7] = &PTR_LAB_0455f418;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = param_2;
  *(undefined4 *)((long)param_1 + 0x13c) = param_3;
  FUN_00c6a514(param_1 + 7,0x82);
  puVar7 = (undefined8 *)FUN_0166cefc();
  local_90 = 0x1f;
  local_88 = (long *)0x0;
  local_50 = -0x71f42ad07defce5f;
  pcStack_48 = "Capture";
  local_a0 = 0x57a6ae8fb57f28b1;
  puStack_98 = PTR_s_PfxTonemap_047d8e50;
  local_40 = 7;
  local_38 = (long *)0x0;
  FUN_00dfeda8(&local_18,*puVar7,&local_a0,&local_50,0);
  plVar8 = (long *)param_1[0x24];
  param_1[0x24] = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar10 = *plVar1;
      iVar5 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_019d09ec;
  }
  uVar6 = local_18;
  local_18 = 0;
  param_1[0x24] = uVar6;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  *(undefined4 *)(param_1[0x24] + 0xf0) = 0x7fffffff;
  local_90 = 0;
  local_88 = (long *)0x0;
  local_80 = 1;
  uStack_78 = 2;
  local_6c = 0x300000002;
  local_64 = 0x500000004;
  local_5c = 0;
  local_a0 = (long)*(int *)(param_1 + 0x27);
  puStack_98 = (undefined *)(long)*(int *)((long)param_1 + 0x13c);
  local_58 = 0x200000008;
  local_70 = 0x25;
  plVar8 = (long *)FUN_00e31554();
  local_50 = *plVar8;
  lVar9 = FUN_00cf3764(&local_18,*(undefined8 *)(local_50 + 8),&local_50);
  lVar10 = 0;
  if (lVar9 != 0) {
    piVar2 = (int *)(lVar9 + 0x28);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar10 = lVar9;
  }
  FUN_0117e220(lVar10,&local_a0,1,1,0);
  plVar8 = (long *)param_1[0x25];
  param_1[0x25] = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar10 = *plVar1;
      iVar5 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_019d09ec;
  }
  param_1[0x25] = lVar9;
  puVar7 = (undefined8 *)FUN_00f351bc();
  puVar7 = (undefined8 *)FUN_00e514cc(*puVar7);
  local_50 = -0x24ad04fe93314ae;
  pcStack_48 = PTR_s_RT_MainColorLDR_047d8e48;
  local_40 = 0x1f;
  local_38 = (long *)0x0;
  FUN_00fff044(&local_18,*puVar7,&local_50);
  plVar8 = (long *)param_1[0x26];
  param_1[0x26] = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar10 = *plVar1;
      iVar5 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
LAB_019d09ec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  uVar6 = local_18;
  local_18 = 0;
  param_1[0x26] = uVar6;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


