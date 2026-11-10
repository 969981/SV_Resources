/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016bbea4; name: FUN_016bbea4
 */


void FUN_016bbea4(long param_1,ulong *param_2,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  bool bVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  
  plVar1 = (long *)(param_1 + 0x230);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x238) == 0) {
    cVar6 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_1 + 0x238) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_016bbeec;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x240));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x238) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x240));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x238) == 0) {
          cVar6 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar8;
            *(undefined8 *)(param_1 + 0x238) = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_016bbeec;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_1 + 0x238) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_016bbeec:
  uVar12 = *(ulong *)(param_1 + 0x70);
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar11 = *param_2;
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar12 - 1 & uVar11;
    }
    else if (uVar11 < uVar12) {
      uVar14 = uVar11;
    }
    else {
      uVar14 = 0;
      if (uVar12 != 0) {
        uVar14 = uVar11 / uVar12;
      }
      uVar14 = uVar11 - uVar14 * uVar12;
    }
    plVar15 = *(long **)(*(long *)(param_1 + 0x68) + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar15[1] != uVar11) {
            if ((plVar15[1] & uVar12 - 1) == uVar14) goto LAB_016bc084;
            break;
          }
          if (plVar15[2] == uVar11) goto LAB_016bbf70;
LAB_016bc084:
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar15[1];
          if (uVar13 == uVar11) {
            if (plVar15[2] == uVar11) goto LAB_016bbf70;
          }
          else {
            if (uVar12 <= uVar13) {
              uVar7 = 0;
              if (uVar12 != 0) {
                uVar7 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar7 * uVar12;
            }
            if (uVar13 != uVar14) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_016bbfc0:
  do {
    lVar8 = *plVar1;
    lVar5 = *(long *)(param_1 + 0x238);
    cVar6 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x238) = lVar5;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x238);
    if (lVar3 != lVar8 || lVar4 != lVar5) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_016bc048;
    }
    cVar6 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x234) = lVar5;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar10 = true;
LAB_016bc048:
  if (!bVar10) {
    do {
      lVar8 = *plVar1;
      lVar5 = *(long *)(param_1 + 0x238);
      if (lVar8 != lVar3 || lVar5 != lVar4) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x016bc0d8;
      }
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x234) = lVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar10 = true;
joined_r0x016bc0d8:
    if (!bVar10) {
      do {
        lVar3 = *plVar1;
        lVar4 = *(long *)(param_1 + 0x238);
        if (lVar3 != lVar8 || lVar4 != lVar5) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar8 = lVar3;
          lVar5 = lVar4;
          goto joined_r0x016bc0d8;
        }
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x234) = lVar5;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar10 = true;
      lVar8 = lVar3;
      lVar5 = lVar4;
      goto joined_r0x016bc0d8;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x240));
  return;
LAB_016bbf70:
  plVar15 = (long *)(*(long *)(param_1 + 0x30) + (long)(int)plVar15[3] * 0x38);
  lVar8 = *plVar15;
  if ((param_3 < (ulong)(plVar15[1] - lVar8 >> 5)) &&
     (pcVar2 = (char *)(lVar8 + param_3 * 0x20), pcVar2[0x18] != '\0')) {
    if (*pcVar2 == '\0') {
      pcVar9 = pcVar2 + 8;
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9[2] = '\0';
      pcVar9[3] = '\0';
      pcVar9[4] = '\0';
      pcVar9[5] = '\0';
      pcVar9[6] = '\0';
      pcVar9[7] = '\0';
      pcVar2[0x10] = '\0';
      pcVar2[0x11] = '\0';
      pcVar2[0x12] = '\0';
      pcVar2[0x13] = '\0';
      pcVar2[0x14] = '\0';
      pcVar2[0x15] = '\0';
      pcVar2[0x16] = '\0';
      pcVar2[0x17] = '\0';
      FUN_016bc158(pcVar9,param_4);
      *pcVar2 = '\x01';
    }
    else {
      FUN_016bc158(pcVar2 + 8,param_4);
    }
  }
  goto LAB_016bbfc0;
}


