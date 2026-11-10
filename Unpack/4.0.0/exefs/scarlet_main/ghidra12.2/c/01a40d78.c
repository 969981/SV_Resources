/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a40d78; name: FUN_01a40d78
 */


void FUN_01a40d78(long param_1,undefined8 param_2,undefined8 *param_3)

{
  short sVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  uVar5 = (**(code **)(*(long *)*param_3 + 0x2a8))();
  sVar1 = *(short *)(param_3 + 1);
  FUN_02939f74(*(undefined8 *)(param_1 + 0x38),*param_3,sVar1);
  if (sVar1 == 0) {
    plVar9 = (long *)*param_3;
    lVar10 = *(long *)(param_1 + 0x20);
    lVar12 = *(long *)(lVar10 + 0x20);
    uVar6 = (**(code **)(*plVar9 + 0x98))(plVar9);
    plVar7 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x30),uVar6);
    (**(code **)(*plVar7 + 0x4d8))(plVar7,0xf);
    uVar11 = *(undefined8 *)(lVar10 + 0x18);
    uVar6 = (**(code **)(*plVar9 + 0x98))(plVar9);
    FUN_0129aff0(uVar11,0x1e,uVar6,0xf);
  }
  FUN_019a3d50(*(undefined8 *)(param_1 + 0x20),*param_3,*(undefined2 *)(param_3 + 1));
  FUN_01978990(*(undefined8 *)(param_1 + 0x20),*param_3,sVar1 != 0);
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = (**(code **)(*(long *)*param_3 + 0x98))();
  FUN_01460728(uVar11,uVar6);
  if (sVar1 != 0) {
    lVar10 = *(long *)(param_1 + 0x20);
    uVar6 = (**(code **)(*(long *)*param_3 + 0x98))();
    lVar12 = *(long *)(lVar10 + 0x20);
    uVar11 = FUN_01021c94(*(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x30),uVar6);
    FUN_0124f4d0(*(undefined8 *)(lVar12 + 0x18),*(undefined8 *)(lVar12 + 8),uVar11);
    FUN_0129aff0(*(undefined8 *)(lVar10 + 0x18),0x61,uVar6);
  }
  FUN_0293a238(*(undefined8 *)(param_1 + 0x38),*param_3);
  if ((*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0xcc) != 0) &&
     ((uint)*(ushort *)(param_3 + 1) != (uVar5 & 0xffff))) {
    plVar7 = *(long **)(*(long *)(param_1 + 8) + 400);
    if (plVar7 != (long *)0x0) {
      plVar9 = plVar7 + 5;
      do {
        lVar10 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = (int)lVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar10 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    uVar8 = (**(code **)(*plVar7 + 0x28))(plVar7,0x50fc5612cd4b7875);
    if (plVar7 != (long *)0x0) {
      plVar9 = plVar7 + 5;
      do {
        lVar10 = *plVar9;
        iVar4 = (int)lVar10 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if ((uVar8 & 1) != 0) {
      uVar11 = *(undefined8 *)(param_1 + 0x38);
      uVar6 = (**(code **)(*(long *)*param_3 + 0x98))();
      FUN_0292f9d4(uVar11,uVar6);
    }
  }
  if (*(char *)((long)param_3 + 10) != '\0') {
    FUN_019a3de0(*(undefined8 *)(param_1 + 0x20),*param_3,uVar5);
    FUN_01248470(*(undefined8 *)(param_1 + 0x20),*param_3,8);
  }
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = (**(code **)(*(long *)*param_3 + 0x98))();
  FUN_02e21b68(uVar11,uVar6);
  return;
}


