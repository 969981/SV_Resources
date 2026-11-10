/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01973778; name: FUN_01973778
 */


void FUN_01973778(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5
                 )

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  short sVar6;
  long *plVar7;
  
  FUN_019738a4(param_5);
  if (*(int *)(param_4 + 0x4c) == 0x24) {
    lVar5 = *(long *)(param_2 + 0x20);
    if ((lVar5 == 0) || (*(short *)(lVar5 + 0x1a) == 0)) {
      plVar7 = (long *)0x0;
    }
    else {
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
          if (cVar3 != '\0') goto LAB_01973878;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01973878:
          bVar4 = false;
        }
        if (bVar4) {
          plVar7 = (long *)0x0;
          if (*(long *)(lVar5 + 0x10) != 0) {
            plVar7 = (long *)(*(long *)(lVar5 + 0x10) + -0x28);
          }
          break;
        }
        plVar7 = (long *)0x0;
        sVar6 = sVar2;
      } while (sVar2 != 0);
    }
    FUN_00e9afa8(plVar7,1);
    FUN_00e9b394(plVar7,1);
    FUN_019738c4(plVar7);
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
                    /* WARNING: Could not recover jumptable at 0x01973840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x50))(plVar7);
        return;
      }
      if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


