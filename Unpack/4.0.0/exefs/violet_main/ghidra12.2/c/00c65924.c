/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c65924; name: FUN_00c65924
 */


void FUN_00c65924(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar4 != 0))
  {
    FUN_00100190(&LAB_009d802c,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  lVar10 = *(long *)PTR_DAT_047d6c28;
  *(long *)PTR_DAT_047d6c30 = lVar10;
  plVar1 = (long *)(lVar10 + 0x350);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar6 = *plVar1;
    lVar9 = *(long *)(lVar10 + 0x358);
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(long *)(lVar10 + 0x358) = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    while ((lVar6 != 0 && (lVar5 != lVar6))) {
      nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x360));
      do {
        lVar6 = *plVar1;
        lVar9 = *(long *)(lVar10 + 0x358);
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar6;
          *(long *)(lVar10 + 0x358) = lVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    do {
      lVar2 = *plVar1;
      if (lVar2 != lVar6 || *(long *)(lVar10 + 0x358) != lVar9) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto LAB_00c659b8;
      }
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar6;
        *(long *)(lVar10 + 0x354) = lVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar8 = true;
LAB_00c659b8:
    lVar6 = lVar2;
    lVar9 = *(long *)(lVar10 + 0x358);
  } while (!bVar8);
  if (*(char *)(param_1 + 0x150) != '\0') {
    plVar7 = *(long **)(param_1 + 0x148);
    do {
      lVar5 = *plVar7;
      lVar10 = plVar7[1];
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar8) {
        *plVar7 = lVar5;
        plVar7[1] = lVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar6 = *plVar7;
      lVar9 = plVar7[1];
      if (lVar6 != lVar5 || lVar9 != lVar10) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto LAB_00c65a0c;
      }
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar8) {
        *plVar7 = lVar5;
        *(long *)((long)plVar7 + 4) = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar8 = true;
LAB_00c65a0c:
    if (!bVar8) {
      do {
        lVar5 = *plVar7;
        lVar10 = plVar7[1];
        if (lVar5 != lVar6 || lVar10 != lVar9) {
          bVar8 = false;
          ClearExclusiveLocal();
          goto joined_r0x00c65a7c;
        }
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar8) {
          *plVar7 = lVar6;
          *(long *)((long)plVar7 + 4) = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar8 = true;
joined_r0x00c65a7c:
      if (!bVar8) {
        do {
          lVar6 = *plVar7;
          lVar9 = plVar7[1];
          if (lVar6 != lVar5 || lVar9 != lVar10) {
            bVar8 = false;
            ClearExclusiveLocal();
            lVar5 = lVar6;
            lVar10 = lVar9;
            goto joined_r0x00c65a7c;
          }
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar8) {
            *plVar7 = lVar5;
            *(long *)((long)plVar7 + 4) = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        bVar8 = true;
        lVar5 = lVar6;
        lVar10 = lVar9;
        goto joined_r0x00c65a7c;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar7 + 2));
  }
  *(long **)(param_1 + 0x148) = plVar1;
  *(undefined1 *)(param_1 + 0x150) = 1;
  return;
}


