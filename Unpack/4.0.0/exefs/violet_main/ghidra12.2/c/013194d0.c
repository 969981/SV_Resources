/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013194d0; name: FUN_013194d0
 */


void FUN_013194d0(long *param_1)

{
  short *psVar1;
  byte bVar2;
  short sVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  short sVar9;
  undefined1 auStack_28 [8];
  undefined1 auStack_8 [8];
  
  uVar5 = (**(code **)(*param_1 + 0x60))(param_1,auStack_8,auStack_28);
  if ((uVar5 & 1) != 0) {
    bVar2 = *(byte *)((long)param_1 + 0x85);
    lVar6 = param_1[6];
    lVar7 = *(long *)(lVar6 + (ulong)bVar2 * 0x90 + 8);
    if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar9 = *(short *)(lVar7 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01319558;
          bVar8 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01319558:
          bVar8 = false;
        }
        if (bVar8) {
          lVar7 = *(long *)(lVar7 + 0x10);
          if (lVar7 == 0) {
            return;
          }
          FUN_02172f38(*(undefined8 *)(lVar6 + (ulong)bVar2 * 0x90),auStack_8,auStack_28);
          lVar6 = *(long *)(lVar7 + 8);
          psVar1 = (short *)(lVar6 + 0x1a);
          do {
            sVar9 = *psVar1;
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar9 == 1) {
            *(undefined8 *)(lVar6 + 0x10) = 0;
            (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))((long *)(lVar7 + -0x28));
            return;
          }
          if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
  }
  return;
}


