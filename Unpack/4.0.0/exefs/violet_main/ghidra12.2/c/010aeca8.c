/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010aeca8; name: FUN_010aeca8
 */


void FUN_010aeca8(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar10 = *(long **)(param_1 + 0x1d0);
  do {
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)(param_1 + 0x1a0);
      if (*(long *)(param_1 + 0x1f8) != 0) {
        FUN_0161aadc(plVar10,*(undefined8 *)(param_1 + 0x1d0));
        uVar9 = *(ulong *)(param_1 + 0x1a8);
        *(undefined8 *)(param_1 + 0x1d0) = 0;
        if (uVar9 != 0) {
          uVar6 = uVar9 & 3;
          if (uVar9 - 1 < 3) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            do {
              *(undefined8 *)(*plVar10 + uVar7 * 8) = 0;
              *(undefined8 *)(*plVar10 + uVar7 * 8 + 8) = 0;
              *(undefined8 *)(*plVar10 + uVar7 * 8 + 0x10) = 0;
              lVar8 = uVar7 * 8;
              uVar7 = uVar7 + 4;
              *(undefined8 *)(*plVar10 + lVar8 + 0x18) = 0;
            } while ((uVar9 & 0xfffffffffffffffc) != uVar7);
          }
          if (uVar6 != 0) {
            lVar8 = uVar7 << 3;
            do {
              *(undefined8 *)(*plVar10 + lVar8) = 0;
              uVar6 = uVar6 - 1;
              lVar8 = lVar8 + 8;
            } while (uVar6 != 0);
          }
        }
        *(undefined8 *)(param_1 + 0x1f8) = 0;
      }
      return;
    }
    plVar5 = (long *)plVar10[3];
    plVar10[3] = 0;
    if (plVar5 != (long *)0x0) {
      lVar8 = plVar5[6];
      psVar1 = (short *)(lVar8 + 0x1a);
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
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar5 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_010aed3c;
    }
    plVar5 = (long *)plVar10[4];
    plVar10[4] = 0;
    if (plVar5 != (long *)0x0) {
      lVar8 = plVar5[6];
      psVar1 = (short *)(lVar8 + 0x1a);
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
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar5 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_010aed3c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    plVar10 = (long *)*plVar10;
  } while( true );
}


