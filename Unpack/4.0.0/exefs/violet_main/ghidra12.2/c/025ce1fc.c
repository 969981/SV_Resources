/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025ce1fc; name: FUN_025ce1fc
 */


void FUN_025ce1fc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar4 = FUN_011ef6ec();
  if ((uVar4 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  plVar1 = (long *)(param_2 + 0x40);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar8 = *(long *)(param_2 + 0x48);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_2 + 0x48) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_025ce23c:
  while ((lVar7 != 0 && (lVar5 != lVar7))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
    do {
      lVar7 = *plVar1;
      lVar8 = *(long *)(param_2 + 0x48);
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_2 + 0x48) = lVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar7 || *(long *)(param_2 + 0x48) != lVar8) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_025ce26c;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_2 + 0x44) = lVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
LAB_025ce26c:
  if (!bVar6) {
    lVar7 = lVar2;
    lVar8 = *(long *)(param_2 + 0x48);
    goto LAB_025ce23c;
  }
  lVar5 = *(long *)(param_2 + 0x38);
  uVar13 = *(undefined8 *)(lVar5 + 0xa0);
  uVar15 = *(undefined8 *)(lVar5 + 0xb8);
  uVar14 = *(undefined8 *)(lVar5 + 0xb0);
  uVar10 = *(undefined8 *)(lVar5 + 200);
  uVar9 = *(undefined8 *)(lVar5 + 0xc0);
  uVar12 = *(undefined8 *)(lVar5 + 0xd8);
  uVar11 = *(undefined8 *)(lVar5 + 0xd0);
  param_1[1] = *(undefined8 *)(lVar5 + 0xa8);
  *param_1 = uVar13;
  param_1[3] = uVar15;
  param_1[2] = uVar14;
  param_1[5] = uVar10;
  param_1[4] = uVar9;
  param_1[7] = CONCAT44(0x3f800000,(int)uVar12);
  param_1[6] = uVar11;
  *(undefined1 *)(param_1 + 8) = 1;
  do {
    lVar5 = *plVar1;
    lVar7 = *(long *)(param_2 + 0x48);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_2 + 0x48) = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar8 = *plVar1;
    lVar2 = *(long *)(param_2 + 0x48);
    if (lVar8 != lVar5 || lVar2 != lVar7) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_025ce2fc;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_2 + 0x44) = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
LAB_025ce2fc:
  if (!bVar6) {
    do {
      lVar5 = *plVar1;
      lVar7 = *(long *)(param_2 + 0x48);
      if (lVar5 != lVar8 || lVar7 != lVar2) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x025ce360;
      }
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8;
        *(long *)(param_2 + 0x44) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar6 = true;
joined_r0x025ce360:
    if (!bVar6) {
      do {
        lVar8 = *plVar1;
        lVar2 = *(long *)(param_2 + 0x48);
        if (lVar8 != lVar5 || lVar2 != lVar7) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar5 = lVar8;
          lVar7 = lVar2;
          goto joined_r0x025ce360;
        }
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar5;
          *(long *)(param_2 + 0x44) = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar6 = true;
      lVar5 = lVar8;
      lVar7 = lVar2;
      goto joined_r0x025ce360;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x50));
  return;
}


