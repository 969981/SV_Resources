/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f207f4; name: FUN_00f207f4
 */


void FUN_00f207f4(long param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  bool bVar12;
  ulong *puVar13;
  ulong *puVar14;
  long *plVar15;
  undefined1 auStack_78 [24];
  
  plVar11 = (long *)(param_1 + 0xb360);
  lVar10 = *plVar11;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar10) {
    plVar11 = (long *)0x0;
    bVar12 = true;
  }
  else {
    lVar3 = nn::os::GetCurrentThread();
    do {
      if (*plVar11 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb368));
          while (*plVar11 == 0) {
            cVar1 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar12) {
              *plVar11 = lVar3;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00f2084c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar1 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar12) {
        *plVar11 = lVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00f2084c:
    bVar12 = false;
  }
  puVar13 = *(ulong **)(param_2 + 0x780);
  puVar14 = *(ulong **)(param_2 + 0x788);
  if (puVar13 == puVar14) {
LAB_00f20a20:
    if (!bVar12) {
      *plVar11 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar11 + 1));
      return;
    }
    return;
  }
LAB_00f2086c:
  uVar8 = *(ulong *)(param_1 + 0xb380);
  if (uVar8 == 0) {
LAB_00f20a0c:
    plVar4 = (long *)0x0;
    plVar15 = (long *)0x0;
  }
  else {
    uVar6 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar5 = *puVar13;
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar9 = uVar8 - 1 & uVar5;
    }
    else if (uVar5 < uVar8) {
      uVar9 = uVar5;
    }
    else {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar5 / uVar8;
      }
      uVar9 = uVar5 - uVar9 * uVar8;
    }
    plVar7 = *(long **)(*(long *)(param_1 + 0xb378) + uVar9 * 8);
    if ((plVar7 == (long *)0x0) || (plVar7 = (long *)*plVar7, plVar7 == (long *)0x0))
    goto LAB_00f20a0c;
    if (uVar6 < 2) {
      do {
        if (plVar7[1] == uVar5) {
          plVar4 = plVar7;
          if (plVar7[2] == uVar5) goto LAB_00f2096c;
        }
        else if ((plVar7[1] & uVar8 - 1) != uVar9) goto LAB_00f20a0c;
        plVar7 = (long *)*plVar7;
        plVar4 = (long *)0x0;
        plVar15 = (long *)0x0;
      } while (plVar7 != (long *)0x0);
    }
    else {
      do {
        plVar4 = plVar7;
        uVar6 = plVar4[1];
        if (uVar6 == uVar5) {
          if (plVar4[2] == uVar5) goto LAB_00f2096c;
        }
        else {
          if (uVar8 <= uVar6) {
            uVar2 = 0;
            if (uVar8 != 0) {
              uVar2 = uVar6 / uVar8;
            }
            uVar6 = uVar6 - uVar2 * uVar8;
          }
          if (uVar6 != uVar9) goto LAB_00f20a0c;
        }
        plVar7 = (long *)*plVar4;
        plVar4 = (long *)0x0;
        plVar15 = (long *)0x0;
      } while (plVar7 != (long *)0x0);
    }
  }
  goto LAB_00f20988;
LAB_00f2096c:
  plVar15 = plVar4;
  do {
    plVar15 = (long *)*plVar15;
    if (plVar15 == (long *)0x0) break;
  } while (plVar15[2] == uVar5);
LAB_00f20988:
  if (plVar4 != plVar15) {
    do {
      if ((plVar4[3] == 0) || (*(short *)(plVar4[3] + 0x1a) == 0)) {
LAB_00f2099c:
        plVar4 = (long *)*plVar4;
        FUN_014e19a4(auStack_78,(long *)(param_1 + 0xb378));
        FUN_00dfb8a4(auStack_78);
      }
      else {
        lVar3 = 0;
        if (plVar4[3] != 0) {
          lVar10 = *(long *)(plVar4[3] + 0x10);
          lVar3 = 0;
          if (lVar10 != 0) {
            lVar3 = lVar10 + -0x28;
          }
        }
        if (lVar3 == param_2) goto LAB_00f2099c;
        plVar4 = (long *)*plVar4;
      }
    } while (plVar4 != plVar15);
  }
  puVar13 = puVar13 + 2;
  if (puVar13 == puVar14) goto LAB_00f20a20;
  goto LAB_00f2086c;
}


