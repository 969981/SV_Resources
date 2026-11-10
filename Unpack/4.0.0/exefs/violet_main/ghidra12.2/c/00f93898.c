/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f93898; name: FUN_00f93898
 */


void FUN_00f93898(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  long *local_90;
  long *local_88;
  undefined *local_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puVar7 = (undefined8 *)FUN_00f93c28(*(undefined8 *)(param_1 + 0x10));
  plVar12 = (long *)*puVar7;
  if (plVar12 != (long *)0x0) {
    plVar9 = plVar12 + 5;
    do {
      lVar11 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = (int)lVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar11 == -1) goto LAB_00f93bd8;
  }
  FUN_00f93c34(&local_88);
  FUN_00f9c014(param_1 + 0x448,0,&local_88,0,0);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  uVar8 = FUN_00f9a284(*(undefined8 *)(param_1 + 0x450),0);
  puVar6 = PTR_s_BlendBufferComposit_047e12b8;
  FUN_00f9a2cc(&local_88,plVar12,PTR_s_BlendBufferComposit_047e12b8,uVar8);
  plVar9 = local_68;
  if (*(char *)(param_1 + 0x488) == '\0') {
    if ((char)local_88 != '\0') {
      *(undefined **)(param_1 + 0x490) = local_80;
      *(undefined8 *)(param_1 + 0x498) = local_78;
      *(long **)(param_1 + 0x4a0) = local_70;
      local_68 = (long *)0x0;
      *(long **)(param_1 + 0x4a8) = plVar9;
      *(undefined1 *)(param_1 + 0x488) = 1;
      goto LAB_00f9397c;
    }
  }
  else {
    if ((char)local_88 == '\0') {
      if (*(long **)(param_1 + 0x4a8) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x4a8) + 0x20))();
      }
      *(undefined1 *)(param_1 + 0x488) = 0;
    }
    else {
      *(undefined **)(param_1 + 0x490) = local_80;
      *(undefined8 *)(param_1 + 0x498) = local_78;
      plVar9 = *(long **)(param_1 + 0x4a8);
      *(undefined8 *)(param_1 + 0x4a8) = 0;
      *(long **)(param_1 + 0x4a0) = local_70;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))();
      }
      plVar9 = local_68;
      local_68 = (long *)0x0;
      *(long **)(param_1 + 0x4a8) = plVar9;
    }
LAB_00f9397c:
    if (((char)local_88 != '\0') && (local_68 != (long *)0x0)) {
      (**(code **)(*local_68 + 0x20))();
    }
  }
  local_88 = (long *)0xa51a3ff7b5756746;
  local_80 = puVar6;
  local_78 = 0x1f;
  local_70 = (long *)0x0;
  FUN_00fa0b68(*(undefined8 *)(param_1 + 0x18),&local_88,(undefined1 *)(param_1 + 0x488));
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  local_88 = (long *)0x3c0;
  local_80 = (undefined *)0x21c;
  local_68 = (long *)0x1;
  uStack_60 = 2;
  local_48 = 5;
  uStack_40 = 0x200000008;
  local_78 = 0;
  local_70 = (long *)0x0;
  local_58 = 0x20000003f;
  uStack_50 = 0x400000003;
  plVar9 = (long *)FUN_00f93c28(*(undefined8 *)(param_1 + 0x10));
  local_a8 = *plVar9;
  lVar10 = FUN_00cf3764(auStack_38,*(undefined8 *)(local_a8 + 8),&local_a8);
  lVar11 = 0;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == -1) {
LAB_00f93bd8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar11 = lVar10;
  }
  FUN_0117e220(lVar11,&local_88,1,1,0);
  plVar9 = *(long **)(param_1 + 0x440);
  *(undefined8 *)(param_1 + 0x440) = 0;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 5;
    do {
      lVar11 = *plVar2;
      iVar3 = (int)lVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_00f93c00;
  }
  *(long *)(param_1 + 0x440) = lVar10;
  local_a8 = 0x6b21fb462691e0eb;
  puStack_a0 = PTR_s_RefractionTarget_047e12c0;
  local_98 = 0x1f;
  local_90 = (long *)0x0;
  FUN_01344120(*(undefined8 *)(param_1 + 0x18),&local_a8,param_1 + 0x440);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (plVar12 != (long *)0x0) {
    plVar9 = plVar12 + 5;
    do {
      lVar11 = *plVar9;
      iVar3 = (int)lVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar11 == 0) {
LAB_00f93c00:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


