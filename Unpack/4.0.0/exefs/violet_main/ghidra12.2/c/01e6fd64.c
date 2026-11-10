/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e6fd64; name: FUN_01e6fd64
 */


undefined8 FUN_01e6fd64(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long *plVar10;
  byte bVar11;
  
  cVar5 = FUN_01e70e7c(*param_1);
  if (cVar5 != '\0') {
    plVar10 = (long *)*param_2;
    if ((char)plVar10[0x12] == '\0') {
      FUN_01e70e7c(*param_1);
    }
    else {
      bVar7 = 0;
      bVar11 = 0;
      do {
        plVar10 = (long *)(**(code **)(*plVar10 + 0x60))(plVar10,bVar7);
        if (plVar10 != (long *)0x0) {
          plVar1 = plVar10 + 5;
          do {
            lVar4 = *plVar1;
            cVar5 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar2) {
              *(int *)plVar1 = (int)lVar4 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((int)lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
        }
        uVar8 = FUN_00cf44f4(plVar10[0xe]);
        uVar9 = FUN_00cf41a8(plVar10[0xe]);
        bVar6 = FUN_01c2fd6c(uVar8,uVar9);
        if (plVar10 != (long *)0x0) {
          plVar1 = plVar10 + 5;
          do {
            lVar4 = *plVar1;
            iVar3 = (int)lVar4 + -1;
            cVar5 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar2) {
              *(int *)plVar1 = iVar3;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar3 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
          else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        plVar10 = (long *)*param_2;
        bVar11 = bVar11 + (bVar6 & 1);
        bVar7 = bVar7 + 1;
      } while (bVar7 < *(byte *)(plVar10 + 0x12));
      bVar7 = FUN_01e70e7c(*param_1);
      if (bVar7 < bVar11) {
        return 1;
      }
    }
  }
  return 0;
}


