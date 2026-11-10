/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c516a0; name: FUN_00c516a0
 */


long FUN_00c516a0(long param_1,char *param_2)

{
  long *plVar1;
  long lVar2;
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
  
  plVar1 = (long *)(param_1 + 0x70);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar8 = *plVar1;
    lVar10 = *(long *)(param_1 + 0x78);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x78) = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00c516d8:
  while ((lVar8 != 0 && (lVar6 != lVar8))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
    do {
      lVar8 = *plVar1;
      lVar10 = *(long *)(param_1 + 0x78);
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x78) = lVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar8 || *(long *)(param_1 + 0x78) != lVar10) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00c51708;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x74) = lVar10 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_00c51708:
  if (!bVar7) {
    lVar8 = lVar2;
    lVar10 = *(long *)(param_1 + 0x78);
    goto LAB_00c516d8;
  }
  if ((*param_2 != '\0') && (uVar11 = *(ulong *)(param_1 + 0x10), uVar11 != 0)) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar9 = *(ulong *)(param_2 + 8);
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
    plVar14 = *(long **)(*(long *)(param_1 + 8) + uVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar14[1] == uVar9) {
            if (plVar14[2] == uVar9) goto LAB_00c517ac;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar13) goto LAB_00c51830;
          plVar14 = (long *)*plVar14;
          lVar6 = 0;
        } while (plVar14 != (long *)0x0);
        goto LAB_00c517b0;
      }
      do {
        uVar12 = plVar14[1];
        if (uVar12 == uVar9) {
          if (plVar14[2] == uVar9) goto LAB_00c517ac;
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
LAB_00c51830:
  lVar6 = 0;
LAB_00c517b0:
  do {
    lVar8 = *plVar1;
    lVar10 = *(long *)(param_1 + 0x78);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x78) = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x78);
    if (lVar2 != lVar8 || lVar3 != lVar10) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00c517ec;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x74) = lVar10 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_00c517ec:
  if (!bVar7) {
    do {
      lVar8 = *plVar1;
      lVar10 = *(long *)(param_1 + 0x78);
      if (lVar8 != lVar2 || lVar10 != lVar3) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c51880;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar2;
        *(long *)(param_1 + 0x74) = lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
joined_r0x00c51880:
    if (!bVar7) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x78);
        if (lVar2 != lVar8 || lVar3 != lVar10) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar8 = lVar2;
          lVar10 = lVar3;
          goto joined_r0x00c51880;
        }
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar8;
          *(long *)(param_1 + 0x74) = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar7 = true;
      lVar8 = lVar2;
      lVar10 = lVar3;
      goto joined_r0x00c51880;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x80));
  return lVar6;
LAB_00c517ac:
  lVar6 = plVar14[6];
  goto LAB_00c517b0;
}


