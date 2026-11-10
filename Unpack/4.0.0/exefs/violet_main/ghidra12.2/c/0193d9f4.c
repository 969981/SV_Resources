/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0193d9f4; name: FUN_0193d9f4
 */


undefined8 FUN_0193d9f4(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  short sVar6;
  
  if ((((*(long *)(param_1 + 0x128) != 0) && (*(short *)(*(long *)(param_1 + 0x128) + 0x1a) != 0))
      && (lVar4 = *(long *)(param_1 + 0x128), lVar4 != 0)) && (*(short *)(lVar4 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar4 + 0x1a);
    sVar6 = *(short *)(lVar4 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar6) {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0193db3c;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0193db3c:
        bVar5 = false;
      }
      if (bVar5) {
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 != 0) goto LAB_0193dda8;
        break;
      }
      sVar6 = sVar2;
    } while (sVar2 != 0);
  }
  if (((*(long *)(param_1 + 0x168) != 0) && (*(short *)(*(long *)(param_1 + 0x168) + 0x1a) != 0)) &&
     ((lVar4 = *(long *)(param_1 + 0x168), lVar4 != 0 && (*(short *)(lVar4 + 0x1a) != 0)))) {
    psVar1 = (short *)(lVar4 + 0x1a);
    sVar6 = *(short *)(lVar4 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar6) {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0193db84;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0193db84:
        bVar5 = false;
      }
      if (bVar5) {
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 != 0) goto LAB_0193dda8;
        break;
      }
      sVar6 = sVar2;
    } while (sVar2 != 0);
  }
  if (((*(long *)(param_1 + 0x1a8) != 0) && (*(short *)(*(long *)(param_1 + 0x1a8) + 0x1a) != 0)) &&
     ((lVar4 = *(long *)(param_1 + 0x1a8), lVar4 != 0 && (*(short *)(lVar4 + 0x1a) != 0)))) {
    psVar1 = (short *)(lVar4 + 0x1a);
    sVar6 = *(short *)(lVar4 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar6) {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0193dbcc;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0193dbcc:
        bVar5 = false;
      }
      if (bVar5) {
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 != 0) goto LAB_0193dda8;
        break;
      }
      sVar6 = sVar2;
    } while (sVar2 != 0);
  }
  if ((((*(long *)(param_1 + 0x1e8) != 0) && (*(short *)(*(long *)(param_1 + 0x1e8) + 0x1a) != 0))
      && (lVar4 = *(long *)(param_1 + 0x1e8), lVar4 != 0)) && (*(short *)(lVar4 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar4 + 0x1a);
    sVar6 = *(short *)(lVar4 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar6) {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0193dc14;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0193dc14:
        bVar5 = false;
      }
      if (bVar5) {
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 != 0) goto LAB_0193dda8;
        break;
      }
      sVar6 = sVar2;
    } while (sVar2 != 0);
  }
  if (((*(long *)(param_1 + 0x228) != 0) && (*(short *)(*(long *)(param_1 + 0x228) + 0x1a) != 0)) &&
     ((lVar4 = *(long *)(param_1 + 0x228), lVar4 != 0 && (*(short *)(lVar4 + 0x1a) != 0)))) {
    psVar1 = (short *)(lVar4 + 0x1a);
    sVar6 = *(short *)(lVar4 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar6) {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0193dc5c;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0193dc5c:
        bVar5 = false;
      }
      if (bVar5) {
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 != 0) goto LAB_0193dda8;
        break;
      }
      sVar6 = sVar2;
    } while (sVar2 != 0);
  }
  if (((*(long *)(param_1 + 0x268) != 0) && (*(short *)(*(long *)(param_1 + 0x268) + 0x1a) != 0)) &&
     ((lVar4 = *(long *)(param_1 + 0x268), lVar4 != 0 && (*(short *)(lVar4 + 0x1a) != 0)))) {
    psVar1 = (short *)(lVar4 + 0x1a);
    sVar6 = *(short *)(lVar4 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar6) {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0193dca4;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0193dca4:
        bVar5 = false;
      }
      if (bVar5) {
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 != 0) goto LAB_0193dda8;
        break;
      }
      sVar6 = sVar2;
    } while (sVar2 != 0);
  }
  if ((((*(long *)(param_1 + 0x2a8) != 0) && (*(short *)(*(long *)(param_1 + 0x2a8) + 0x1a) != 0))
      && (lVar4 = *(long *)(param_1 + 0x2a8), lVar4 != 0)) && (*(short *)(lVar4 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar4 + 0x1a);
    sVar6 = *(short *)(lVar4 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar6) {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0193dcec;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0193dcec:
        bVar5 = false;
      }
      if (bVar5) {
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 != 0) goto LAB_0193dda8;
        break;
      }
      sVar6 = sVar2;
    } while (sVar2 != 0);
  }
  if (((*(long *)(param_1 + 0x2e8) == 0) || (*(short *)(*(long *)(param_1 + 0x2e8) + 0x1a) == 0)) ||
     ((lVar4 = *(long *)(param_1 + 0x2e8), lVar4 == 0 || (*(short *)(lVar4 + 0x1a) == 0)))) {
    return 0;
  }
  psVar1 = (short *)(lVar4 + 0x1a);
  sVar6 = *(short *)(lVar4 + 0x1a);
  do {
    sVar2 = *psVar1;
    if (sVar2 == sVar6) {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_0193dd34;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0193dd34:
      bVar5 = false;
    }
    if (bVar5) {
      lVar4 = *(long *)(lVar4 + 0x10);
      if (lVar4 == 0) {
        return 0;
      }
LAB_0193dda8:
      (**(code **)(*(long *)(lVar4 + -0x28) + 0x60))((long *)(lVar4 + -0x28));
      return 1;
    }
    sVar6 = sVar2;
    if (sVar2 == 0) {
      return 0;
    }
  } while( true );
}


