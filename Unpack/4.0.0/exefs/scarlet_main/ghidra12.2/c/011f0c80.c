/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011f0c80; name: FUN_011f0c80
 */


void FUN_011f0c80(long *param_1,ulong *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  
  lVar7 = *param_1;
  if (lVar7 != 0) {
    uVar6 = *param_2;
    uVar5 = param_2[1];
    if (*(short *)(lVar7 + 0x1a) != 0) {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar8 = *(short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_011f0cec;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_011f0cec:
          bVar4 = false;
        }
        if (bVar4) {
          lVar7 = *(long *)(lVar7 + 0x10);
          if (lVar7 != 0) {
            plVar9 = (long *)(lVar7 + -0x28);
            if ((((int)uVar5 == 0) && ((uVar6 >> 0x20 & 0xff) != 0)) &&
               (*(long *)(lVar7 + 0x28) != 0)) {
              FUN_011f0f84(plVar9);
              *(undefined4 *)(lVar7 + 0x68) = 2;
              if (*(code **)(lVar7 + 0x98) != (code *)0x0) {
                (**(code **)(lVar7 + 0x98))(lVar7 + 0xb8,lVar7 + 0x70);
              }
            }
            lVar7 = *(long *)(lVar7 + 8);
            psVar1 = (short *)(lVar7 + 0x1a);
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
              *(undefined8 *)(lVar7 + 0x10) = 0;
              (**(code **)(*plVar9 + 0x50))(plVar9);
            }
            else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          break;
        }
        sVar8 = sVar2;
      } while (sVar2 != 0);
    }
  }
  FUN_011f0db0(param_1[2]);
  return;
}


