/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d60828; name: FUN_00d60828
 */


ulong FUN_00d60828(long param_1,ulong *param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  
  lVar13 = *(long *)(param_1 + 0x40);
  uVar4 = FUN_00e47f74(lVar13);
  if (((uVar4 & 0xff) != 0) || (uVar4 = FUN_00e4a780(lVar13), (uVar4 & 0xff) != 0)) {
    uVar7 = *(ulong *)(lVar13 + (uVar4 >> 0x20) * 0x78 + 0x40);
    if (uVar7 != 0) {
      uVar10 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar5 = *param_2;
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        uVar11 = uVar7 - 1 & uVar5;
      }
      else {
        uVar11 = uVar5;
        if (uVar7 <= uVar5) {
          uVar11 = 0;
          if (uVar7 != 0) {
            uVar11 = uVar5 / uVar7;
          }
          uVar11 = uVar5 - uVar11 * uVar7;
        }
      }
      plVar12 = *(long **)(*(long *)(lVar13 + (uVar4 >> 0x20) * 0x78 + 0x38) + uVar11 * 8);
      if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if (plVar12[1] == uVar5) {
              if (plVar12[2] == uVar5) {
LAB_00d609c0:
                uVar4 = FUN_00d60ac0(*(undefined8 *)(param_1 + 0x40),param_2);
                return uVar4;
              }
            }
            else if ((plVar12[1] & uVar7 - 1) != uVar11) break;
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
        else {
          do {
            uVar4 = plVar12[1];
            if (uVar4 == uVar5) {
              if (plVar12[2] == uVar5) goto LAB_00d609c0;
            }
            else {
              if (uVar7 <= uVar4) {
                uVar10 = 0;
                if (uVar7 != 0) {
                  uVar10 = uVar4 / uVar7;
                }
                uVar4 = uVar4 - uVar10 * uVar7;
              }
              if (uVar4 != uVar11) break;
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
  }
  plVar12 = (long *)(param_1 + 0x70);
  lVar13 = nn::os::GetCurrentThread();
  do {
    lVar6 = *plVar12;
    lVar8 = *(long *)(param_1 + 0x78);
    cVar2 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar9) {
      *plVar12 = lVar6;
      *(long *)(param_1 + 0x78) = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00d60964:
  while ((lVar6 != 0 && (lVar13 != lVar6))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
    do {
      lVar6 = *plVar12;
      lVar8 = *(long *)(param_1 + 0x78);
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *plVar12 = lVar6;
        *(long *)(param_1 + 0x78) = lVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  do {
    lVar1 = *plVar12;
    if (lVar1 != lVar6 || *(long *)(param_1 + 0x78) != lVar8) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_00d60994;
    }
    cVar2 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar9) {
      *plVar12 = lVar6;
      *(long *)(param_1 + 0x74) = lVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar9 = true;
LAB_00d60994:
  if (!bVar9) {
    lVar6 = lVar1;
    lVar8 = *(long *)(param_1 + 0x78);
    goto LAB_00d60964;
  }
  uVar3 = FUN_00d60ac0(*(undefined8 *)(param_1 + 0x48),param_2);
  do {
    lVar13 = *plVar12;
    lVar6 = *(long *)(param_1 + 0x78);
    cVar2 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar9) {
      *plVar12 = lVar13;
      *(long *)(param_1 + 0x78) = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    lVar8 = *plVar12;
    lVar1 = *(long *)(param_1 + 0x78);
    if (lVar8 != lVar13 || lVar1 != lVar6) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto joined_r0x00d60a34;
    }
    cVar2 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar9) {
      *plVar12 = lVar13;
      *(long *)(param_1 + 0x74) = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar9 = true;
joined_r0x00d60a34:
  do {
    if (bVar9) {
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x80));
      return (ulong)(uVar3 & 1);
    }
    do {
      lVar13 = *plVar12;
      lVar6 = *(long *)(param_1 + 0x78);
      if (lVar13 != lVar8 || lVar6 != lVar1) {
        bVar9 = false;
        ClearExclusiveLocal();
        lVar8 = lVar13;
        lVar1 = lVar6;
        goto joined_r0x00d60a34;
      }
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *plVar12 = lVar8;
        *(long *)(param_1 + 0x74) = lVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar9 = true;
    lVar8 = lVar13;
    lVar1 = lVar6;
  } while( true );
}


