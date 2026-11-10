/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b6f2c; name: FUN_011b6f2c
 */


void FUN_011b6f2c(long param_1,undefined1 param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_40;
  long *local_38;
  
  if ((param_3 & 0xff) != 5) {
    uVar6 = FUN_011b70e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 0x150) + 0x290),
                         param_3);
    if ((uVar6 & 1) != 0) {
      if ((uint)*(byte *)(*(long *)(param_1 + 0x50) + 0x95) == (param_3 & 0xff)) {
        FUN_011b825c(*(undefined8 *)(param_1 + 0x48),param_2);
        return;
      }
      lVar7 = FUN_011b7194(*(undefined8 *)(param_1 + 0x58),param_3);
      if ((lVar7 == 0) || (local_38 = *(long **)(lVar7 + 0x18), local_38 == (long *)0x0)) {
        uVar8 = *(undefined8 *)(param_1 + 0x48);
        local_40 = FUN_011b70b0(*(undefined8 *)(param_1 + 0x58),param_3);
        FUN_011b76e4(uVar8,param_2,&local_40);
      }
      else {
        uVar8 = *(undefined8 *)(param_1 + 0x48);
        plVar1 = local_38 + 5;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        FUN_011b86d8(uVar8,param_2,&local_38,*(undefined1 *)(lVar7 + 2),
                     *(undefined4 *)(lVar7 + 0x20));
        if (local_38 != (long *)0x0) {
          plVar1 = local_38 + 5;
          do {
            lVar7 = *plVar1;
            iVar4 = (int)lVar7 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*local_38 + 0x10))();
          }
          else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
      }
    }
  }
  return;
}


