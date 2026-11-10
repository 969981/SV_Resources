/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0204d5dc; name: FUN_0204d5dc
 */


bool FUN_0204d5dc(long *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  short sVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  undefined1 auStack_38 [8];
  
  if (((((*param_2 != 0) && (lVar11 = *param_1, *(short *)(*param_2 + 0x1a) != 0)) &&
       (*param_2 != 0)) && ((*(short *)(*param_2 + 0x1a) != 0 && (lVar8 = *param_2, lVar8 != 0))))
     && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar9) {
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0204d684;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0204d684:
        bVar12 = false;
      }
      if (bVar12) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) {
          return false;
        }
        lVar5 = FUN_00e048ac(lVar8 + 0xe0,auStack_38);
        bVar12 = false;
        if (lVar5 == 0) goto LAB_0204d6e4;
        uVar6 = FUN_0204d800(lVar5);
        if ((((uVar6 & 1) == 0) || (uVar6 = FUN_01fdc8dc(lVar5), (uVar6 & 1) == 0)) ||
           (uVar6 = FUN_0204d808(lVar5), (uVar6 & 1) != 0)) {
          bVar12 = false;
          goto LAB_0204d6e4;
        }
        plVar7 = (long *)(lVar8 + 0xe8);
        lVar10 = *plVar7;
        lVar5 = nn::os::GetCurrentThread();
        if (lVar5 == lVar10) {
          bVar12 = true;
          goto LAB_0204d72c;
        }
        lVar5 = nn::os::GetCurrentThread();
        goto LAB_0204d718;
      }
      sVar9 = sVar2;
    } while (sVar2 != 0);
  }
  return false;
LAB_0204d718:
  if (*plVar7 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0xf0));
    do {
      if (*plVar7 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0xf0));
          while (*plVar7 == 0) {
            cVar3 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar12) {
              *plVar7 = lVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_0204d728;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar12) {
        *plVar7 = lVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_0204d728:
    bVar12 = false;
LAB_0204d72c:
    plVar7 = (long *)FUN_0204d820(*(undefined8 *)(lVar8 + 0x100),*(undefined8 *)(lVar8 + 0x108));
    if ((*(long **)(lVar8 + 0x108) == plVar7) || (*plVar7 == 0)) {
      plVar7 = (long *)FUN_0204d820(*(undefined8 *)(lVar8 + 0x138),*(undefined8 *)(lVar8 + 0x140));
      if (*(long **)(lVar8 + 0x140) == plVar7) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        if (*plVar7 != 0) {
          lVar5 = *plVar7 + -0x20;
        }
      }
    }
    else {
      lVar5 = *plVar7 + -0x20;
    }
    if (!bVar12) {
      *(undefined8 *)(lVar8 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0xf0));
    }
    bVar12 = false;
    if (lVar5 != 0) {
      iVar4 = FUN_0204d930(lVar5);
      bVar12 = iVar4 < *(int *)(param_1[1] + (ulong)*(uint *)(lVar11 + 0xf4));
    }
LAB_0204d6e4:
    (**(code **)(*(long *)(lVar8 + -0x28) + 0x60))((long *)(lVar8 + -0x28));
    return bVar12;
  }
  cVar3 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar12) {
    *plVar7 = lVar5;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_0204d728;
  goto LAB_0204d718;
}


