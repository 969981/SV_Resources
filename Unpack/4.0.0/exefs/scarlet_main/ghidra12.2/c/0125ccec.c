/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0125ccec; name: FUN_0125ccec
 */


void FUN_0125ccec(long *param_1,long param_2,ulong *param_3)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  
  plVar1 = (long *)(param_2 + 0x1e0);
  lVar7 = nn::os::GetCurrentThread();
  do {
    lVar9 = *plVar1;
    lVar11 = *(long *)(param_2 + 0x1e8);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(param_2 + 0x1e8) = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0125cd28:
  while ((lVar9 != 0 && (lVar7 != lVar9))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x1f0));
    do {
      lVar9 = *plVar1;
      lVar11 = *(long *)(param_2 + 0x1e8);
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar9;
        *(long *)(param_2 + 0x1e8) = lVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar9 || *(long *)(param_2 + 0x1e8) != lVar11) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_0125cd58;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(param_2 + 0x1e4) = lVar11 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_0125cd58:
  if (!bVar8) {
    lVar9 = lVar3;
    lVar11 = *(long *)(param_2 + 0x1e8);
    goto LAB_0125cd28;
  }
  uVar12 = *(ulong *)(param_2 + 0x178);
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar10 = *param_3;
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar12 - 1 & uVar10;
    }
    else if (uVar10 < uVar12) {
      uVar14 = uVar10;
    }
    else {
      uVar14 = 0;
      if (uVar12 != 0) {
        uVar14 = uVar10 / uVar12;
      }
      uVar14 = uVar10 - uVar14 * uVar12;
    }
    plVar15 = *(long **)(*(long *)(param_2 + 0x170) + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_0125cdf0;
          }
          else if ((plVar15[1] & uVar12 - 1) != uVar14) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar15[1];
          if (uVar13 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_0125cdf0;
          }
          else {
            if (uVar12 <= uVar13) {
              uVar6 = 0;
              if (uVar12 != 0) {
                uVar6 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar6 * uVar12;
            }
            if (uVar13 != uVar14) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
LAB_0125ce18:
  do {
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_2 + 0x1e8);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_2 + 0x1e8) = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar11 = *plVar1;
    lVar3 = *(long *)(param_2 + 0x1e8);
    if (lVar11 != lVar7 || lVar3 != lVar9) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_0125ce54;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_2 + 0x1e4) = lVar9 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_0125ce54:
  if (!bVar8) {
    do {
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_2 + 0x1e8);
      if (lVar7 != lVar11 || lVar9 != lVar3) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x0125cecc;
      }
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar11;
        *(long *)(param_2 + 0x1e4) = lVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar8 = true;
joined_r0x0125cecc:
    if (!bVar8) {
      do {
        lVar11 = *plVar1;
        lVar3 = *(long *)(param_2 + 0x1e8);
        if (lVar11 != lVar7 || lVar3 != lVar9) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar7 = lVar11;
          lVar9 = lVar3;
          goto joined_r0x0125cecc;
        }
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar7;
          *(long *)(param_2 + 0x1e4) = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar8 = true;
      lVar7 = lVar11;
      lVar9 = lVar3;
      goto joined_r0x0125cecc;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x1f0));
  return;
LAB_0125cdf0:
  lVar7 = plVar15[0xb];
  *param_1 = lVar7;
  if (lVar7 != 0) {
    piVar2 = (int *)(lVar7 + 0x28);
    do {
      iVar4 = *piVar2;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = iVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  goto LAB_0125ce18;
}


