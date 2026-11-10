/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eaab88; name: FUN_01eaab88
 */


void FUN_01eaab88(long param_1,undefined8 param_2)

{
  short *psVar1;
  char *pcVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  short sVar9;
  char local_58 [8];
  undefined1 auStack_50 [16];
  
  pcVar8 = *(char **)(param_1 + 0xd0);
  pcVar2 = *(char **)(param_1 + 0xd8);
  do {
    if (pcVar8 == pcVar2) {
      return;
    }
    lVar6 = *(long *)(pcVar8 + 8);
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
          if (cVar4 != '\0') goto LAB_01eaac18;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01eaac18:
          bVar5 = false;
        }
        if (bVar5) {
          lVar6 = *(long *)(lVar6 + 0x10);
          if (lVar6 != 0) {
            if (((pcVar8[0x19] != '\0') && (*pcVar8 != '\0')) &&
               (FUN_01ea9a98(local_58,param_2,pcVar8), local_58[0] != '\0')) {
              FUN_01912180(param_1 + 0x60,auStack_50);
              local_58[0] = '\0';
            }
            lVar7 = *(long *)(lVar6 + 8);
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
    pcVar8 = pcVar8 + 0x20;
  } while( true );
}


