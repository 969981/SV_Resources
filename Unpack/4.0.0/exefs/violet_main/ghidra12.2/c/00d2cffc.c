/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d2cffc; name: FUN_00d2cffc
 */


undefined1  [16] FUN_00d2cffc(long param_1,short param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  undefined1 auVar5 [16];
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  
  plVar1 = (long *)(param_1 + 0x450);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar8 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x458);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x458) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00d2d038:
  while ((lVar8 != 0 && (lVar6 != lVar8))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x460));
    do {
      lVar8 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x458);
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x458) = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar8 || *(long *)(param_1 + 0x458) != lVar9) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00d2d068;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x454) = lVar9 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_00d2d068:
  if (!bVar7) {
    lVar8 = lVar3;
    lVar9 = *(long *)(param_1 + 0x458);
    goto LAB_00d2d038;
  }
  puVar2 = (undefined8 *)
           (*(long *)(param_1 + 0x280) +
           (long)*(short *)(*(long *)(param_1 + 0xa0) + (long)param_2 * 2) * 0x40);
  uVar14 = puVar2[1];
  uVar11 = *puVar2;
  do {
    lVar6 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x458);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x458) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar9 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x458);
    if (lVar9 != lVar6 || lVar3 != lVar8) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00d2d0e0;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x454) = lVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_00d2d0e0:
  if (!bVar7) {
    do {
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x458);
      if (lVar6 != lVar9 || lVar8 != lVar3) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x00d2d1a4;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x454) = lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
joined_r0x00d2d1a4:
    if (!bVar7) {
      do {
        lVar9 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x458);
        if (lVar9 != lVar6 || lVar3 != lVar8) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar9;
          lVar8 = lVar3;
          goto joined_r0x00d2d1a4;
        }
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar6;
          *(long *)(param_1 + 0x454) = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar7 = true;
      lVar6 = lVar9;
      lVar8 = lVar3;
      goto joined_r0x00d2d1a4;
    }
  }
  fVar10 = (float)uVar11;
  fVar12 = (float)((ulong)uVar11 >> 0x20);
  fVar13 = (float)uVar14;
  fVar15 = (float)((ulong)uVar14 >> 0x20);
  auVar5._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x3e0) >> 0x20) * fVar10 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x3f0) >> 0x20) * fVar12 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x400) >> 0x20) * fVar13 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x410) >> 0x20) * fVar15;
  auVar5._0_4_ = (float)*(undefined8 *)(param_1 + 0x3e0) * fVar10 +
                 (float)*(undefined8 *)(param_1 + 0x3f0) * fVar12 +
                 (float)*(undefined8 *)(param_1 + 0x400) * fVar13 +
                 (float)*(undefined8 *)(param_1 + 0x410) * fVar15;
  auVar5._12_4_ =
       (float)((ulong)*(undefined8 *)(param_1 + 1000) >> 0x20) * fVar10 +
       (float)((ulong)*(undefined8 *)(param_1 + 0x3f8) >> 0x20) * fVar12 +
       (float)((ulong)*(undefined8 *)(param_1 + 0x408) >> 0x20) * fVar13 +
       (float)((ulong)*(undefined8 *)(param_1 + 0x418) >> 0x20) * fVar15;
  auVar5._8_4_ = (float)*(undefined8 *)(param_1 + 1000) * fVar10 +
                 (float)*(undefined8 *)(param_1 + 0x3f8) * fVar12 +
                 (float)*(undefined8 *)(param_1 + 0x408) * fVar13 +
                 (float)*(undefined8 *)(param_1 + 0x418) * fVar15;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x460));
  return auVar5;
}


