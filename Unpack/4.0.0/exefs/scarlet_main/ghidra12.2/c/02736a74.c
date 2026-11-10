/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02736a74; name: FUN_02736a74
 */


void FUN_02736a74(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *local_78;
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_60;
  long *local_58;
  undefined1 auStack_50 [24];
  long *local_38;
  undefined8 local_18;
  
  uVar8 = *(undefined8 *)(param_1 + 0x388);
  local_70 = 0xc7d3d1ccc2d8f15b;
  puStack_68 = PTR_s_GpuInstancingCulling_047e10a8;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  FUN_01464dd0(auStack_50,&local_70,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_18,uVar8,auStack_50);
  plVar6 = *(long **)(param_1 + 0x448);
  *(undefined8 *)(param_1 + 0x448) = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar7 = *plVar1;
      iVar4 = (int)lVar7 + -1;
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
    else if ((int)lVar7 == 0) goto LAB_02736c20;
  }
  uVar8 = local_18;
  local_18 = 0;
  *(undefined8 *)(param_1 + 0x448) = uVar8;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  uVar8 = *(undefined8 *)(param_1 + 0x448);
  uVar5 = FUN_01464df0(2,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar8,uVar5);
  FUN_01569c64(*(undefined8 *)(param_1 + 0x448),0x28);
  FUN_0151a864(&local_78,(undefined8 *)(param_1 + 0x448),0x20);
  if (local_78 != (long *)0x0) {
    plVar6 = local_78 + 5;
    do {
      lVar7 = *plVar6;
      iVar4 = (int)lVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
LAB_02736c20:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  uVar8 = DAT_0485a0e0;
  lVar7 = *(long *)(param_1 + 0x448);
  (**(code **)(*DAT_0485a020 + 0x100))(auStack_50,DAT_0485a020,*(undefined8 *)(param_1 + 0x380));
  FUN_0151b210(uVar8,lVar7 + 0x38,auStack_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


