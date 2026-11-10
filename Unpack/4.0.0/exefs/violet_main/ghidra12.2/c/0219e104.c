/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0219e104; name: FUN_0219e104
 */


void FUN_0219e104(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  bool bVar7;
  
  if ((*param_2 < *param_1) || (param_1[1] < *param_2)) {
    return;
  }
  pbVar1 = param_1 + 0x60;
  lVar6 = nn::os::GetCurrentThread();
  while (*(long *)pbVar1 == 0 && *(long *)(param_1 + 0x68) == 0) {
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar7) {
      *(long *)pbVar1 = lVar6;
      param_1[0x68] = 0;
      param_1[0x69] = 0;
      param_1[0x6a] = 0;
      param_1[0x6b] = 0;
      param_1[0x6c] = 0;
      param_1[0x6d] = 0;
      param_1[0x6e] = 0;
      param_1[0x6f] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_0219e170;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x70));
  do {
    if (*(long *)pbVar1 != 0 || *(long *)(param_1 + 0x68) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x70));
        while (*(long *)pbVar1 == 0 && *(long *)(param_1 + 0x68) == 0) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar7) {
            *(long *)pbVar1 = lVar6;
            param_1[0x68] = 0;
            param_1[0x69] = 0;
            param_1[0x6a] = 0;
            param_1[0x6b] = 0;
            param_1[0x6c] = 0;
            param_1[0x6d] = 0;
            param_1[0x6e] = 0;
            param_1[0x6f] = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0219e170;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar7) {
      *(long *)pbVar1 = lVar6;
      param_1[0x68] = 0;
      param_1[0x69] = 0;
      param_1[0x6a] = 0;
      param_1[0x6b] = 0;
      param_1[0x6c] = 0;
      param_1[0x6d] = 0;
      param_1[0x6e] = 0;
      param_1[0x6f] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0219e170:
  if ((*(ulong *)(param_1 + 0x50) >> ((ulong)*param_2 - (ulong)*param_1 & 0x3f) & 1) != 0) {
    if (0x3f < *(ulong *)(param_1 + 0x48)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    param_1[*(ulong *)(param_1 + 0x48) + 8] = *param_2;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
    *(ulong *)(param_1 + 0x50) =
         *(ulong *)(param_1 + 0x50) &
         (1L << ((ulong)*param_2 - (ulong)*param_1 & 0x3f) ^ 0xffffffffffffffffU);
    param_1[3] = param_1[3] - 1;
  }
  do {
    lVar6 = *(long *)pbVar1;
    lVar4 = *(long *)(param_1 + 0x68);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar7) {
      *(long *)pbVar1 = lVar6;
      *(long *)(param_1 + 0x68) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *(long *)(param_1 + 0x68);
    if (*(long *)pbVar1 != lVar6 || lVar2 != lVar4) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_0219e258;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar7) {
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      *(long *)(param_1 + 100) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_0219e258:
  if (!bVar7) {
    do {
      lVar6 = *(long *)pbVar1;
      lVar4 = *(long *)(param_1 + 0x68);
      if (lVar6 != *(long *)pbVar1 || lVar4 != lVar2) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x0219e2a0;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar7) {
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1[4] = 0;
        pbVar1[5] = 0;
        pbVar1[6] = 0;
        pbVar1[7] = 0;
        *(long *)(param_1 + 100) = lVar2;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = true;
joined_r0x0219e2a0:
    if (!bVar7) {
      do {
        lVar2 = *(long *)pbVar1;
        lVar3 = *(long *)(param_1 + 0x68);
        if (lVar2 != lVar6 || lVar3 != lVar4) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x0219e2a0;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
        if (bVar7) {
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          *(long *)(param_1 + 100) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar7 = true;
      lVar6 = lVar2;
      lVar4 = lVar3;
      goto joined_r0x0219e2a0;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x70));
  return;
}


