/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019140a8; name: FUN_019140a8
 */


void FUN_019140a8(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  short sVar7;
  
  lVar4 = *(long *)(param_1 + 0x40);
  if ((lVar4 != 0) && (*(short *)(lVar4 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar4 + 0x1a);
    sVar7 = *(short *)(lVar4 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_019140fc;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_019140fc:
        bVar6 = false;
      }
      if (bVar6) {
        lVar4 = *(long *)(lVar4 + 0x10);
        plVar5 = (long *)(lVar4 + -0x28);
        if (lVar4 == 0) {
          return;
        }
        FUN_018e1dd4(plVar5);
        lVar4 = *(long *)(lVar4 + 8);
        psVar1 = (short *)(lVar4 + 0x1a);
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
          *(undefined8 *)(lVar4 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01914190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x50))(plVar5);
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
  return;
}


