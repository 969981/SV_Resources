/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02bc72d8; name: FUN_02bc72d8
 */


void FUN_02bc72d8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                 undefined8 param_5)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  char local_a8 [8];
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [64];
  
  (**(code **)PTR_DAT_047e1cd8)(auStack_80);
  (**(code **)PTR_DAT_047e1ce0)(auStack_80,param_2[2]);
  if (3 < *(uint *)(param_3 + 2)) {
                    /* WARNING: Subroutine does not return */
    FUN_02716170();
  }
  plVar8 = *(long **)(param_2[1] + (ulong)*(uint *)(param_3 + 2) * 8);
  (**(code **)(*plVar8 + 0x30))(local_a8,plVar8,*param_3,*(undefined4 *)(param_3 + 1));
  if (local_a8[0] == '\0') {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (local_98 == (long *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)(*local_98 + 0x80))();
    }
    (**(code **)PTR_DAT_047e1ce8)(auStack_80,uVar9,local_90,*param_3);
    FUN_00d57400(&local_c8,*param_2,&local_a0);
    FUN_00d57df4(local_c8,*param_2,auStack_80);
    uVar9 = local_c8;
    if ((param_4 & 0xfffffffe) == 2) {
      uVar2 = *(undefined4 *)((long)param_3 + 0xc);
      uVar7 = FUN_00c75660(uVar2);
      FUN_00d5833c(uVar9,param_2,uVar2,uVar7,param_5);
    }
    uVar9 = local_c8;
    local_c8 = 0;
    param_1[2] = local_b8;
    param_1[3] = uStack_b0;
    *param_1 = uVar9;
    param_1[1] = uStack_c0;
    FUN_0275320c(&local_c8);
    if (local_a8[0] == '\0') {
      return;
    }
    if (local_98 == (long *)0x0) {
      return;
    }
    (**(code **)(*local_98 + 0x38))(local_98,&local_a0);
    plVar8 = local_98;
    local_a0 = 0;
    local_98 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 5;
      do {
        lVar6 = *plVar1;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      else if ((int)lVar6 == 0) goto LAB_02bc7528;
    }
    local_90 = 0xffffffffffffffff;
    uStack_88 = 0;
    if (local_98 != (long *)0x0) {
      plVar8 = local_98 + 5;
      do {
        lVar6 = *plVar8;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_98 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
LAB_02bc7528:
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


