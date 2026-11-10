/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c888c4; name: FUN_00c888c4
 */


long * FUN_00c888c4(float param_1,long param_2,ulong *param_3)

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
  long *plVar14;
  float fVar15;
  
  plVar1 = (long *)(param_2 + 0xe0);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_2 + 0xe8);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_2 + 0xe8) = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00c88904:
  while ((lVar7 != 0 && (lVar5 != lVar7))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xf0));
    do {
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_2 + 0xe8);
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_2 + 0xe8) = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar7 || *(long *)(param_2 + 0xe8) != lVar9) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00c88934;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_2 + 0xe4) = lVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
LAB_00c88934:
  if (!bVar6) {
    lVar7 = lVar2;
    lVar9 = *(long *)(param_2 + 0xe8);
    goto LAB_00c88904;
  }
  uVar10 = *(ulong *)(param_2 + 0x10);
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
    plVar13 = *(long **)(*(long *)(param_2 + 8) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == uVar8) {
            if (plVar13[2] == uVar8) goto LAB_00c88ac0;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) goto LAB_00c88950;
          plVar13 = (long *)*plVar13;
          plVar14 = (long *)0x0;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == uVar8) {
            if (plVar13[2] == uVar8) goto LAB_00c88ac0;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar4 * uVar10;
            }
            if (uVar11 != uVar12) goto LAB_00c88950;
          }
          plVar13 = (long *)*plVar13;
          plVar14 = (long *)0x0;
        } while (plVar13 != (long *)0x0);
      }
      goto LAB_00c88954;
    }
  }
LAB_00c88950:
  plVar14 = (long *)0x0;
LAB_00c88954:
  do {
    lVar5 = *plVar1;
    lVar7 = *(long *)(param_2 + 0xe8);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_2 + 0xe8) = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar9 = *plVar1;
    lVar2 = *(long *)(param_2 + 0xe8);
    if (lVar9 != lVar5 || lVar2 != lVar7) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00c88990;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_2 + 0xe4) = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
LAB_00c88990:
  if (!bVar6) {
    do {
      lVar5 = *plVar1;
      lVar7 = *(long *)(param_2 + 0xe8);
      if (lVar5 != lVar9 || lVar7 != lVar2) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c88b48;
      }
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9;
        *(long *)(param_2 + 0xe4) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar6 = true;
joined_r0x00c88b48:
    if (!bVar6) {
      do {
        lVar9 = *plVar1;
        lVar2 = *(long *)(param_2 + 0xe8);
        if (lVar9 != lVar5 || lVar2 != lVar7) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar5 = lVar9;
          lVar7 = lVar2;
          goto joined_r0x00c88b48;
        }
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar5;
          *(long *)(param_2 + 0xe4) = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar6 = true;
      lVar5 = lVar9;
      lVar7 = lVar2;
      goto joined_r0x00c88b48;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0xf0));
  return plVar14;
LAB_00c88ac0:
  lVar5 = plVar13[0xc];
  lVar7 = plVar13[0xd];
  plVar14 = plVar13 + 0xb;
  if (lVar5 != lVar7) {
    fVar15 = *(float *)(lVar5 + 8) * *(float *)(lVar5 + 8);
    plVar14 = (long *)(lVar5 + 0xc);
    if (fVar15 <= param_1) {
      plVar14 = plVar13 + 0xb;
    }
    if ((lVar5 + 0x10 != lVar7) && (fVar15 <= param_1)) {
      lVar5 = lVar5 + 0x20;
      plVar13 = plVar14;
      do {
        fVar15 = *(float *)(lVar5 + -8) * *(float *)(lVar5 + -8);
        plVar14 = (long *)(lVar5 + -4);
        if (fVar15 <= param_1) {
          plVar14 = plVar13;
        }
      } while ((lVar7 != lVar5) && (lVar5 = lVar5 + 0x10, plVar13 = plVar14, fVar15 <= param_1));
    }
  }
  goto LAB_00c88954;
}


