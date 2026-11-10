/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f3d3b0; name: FUN_00f3d3b0
 */


void FUN_00f3d3b0(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  bool bVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long local_58;
  undefined8 *local_50;
  
  plVar1 = (long *)(param_1 + 0xb200);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0xb208) == 0) {
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0xb208) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00f3d3fc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb210));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0xb208) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb210));
        while (*plVar1 == 0 && *(long *)(param_1 + 0xb208) == 0) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar7;
            *(undefined8 *)(param_1 + 0xb208) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00f3d3fc;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0xb208) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00f3d3fc:
  plVar8 = (long *)FUN_00d1e658(param_3);
  puVar2 = (ulong *)PTR_DAT_047d8b70;
  if (*plVar8 != 0) {
    puVar2 = (ulong *)(*plVar8 + 0x30);
  }
  uVar15 = *(ulong *)(param_1 + 0xb260);
  if (uVar15 == 0) {
LAB_00f3d4b8:
    puVar13 = (undefined8 *)0x0;
    puVar17 = (undefined8 *)0x0;
  }
  else {
    uVar12 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar11 = *puVar2;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar16 = uVar15 - 1 & uVar11;
    }
    else if (uVar11 < uVar15) {
      uVar16 = uVar11;
    }
    else {
      uVar16 = 0;
      if (uVar15 != 0) {
        uVar16 = uVar11 / uVar15;
      }
      uVar16 = uVar11 - uVar16 * uVar15;
    }
    puVar13 = *(undefined8 **)(*(long *)(param_1 + 0xb258) + uVar16 * 8);
    if ((puVar13 == (undefined8 *)0x0) ||
       (puVar13 = (undefined8 *)*puVar13, puVar13 == (undefined8 *)0x0)) goto LAB_00f3d4b8;
    puVar14 = puVar13;
    if (uVar12 < 2) {
      do {
        if (puVar13[1] == uVar11) {
          if (puVar13[2] == uVar11) goto LAB_00f3d55c;
        }
        else if ((puVar13[1] & uVar15 - 1) != uVar16) break;
        puVar13 = (undefined8 *)*puVar13;
      } while (puVar13 != (undefined8 *)0x0);
      goto LAB_00f3d4b8;
    }
LAB_00f3d514:
    puVar13 = puVar14;
    uVar12 = puVar13[1];
    if (uVar12 != uVar11) goto LAB_00f3d530;
    if (puVar13[2] != uVar11) goto LAB_00f3d548;
LAB_00f3d55c:
    puVar17 = puVar13;
    while (puVar17 = (undefined8 *)*puVar17, puVar17 != (undefined8 *)0x0) {
      if (puVar17[2] != uVar11) break;
    }
  }
LAB_00f3d580:
  do {
    if (puVar13 == puVar17) goto LAB_00f3d5ac;
    if (puVar13[3] == param_3) {
      FUN_00f3d250(&local_58,(long *)(param_1 + 0xb258));
      lVar7 = local_58;
      local_58 = 0;
      if (lVar7 != 0) {
        plVar8 = (long *)*local_50;
        uVar15 = (**(code **)(*plVar8 + 0xf8))(plVar8);
        if (((uVar15 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar8 + 0x18))(plVar8,lVar7,0x20,8);
        }
        else {
          FUN_00c48fe8(plVar8,lVar7,0x20,8);
        }
      }
      goto LAB_00f3d5ac;
    }
    puVar13 = (undefined8 *)*puVar13;
  } while( true );
LAB_00f3d530:
  if (uVar15 <= uVar12) {
    uVar6 = 0;
    if (uVar15 != 0) {
      uVar6 = uVar12 / uVar15;
    }
    uVar12 = uVar12 - uVar6 * uVar15;
  }
  if (uVar12 != uVar16) goto LAB_00f3d4b8;
LAB_00f3d548:
  puVar14 = (undefined8 *)*puVar13;
  puVar13 = (undefined8 *)0x0;
  puVar17 = (undefined8 *)0x0;
  if (puVar14 == (undefined8 *)0x0) goto LAB_00f3d580;
  goto LAB_00f3d514;
LAB_00f3d5ac:
  do {
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_1 + 0xb208);
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0xb208) = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = *(long *)(param_1 + 0xb208);
    if (lVar3 != lVar7 || lVar4 != lVar9) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_00f3d5e8;
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = 0;
      *(long *)(param_1 + 0xb204) = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar10 = true;
LAB_00f3d5e8:
  if (!bVar10) {
    do {
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_1 + 0xb208);
      if (lVar7 != lVar3 || lVar9 != lVar4) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x00f3d6b0;
      }
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = 0;
        *(long *)(param_1 + 0xb204) = lVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar10 = true;
joined_r0x00f3d6b0:
    if (!bVar10) {
      do {
        lVar3 = *plVar1;
        lVar4 = *(long *)(param_1 + 0xb208);
        if (lVar3 != lVar7 || lVar4 != lVar9) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar7 = lVar3;
          lVar9 = lVar4;
          goto joined_r0x00f3d6b0;
        }
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = 0;
          *(long *)(param_1 + 0xb204) = lVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar10 = true;
      lVar7 = lVar3;
      lVar9 = lVar4;
      goto joined_r0x00f3d6b0;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xb210));
  return;
}


