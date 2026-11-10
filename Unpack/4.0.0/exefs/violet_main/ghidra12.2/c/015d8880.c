/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015d8880; name: FUN_015d8880
 */


void FUN_015d8880(long param_1,int param_2,byte param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  bool bVar6;
  short sVar7;
  
  plVar4 = (long *)(param_1 + (long)param_2 * 0x10 + 0x40);
  lVar5 = *plVar4;
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    lVar5 = *plVar4;
    if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar5 + 0x1a);
      sVar7 = *(short *)(lVar5 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar7) {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_015d88f4;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_015d88f4:
          bVar6 = false;
        }
        if (bVar6) {
          lVar5 = *(long *)(lVar5 + 0x10);
          plVar4 = (long *)0x0;
          if (lVar5 != 0) {
            plVar4 = (long *)(lVar5 + -0x28);
          }
          *(byte *)((long)plVar4 + 0x129) = param_3 & 1;
          if (lVar5 == 0) {
            return;
          }
          lVar5 = plVar4[6];
          psVar1 = (short *)(lVar5 + 0x1a);
          do {
            sVar7 = *psVar1;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar7 == 1) {
            *(undefined8 *)(lVar5 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x015d8980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar4 + 0x50))();
            return;
          }
          if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return;
        }
        sVar7 = sVar2;
      } while (sVar2 != 0);
    }
    DAT_00000129 = param_3 & 1;
  }
  return;
}


