/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010e29c8; name: FUN_010e29c8
 */


void FUN_010e29c8(long param_1,uint param_2)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  short sVar9;
  
  if ((*(char *)(param_1 + 0x1a1) == '\0') && ((uint)*(byte *)(param_1 + 0x1a8) != (param_2 & 0xff))
     ) {
    plVar8 = *(long **)(param_1 + 0x168);
    plVar2 = *(long **)(param_1 + 0x170);
    *(byte *)(param_1 + 0x1a9) = *(byte *)(param_1 + 0x1a8);
    *(char *)(param_1 + 0x1a8) = (char)param_2;
    for (; plVar8 != plVar2; plVar8 = plVar8 + 2) {
      lVar6 = *plVar8;
      if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar6 + 0x1a);
        sVar9 = *(short *)(lVar6 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar9) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar9 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_010e2a68;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_010e2a68:
            bVar5 = false;
          }
          if (bVar5) {
            lVar6 = *(long *)(lVar6 + 0x10);
            if (lVar6 != 0) {
              FUN_00c6a514(lVar6 + 0x10,param_2);
              lVar7 = *(long *)(lVar6 + 0x70);
              psVar1 = (short *)(lVar7 + 0x1a);
              do {
                sVar9 = *psVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar5) {
                  *psVar1 = sVar9 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar9 == 1) {
                *(undefined8 *)(lVar7 + 0x10) = 0;
                (**(code **)(*(long *)(lVar6 + -0x28) + 0x50))((long *)(lVar6 + -0x28));
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
          sVar9 = sVar3;
        } while (sVar3 != 0);
      }
    }
  }
  return;
}


