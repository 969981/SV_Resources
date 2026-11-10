/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e70c68; name: FUN_01e70c68
 */


void FUN_01e70c68(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  byte bVar8;
  long *local_18;
  
  if (*param_1 != 0) {
    uVar5 = FUN_01e70e58();
    plVar6 = (long *)*param_2;
    if ((uVar5 & 1) == 0) {
      if ((char)plVar6[0x12] != '\0') {
        bVar8 = 0;
        do {
          plVar6 = (long *)(**(code **)(*plVar6 + 0x60))(plVar6,bVar8);
          if (plVar6 != (long *)0x0) {
            plVar7 = plVar6 + 5;
            do {
              lVar4 = *plVar7;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar2) {
                *(int *)plVar7 = (int)lVar4 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if ((int)lVar4 == -1) goto LAB_01e70e30;
          }
          uVar5 = FUN_00cf4cfc(plVar6[0xe]);
          if (((uVar5 & 1) == 0) && ((*(ushort *)(*(long *)(plVar6[0xe] + 0x10) + 4) >> 2 & 1) == 0)
             ) {
            FUN_0100bad4(plVar6);
          }
          plVar7 = plVar6 + 5;
          do {
            lVar4 = *plVar7;
            iVar3 = (int)lVar4 + -1;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar2) {
              *(int *)plVar7 = iVar3;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (iVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
          else if ((int)lVar4 == 0) goto LAB_01e70e08;
          plVar6 = (long *)*param_2;
          bVar8 = bVar8 + 1;
        } while (bVar8 < *(byte *)(plVar6 + 0x12));
      }
    }
    else if ((char)plVar6[0x12] != '\0') {
      bVar8 = 0;
      do {
        plVar7 = (long *)(**(code **)(*plVar6 + 0x60))(plVar6,bVar8);
        plVar6 = plVar7 + 5;
        do {
          lVar4 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *(int *)plVar6 = (int)lVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        local_18 = plVar7;
        if ((int)lVar4 == -1) {
LAB_01e70e30:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        uVar5 = FUN_00cf4cfc(plVar7[0xe]);
        if (((uVar5 & 1) == 0) && ((*(ushort *)(*(long *)(plVar7[0xe] + 0x10) + 4) >> 2 & 1) == 0))
        {
          FUN_01d1d4c4(&local_18);
        }
        if (local_18 != (long *)0x0) {
          plVar6 = local_18 + 5;
          do {
            lVar4 = *plVar6;
            iVar3 = (int)lVar4 + -1;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *(int *)plVar6 = iVar3;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (iVar3 == 0) {
            (**(code **)(*local_18 + 0x10))();
          }
          else if ((int)lVar4 == 0) {
LAB_01e70e08:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        plVar6 = (long *)*param_2;
        bVar8 = bVar8 + 1;
      } while (bVar8 < *(byte *)(plVar6 + 0x12));
    }
  }
  return;
}


