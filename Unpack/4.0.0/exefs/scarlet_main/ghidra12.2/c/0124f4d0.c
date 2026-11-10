/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124f4d0; name: FUN_0124f4d0
 */


void FUN_0124f4d0(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined1 local_44 [4];
  
  uVar6 = (**(code **)(*param_3 + 0x2a8))(param_3);
  plVar13 = *(long **)(param_2 + 400);
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 5;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar9 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  lVar9 = (**(code **)(*plVar13 + 0x30))(plVar13,uVar6);
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 5;
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
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  uVar11 = 1;
  for (plVar13 = &DAT_045f14e0; plVar13[-2] != lVar9; plVar13 = plVar13 + 4) {
    if (uVar11 == 0xd3) {
      return;
    }
    if (*plVar13 == lVar9) goto LAB_0124f5a4;
    uVar11 = uVar11 + 2;
  }
  uVar11 = uVar11 - 1;
LAB_0124f5a4:
  if (((uVar11 & 0xffffffff) != 0xd2) &&
     (lVar9 = (**(code **)((uVar11 & 0xffffffff) * 0x10 + 0x45f14d8))(local_44), lVar9 != 0)) {
    uVar7 = (**(code **)(*param_3 + 0xe0))(param_3);
    uVar8 = (**(code **)(*param_3 + 0x98))(param_3);
    uVar2 = *(undefined4 *)(param_1 + 0x80);
    uVar12 = *(undefined8 *)(*(long *)(param_1 + 8) + 0xd0);
    lVar10 = FUN_0129baac(uVar12,0xffffffff);
    if (lVar10 != 0) {
      *(undefined4 *)(lVar10 + 0x12) = 0xee00ee;
      memset((void *)(lVar10 + 0x18),0,0x58);
      *(undefined1 *)(lVar10 + 0x28) = 5;
      *(uint *)(lVar10 + 0x2c) = uVar7 & 0xffff | 0x1000000;
      *(long *)(lVar10 + 0x20) = lVar9;
      *(undefined1 *)(lVar10 + 0x3e) = local_44[0];
      *(short *)(lVar10 + 0x30) = (short)uVar6;
      *(undefined4 *)(lVar10 + 0x34) = uVar8;
      *(undefined4 *)(lVar10 + 0x38) = uVar8;
      *(short *)(lVar10 + 0x3c) = (short)uVar2;
      *(undefined1 *)(lVar10 + 0x44) = 1;
      FUN_0129b6cc(uVar12,lVar10);
    }
  }
  return;
}


