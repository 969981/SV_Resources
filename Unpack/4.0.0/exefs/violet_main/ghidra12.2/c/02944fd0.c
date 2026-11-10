/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02944fd0; name: FUN_02944fd0
 */


long FUN_02944fd0(long param_1,long param_2,long *param_3,uint param_4)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined1 local_44 [4];
  
  if ((param_4 & 0xffff) != 0) {
    plVar12 = *(long **)(param_2 + 400);
    if (plVar12 != (long *)0x0) {
      plVar1 = plVar12 + 5;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    lVar8 = (**(code **)(*plVar12 + 0x30))(plVar12,param_4);
    if (plVar12 != (long *)0x0) {
      plVar1 = plVar12 + 5;
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
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
      else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    uVar10 = 1;
    for (plVar12 = &DAT_045f14e0; plVar12[-2] != lVar8; plVar12 = plVar12 + 4) {
      if (uVar10 == 0xd3) {
        return 0;
      }
      if (*plVar12 == lVar8) goto LAB_02945098;
      uVar10 = uVar10 + 2;
    }
    uVar10 = uVar10 - 1;
LAB_02945098:
    if (((uVar10 & 0xffffffff) != 0xd2) &&
       (lVar8 = (**(code **)((uVar10 & 0xffffffff) * 0x10 + 0x45f14d8))(local_44), lVar8 != 0)) {
      uVar6 = (**(code **)(*param_3 + 0xe0))(param_3);
      uVar7 = (**(code **)(*param_3 + 0x98))(param_3);
      uVar2 = *(undefined4 *)(param_1 + 0x80);
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 8) + 0xd0);
      lVar9 = FUN_0129baac(uVar11,0xffffffff);
      if (lVar9 == 0) {
        return 0;
      }
      *(undefined4 *)(lVar9 + 0x12) = 0xee00ee;
      memset((void *)(lVar9 + 0x18),0,0x58);
      *(short *)(lVar9 + 0x30) = (short)param_4;
      *(uint *)(lVar9 + 0x2c) = uVar6 & 0xffff | 0x1000000;
      *(undefined1 *)(lVar9 + 0x28) = 5;
      *(long *)(lVar9 + 0x20) = lVar8;
      *(undefined1 *)(lVar9 + 0x3e) = local_44[0];
      *(undefined4 *)(lVar9 + 0x34) = uVar7;
      *(undefined4 *)(lVar9 + 0x38) = uVar7;
      *(short *)(lVar9 + 0x3c) = (short)uVar2;
      *(undefined1 *)(lVar9 + 0x44) = 1;
      FUN_0129b6cc(uVar11,lVar9);
      FUN_02945204(lVar9);
      *(undefined4 *)(lVar9 + 0x68) = 1;
      return lVar9;
    }
  }
  return 0;
}


