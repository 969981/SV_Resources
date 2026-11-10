/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010b7f48; name: FUN_010b7f48
 */


void FUN_010b7f48(uint *param_1,uint *param_2)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  bool bVar8;
  ulong uVar9;
  
  if ((*param_2 < *param_1) || (param_1[1] < *param_2)) {
    return;
  }
  puVar1 = param_1 + 0x110;
  lVar7 = nn::os::GetCurrentThread();
  while (*(long *)puVar1 == 0 && *(long *)(param_1 + 0x112) == 0) {
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *(long *)puVar1 = lVar7;
      param_1[0x112] = 0;
      param_1[0x113] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_010b7fa0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x114));
  do {
    if (*(long *)puVar1 != 0 || *(long *)(param_1 + 0x112) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x114));
        while (*(long *)puVar1 == 0 && *(long *)(param_1 + 0x112) == 0) {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *(long *)puVar1 = lVar7;
            param_1[0x112] = 0;
            param_1[0x113] = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_010b7fa0;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *(long *)puVar1 = lVar7;
      param_1[0x112] = 0;
      param_1[0x113] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_010b7fa0:
  uVar6 = *param_2 - *param_1;
  if ((*(ulong *)((long)param_1 + ((ulong)(uVar6 >> 3) & 0x1ffffff8) + 0x418) >>
       ((ulong)uVar6 & 0x3f) & 1) != 0) {
    if (0xff < *(ulong *)(param_1 + 0x104)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    param_1[*(ulong *)(param_1 + 0x104) + 4] = *param_2;
    *(long *)(param_1 + 0x104) = *(long *)(param_1 + 0x104) + 1;
    uVar9 = (ulong)(*param_2 - *param_1 >> 3) & 0x1ffffff8;
    *(ulong *)((long)param_1 + uVar9 + 0x418) =
         *(ulong *)((long)param_1 + uVar9 + 0x418) &
         (1L << ((ulong)(*param_2 - *param_1) & 0x3f) ^ 0xffffffffffffffffU);
    param_1[3] = param_1[3] - 1;
  }
  do {
    lVar7 = *(long *)puVar1;
    lVar4 = *(long *)(param_1 + 0x112);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *(long *)puVar1 = lVar7;
      *(long *)(param_1 + 0x112) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *(long *)(param_1 + 0x112);
    if (*(long *)puVar1 != lVar7 || lVar2 != lVar4) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_010b80a4;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      puVar1[0] = 0;
      puVar1[1] = 0;
      *(long *)(param_1 + 0x111) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_010b80a4:
  if (!bVar8) {
    do {
      lVar7 = *(long *)puVar1;
      lVar4 = *(long *)(param_1 + 0x112);
      if (lVar7 != *(long *)puVar1 || lVar4 != lVar2) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x010b8100;
      }
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar8) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        *(long *)(param_1 + 0x111) = lVar2;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar8 = true;
joined_r0x010b8100:
    if (!bVar8) {
      do {
        lVar2 = *(long *)puVar1;
        lVar3 = *(long *)(param_1 + 0x112);
        if (lVar2 != lVar7 || lVar3 != lVar4) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar7 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x010b8100;
        }
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          puVar1[0] = 0;
          puVar1[1] = 0;
          *(long *)(param_1 + 0x111) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar8 = true;
      lVar7 = lVar2;
      lVar4 = lVar3;
      goto joined_r0x010b8100;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x114));
  return;
}


