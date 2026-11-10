/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d4a2a4; name: FUN_00d4a2a4
 */


undefined8 FUN_00d4a2a4(long param_1,char *param_2,ulong *param_3,undefined4 *param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  
  if (*param_2 == '\0') {
    return 0;
  }
  plVar1 = (long *)(param_1 + 0xd70);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_1 + 0xd78);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0xd78) = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00d4a2f0:
  while ((lVar7 != 0 && (lVar5 != lVar7))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd80));
    do {
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_1 + 0xd78);
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0xd78) = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar7 || *(long *)(param_1 + 0xd78) != lVar9) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00d4a320;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0xd74) = lVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
LAB_00d4a320:
  if (!bVar6) {
    lVar7 = lVar2;
    lVar9 = *(long *)(param_1 + 0xd78);
    goto LAB_00d4a2f0;
  }
  uVar10 = *(ulong *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_2 + 4) * 0x1d0 + 0x88);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar8 = *param_3;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar8;
    }
    else if (uVar8 < uVar10) {
      uVar12 = uVar8;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar8 / uVar10;
      }
      uVar12 = uVar8 - uVar12 * uVar10;
    }
    plVar13 = *(long **)(*(long *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_2 + 4) * 0x1d0 +
                                  0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == uVar8) {
            if (plVar13[2] == uVar8) goto LAB_00d4a448;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) goto LAB_00d4a4b8;
          plVar13 = (long *)*plVar13;
          uVar14 = 0;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == uVar8) {
            if (plVar13[2] == uVar8) goto LAB_00d4a448;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar4 * uVar10;
            }
            if (uVar11 != uVar12) goto LAB_00d4a4b8;
          }
          plVar13 = (long *)*plVar13;
          uVar14 = 0;
        } while (plVar13 != (long *)0x0);
      }
      goto LAB_00d4a454;
    }
  }
LAB_00d4a4b8:
  uVar14 = 0;
LAB_00d4a454:
  do {
    lVar5 = *plVar1;
    lVar7 = *(long *)(param_1 + 0xd78);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0xd78) = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar9 = *plVar1;
    lVar2 = *(long *)(param_1 + 0xd78);
    if (lVar9 != lVar5 || lVar2 != lVar7) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00d4a490;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0xd74) = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
LAB_00d4a490:
  if (!bVar6) {
    do {
      lVar5 = *plVar1;
      lVar7 = *(long *)(param_1 + 0xd78);
      if (lVar5 != lVar9 || lVar7 != lVar2) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x00d4a508;
      }
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0xd74) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar6 = true;
joined_r0x00d4a508:
    if (!bVar6) {
      do {
        lVar9 = *plVar1;
        lVar2 = *(long *)(param_1 + 0xd78);
        if (lVar9 != lVar5 || lVar2 != lVar7) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar5 = lVar9;
          lVar7 = lVar2;
          goto joined_r0x00d4a508;
        }
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar5;
          *(long *)(param_1 + 0xd74) = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar6 = true;
      lVar5 = lVar9;
      lVar7 = lVar2;
      goto joined_r0x00d4a508;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xd80));
  return uVar14;
LAB_00d4a448:
  uVar14 = 1;
  *param_4 = (int)plVar13[6];
  goto LAB_00d4a454;
}


