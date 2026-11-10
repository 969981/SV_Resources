/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02714ec0; name: FUN_02714ec0
 */


void FUN_02714ec0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  bool bVar9;
  ulong uVar10;
  
  plVar1 = (long *)(param_1 + 0x70);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar6 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x78);
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x78) = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02714ef8:
  while ((lVar6 != 0 && (lVar5 != lVar6))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
    do {
      lVar6 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x78);
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0x78) = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar6 || *(long *)(param_1 + 0x78) != lVar7) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_02714f28;
    }
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x74) = lVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar9 = true;
LAB_02714f28:
  if (!bVar9) {
    lVar6 = lVar2;
    lVar7 = *(long *)(param_1 + 0x78);
    goto LAB_02714ef8;
  }
  lVar5 = *(long *)(param_1 + 0x30);
  if ((int)((ulong)(*(long *)(param_1 + 0x38) - lVar5) >> 3) != 0) {
    uVar10 = 0;
    do {
      pbVar8 = (byte *)*param_2;
      if (*pbVar8 == 0) {
        bVar4 = FUN_0271524c(*(undefined8 *)(lVar5 + uVar10 * 8));
        pbVar8 = (byte *)*param_2;
      }
      else {
        bVar4 = 1;
      }
      *pbVar8 = bVar4 & 1;
      uVar10 = uVar10 + 1;
      lVar5 = *(long *)(param_1 + 0x30);
    } while (uVar10 < ((ulong)(*(long *)(param_1 + 0x38) - lVar5) >> 3 & 0xffffffff));
  }
  do {
    lVar5 = *plVar1;
    lVar6 = *(long *)(param_1 + 0x78);
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x78) = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar7 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x78);
    if (lVar7 != lVar5 || lVar2 != lVar6) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto joined_r0x02714fdc;
    }
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x74) = lVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar9 = true;
joined_r0x02714fdc:
  do {
    if (bVar9) {
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x80));
      return;
    }
    do {
      lVar5 = *plVar1;
      lVar6 = *(long *)(param_1 + 0x78);
      if (lVar5 != lVar7 || lVar6 != lVar2) {
        bVar9 = false;
        ClearExclusiveLocal();
        lVar7 = lVar5;
        lVar2 = lVar6;
        goto joined_r0x02714fdc;
      }
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x74) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar9 = true;
    lVar7 = lVar5;
    lVar2 = lVar6;
  } while( true );
}


