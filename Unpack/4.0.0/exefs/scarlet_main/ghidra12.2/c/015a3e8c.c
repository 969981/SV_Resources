/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015a3e8c; name: FUN_015a3e8c
 */


void FUN_015a3e8c(long param_1,int param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  bool bVar10;
  long lVar11;
  bool bVar12;
  long *plVar13;
  int *piVar14;
  long *plVar15;
  
  plVar13 = (long *)(param_1 + 0x788);
  lVar11 = *plVar13;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar11) {
    lVar4 = nn::os::GetCurrentThread();
LAB_015a3ec8:
    if (*plVar13 == 0) goto code_r0x015a3ed0;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x790));
    do {
      if (*plVar13 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x790));
          while (*plVar13 == 0) {
            cVar3 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar12) {
              *plVar13 = lVar4;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_015a3ed8;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar12) {
        *plVar13 = lVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_015a3ed8:
    bVar12 = false;
    goto LAB_015a3edc;
  }
  plVar13 = (long *)0x0;
  bVar12 = true;
LAB_015a3edc:
  piVar14 = *(int **)(param_1 + 0x8a8);
  lVar4 = *(long *)(param_1 + 0x8e0);
  piVar5 = piVar14 + lVar4 * 6;
  if ((lVar4 != 0) && (*piVar14 != param_2)) {
    lVar4 = lVar4 * 0x18;
    do {
      lVar4 = lVar4 + -0x18;
      if (lVar4 == 0) {
        piVar14 = piVar5;
        goto LAB_015a3f28;
      }
      piVar1 = piVar14 + 6;
      piVar14 = piVar14 + 6;
    } while (*piVar1 != param_2);
  }
LAB_015a3f28:
  if (piVar5 != piVar14) {
    plVar6 = *(long **)(param_1 + 0x7a0);
    lVar4 = *(long *)(param_1 + 0x7d8);
    if ((lVar4 == 0) || (*plVar6 == *(long *)(piVar14 + 2))) {
      plVar15 = plVar6;
    }
    else {
      lVar11 = lVar4 * 0x10;
      plVar9 = plVar6;
      do {
        lVar11 = lVar11 + -0x10;
        if (lVar11 == 0) goto LAB_015a3fb8;
        plVar15 = plVar9 + 2;
        plVar2 = plVar9 + 2;
        plVar9 = plVar15;
      } while (*plVar2 != *(long *)(piVar14 + 2));
    }
    if (plVar15 != plVar6 + lVar4 * 2) {
      plVar6 = (long *)(param_1 + 0x7e0);
      lVar11 = *plVar6;
      lVar4 = nn::os::GetCurrentThread();
      if (lVar4 != lVar11) {
        lVar4 = nn::os::GetCurrentThread();
LAB_015a3f78:
        if (*plVar6 == 0) goto code_r0x015a3f80;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x7e8));
        do {
          if (*plVar6 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x7e8));
              while (*plVar6 == 0) {
                cVar3 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar10) {
                  *plVar6 = lVar4;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') goto LAB_015a3f88;
              }
            } while( true );
          }
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar10) {
            *plVar6 = lVar4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_015a3f88:
        bVar10 = false;
        goto LAB_015a3f8c;
      }
      plVar6 = (long *)0x0;
      bVar10 = true;
LAB_015a3f8c:
      FUN_015a4158(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x7f8) + plVar15[1] * 0x20) + 8),
                   *(undefined8 *)(piVar14 + 4));
      if (!bVar10) {
        *plVar6 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
      }
    }
LAB_015a3fb8:
    lVar11 = *(long *)(param_1 + 0x8a8);
    lVar4 = (long)piVar14 - lVar11 >> 3;
    uVar8 = lVar4 * -0x5555555555555555;
    uVar7 = *(ulong *)(param_1 + 0x8e0);
    if (uVar7 <= uVar8) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("index < m_end","erase",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/game/culling/culling_system.h"
                 ,0x391,"FlatHashTable::erase iterator out of bounds");
    }
    uVar8 = uVar8 + 1;
    if (uVar8 < (ulong)((*(long *)(param_1 + 0x8b0) - lVar11 >> 3) * -0x5555555555555555)) {
      memmove((void *)(lVar11 + lVar4 * 8),(void *)(lVar11 + uVar8 * 0x18),(uVar7 - uVar8) * 0x18);
      uVar7 = *(ulong *)(param_1 + 0x8e0);
    }
    *(ulong *)(param_1 + 0x8e0) = uVar7 - 1;
  }
  if (bVar12) {
    return;
  }
  *plVar13 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
  return;
code_r0x015a3ed0:
  cVar3 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar12) {
    *plVar13 = lVar4;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_015a3ed8;
  goto LAB_015a3ec8;
code_r0x015a3f80:
  cVar3 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar10) {
    *plVar6 = lVar4;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_015a3f88;
  goto LAB_015a3f78;
}


