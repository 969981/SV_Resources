/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e0eabc; name: FUN_00e0eabc
 */


void FUN_00e0eabc(int *param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  bool bVar7;
  
  if ((*param_2 < *param_1) || (param_1[1] < *param_2)) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x28);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x2a) == 0) {
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      param_1[0x2a] = 0;
      param_1[0x2b] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00e0eb28;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2c));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x2a) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2c));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x2a) == 0) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar6;
            param_1[0x2a] = 0;
            param_1[0x2b] = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00e0eb28;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      param_1[0x2a] = 0;
      param_1[0x2b] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00e0eb28:
  if ((*(ulong *)(param_1 + 0x26) >> ((ulong)(uint)(*param_2 - *param_1) & 0x3f) & 1) != 0) {
    if (0x1f < *(ulong *)(param_1 + 0x24)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    param_1[*(ulong *)(param_1 + 0x24) + 4] = *param_2;
    *(long *)(param_1 + 0x24) = *(long *)(param_1 + 0x24) + 1;
    *(ulong *)(param_1 + 0x26) =
         *(ulong *)(param_1 + 0x26) &
         (1L << ((ulong)(uint)(*param_2 - *param_1) & 0x3f) ^ 0xffffffffffffffffU);
    param_1[3] = param_1[3] + -1;
  }
  do {
    lVar6 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x2a);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x2a) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x2a);
    if (lVar2 != lVar6 || lVar3 != lVar4) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00e0ec10;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x29) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_00e0ec10:
  if (!bVar7) {
    do {
      lVar6 = *plVar1;
      lVar4 = *(long *)(param_1 + 0x2a);
      if (lVar6 != lVar2 || lVar4 != lVar3) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x00e0ec58;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x29) = lVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = true;
joined_r0x00e0ec58:
    if (!bVar7) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x2a);
        if (lVar2 != lVar6 || lVar3 != lVar4) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x00e0ec58;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x29) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar7 = true;
      lVar6 = lVar2;
      lVar4 = lVar3;
      goto joined_r0x00e0ec58;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2c));
  return;
}


