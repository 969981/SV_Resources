/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d571f4; name: FUN_00d571f4
 */


void FUN_00d571f4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
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
  (**(code **)(*plVar8 + 0x28))(&local_a0,plVar8,*param_3,*(undefined4 *)(param_3 + 1));
  if (local_98 == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (**(code **)(*local_98 + 0x80))();
  }
  (**(code **)PTR_DAT_047e1ce8)(auStack_80,uVar9,local_90,*param_3);
  FUN_00d57400(param_1,*param_2,&local_a0);
  FUN_00d57df4(*param_1,*param_2,auStack_80);
  if ((param_4 & 0xfffffffe) == 2) {
    uVar2 = *(undefined4 *)((long)param_3 + 0xc);
    uVar9 = *param_1;
    uVar7 = FUN_00c75660(uVar2);
    FUN_00d5833c(uVar9,param_2,uVar2,uVar7,param_5);
  }
  if (local_98 != (long *)0x0) {
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
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar6 == 0) goto LAB_00d57388;
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
LAB_00d57388:
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


