/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ca7394; name: FUN_00ca7394
 */


void FUN_00ca7394(long param_1,undefined4 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long local_78;
  long local_70;
  long local_68;
  long *plStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long *local_40;
  undefined8 uStack_38;
  
  plStack_60 = *(long **)(param_1 + 0x38);
  local_78 = 0;
  local_70 = 0;
  local_58 = 0x1fffffffffffffff;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = (long *)0x0;
  uStack_38 = 0;
  local_68 = 0;
  FUN_00ca74b0(param_1,param_2,&local_78);
  if (local_40 != (long *)0x0) {
    plVar1 = local_40 + 5;
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
      (**(code **)(*local_40 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  plVar1 = plStack_60;
  lVar5 = local_78;
  if (local_78 != 0) {
    local_70 = local_78;
    lVar8 = local_68 - local_78;
    uVar6 = (**(code **)(*plStack_60 + 0xf8))(plStack_60);
    if (((uVar6 & 1) != 0) && (lVar7 = FUN_00c4e600(), 0 < *(int *)(lVar7 + 0x12c8))) {
      FUN_00c48fe8(plVar1,lVar5,lVar8,4);
      return;
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar8,4);
  }
  return;
}


