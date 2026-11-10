/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02695f60; name: FUN_02695f60
 */


void FUN_02695f60(long param_1,int *param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  long local_48;
  
  lVar5 = *(long *)(param_1 + 0x4a8);
  if (*(int *)(lVar5 + 0x1c) == 0) {
    iVar7 = *(int *)(lVar5 + 0xc);
    iVar8 = *(int *)(lVar5 + 0x10);
    uVar6 = *param_2 + iVar7 * param_2[1];
  }
  else {
    iVar7 = *(int *)(lVar5 + 0xc);
    iVar8 = *(int *)(lVar5 + 0x10);
    uVar6 = param_2[1] + iVar8 * *param_2;
  }
  if (((int)uVar6 < iVar7 * iVar8) &&
     (lVar5 = *(long *)(*(long *)(lVar5 + 0x40) + 0x20),
     **(char **)(lVar5 + (ulong)uVar6 * 0x28 + 8) != '\0')) {
    lVar5 = lVar5 + (ulong)uVar6 * 0x28;
    *(ulong *)(lVar5 + 0x20) = *(ulong *)(lVar5 + 0x20) & 0xfffffffffffffffe | param_3 & 1;
  }
  FUN_014a22d4(&local_90,param_1);
  plVar9 = local_78;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x18))(local_78);
  }
  local_70 = &local_48;
  local_48 = 0;
  local_50 = plVar9;
  uStack_68 = local_90;
  local_60 = uStack_88;
  local_58 = (long *)local_80;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  FUN_0116c820(param_1,&local_70,0);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  lVar5 = local_48;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  plVar9 = *(long **)(param_1 + 200);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_70 = *(long **)(lVar5 + 0x88);
  uStack_68 = *(undefined8 *)(lVar5 + 0x90);
  local_60 = *(undefined8 *)(lVar5 + 0x98);
  local_58 = *(long **)(lVar5 + 0xa0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  (**(code **)(*plVar9 + 0x70))(plVar9,&local_70,(uint)param_3 & 1);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  plVar1 = plVar9 + 5;
  do {
    lVar5 = *plVar1;
    iVar7 = (int)lVar5 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
}


