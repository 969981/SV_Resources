/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010f7f40; name: FUN_010f7f40
 */


void FUN_010f7f40(long param_1,byte param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  FUN_00eaabc4();
  plVar1 = (long *)(param_1 + 0x1b0);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x1b8);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x1b8) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    while ((lVar7 != 0 && (lVar5 != lVar7))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c0));
      do {
        lVar7 = *plVar1;
        lVar8 = *(long *)(param_1 + 0x1b8);
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar7;
          *(long *)(param_1 + 0x1b8) = lVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    do {
      lVar2 = *plVar1;
      if (lVar2 != lVar7 || *(long *)(param_1 + 0x1b8) != lVar8) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_010f7fbc;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x1b4) = lVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar6 = true;
LAB_010f7fbc:
    lVar7 = lVar2;
    lVar8 = *(long *)(param_1 + 0x1b8);
  } while (!bVar6);
  lVar5 = *(long *)(param_1 + 0xf0);
  if (*(long *)(param_1 + 0xf8) != lVar5) {
    uVar10 = 0;
    do {
      if ((*(char *)param_3[1] == '\0') || (*(long *)(lVar5 + uVar10 * 0x38 + 0x10) == *param_3)) {
        *(byte *)(lVar5 + uVar10 * 0x38 + 0x30) = param_2 & 1;
        puVar9 = *(undefined8 **)(param_1 + 0x168);
        puVar3 = *(undefined8 **)(param_1 + 0x170);
        if (puVar9 != puVar3) {
          FUN_010f81d0(*puVar9,param_2 & 1,uVar10);
          if (puVar9 + 1 != puVar3) {
            FUN_010f81d0(puVar9[1],param_2 & 1,uVar10);
            for (puVar9 = puVar9 + 2; puVar9 != puVar3; puVar9 = puVar9 + 1) {
              FUN_010f81d0(*puVar9,param_2 & 1,uVar10);
            }
          }
        }
      }
      lVar5 = *(long *)(param_1 + 0xf0);
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (uVar10 < (ulong)((*(long *)(param_1 + 0xf8) - lVar5 >> 3) * 0x6db6db6db6db6db7));
  }
  do {
    lVar5 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x1b8);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x1b8) = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar8 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x1b8);
    if (lVar8 != lVar5 || lVar2 != lVar7) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_010f810c;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x1b4) = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_010f810c:
  if (!bVar6) {
    do {
      lVar5 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x1b8);
      if (lVar5 != lVar8 || lVar7 != lVar2) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x010f817c;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x1b4) = lVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar6 = true;
joined_r0x010f817c:
    if (!bVar6) {
      do {
        lVar8 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x1b8);
        if (lVar8 != lVar5 || lVar2 != lVar7) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar5 = lVar8;
          lVar7 = lVar2;
          goto joined_r0x010f817c;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar5;
          *(long *)(param_1 + 0x1b4) = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar6 = true;
      lVar5 = lVar8;
      lVar7 = lVar2;
      goto joined_r0x010f817c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1c0));
  return;
}


