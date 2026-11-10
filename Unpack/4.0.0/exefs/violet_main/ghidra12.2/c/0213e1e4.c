/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0213e1e4; name: FUN_0213e1e4
 */


void FUN_0213e1e4(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  plVar8 = *(long **)(param_1 + 8);
  do {
    plVar7 = plVar8;
    if (plVar7 == param_2) {
      *(long **)(param_1 + 8) = param_2;
      return;
    }
    plVar8 = (long *)plVar7[-2];
    if (plVar8 != (long *)0x0) {
      lVar11 = plVar8[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar8 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    plVar8 = plVar7 + -0xe;
    if ((long *)plVar7[-4] != (long *)0x0) {
      (**(code **)(*(long *)plVar7[-4] + 0x20))();
    }
    lVar11 = *plVar8;
    if (lVar11 != 0) {
      lVar3 = plVar7[-0xc];
      plVar4 = (long *)plVar7[-0xb];
      plVar7[-0xd] = lVar11;
      uVar9 = (**(code **)(*plVar4 + 0xf8))(plVar4);
      if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar4 + 0x18))(plVar4,lVar11,lVar3 - lVar11,4);
      }
      else {
        FUN_00c48fe8(plVar4,lVar11,lVar3 - lVar11,4);
      }
    }
  } while( true );
}


