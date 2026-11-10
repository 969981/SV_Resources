/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c5ecb4; name: FUN_00c5ecb4
 */


void FUN_00c5ecb4(long *param_1,long param_2,char *param_3)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  
  if (*param_3 == '\0') {
    lVar10 = *(long *)(param_2 + 0x11050);
    *param_1 = lVar10;
    if (lVar10 == 0) {
      return;
    }
    piVar1 = (int *)(lVar10 + 0x28);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 != -1) {
      return;
    }
    goto LAB_00c5efe0;
  }
  lVar10 = param_2 + (*(ulong *)(param_3 + 8) >> 0x37) * 0x20;
  plVar2 = (long *)(lVar10 + 0xd050);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar8 = *plVar2;
    lVar12 = *(long *)(lVar10 + 0xd058);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar8;
      *(long *)(lVar10 + 0xd058) = lVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00c5ed0c:
  while ((lVar8 != 0 && (lVar6 != lVar8))) {
    nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xd060));
    do {
      lVar8 = *plVar2;
      lVar12 = *(long *)(lVar10 + 0xd058);
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar8;
        *(long *)(lVar10 + 0xd058) = lVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar3 = *plVar2;
    if (lVar3 != lVar8 || *(long *)(lVar10 + 0xd058) != lVar12) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00c5ed3c;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar8;
      *(long *)(lVar10 + 0xd054) = lVar12 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_00c5ed3c:
  if (!bVar7) {
    lVar8 = lVar3;
    lVar12 = *(long *)(lVar10 + 0xd058);
    goto LAB_00c5ed0c;
  }
  uVar9 = *(ulong *)(param_3 + 8);
  uVar13 = *(ulong *)(param_2 + (uVar9 >> 0x37) * 0x68 + 0x50);
  if (uVar13 != 0) {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar13 - 1 & uVar9;
    }
    else if (uVar9 < uVar13) {
      uVar15 = uVar9;
    }
    else {
      uVar15 = 0;
      if (uVar13 != 0) {
        uVar15 = uVar9 / uVar13;
      }
      uVar15 = uVar9 - uVar15 * uVar13;
    }
    plVar16 = *(long **)(*(long *)(param_2 + (uVar9 >> 0x37) * 0x68 + 0x48) + uVar15 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar16[1] == uVar9) {
            if (plVar16[2] == uVar9) goto LAB_00c5edec;
          }
          else if ((plVar16[1] & uVar13 - 1) != uVar15) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar16[1];
          if (uVar14 == uVar9) {
            if (plVar16[2] == uVar9) goto LAB_00c5edec;
          }
          else {
            if (uVar13 <= uVar14) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar5 * uVar13;
            }
            if (uVar14 != uVar15) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  lVar6 = *(long *)(param_2 + 0x11050);
  *param_1 = lVar6;
  if (lVar6 == 0) goto LAB_00c5ee14;
  piVar1 = (int *)(lVar6 + 0x28);
  do {
    iVar11 = *piVar1;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = iVar11 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  goto LAB_00c5ee0c;
LAB_00c5edec:
  lVar6 = plVar16[4];
  *param_1 = lVar6;
  if (lVar6 == 0) goto LAB_00c5ee14;
  piVar1 = (int *)(lVar6 + 0x28);
  do {
    iVar11 = *piVar1;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = iVar11 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00c5ee0c:
  if (iVar11 == -1) {
LAB_00c5efe0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
LAB_00c5ee14:
  do {
    lVar6 = *plVar2;
    lVar8 = *(long *)(lVar10 + 0xd058);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar6;
      *(long *)(lVar10 + 0xd058) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar12 = *plVar2;
    lVar3 = *(long *)(lVar10 + 0xd058);
    if (lVar12 != lVar6 || lVar3 != lVar8) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00c5ee50;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar6;
      *(long *)(lVar10 + 0xd054) = lVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_00c5ee50:
  if (!bVar7) {
    do {
      lVar6 = *plVar2;
      lVar8 = *(long *)(lVar10 + 0xd058);
      if (lVar6 != lVar12 || lVar8 != lVar3) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c5ef44;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar12;
        *(long *)(lVar10 + 0xd054) = lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
joined_r0x00c5ef44:
    if (!bVar7) {
      do {
        lVar12 = *plVar2;
        lVar3 = *(long *)(lVar10 + 0xd058);
        if (lVar12 != lVar6 || lVar3 != lVar8) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar12;
          lVar8 = lVar3;
          goto joined_r0x00c5ef44;
        }
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = lVar6;
          *(long *)(lVar10 + 0xd054) = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar7 = true;
      lVar6 = lVar12;
      lVar8 = lVar3;
      goto joined_r0x00c5ef44;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0xd060));
  return;
}


