/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01df0818; name: FUN_01df0818
 */


undefined8 FUN_01df0818(long param_1,int param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  
  plVar6 = (long *)(param_1 + (long)param_2 * 0x10 + 0x40);
  lVar8 = *plVar6;
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    lVar8 = *plVar6;
    cVar4 = DAT_00000381;
    if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar8 + 0x1a);
      sVar9 = *(short *)(lVar8 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01df0898;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01df0898:
          bVar5 = false;
        }
        cVar4 = DAT_00000381;
        if (bVar5) {
          lVar8 = *(long *)(lVar8 + 0x10);
          if (lVar8 != 0) {
            cVar4 = *(char *)(lVar8 + 0x359);
            lVar7 = *(long *)(lVar8 + 8);
            psVar1 = (short *)(lVar7 + 0x1a);
            do {
              sVar9 = *psVar1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar9 == 1) {
              *(undefined8 *)(lVar7 + 0x10) = 0;
              (**(code **)(*(long *)(lVar8 + -0x28) + 0x50))();
            }
            else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          break;
        }
        sVar9 = sVar2;
      } while (sVar2 != 0);
    }
    if (cVar4 != '\0') {
      return 1;
    }
  }
  return 0;
}


