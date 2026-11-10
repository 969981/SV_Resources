/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cac8ac; name: FUN_00cac8ac
 */


void FUN_00cac8ac(long param_1,long *param_2,int param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  char cVar6;
  int *piVar7;
  bool bVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  
  iVar12 = 3;
  if (param_4 != 2) {
    iVar12 = 0;
  }
  plVar2 = (long *)(param_1 + 0x70);
  iVar5 = 0;
  if (param_4 != 0) {
    iVar5 = iVar12;
  }
  iVar12 = 2;
  if (param_4 != 1) {
    iVar12 = iVar5;
  }
  lVar10 = nn::os::GetCurrentThread();
  do {
    lVar11 = *plVar2;
    lVar14 = *(long *)(param_1 + 0x78);
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar11;
      *(long *)(param_1 + 0x78) = lVar14;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00cac90c:
  while ((lVar11 != 0 && (lVar10 != lVar11))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
    do {
      lVar11 = *plVar2;
      lVar14 = *(long *)(param_1 + 0x78);
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = lVar11;
        *(long *)(param_1 + 0x78) = lVar14;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  do {
    lVar3 = *plVar2;
    if (lVar3 != lVar11 || *(long *)(param_1 + 0x78) != lVar14) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00cac93c;
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar11;
      *(long *)(param_1 + 0x74) = lVar14 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar8 = true;
LAB_00cac93c:
  if (!bVar8) {
    lVar11 = lVar3;
    lVar14 = *(long *)(param_1 + 0x78);
    goto LAB_00cac90c;
  }
  lVar10 = *(long *)(param_1 + 0x30);
  lVar11 = *(long *)(param_1 + 0x38);
  if ((int)((ulong)(lVar11 - lVar10) >> 3) != 0) {
    uVar13 = 0;
    if (param_3 == 0) {
      do {
        iVar5 = *(int *)(*(long *)(param_1 + 0x90) + uVar13 * 4);
        if (iVar5 != 1) {
          plVar15 = (long *)*param_2;
          plVar4 = (long *)param_2[1];
          if (plVar15 != plVar4) {
            lVar10 = *(long *)(*(long *)(lVar10 + uVar13 * 8) + 0x38);
            bVar8 = lVar10 == *plVar15;
            if (((!bVar8 && plVar15 + 4 != plVar4) &&
                (bVar8 = lVar10 == *plVar15 || lVar10 == plVar15[4], lVar10 != plVar15[4])) &&
               (plVar15 + 8 != plVar4)) {
              plVar15 = plVar15 + 0xc;
              do {
                plVar1 = plVar15 + -4;
                bVar9 = plVar4 != plVar15;
                plVar15 = plVar15 + 4;
                bVar8 = (bool)(bVar8 | lVar10 == *plVar1);
              } while (lVar10 != *plVar1 && bVar9);
            }
            if (bVar8) goto LAB_00cacaa0;
          }
          if (iVar5 != iVar12) {
            if ((iVar12 == 3) || (iVar5 == 3)) {
              *(undefined1 *)(param_1 + 0x19a) = 1;
            }
            *(int *)(*(long *)(param_1 + 0x90) + uVar13 * 4) = iVar12;
          }
        }
LAB_00cacaa0:
        lVar10 = *(long *)(param_1 + 0x30);
        uVar13 = uVar13 + 1;
      } while (uVar13 < ((ulong)(*(long *)(param_1 + 0x38) - lVar10) >> 3 & 0xffffffff));
    }
    else {
      do {
        iVar5 = *(int *)(*(long *)(param_1 + 0x90) + uVar13 * 4);
        if (iVar5 != 1) {
          plVar15 = (long *)*param_2;
          plVar4 = (long *)param_2[1];
          if (plVar15 != plVar4) {
            lVar14 = *(long *)(*(long *)(lVar10 + uVar13 * 8) + 0x38);
            bVar8 = lVar14 == *plVar15;
            if (((!bVar8 && plVar15 + 4 != plVar4) &&
                (bVar8 = lVar14 == *plVar15 || lVar14 == plVar15[4], lVar14 != plVar15[4])) &&
               (plVar15 + 8 != plVar4)) {
              plVar15 = plVar15 + 0xc;
              do {
                plVar1 = plVar15 + -4;
                bVar9 = plVar4 != plVar15;
                plVar15 = plVar15 + 4;
                bVar8 = (bool)(bVar8 | lVar14 == *plVar1);
              } while (lVar14 != *plVar1 && bVar9);
            }
            if (((iVar5 != iVar12) && (param_3 == 1)) && (bVar8)) {
              if ((iVar12 == 3) || (iVar5 == 3)) {
                *(undefined1 *)(param_1 + 0x19a) = 1;
              }
              *(int *)(*(long *)(param_1 + 0x90) + uVar13 * 4) = iVar12;
              lVar10 = *(long *)(param_1 + 0x30);
              lVar11 = *(long *)(param_1 + 0x38);
            }
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < ((ulong)(lVar11 - lVar10) >> 3 & 0xffffffff));
    }
  }
  piVar7 = *(int **)(param_1 + 0x90);
  do {
    if (piVar7 == *(int **)(param_1 + 0x98)) goto LAB_00cacb30;
    iVar12 = *piVar7;
    piVar7 = piVar7 + 1;
  } while (iVar12 != 2);
  *(undefined1 *)(param_1 + 0x19c) = 1;
LAB_00cacb30:
  do {
    lVar10 = *plVar2;
    lVar11 = *(long *)(param_1 + 0x78);
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar10;
      *(long *)(param_1 + 0x78) = lVar11;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar14 = *plVar2;
    lVar3 = *(long *)(param_1 + 0x78);
    if (lVar14 != lVar10 || lVar3 != lVar11) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00cacb6c;
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar10;
      *(long *)(param_1 + 0x74) = lVar11 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar8 = true;
LAB_00cacb6c:
  if (!bVar8) {
    do {
      lVar10 = *plVar2;
      lVar11 = *(long *)(param_1 + 0x78);
      if (lVar10 != lVar14 || lVar11 != lVar3) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x00cacbdc;
      }
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = lVar14;
        *(long *)(param_1 + 0x74) = lVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar8 = true;
joined_r0x00cacbdc:
    if (!bVar8) {
      do {
        lVar14 = *plVar2;
        lVar3 = *(long *)(param_1 + 0x78);
        if (lVar14 != lVar10 || lVar3 != lVar11) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar10 = lVar14;
          lVar11 = lVar3;
          goto joined_r0x00cacbdc;
        }
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = lVar10;
          *(long *)(param_1 + 0x74) = lVar11 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar8 = true;
      lVar10 = lVar14;
      lVar11 = lVar3;
      goto joined_r0x00cacbdc;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x80));
  return;
}


