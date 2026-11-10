/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ff699c; name: FUN_00ff699c
 */


undefined1  [16] FUN_00ff699c(long param_1,long *param_2)

{
  long *plVar1;
  LightEventType *pLVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  LightEventType *pLVar11;
  ulong uVar12;
  ulong unaff_x25;
  uint uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  
  plVar1 = (long *)(param_1 + 0x30);
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x38);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x38) = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  pLVar2 = (LightEventType *)(param_1 + 0x40);
LAB_00ff69e0:
  while ((lVar7 != 0 && (lVar4 != lVar7))) {
    nn::os::WaitLightEvent(pLVar2);
    do {
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x38);
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x38) = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar14 = *plVar1;
    if (lVar14 != lVar7 || *(long *)(param_1 + 0x38) != lVar9) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00ff6a10;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x34) = lVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
LAB_00ff6a10:
  if (!bVar6) {
    lVar7 = lVar14;
    lVar9 = *(long *)(param_1 + 0x38);
    goto LAB_00ff69e0;
  }
  lVar4 = *(long *)(param_1 + 0x50);
  lVar7 = *(long *)(param_1 + 0x58);
  pLVar11 = pLVar2;
  if (lVar4 == lVar7) {
    uVar12 = 0;
  }
  else {
    lVar14 = *param_2;
    uVar12 = 0;
    lVar9 = lVar4;
    do {
      lVar10 = *(long *)(lVar9 + 8);
      lVar5 = lVar10;
      if (lVar9 != lVar10) {
        lVar8 = *(long *)(lVar10 + 0x10);
        while (lVar8 != lVar14) {
          lVar5 = *(long *)(lVar5 + 8);
          if (lVar9 == lVar5) goto LAB_00ff6a70;
          lVar8 = *(long *)(lVar5 + 0x10);
        }
      }
      if (lVar9 != lVar5) {
        if (lVar10 == lVar5) {
          uVar13 = 0;
        }
        else {
          uVar13 = 1;
          for (lVar10 = *(long *)(lVar10 + 8); lVar10 != lVar5; lVar10 = *(long *)(lVar10 + 8)) {
            uVar13 = uVar13 + 1;
          }
          if ((int)uVar13 < 0) goto LAB_00ff6a70;
        }
        lVar5 = FUN_0277e0f0(lVar4,lVar7,lVar9);
        unaff_x25 = (ulong)(uint)((int)((ulong)(lVar5 - lVar4) >> 3) * -0x49249249);
        uVar12 = 1;
        pLVar11 = (LightEventType *)(ulong)uVar13;
      }
LAB_00ff6a70:
      lVar9 = lVar9 + 0x38;
    } while (lVar9 != lVar7);
  }
  do {
    lVar4 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x38);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x38) = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar9 = *plVar1;
    lVar14 = *(long *)(param_1 + 0x38);
    if (lVar9 != lVar4 || lVar14 != lVar7) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00ff6b34;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x34) = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
LAB_00ff6b34:
  if (!bVar6) {
    do {
      lVar4 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x38);
      if (lVar4 != lVar9 || lVar7 != lVar14) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x00ff6bb8;
      }
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x34) = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar6 = true;
joined_r0x00ff6bb8:
    if (!bVar6) {
      do {
        lVar9 = *plVar1;
        lVar14 = *(long *)(param_1 + 0x38);
        if (lVar9 != lVar4 || lVar14 != lVar7) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar4 = lVar9;
          lVar7 = lVar14;
          goto joined_r0x00ff6bb8;
        }
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar4;
          *(long *)(param_1 + 0x34) = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar6 = true;
      lVar4 = lVar9;
      lVar7 = lVar14;
      goto joined_r0x00ff6bb8;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  auVar15._8_8_ = uVar12 | (long)pLVar11 << 0x20;
  auVar15._0_8_ = uVar12 | unaff_x25 << 0x20;
  return auVar15;
}


