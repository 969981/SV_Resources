/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dce5bc; name: FUN_01dce5bc
 */


undefined8 FUN_01dce5bc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *local_18;
  
  uVar5 = FUN_01195974();
  iVar4 = *(int *)(param_1 + 0x108);
  uVar9 = uVar5 >> 0x20;
  if (iVar4 == 0) {
    lVar6 = FUN_01195854();
    uVar8 = (uint)*(byte *)(lVar6 + 0x570);
    iVar7 = 0;
    iVar4 = *(int *)(param_1 + 0x108);
  }
  else {
    iVar7 = 1;
    if (iVar4 != 1) {
      if (iVar4 != 2) {
        uVar8 = 0xffffffff;
        iVar7 = 3;
        goto LAB_01dce5f4;
      }
      iVar7 = 2;
    }
    uVar8 = *(uint *)(param_1 + 0x2a4);
  }
LAB_01dce5f4:
  if (iVar4 == 0) {
    uVar9 = (ulong)(uint)((int)uVar5 + (int)(uVar5 >> 0x20) * 6);
  }
  else if ((iVar4 != 1) && (iVar4 != 2)) {
    uVar9 = 1;
  }
  uVar10 = 0;
  if ((iVar7 - 1U < 2) && (uVar8 == 0)) {
    FUN_014e36f0(param_1,0,uVar9);
    FUN_0174fbdc(&local_18);
    iVar4 = FUN_014c0588(local_18);
    if (local_18 != (long *)0x0) {
      plVar1 = local_18 + 5;
      do {
        lVar6 = *plVar1;
        iVar7 = (int)lVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_18 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if ((int)uVar9 == iVar4 + -1) {
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
      FUN_01dc43f8(*(undefined8 *)(param_1 + 0x1a8),uVar9,1,3,0);
    }
  }
  return uVar10;
}


