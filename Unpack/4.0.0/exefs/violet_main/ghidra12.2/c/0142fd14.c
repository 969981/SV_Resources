/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0142fd14; name: FUN_0142fd14
 */


void FUN_0142fd14(uint *param_1,uint *param_2)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  bool bVar7;
  
  if ((*param_2 < *param_1) || (param_1[1] < *param_2)) {
    return;
  }
  puVar1 = param_1 + 0x48;
  lVar6 = nn::os::GetCurrentThread();
  while (*(long *)puVar1 == 0 && *(long *)(param_1 + 0x4a) == 0) {
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *(long *)puVar1 = lVar6;
      param_1[0x4a] = 0;
      param_1[0x4b] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_0142fd6c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x4c));
  do {
    if (*(long *)puVar1 != 0 || *(long *)(param_1 + 0x4a) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x4c));
        while (*(long *)puVar1 == 0 && *(long *)(param_1 + 0x4a) == 0) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *(long *)puVar1 = lVar6;
            param_1[0x4a] = 0;
            param_1[0x4b] = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0142fd6c;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *(long *)puVar1 = lVar6;
      param_1[0x4a] = 0;
      param_1[0x4b] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0142fd6c:
  if ((*(ulong *)(param_1 + 0x46) >> ((ulong)(*param_2 - *param_1) & 0x3f) & 1) != 0) {
    if (0x3f < *(ulong *)(param_1 + 0x44)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    param_1[*(ulong *)(param_1 + 0x44) + 4] = *param_2;
    *(long *)(param_1 + 0x44) = *(long *)(param_1 + 0x44) + 1;
    *(ulong *)(param_1 + 0x46) =
         *(ulong *)(param_1 + 0x46) &
         (1L << ((ulong)(*param_2 - *param_1) & 0x3f) ^ 0xffffffffffffffffU);
    param_1[3] = param_1[3] - 1;
  }
  do {
    lVar6 = *(long *)puVar1;
    lVar4 = *(long *)(param_1 + 0x4a);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *(long *)puVar1 = lVar6;
      *(long *)(param_1 + 0x4a) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *(long *)(param_1 + 0x4a);
    if (*(long *)puVar1 != lVar6 || lVar2 != lVar4) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_0142fe54;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      puVar1[0] = 0;
      puVar1[1] = 0;
      *(long *)(param_1 + 0x49) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_0142fe54:
  if (!bVar7) {
    do {
      lVar6 = *(long *)puVar1;
      lVar4 = *(long *)(param_1 + 0x4a);
      if (lVar6 != *(long *)puVar1 || lVar4 != lVar2) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x0142feb0;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        *(long *)(param_1 + 0x49) = lVar2;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = true;
joined_r0x0142feb0:
    if (!bVar7) {
      do {
        lVar2 = *(long *)puVar1;
        lVar3 = *(long *)(param_1 + 0x4a);
        if (lVar2 != lVar6 || lVar3 != lVar4) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x0142feb0;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          puVar1[0] = 0;
          puVar1[1] = 0;
          *(long *)(param_1 + 0x49) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar7 = true;
      lVar6 = lVar2;
      lVar4 = lVar3;
      goto joined_r0x0142feb0;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x4c));
  return;
}


