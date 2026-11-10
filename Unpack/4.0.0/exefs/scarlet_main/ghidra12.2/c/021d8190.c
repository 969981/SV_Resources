/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d8190; name: FUN_021d8190
 */


void FUN_021d8190(long *param_1)

{
  short *psVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  short sVar11;
  long *plVar12;
  
  lVar9 = *param_1;
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar11 = *(short *)(lVar9 + 0x1a);
    do {
      sVar6 = *psVar1;
      if (sVar6 == sVar11) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar11 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_021d8284;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_021d8284:
        bVar8 = false;
      }
      if (bVar8) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 != 0) {
          lVar4 = param_1[2];
          lVar5 = param_1[3];
          if (lVar4 != lVar5) {
            lVar2 = lVar9 + 200;
            FUN_019cd884(lVar2,lVar4);
            if ((((lVar4 + 8 != lVar5) && (FUN_019cd884(lVar2), lVar4 + 0x10 != lVar5)) &&
                (FUN_019cd884(lVar2), lVar4 + 0x18 != lVar5)) &&
               (FUN_019cd884(lVar2), lVar4 + 0x20 != lVar5)) {
              FUN_019cd884(lVar2);
              for (lVar4 = lVar4 + 0x28; lVar4 != lVar5; lVar4 = lVar4 + 8) {
                FUN_019cd884(lVar2,lVar4);
              }
            }
          }
          (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))((long *)(lVar9 + -0x28));
        }
        break;
      }
      sVar11 = sVar6;
    } while (sVar6 != 0);
  }
  plVar3 = (long *)param_1[2];
  plVar12 = (long *)param_1[3];
  do {
    while( true ) {
      do {
        if (plVar12 == plVar3) {
          param_1[3] = (long)plVar3;
          return;
        }
        plVar12 = plVar12 + -1;
        plVar10 = (long *)*plVar12;
      } while (plVar10 == (long *)0x0);
      lVar9 = plVar10[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar11 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar11 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar11 != 1) break;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
  } while (sVar11 != 0);
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


