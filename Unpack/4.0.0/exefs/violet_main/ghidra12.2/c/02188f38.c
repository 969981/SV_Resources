/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02188f38; name: FUN_02188f38
 */


void FUN_02188f38(long param_1)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *local_48;
  
  plVar9 = *(long **)(param_1 + 0x1a8);
  plVar3 = *(long **)(param_1 + 0x1b0);
  if (plVar9 != plVar3) {
    uVar10 = 0;
    do {
      lVar7 = *plVar9;
      if ((lVar7 != 0) && (*(int *)(lVar7 + 0x128) == 4)) {
        lVar7 = *(long *)(*(long *)(lVar7 + 0x130) + 0x30);
        plVar6 = *(long **)(lVar7 + 0x1d0);
        *(undefined8 *)(lVar7 + 0x1d0) = 0;
        if (plVar6 != (long *)0x0) {
          lVar8 = plVar6[6];
          psVar1 = (short *)(lVar8 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar2 == 1) {
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*plVar6 + 0x50))();
          }
          else if (sVar2 == 0) goto LAB_02189010;
        }
        *(undefined8 *)(lVar7 + 0x1d8) = 0xffffffffffffffff;
        local_48 = (long *)0x0;
        FUN_0115c9f4(*(undefined8 *)(*(long *)(param_1 + 0x170) + uVar10 * 8),&local_48);
        if (local_48 != (long *)0x0) {
          lVar7 = local_48[6];
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar2 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
            (**(code **)(*local_48 + 0x50))();
          }
          else if (sVar2 == 0) {
LAB_02189010:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
      plVar9 = plVar9 + 1;
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (plVar9 != plVar3);
  }
  return;
}


