/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fff1a4; name: FUN_00fff1a4
 */


void FUN_00fff1a4(long *param_1,long param_2,char *param_3)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  char cVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  
  if (*param_3 == '\0') {
    *param_1 = 0;
    return;
  }
  lVar2 = param_2 + (*(ulong *)(param_3 + 8) >> 0x37) * 0x20;
  plVar3 = (long *)(lVar2 + 0xd050);
  lVar8 = nn::os::GetCurrentThread();
  do {
    lVar10 = *plVar3;
    lVar12 = *(long *)(lVar2 + 0xd058);
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar9) {
      *plVar3 = lVar10;
      *(long *)(lVar2 + 0xd058) = lVar12;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00fff1fc:
  while ((lVar10 != 0 && (lVar8 != lVar10))) {
    nn::os::WaitLightEvent((LightEventType *)(lVar2 + 0xd060));
    do {
      lVar10 = *plVar3;
      lVar12 = *(long *)(lVar2 + 0xd058);
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar9) {
        *plVar3 = lVar10;
        *(long *)(lVar2 + 0xd058) = lVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  do {
    lVar4 = *plVar3;
    if (lVar4 != lVar10 || *(long *)(lVar2 + 0xd058) != lVar12) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_00fff22c;
    }
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar9) {
      *plVar3 = lVar10;
      *(long *)(lVar2 + 0xd054) = lVar12 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar9 = true;
LAB_00fff22c:
  if (!bVar9) {
    lVar10 = lVar4;
    lVar12 = *(long *)(lVar2 + 0xd058);
    goto LAB_00fff1fc;
  }
  uVar11 = *(ulong *)(param_3 + 8);
  uVar13 = *(ulong *)(param_2 + (uVar11 >> 0x37) * 0x68 + 0x50);
  if (uVar13 != 0) {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar13 - 1 & uVar11;
    }
    else if (uVar11 < uVar13) {
      uVar15 = uVar11;
    }
    else {
      uVar15 = 0;
      if (uVar13 != 0) {
        uVar15 = uVar11 / uVar13;
      }
      uVar15 = uVar11 - uVar15 * uVar13;
    }
    plVar16 = *(long **)(*(long *)(param_2 + (uVar11 >> 0x37) * 0x68 + 0x48) + uVar15 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar16[1] == uVar11) {
            if (plVar16[2] == uVar11) goto LAB_00fff2dc;
          }
          else if ((plVar16[1] & uVar13 - 1) != uVar15) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar16[1];
          if (uVar14 == uVar11) {
            if (plVar16[2] == uVar11) goto LAB_00fff2dc;
          }
          else {
            if (uVar13 <= uVar14) {
              uVar7 = 0;
              if (uVar13 != 0) {
                uVar7 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar7 * uVar13;
            }
            if (uVar14 != uVar15) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
LAB_00fff304:
  do {
    lVar8 = *plVar3;
    lVar10 = *(long *)(lVar2 + 0xd058);
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar9) {
      *plVar3 = lVar8;
      *(long *)(lVar2 + 0xd058) = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar12 = *plVar3;
    lVar4 = *(long *)(lVar2 + 0xd058);
    if (lVar12 != lVar8 || lVar4 != lVar10) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_00fff340;
    }
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar9) {
      *plVar3 = lVar8;
      *(long *)(lVar2 + 0xd054) = lVar10 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar9 = true;
LAB_00fff340:
  if (!bVar9) {
    do {
      lVar8 = *plVar3;
      lVar10 = *(long *)(lVar2 + 0xd058);
      if (lVar8 != lVar12 || lVar10 != lVar4) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x00fff410;
      }
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar9) {
        *plVar3 = lVar12;
        *(long *)(lVar2 + 0xd054) = lVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar9 = true;
joined_r0x00fff410:
    if (!bVar9) {
      do {
        lVar12 = *plVar3;
        lVar4 = *(long *)(lVar2 + 0xd058);
        if (lVar12 != lVar8 || lVar4 != lVar10) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar8 = lVar12;
          lVar10 = lVar4;
          goto joined_r0x00fff410;
        }
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar9) {
          *plVar3 = lVar8;
          *(long *)(lVar2 + 0xd054) = lVar10 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar9 = true;
      lVar8 = lVar12;
      lVar10 = lVar4;
      goto joined_r0x00fff410;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar2 + 0xd060));
  return;
LAB_00fff2dc:
  lVar8 = plVar16[3];
  *param_1 = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
    do {
      iVar5 = *piVar1;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = iVar5 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  goto LAB_00fff304;
}


