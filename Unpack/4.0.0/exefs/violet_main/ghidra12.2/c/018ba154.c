/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018ba154; name: FUN_018ba154
 */


void FUN_018ba154(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  plVar1 = (long *)(param_1 + 0x70);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar9 = *plVar1;
    lVar6 = *(long *)(param_1 + 0x78);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x78) = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_018ba198:
  while ((lVar9 != 0 && (lVar5 != lVar9))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
    do {
      lVar9 = *plVar1;
      lVar6 = *(long *)(param_1 + 0x78);
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x78) = lVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar9 || *(long *)(param_1 + 0x78) != lVar6) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_018ba1c8;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x74) = lVar6 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_018ba1c8:
  if (!bVar7) {
    lVar9 = lVar2;
    lVar6 = *(long *)(param_1 + 0x78);
    goto LAB_018ba198;
  }
  lVar5 = *(long *)(param_1 + 0x30);
  if ((int)((ulong)(*(long *)(param_1 + 0x38) - lVar5) >> 3) != 0) {
    uVar12 = 0;
    do {
      uVar3 = *(uint *)param_2[1];
      lVar9 = *(long *)(lVar5 + uVar12 * 8);
      lVar5 = *(long *)(*param_2 + 0xe8);
      uVar10 = (*(long *)(*param_2 + 0xf0) - lVar5 >> 3) * 0x38e38e39;
      if ((int)uVar10 != 0) {
        uVar8 = uVar10 & 0xffffffff;
        FUN_00c75684(*(undefined8 *)(lVar9 + 200),0,lVar5 + 0x38);
        if ((((uVar8 != 1) &&
             (FUN_00c75684(*(undefined8 *)(lVar9 + 200),1,lVar5 + 0x80), uVar8 != 2)) &&
            (FUN_00c75684(*(undefined8 *)(lVar9 + 200),2,lVar5 + 200), uVar8 != 3)) &&
           ((FUN_00c75684(*(undefined8 *)(lVar9 + 200),3,lVar5 + 0x110), uVar8 != 4 &&
            (FUN_00c75684(*(undefined8 *)(lVar9 + 200),4,lVar5 + 0x158), uVar8 != 5)))) {
          lVar6 = lVar5 + 0x1a0;
          uVar11 = 5;
          do {
            FUN_00c75684(*(undefined8 *)(lVar9 + 200),uVar11 & 0xffffffff,lVar6);
            uVar11 = uVar11 + 1;
            lVar6 = lVar6 + 0x48;
          } while (uVar8 != uVar11);
        }
      }
      if ((uVar3 >> 1 & 1) != 0) {
        FUN_00c752dc(lVar9,lVar5,uVar10 & 0xffffffff);
      }
      lVar5 = *(long *)(param_1 + 0x30);
      uVar12 = uVar12 + 1;
    } while (uVar12 < ((ulong)(*(long *)(param_1 + 0x38) - lVar5) >> 3 & 0xffffffff));
  }
  do {
    lVar5 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x78);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x78) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar6 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x78);
    if (lVar6 != lVar5 || lVar2 != lVar9) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto joined_r0x018ba350;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x74) = lVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
joined_r0x018ba350:
  do {
    if (bVar7) {
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x80));
      return;
    }
    do {
      lVar5 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x78);
      if (lVar5 != lVar6 || lVar9 != lVar2) {
        bVar7 = false;
        ClearExclusiveLocal();
        lVar6 = lVar5;
        lVar2 = lVar9;
        goto joined_r0x018ba350;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0x74) = lVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
    lVar6 = lVar5;
    lVar2 = lVar9;
  } while( true );
}


