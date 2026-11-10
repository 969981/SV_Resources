/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0158127c; name: thunk_FUN_01581280
 */


undefined8 thunk_FUN_01581280(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  short sVar7;
  
  lVar5 = *param_1;
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar7 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_015812d0;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_015812d0:
        bVar4 = false;
      }
      if (bVar4) {
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) {
          return 0;
        }
        lVar6 = *(long *)(lVar5 + 8);
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar7 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar7 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*(long *)(lVar5 + -0x28) + 0x50))();
        }
        else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return 1;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  return 0;
}


