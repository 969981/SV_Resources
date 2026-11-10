/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d4aba4; name: FUN_00d4aba4
 */


undefined * FUN_00d4aba4(long param_1,char *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  
  if (*param_2 == '\0') {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), puVar10 = PTR_DAT_047d3e30, iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    else {
      puVar10 = PTR_DAT_047d3e30;
    }
  }
  else {
    plVar1 = (long *)(param_1 + 0xd70);
    lVar6 = nn::os::GetCurrentThread();
    do {
      lVar8 = *plVar1;
      lVar9 = *(long *)(param_1 + 0xd78);
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0xd78) = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00d4abe4:
    while ((lVar8 != 0 && (lVar6 != lVar8))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd80));
      do {
        lVar8 = *plVar1;
        lVar9 = *(long *)(param_1 + 0xd78);
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar8;
          *(long *)(param_1 + 0xd78) = lVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    do {
      lVar2 = *plVar1;
      if (lVar2 != lVar8 || *(long *)(param_1 + 0xd78) != lVar9) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_00d4ac14;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0xd74) = lVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
LAB_00d4ac14:
    if (!bVar7) {
      lVar8 = lVar2;
      lVar9 = *(long *)(param_1 + 0xd78);
      goto LAB_00d4abe4;
    }
    iVar5 = *(int *)(param_2 + 4);
    lVar6 = *(long *)(param_1 + 0x38);
    do {
      lVar8 = *plVar1;
      lVar9 = *(long *)(param_1 + 0xd78);
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0xd78) = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar2 = *plVar1;
      lVar3 = *(long *)(param_1 + 0xd78);
      if (lVar2 != lVar8 || lVar3 != lVar9) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_00d4ac78;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0xd74) = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
LAB_00d4ac78:
    if (!bVar7) {
      do {
        lVar8 = *plVar1;
        lVar9 = *(long *)(param_1 + 0xd78);
        if (lVar8 != lVar2 || lVar9 != lVar3) {
          bVar7 = false;
          ClearExclusiveLocal();
          goto joined_r0x00d4ace4;
        }
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar2;
          *(long *)(param_1 + 0xd74) = lVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar7 = true;
joined_r0x00d4ace4:
      if (!bVar7) {
        do {
          lVar2 = *plVar1;
          lVar3 = *(long *)(param_1 + 0xd78);
          if (lVar2 != lVar8 || lVar3 != lVar9) {
            bVar7 = false;
            ClearExclusiveLocal();
            lVar8 = lVar2;
            lVar9 = lVar3;
            goto joined_r0x00d4ace4;
          }
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar8;
            *(long *)(param_1 + 0xd74) = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar7 = true;
        lVar8 = lVar2;
        lVar9 = lVar3;
        goto joined_r0x00d4ace4;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xd80));
    puVar10 = (undefined *)(lVar6 + (long)iVar5 * 0x1d0 + 0x28);
  }
  return puVar10;
}


