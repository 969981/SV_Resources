/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017cad0c; name: FUN_017cad0c
 */


undefined8 FUN_017cad0c(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  bool bVar10;
  
  if (((*PTR_DAT_047d8c40 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c40);
  }
  lVar7 = *(long *)PTR_DAT_047d8c48;
  *(long *)PTR_DAT_047d8c50 = lVar7;
  lVar7 = *(long *)(lVar7 + 0x360);
  plVar1 = (long *)(lVar7 + 0x10);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(lVar7 + 0x18) == 0) {
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar8;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_017cadbc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x20));
  do {
    if (*plVar1 != 0 || *(long *)(lVar7 + 0x18) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x20));
        while (*plVar1 == 0 && *(long *)(lVar7 + 0x18) == 0) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar8;
            *(undefined8 *)(lVar7 + 0x18) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_017cadbc;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar8;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_017cadbc:
  FUN_00d04214(lVar7,0);
  uVar9 = FUN_017caee8(lVar7);
  do {
    lVar8 = *plVar1;
    lVar4 = *(long *)(lVar7 + 0x18);
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar8;
      *(long *)(lVar7 + 0x18) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(lVar7 + 0x18);
    if (lVar2 != lVar8 || lVar3 != lVar4) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_017cae5c;
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = 0;
      *(long *)(lVar7 + 0x14) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar10 = true;
LAB_017cae5c:
  if (!bVar10) {
    do {
      lVar8 = *plVar1;
      lVar4 = *(long *)(lVar7 + 0x18);
      if (lVar8 != lVar2 || lVar4 != lVar3) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x017caea8;
      }
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = 0;
        *(long *)(lVar7 + 0x14) = lVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar10 = true;
joined_r0x017caea8:
    if (!bVar10) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(lVar7 + 0x18);
        if (lVar2 != lVar8 || lVar3 != lVar4) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar8 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x017caea8;
        }
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = 0;
          *(long *)(lVar7 + 0x14) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar10 = true;
      lVar8 = lVar2;
      lVar4 = lVar3;
      goto joined_r0x017caea8;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x20));
  return uVar9;
}


