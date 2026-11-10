/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b0a7c8; name: FUN_00b0a7c8
 */


bool FUN_00b0a7c8(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  uVar5 = nn::os::TryWaitEvent((EventType *)(param_1 + 0xf0));
  if ((uVar5 & 1) == 0) {
    nn::os::SignalEvent((EventType *)(param_1 + 0xf0));
    return false;
  }
  if (*(long *)(param_1 + 0x2c8) != 0) {
    if ((*(byte *)(*(long *)(param_1 + 0x2c8) + 0x24a) & 1) != 0) {
      FUN_014ece90(*(undefined8 *)(param_1 + 0x2c8));
      plVar6 = *(long **)(param_1 + 0x2c8);
      *(undefined8 *)(param_1 + 0x2c8) = 0;
      if (plVar6 == (long *)0x0) goto LAB_00b0a838;
      lVar7 = plVar6[6];
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*plVar6 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if (*(long *)(param_1 + 0x2c8) != 0) {
      return *(char *)(param_1 + 0x2d8) == '\0';
    }
  }
LAB_00b0a838:
  *(undefined1 *)(param_1 + 0x2d8) = 0;
  return true;
}


