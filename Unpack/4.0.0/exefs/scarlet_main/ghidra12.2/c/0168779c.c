/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0168779c; name: FUN_0168779c
 */


void FUN_0168779c(long param_1,long param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  undefined4 local_34;
  
  puVar6 = PTR_DAT_047e1970;
  (**(code **)PTR_DAT_047e1970)(*(undefined8 *)(param_2 + 0x10),0x12,&local_34);
  *(undefined4 *)(param_1 + 0x108) = local_34;
  (**(code **)puVar6)(*(undefined8 *)(param_2 + 0x10),0x10,&local_38);
  FUN_01687930(&local_58,*(undefined8 *)(param_2 + 8),0,local_38 * param_3);
  plVar7 = *(long **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = local_58;
  *(undefined8 *)(param_1 + 0x98) = 0;
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
    else if ((int)lVar5 == 0) goto LAB_016878e0;
  }
  *(long **)(param_1 + 0x98) = local_50;
  *(undefined8 *)(param_1 + 0xa0) = local_48;
  *(undefined8 *)(param_1 + 0xa8) = local_40;
  local_58 = 0;
  local_50 = (long *)0x0;
  local_48 = 0xffffffffffffffff;
  local_40 = 0;
  FUN_016879bc(&local_58);
  if (local_50 != (long *)0x0) {
    plVar7 = local_50 + 5;
    do {
      lVar5 = *plVar7;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
LAB_016878e0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (*(long **)(param_1 + 0x98) == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(**(long **)(param_1 + 0x98) + 0x80))();
  }
  (**(code **)PTR_DAT_047e1e38)(param_1 + 0xb0,uVar8,*(undefined8 *)(param_1 + 0xa0),param_3);
  FUN_01687960(param_1 + 0x110,param_1 + 0xb0);
  return;
}


