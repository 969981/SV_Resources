/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02776a90; name: FUN_02776a90
 */


void FUN_02776a90(long *param_1)

{
  short *psVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  bool bVar12;
  
  lVar9 = *param_1;
  if ((lVar9 == 0) || (*(short *)(lVar9 + 0x1a) == 0)) {
    return;
  }
  psVar1 = (short *)(lVar9 + 0x1a);
  sVar10 = *(short *)(lVar9 + 0x1a);
LAB_02776ad0:
  sVar5 = *psVar1;
  if (sVar5 == sVar10) {
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar12) {
      *psVar1 = sVar10 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_02776af4;
    bVar12 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_02776af4:
    bVar12 = false;
  }
  if (!bVar12) {
    sVar10 = sVar5;
    if (sVar5 == 0) {
      return;
    }
    goto LAB_02776ad0;
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if (lVar9 == 0) {
    return;
  }
  plVar11 = (long *)(lVar9 + -0x28);
  if (*(char *)(lVar9 + 0x30a) == '\0') goto LAB_02776c10;
  plVar2 = (long *)(lVar9 + 0x298);
  do {
    lVar8 = *plVar2;
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar12) {
      *plVar2 = lVar8;
      *(undefined8 *)(lVar9 + 0x2a0) = *(undefined8 *)(lVar9 + 0x2a0);
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 != lVar8) {
    lVar8 = nn::os::GetCurrentThread();
LAB_02776b40:
    if (*plVar2 == 0 && *(long *)(lVar9 + 0x2a0) == 0) goto code_r0x02776b4c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x2a8));
    do {
      if (*plVar2 != 0 || *(long *)(lVar9 + 0x2a0) != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x2a8));
          while (*plVar2 == 0 && *(long *)(lVar9 + 0x2a0) == 0) {
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar12) {
              *plVar2 = lVar8;
              *(undefined8 *)(lVar9 + 0x2a0) = 0;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_02776b54;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar12) {
        *plVar2 = lVar8;
        *(undefined8 *)(lVar9 + 0x2a0) = 0;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_02776b54:
    bVar12 = false;
    goto LAB_02776b58;
  }
  bVar12 = true;
LAB_02776b58:
  if ((*(long *)(lVar9 + 0x2b8) != 0) && (*(long *)(lVar9 + 0x2c0) == -1)) {
    FUN_00ed155c(plVar11,lVar9 + 0x2b8);
  }
  if (!bVar12) {
    do {
      lVar8 = *plVar2;
      lVar7 = *(long *)(lVar9 + 0x2a0);
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar12) {
        *plVar2 = lVar8;
        *(long *)(lVar9 + 0x2a0) = lVar7;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      lVar3 = *plVar2;
      lVar4 = *(long *)(lVar9 + 0x2a0);
      if (lVar3 != lVar8 || lVar4 != lVar7) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_02776c04;
      }
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar12) {
        *plVar2 = 0;
        *(long *)(lVar9 + 0x29c) = lVar7;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar12 = true;
LAB_02776c04:
    if (!bVar12) {
      do {
        lVar8 = *plVar2;
        lVar7 = *(long *)(lVar9 + 0x2a0);
        if (lVar8 != lVar3 || lVar7 != lVar4) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto joined_r0x02776c64;
        }
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar12) {
          *plVar2 = 0;
          *(long *)(lVar9 + 0x29c) = lVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar12 = true;
joined_r0x02776c64:
      if (!bVar12) {
        do {
          lVar3 = *plVar2;
          lVar4 = *(long *)(lVar9 + 0x2a0);
          if (lVar3 != lVar8 || lVar4 != lVar7) {
            bVar12 = false;
            ClearExclusiveLocal();
            lVar8 = lVar3;
            lVar7 = lVar4;
            goto joined_r0x02776c64;
          }
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar12) {
            *plVar2 = 0;
            *(long *)(lVar9 + 0x29c) = lVar7;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar12 = true;
        lVar8 = lVar3;
        lVar7 = lVar4;
        goto joined_r0x02776c64;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x2a8));
  }
LAB_02776c10:
                    /* WARNING: Could not recover jumptable at 0x02776c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar11 + 0x60))(plVar11);
  return;
code_r0x02776b4c:
  cVar6 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar12) {
    *plVar2 = lVar8;
    *(undefined8 *)(lVar9 + 0x2a0) = 0;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_02776b54;
  goto LAB_02776b40;
}


