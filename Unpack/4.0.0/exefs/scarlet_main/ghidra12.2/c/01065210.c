/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01065210; name: FUN_01065210
 */


short * FUN_01065210(undefined8 *param_1,short param_2,int param_3)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  short *psVar7;
  short *psVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_64 [4];
  
  piVar1 = (int *)((long)param_1 + 0x9c);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar3 = param_3 + 3U & 0xfffffffc;
  uVar10 = (ulong)uVar3;
  plVar2 = param_1 + 1;
  uVar11 = (ulong)(uVar3 + 4);
  do {
    psVar8 = (short *)param_1[1];
    psVar7 = (short *)*param_1;
    if (psVar8 < psVar7) {
      if ((ulong)((long)psVar7 - (long)psVar8) <= uVar11) goto LAB_0106534c;
      while ((short *)*plVar2 == psVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = (long)psVar8 + uVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB_0106531c;
      }
    }
    else if (uVar11 < (ulong)(param_1[3] - (long)psVar8)) {
      while ((short *)*plVar2 == psVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = (long)psVar8 + uVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB_0106531c;
      }
    }
    else {
      if ((ulong)((long)psVar7 - param_1[2]) <= uVar11) goto LAB_0106534c;
      while ((short *)*plVar2 == psVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = param_1[2] + uVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          if (psVar8 + 2 <= (short *)param_1[3]) {
            psVar8[1] = 0x3c;
            *psVar8 = (short)param_1[3] - (short)psVar8;
          }
          psVar8 = (short *)param_1[2];
          goto LAB_0106531c;
        }
      }
    }
    ClearExclusiveLocal();
  } while( true );
LAB_0106531c:
  if (psVar8 != (short *)0x0) {
LAB_01065320:
    psVar8[1] = param_2;
    *psVar8 = (short)uVar3;
    return psVar8;
  }
LAB_0106534c:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    puVar6 = PTR_DAT_047e6d30;
  } while (cVar4 != '\0');
LAB_01065370:
  if (*(uint *)(param_1 + 4) < uVar3) {
    return (short *)0x0;
  }
  nn::os::LockMutex((MutexType *)puVar6);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    psVar8 = (short *)param_1[1];
    psVar7 = (short *)*param_1;
    if (psVar8 < psVar7) {
      if ((ulong)((long)psVar7 - (long)psVar8) <= uVar11) goto LAB_01065454;
      while ((short *)*plVar2 == psVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = (long)psVar8 + uVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB_01065450;
      }
    }
    else if (uVar11 < (ulong)(param_1[3] - (long)psVar8)) {
      while ((short *)*plVar2 == psVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = (long)psVar8 + uVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB_01065450;
      }
    }
    else {
      if ((ulong)((long)psVar7 - param_1[2]) <= uVar11) goto LAB_01065454;
      while ((short *)*plVar2 == psVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = param_1[2] + uVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          if (psVar8 + 2 <= (short *)param_1[3]) {
            psVar8[1] = 0x3c;
            *psVar8 = (short)param_1[3] - (short)psVar8;
          }
          psVar8 = (short *)param_1[2];
          goto LAB_01065450;
        }
      }
    }
    ClearExclusiveLocal();
  } while( true );
LAB_01065450:
  if (psVar8 == (short *)0x0) {
LAB_01065454:
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (0 < *piVar1) {
      uVar9 = 0;
      do {
        nn::os::SleepThread((uVar9 >> 7) * 1000000);
        uVar9 = (ulong)((int)uVar9 + 1);
      } while (0 < *piVar1);
    }
    DataMemoryBarrier(2,3);
    FUN_0344fd18(param_1,1,auStack_64);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      psVar8 = (short *)param_1[1];
      psVar7 = (short *)*param_1;
      if (psVar8 < psVar7) {
        if ((ulong)((long)psVar7 - (long)psVar8) <= uVar11) goto LAB_01065574;
        while ((short *)*plVar2 == psVar8) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = (long)psVar8 + uVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01065570;
        }
      }
      else if (uVar11 < (ulong)(param_1[3] - (long)psVar8)) {
        while ((short *)*plVar2 == psVar8) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = (long)psVar8 + uVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01065570;
        }
      }
      else {
        if ((ulong)((long)psVar7 - param_1[2]) <= uVar11) goto LAB_01065574;
        while ((short *)*plVar2 == psVar8) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = param_1[2] + uVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            if (psVar8 + 2 <= (short *)param_1[3]) {
              psVar8[1] = 0x3c;
              *psVar8 = (short)param_1[3] - (short)psVar8;
            }
            psVar8 = (short *)param_1[2];
            goto LAB_01065570;
          }
        }
      }
      ClearExclusiveLocal();
    } while( true );
  }
  nn::os::UnlockMutex((MutexType *)PTR_DAT_047e6d30);
  goto LAB_01065320;
LAB_01065570:
  if (psVar8 == (short *)0x0) {
LAB_01065574:
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    psVar8 = (short *)0x0;
  }
  nn::os::UnlockMutex((MutexType *)puVar6);
  if (psVar8 != (short *)0x0) goto LAB_01065320;
  goto LAB_01065370;
}


