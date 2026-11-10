/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e43904; name: FUN_00e43904
 */


void FUN_00e43904(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  short sVar6;
  long *plVar7;
  long *local_28;
  long local_8;
  
  lVar5 = *param_1;
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar6 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar6) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00e4396c;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00e4396c:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar5 + 0x10) != 0) {
          local_8 = *(long *)(lVar5 + 0x10) + -0x28;
          plVar7 = (long *)*param_4;
          *param_4 = 0;
          local_28 = plVar7;
          FUN_01bc3f4c(&local_8,param_2,param_3,&local_28);
          if (plVar7 != (long *)0x0) {
            lVar5 = plVar7[6];
            psVar1 = (short *)(lVar5 + 0x1a);
            do {
              sVar6 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar6 == 1) {
              *(undefined8 *)(lVar5 + 0x10) = 0;
              (**(code **)(*plVar7 + 0x50))(plVar7);
            }
            else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          goto LAB_00e43920;
        }
        break;
      }
      sVar6 = sVar2;
    } while (sVar2 != 0);
  }
  local_8 = 0;
LAB_00e43920:
  FUN_01bc2de0(&local_8);
  return;
}


