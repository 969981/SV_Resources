/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c87f80; name: FUN_00c87f80
 */


long * FUN_00c87f80(float param_1,long param_2,ulong *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  float fVar16;
  
  plVar1 = (long *)(param_2 + 0xe0);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar8 = *plVar1;
    lVar10 = *(long *)(param_2 + 0xe8);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_2 + 0xe8) = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00c87fc0:
  while ((lVar8 != 0 && (lVar6 != lVar8))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xf0));
    do {
      lVar8 = *plVar1;
      lVar10 = *(long *)(param_2 + 0xe8);
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(param_2 + 0xe8) = lVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar8 || *(long *)(param_2 + 0xe8) != lVar10) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00c87ff0;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_2 + 0xe4) = lVar10 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_00c87ff0:
  if (!bVar7) {
    lVar8 = lVar3;
    lVar10 = *(long *)(param_2 + 0xe8);
    goto LAB_00c87fc0;
  }
  uVar11 = *(ulong *)(param_2 + 0x10);
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar9 = *param_3;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar9;
    }
    else if (uVar9 < uVar11) {
      uVar13 = uVar9;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar9 / uVar11;
      }
      uVar13 = uVar9 - uVar13 * uVar11;
    }
    plVar14 = *(long **)(*(long *)(param_2 + 8) + uVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar14[1] == uVar9) {
            if (plVar14[2] == uVar9) goto LAB_00c88100;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar13) goto LAB_00c880b0;
          plVar14 = (long *)*plVar14;
          plVar15 = (long *)0x0;
        } while (plVar14 != (long *)0x0);
        goto LAB_00c88160;
      }
      do {
        uVar12 = plVar14[1];
        if (uVar12 == uVar9) {
          if (plVar14[2] == uVar9) goto LAB_00c88100;
        }
        else {
          if (uVar11 <= uVar12) {
            uVar5 = 0;
            if (uVar11 != 0) {
              uVar5 = uVar12 / uVar11;
            }
            uVar12 = uVar12 - uVar5 * uVar11;
          }
          if (uVar12 != uVar13) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
LAB_00c880b0:
  plVar15 = (long *)0x0;
LAB_00c88160:
  do {
    lVar6 = *plVar1;
    lVar8 = *(long *)(param_2 + 0xe8);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_2 + 0xe8) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar10 = *plVar1;
    lVar3 = *(long *)(param_2 + 0xe8);
    if (lVar10 != lVar6 || lVar3 != lVar8) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00c8819c;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_2 + 0xe4) = lVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_00c8819c:
  if (!bVar7) {
    do {
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_2 + 0xe8);
      if (lVar6 != lVar10 || lVar8 != lVar3) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c8820c;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar10;
        *(long *)(param_2 + 0xe4) = lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
joined_r0x00c8820c:
    if (!bVar7) {
      do {
        lVar10 = *plVar1;
        lVar3 = *(long *)(param_2 + 0xe8);
        if (lVar10 != lVar6 || lVar3 != lVar8) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar10;
          lVar8 = lVar3;
          goto joined_r0x00c8820c;
        }
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar6;
          *(long *)(param_2 + 0xe4) = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar7 = true;
      lVar6 = lVar10;
      lVar8 = lVar3;
      goto joined_r0x00c8820c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0xf0));
  return plVar15;
LAB_00c88100:
  lVar6 = plVar14[0xd];
  lVar8 = plVar14[0xe];
  plVar15 = plVar14 + 0xb;
  if (lVar6 != lVar8) {
    fVar16 = *(float *)(lVar6 + 8) * *(float *)(lVar6 + 8);
    plVar2 = (long *)(lVar6 + 0xc);
    if (fVar16 <= param_1) {
      plVar2 = plVar14 + 0xb;
    }
    plVar15 = plVar2;
    if ((lVar6 + 0x18 != lVar8) && (fVar16 <= param_1)) {
      fVar16 = *(float *)(lVar6 + 0x20) * *(float *)(lVar6 + 0x20);
      plVar15 = (long *)(lVar6 + 0x24);
      if (fVar16 <= param_1) {
        plVar15 = plVar2;
      }
      if ((lVar6 + 0x30 != lVar8) && (fVar16 <= param_1)) {
        lVar6 = lVar6 + 0x48;
        plVar14 = plVar15;
        do {
          fVar16 = *(float *)(lVar6 + -0x10) * *(float *)(lVar6 + -0x10);
          plVar15 = (long *)(lVar6 + -0xc);
          if (fVar16 <= param_1) {
            plVar15 = plVar14;
          }
        } while ((lVar8 != lVar6) && (lVar6 = lVar6 + 0x18, plVar14 = plVar15, fVar16 <= param_1));
      }
    }
  }
  goto LAB_00c88160;
}


