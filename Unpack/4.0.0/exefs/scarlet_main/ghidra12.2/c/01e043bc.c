/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e043bc; name: FUN_01e043bc
 */


ulong FUN_01e043bc(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  short sVar8;
  long *plVar9;
  
  if ((((*(long *)(param_1 + 0x2f0) == 0) || (*(short *)(*(long *)(param_1 + 0x2f0) + 0x1a) == 0))
      || (lVar6 = *(long *)(param_1 + 0x2f0), lVar6 == 0)) || (*(short *)(lVar6 + 0x1a) == 0)) {
LAB_01e043ec:
    uVar7 = 0;
    uVar5 = 0;
  }
  else {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar8 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01e0443c;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e0443c:
        bVar4 = false;
      }
      if (bVar4) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 != 0) {
          plVar9 = (long *)(lVar6 + -0x28);
          uVar5 = FUN_01e0b660(plVar9);
          uVar7 = uVar5 >> 8;
          lVar6 = *(long *)(lVar6 + 8);
          psVar1 = (short *)(lVar6 + 0x1a);
          do {
            sVar8 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar8 == 1) {
            *(undefined8 *)(lVar6 + 0x10) = 0;
            (**(code **)(*plVar9 + 0x50))(plVar9);
          }
          else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          break;
        }
        goto LAB_01e043ec;
      }
      uVar7 = 0;
      uVar5 = 0;
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return uVar5 & 0xff | uVar7 << 8;
}


