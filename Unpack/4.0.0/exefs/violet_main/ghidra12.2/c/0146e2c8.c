/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0146e2c8; name: FUN_0146e2c8
 */


void FUN_0146e2c8(long *param_1,long *param_2,code *param_3,ulong param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  short sVar8;
  long local_8;
  
  lVar7 = *param_2;
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0146e330;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0146e330:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          local_8 = *(long *)(lVar7 + 0x10) + -0x28;
          if ((param_4 & 1) != 0) {
            param_3 = *(code **)(param_3 + *(long *)(local_8 + ((long)param_4 >> 1)));
          }
          plVar5 = (long *)(*param_3)();
          lVar7 = *plVar5;
          *param_1 = lVar7;
          if (lVar7 != 0) {
            lVar7 = *(long *)(lVar7 + 0x30);
            if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar1 = (short *)(lVar7 + 0x1a);
            do {
              sVar8 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar8 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar8 == 0) {
              uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
              *(undefined8 *)(lVar7 + 8) = uVar6;
              *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
            }
            else if (sVar8 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","AddReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x58,"Reference counter overflows.");
            }
          }
          FUN_00c7f318(&local_8);
          return;
        }
        break;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  local_8 = 0;
  FUN_00c7f318(&local_8);
  *param_1 = 0;
  return;
}


