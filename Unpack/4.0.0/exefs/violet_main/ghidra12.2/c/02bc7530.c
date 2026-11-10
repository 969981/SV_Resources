/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02bc7530; name: FUN_02bc7530
 */


void FUN_02bc7530(undefined8 *param_1,undefined8 *param_2,long param_3,undefined4 param_4)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  char local_f8 [8];
  undefined8 local_f0;
  long *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [128];
  
  (**(code **)PTR_DAT_047e1d00)(auStack_d0);
  (**(code **)PTR_DAT_047e1d08)(auStack_d0,param_2[2]);
  FUN_0117f060(auStack_d0,param_3);
  uVar8 = (ulong)*(uint *)(param_3 + 0x24);
  if (*(uint *)(param_3 + 0x24) == 0) {
    uVar8 = (**(code **)PTR_DAT_047e1d38)(auStack_d0);
  }
  lVar9 = param_2[1];
  uVar2 = *(uint *)(param_3 + 0x4c);
  uVar6 = (**(code **)PTR_DAT_047e1d40)(auStack_d0);
  if (3 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_02716170();
  }
  plVar7 = *(long **)(lVar9 + (ulong)uVar2 * 8);
  (**(code **)(*plVar7 + 0x30))(local_f8,plVar7,uVar6,uVar8);
  if (local_f8[0] == '\0') {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (local_e8 == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(*local_e8 + 0x80))();
    }
    (**(code **)PTR_DAT_047e1d28)(auStack_d0,uVar6,local_e0);
    FUN_00d57400(&local_118,*param_2,&local_f0);
    FUN_0117f334(local_118,*param_2,auStack_d0,param_4,0);
    if ((*(byte *)(param_3 + 0x48) & 0x50) != 0) {
      FUN_0117f914(local_118,param_2);
    }
    uVar6 = local_118;
    local_118 = 0;
    param_1[2] = local_108;
    param_1[3] = uStack_100;
    *param_1 = uVar6;
    param_1[1] = uStack_110;
    FUN_0275320c(&local_118);
    if (local_f8[0] == '\0') {
      return;
    }
    if (local_e8 == (long *)0x0) {
      return;
    }
    (**(code **)(*local_e8 + 0x38))(local_e8,&local_f0);
    plVar7 = local_e8;
    local_f0 = 0;
    local_e8 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
      do {
        lVar9 = *plVar1;
        iVar5 = (int)lVar9 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      else if ((int)lVar9 == 0) goto LAB_02bc77b0;
    }
    local_e0 = 0xffffffffffffffff;
    uStack_d8 = 0;
    if (local_e8 != (long *)0x0) {
      plVar7 = local_e8 + 5;
      do {
        lVar9 = *plVar7;
        iVar5 = (int)lVar9 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_e8 + 0x10))();
      }
      else if ((int)lVar9 == 0) {
LAB_02bc77b0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


