/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f6074; name: FUN_017f6074
 */


void FUN_017f6074(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar8 = 0;
  do {
    plVar7 = *(long **)(*(long *)(param_1 + 0x38) + lVar8 * 8 + 0xa0);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      if (((char)plVar7[0xc] != '\0') && ((int)lVar8 == 1)) {
        uVar9 = 0;
        do {
          if ((((((uint)uVar9 & 0xff) < (uint)*(byte *)(param_3 + 0x90)) &&
               (*(long *)(param_3 + 0x60 + uVar9 * 8) != 0)) && (*(long *)(param_1 + 0x210) != 0))
             && ((*(long *)(param_1 + 0x1a0) != 0 &&
                 ((*(byte *)(*(long *)(param_1 + 0x1a0) + 0x1e8) & 1) != 0)))) {
            lVar10 = *(long *)(param_1 + 0x210);
            lVar6 = 0;
            if (*(long *)(param_1 + 0x1a0) != 0) {
              if ((*(byte *)(*(long *)(param_1 + 0x1a0) + 0x1e8) & 1) == 0) {
                lVar6 = 0;
              }
              else {
                puVar5 = (uint *)(**(code **)(**(long **)(param_1 + 0x1a0) + 0x70))();
                lVar6 = (long)puVar5 + (ulong)*puVar5;
              }
            }
            *(long *)(lVar10 + 0x30) = lVar6;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(byte *)(plVar7 + 0xc));
      }
      do {
        lVar6 = *plVar1;
        iVar4 = (int)lVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    lVar8 = lVar8 + 1;
    if (lVar8 == 5) {
      return;
    }
  } while( true );
}


