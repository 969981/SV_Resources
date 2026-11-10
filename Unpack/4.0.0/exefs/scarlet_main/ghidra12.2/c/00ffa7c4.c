/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ffa7c4; name: FUN_00ffa7c4
 */


void FUN_00ffa7c4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  plVar1 = (long *)(param_1 + 0x30);
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar6 = *plVar1;
    lVar10 = *(long *)(param_1 + 0x38);
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x38) = lVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00ffa804:
  while ((lVar6 != 0 && (lVar4 != lVar6))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x40));
    do {
      lVar6 = *plVar1;
      lVar10 = *(long *)(param_1 + 0x38);
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0x38) = lVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar7 = *plVar1;
    if (lVar7 != lVar6 || *(long *)(param_1 + 0x38) != lVar10) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_00ffa834;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x34) = lVar10 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_00ffa834:
  if (!bVar5) {
    lVar6 = lVar7;
    lVar10 = *(long *)(param_1 + 0x38);
    goto LAB_00ffa804;
  }
  lVar6 = *(long *)(param_1 + 0x58);
  for (lVar4 = *(long *)(param_1 + 0x50); lVar4 != lVar6; lVar4 = lVar4 + 0x38) {
    lVar10 = *(long *)(lVar4 + 8);
    if (lVar10 != lVar4) {
      puVar2 = param_2 + 4;
      do {
        lVar7 = *(long *)(lVar10 + 0x10);
        for (lVar11 = *(long *)(lVar7 + 0x70); lVar11 != lVar7 + 0x68;
            lVar11 = *(long *)(lVar11 + 8)) {
          lVar8 = *(long *)(lVar11 + 0x10);
          if ((int)((ulong)(*(long *)(lVar8 + 0x58) - *(long *)(lVar8 + 0x50)) >> 3) != 0) {
            if (*(char *)(**(long **)(lVar8 + 0x50) + 0x128) != '\0') {
              (*(code *)*param_2)(puVar2,**(long **)(lVar8 + 0x50) + 0x128);
              lVar8 = *(long *)(lVar11 + 0x10);
            }
            if ((*(long *)(lVar8 + 0x58) - *(long *)(lVar8 + 0x50) & 0x7fffffff0U) != 0) {
              lVar9 = *(long *)(*(long *)(lVar8 + 0x50) + 8);
              if (*(char *)(lVar9 + 0x128) != '\0') {
                (*(code *)*param_2)(puVar2,lVar9 + 0x128);
                lVar8 = *(long *)(lVar11 + 0x10);
              }
              if (0x10 < (*(long *)(lVar8 + 0x58) - *(long *)(lVar8 + 0x50) & 0x7fffffff8U)) {
                uVar12 = 2;
                do {
                  lVar9 = *(long *)(*(long *)(lVar8 + 0x50) + uVar12 * 8);
                  if (*(char *)(lVar9 + 0x128) != '\0') {
                    (*(code *)*param_2)(puVar2,lVar9 + 0x128);
                    lVar8 = *(long *)(lVar11 + 0x10);
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar12 < ((ulong)(*(long *)(lVar8 + 0x58) - *(long *)(lVar8 + 0x50)) >> 3 &
                                  0xffffffff));
              }
            }
          }
        }
        lVar10 = *(long *)(lVar10 + 8);
      } while (lVar10 != lVar4);
    }
  }
  do {
    lVar4 = *plVar1;
    lVar6 = *(long *)(param_1 + 0x38);
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x38) = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar10 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x38);
    if (lVar10 != lVar4 || lVar7 != lVar6) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_00ffa954;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x34) = lVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_00ffa954:
  if (!bVar5) {
    do {
      lVar4 = *plVar1;
      lVar6 = *(long *)(param_1 + 0x38);
      if (lVar4 != lVar10 || lVar6 != lVar7) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto joined_r0x00ffa9c0;
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10;
        *(long *)(param_1 + 0x34) = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar5 = true;
joined_r0x00ffa9c0:
    if (!bVar5) {
      do {
        lVar10 = *plVar1;
        lVar7 = *(long *)(param_1 + 0x38);
        if (lVar10 != lVar4 || lVar7 != lVar6) {
          bVar5 = false;
          ClearExclusiveLocal();
          lVar4 = lVar10;
          lVar6 = lVar7;
          goto joined_r0x00ffa9c0;
        }
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar4;
          *(long *)(param_1 + 0x34) = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar5 = true;
      lVar4 = lVar10;
      lVar6 = lVar7;
      goto joined_r0x00ffa9c0;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x40));
  return;
}


