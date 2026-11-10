/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a750ac; name: FUN_00a750ac
 */


void FUN_00a750ac(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long *local_48;
  
  if (*(char *)(*(long *)(param_1 + 0x30) + 0x2af) != '\0') {
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x2c8);
    uVar6 = FUN_01195974();
    uVar3 = *(uint *)(*(long *)(param_1 + 0x30) + 0x108);
    if (uVar3 < 3) {
      uVar10 = uVar6 >> 0x20;
      FUN_01dc0268(&local_48);
      plVar1 = local_48;
      iVar9 = *(int *)(*(long *)(param_1 + 0x30) + 0x108);
      if (iVar9 == 0) {
        lVar7 = FUN_01195854();
        uVar8 = (uint)*(byte *)(lVar7 + 0x570);
        iVar9 = *(int *)(*(long *)(param_1 + 0x30) + 0x108);
      }
      else if (iVar9 - 1U < 2) {
        uVar8 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2a4);
      }
      else {
        uVar8 = 0xffffffff;
      }
      if (iVar9 == 0) {
        uVar10 = (ulong)(uint)((int)uVar6 + (int)(uVar6 >> 0x20) * 6);
      }
      else if ((iVar9 != 1) && (iVar9 != 2)) {
        uVar10 = 1;
      }
      uVar6 = FUN_01dc7a44(plVar1,uVar3,uVar8,uVar10,uVar2);
      if (local_48 != (long *)0x0) {
        plVar1 = local_48 + 5;
        do {
          lVar7 = *plVar1;
          iVar9 = (int)lVar7 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
        else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      if ((uVar6 & 1) != 0) {
        FUN_01dd06cc(*(undefined8 *)(param_1 + 0x30),0);
      }
      FUN_014e799c(*(undefined8 *)(param_1 + 0x30),0xffffffff);
      lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 0x1b8);
      if (lVar7 != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x170) = 2;
        *(undefined4 *)(lVar7 + 0x30) = 2;
      }
    }
  }
  return;
}


