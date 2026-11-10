/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e213a0; name: FUN_01e213a0
 */


void FUN_01e213a0(long param_1,long param_2)

{
  short *psVar1;
  long *plVar2;
  undefined2 uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  
  lVar7 = *(long *)(param_2 + 0xb0);
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar8) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01e2140c;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e2140c:
        bVar6 = false;
      }
      if (bVar6) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 != 0) {
          *(undefined1 *)(lVar7 + 0x110) = 1;
          plVar9 = (long *)(lVar7 + -0x28);
          if ((*(char *)(lVar7 + 0x30) != '\0') || (*(char *)(lVar7 + 0x31) != '\0')) {
            uVar3 = *(undefined2 *)(lVar7 + 0x30);
            plVar2 = (long *)(lVar7 + 0x10);
            *(undefined2 *)(lVar7 + 0x30) = 0;
            if (*(long *)(lVar7 + 0x20) != 0) {
              FUN_00c6a584(*(long *)(lVar7 + 0x20),plVar2);
            }
            (**(code **)(*plVar2 + 0x20))(plVar2,uVar3);
          }
          *(undefined4 *)(lVar7 + 0x188) = 0x3f800000;
          *(undefined1 *)(lVar7 + 0x114) = 1;
          FUN_0119c9d8(plVar9,1);
          lVar7 = *(long *)(lVar7 + 0x70);
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar8 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar8 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar8 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
            (**(code **)(*plVar9 + 0x50))(plVar9);
          }
          else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        break;
      }
      sVar8 = sVar4;
    } while (sVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


