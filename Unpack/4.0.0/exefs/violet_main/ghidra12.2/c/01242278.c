/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01242278; name: FUN_01242278
 */


void FUN_01242278(long param_1,long param_2,undefined1 *param_3,undefined1 *param_4,long param_5,
                 long param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long *plVar11;
  ulong uVar12;
  long *local_68;
  
  *param_3 = 0;
  *param_4 = 0;
  bVar6 = FUN_00f7e274(param_5);
  if (bVar6 != 0) {
    uVar12 = 0;
    do {
      if (((uint)uVar12 & 0xff) < (uint)*(byte *)(param_5 + 0x30)) {
        plVar11 = *(long **)(param_5 + uVar12 * 8);
      }
      else {
        plVar11 = (long *)0x0;
      }
      uVar9 = (**(code **)(*plVar11 + 0x208))(plVar11);
      if (((((uVar9 & 1) != 0) && (piVar1 = (int *)(param_6 + uVar12 * 0x10), *piVar1 != 0)) &&
          (bVar7 = (**(code **)(*plVar11 + 0x118))(plVar11), bVar7 < 100)) &&
         (iVar2 = *piVar1, iVar2 != 0)) {
        puVar10 = param_4;
        if (*(char *)((long)piVar1 + 0xd) == '\0') {
          uVar8 = (**(code **)(*plVar11 + 0x98))(plVar11);
          FUN_01241c74(*(undefined8 *)(param_1 + 0x20),uVar8,iVar2);
          *(int *)(param_2 + uVar12 * 0x10) = *(int *)(param_2 + uVar12 * 0x10) + iVar2;
          puVar10 = param_3;
        }
        *puVar10 = 1;
        FUN_0124e480(param_1);
        FUN_01242424(&local_68);
        (**(code **)(*local_68 + 0x48))(local_68,0xc,iVar2);
        if (local_68 != (long *)0x0) {
          plVar11 = local_68 + 5;
          do {
            lVar5 = *plVar11;
            iVar2 = (int)lVar5 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = iVar2;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 == 0) {
            (**(code **)(*local_68 + 0x10))();
          }
          else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != bVar6);
  }
  return;
}


