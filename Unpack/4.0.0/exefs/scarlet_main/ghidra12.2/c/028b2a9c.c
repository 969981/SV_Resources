/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b2a9c; name: FUN_028b2a9c
 */


void FUN_028b2a9c(uint *param_1,uint *param_2)

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
  puVar1 = param_1 + 0x218;
  lVar7 = nn::os::GetCurrentThread();
  while (*(long *)puVar1 == 0 && *(long *)(param_1 + 0x21a) == 0) {
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *(long *)puVar1 = lVar7;
      param_1[0x21a] = 0;
      param_1[0x21b] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_028b2b08;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x21c));
  do {
    if (*(long *)puVar1 != 0 || *(long *)(param_1 + 0x21a) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x21c));
        while (*(long *)puVar1 == 0 && *(long *)(param_1 + 0x21a) == 0) {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *(long *)puVar1 = lVar7;
            param_1[0x21a] = 0;
            param_1[0x21b] = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_028b2b08;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *(long *)puVar1 = lVar7;
      param_1[0x21a] = 0;
      param_1[0x21b] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_028b2b08:
  uVar6 = *param_2 - *param_1;
  if ((*(ulong *)((long)param_1 + ((ulong)(uVar6 >> 3) & 0x1ffffff8) + 0x818) >>
       ((ulong)uVar6 & 0x3f) & 1) != 0) {
    if (0x1ff < *(ulong *)(param_1 + 0x204)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    param_1[*(ulong *)(param_1 + 0x204) + 4] = *param_2;
    *(long *)(param_1 + 0x204) = *(long *)(param_1 + 0x204) + 1;
    uVar9 = (ulong)(*param_2 - *param_1 >> 3) & 0x1ffffff8;
    *(ulong *)((long)param_1 + uVar9 + 0x818) =
         *(ulong *)((long)param_1 + uVar9 + 0x818) &
         (1L << ((ulong)(*param_2 - *param_1) & 0x3f) ^ 0xffffffffffffffffU);
    param_1[3] = param_1[3] - 1;
  }
  do {
    lVar7 = *(long *)puVar1;
    lVar4 = *(long *)(param_1 + 0x21a);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *(long *)puVar1 = lVar7;
      *(long *)(param_1 + 0x21a) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *(long *)(param_1 + 0x21a);
    if (*(long *)puVar1 != lVar7 || lVar2 != lVar4) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_028b2c0c;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      puVar1[0] = 0;
      puVar1[1] = 0;
      *(long *)(param_1 + 0x219) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_028b2c0c:
  if (!bVar8) {
    do {
      lVar7 = *(long *)puVar1;
      lVar4 = *(long *)(param_1 + 0x21a);
      if (lVar7 != *(long *)puVar1 || lVar4 != lVar2) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x028b2c54;
      }
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar8) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        *(long *)(param_1 + 0x219) = lVar2;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar8 = true;
joined_r0x028b2c54:
    if (!bVar8) {
      do {
        lVar2 = *(long *)puVar1;
        lVar3 = *(long *)(param_1 + 0x21a);
        if (lVar2 != lVar7 || lVar3 != lVar4) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar7 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x028b2c54;
        }
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          puVar1[0] = 0;
          puVar1[1] = 0;
          *(long *)(param_1 + 0x219) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar8 = true;
      lVar7 = lVar2;
      lVar4 = lVar3;
      goto joined_r0x028b2c54;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x21c));
  return;
}


