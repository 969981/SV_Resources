/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0300e758; name: FUN_0300e758
 */


void FUN_0300e758(long param_1,ulong param_2)

{
  long *plVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  bool bVar10;
  uint uVar11;
  long lVar12;
  
  lVar7 = *(long *)(param_1 + 8);
  param_2 = param_2 & 0xffffff;
  lVar12 = param_2 * 0x10;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) - *(int *)(*(long *)(lVar7 + lVar12) + 0x15d4)
  ;
  lVar9 = *(long *)(lVar7 + lVar12);
  *(undefined8 *)(lVar9 + 0x140) = 0xffffffffffffffff;
  *(undefined4 *)(lVar9 + 0x148) = 0xffffff;
  plVar6 = *(long **)(lVar7 + lVar12);
  *(undefined8 *)(lVar7 + lVar12) = 0;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar1 = plVar6 + 2;
    do {
      lVar7 = *plVar1;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  uVar11 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) <= (int)uVar11) {
    return;
  }
  lVar7 = *(long *)(param_1 + 8);
  uVar8 = *(uint *)(lVar7 + param_2 * 0x10 + 8);
  if ((~uVar8 & 0xffffff) == 0) {
    return;
  }
  plVar6 = *(long **)(lVar7 + lVar12);
  if (plVar6 != (long *)0x0) {
    if (plVar6[1] != 0) {
      plVar1 = plVar6 + 2;
      do {
        lVar7 = *plVar1;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = lVar7 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
    lVar7 = *(long *)(param_1 + 8);
    uVar8 = *(uint *)(lVar7 + param_2 * 0x10 + 8);
  }
  *(uint *)(lVar7 + param_2 * 0x10 + 8) = uVar8 | 0xffffff;
  uVar4 = *(uint *)(param_1 + 0x24);
  uVar8 = uVar4 & 0xffffff;
  if (uVar8 == 0xffffff) {
    uVar8 = 0xffffffff;
  }
  puVar2 = (uint *)(param_1 + 0x24);
  *(uint *)(*(long *)(param_1 + 8) + param_2 * 0x10 + 0xc) = uVar8;
  uVar8 = *puVar2;
  if (uVar8 == uVar4) {
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar10) {
      *puVar2 = uVar4 & 0xff000000 | uVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') {
      bVar10 = true;
      goto joined_r0x0300e898;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  bVar10 = false;
joined_r0x0300e898:
  do {
    while( true ) {
      if (bVar10) {
        piVar3 = (int *)(param_1 + 0x28);
        do {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar10) {
            *piVar3 = *piVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        return;
      }
      uVar4 = uVar8 & 0xffffff;
      if (uVar4 == 0xffffff) {
        uVar4 = 0xffffffff;
      }
      *(uint *)(*(long *)(param_1 + 8) + param_2 * 0x10 + 0xc) = uVar4;
      uVar4 = *puVar2;
      if (uVar4 == uVar8) break;
      ClearExclusiveLocal();
LAB_0300e8e0:
      bVar10 = false;
      uVar8 = uVar4;
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar10) {
      *puVar2 = uVar8 & 0xff000000 | uVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_0300e8e0;
    bVar10 = true;
    uVar8 = uVar4;
  } while( true );
}


