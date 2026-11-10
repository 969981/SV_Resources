/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01819904; name: FUN_01819904
 */


void FUN_01819904(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  
  plVar1 = (long *)(param_1 + 0x130);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x138) == 0) {
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0x138) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_01819940;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x138) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x138) == 0) {
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar7;
            *(undefined8 *)(param_1 + 0x138) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01819940;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0x138) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01819940:
  lVar10 = *(long *)(param_1 + 600);
  lVar7 = *(long *)(param_1 + 0x250);
  uVar2 = 0;
  if (lVar10 - lVar7 != 0) {
    uVar2 = (lVar10 - lVar7 >> 3) * 0x33 - 1;
  }
  uVar11 = *(long *)(param_1 + 0x290) + *(long *)(param_1 + 0x288);
  if (uVar2 == uVar11) {
    FUN_01819bd4(param_1 + 0x248);
    uVar11 = *(long *)(param_1 + 0x288) + *(long *)(param_1 + 0x290);
    lVar7 = *(long *)(param_1 + 0x250);
    lVar10 = *(long *)(param_1 + 600);
  }
  if (lVar10 == lVar7) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    puVar12 = (undefined8 *)(*(long *)(lVar7 + (uVar11 / 0x33) * 8) + (uVar11 % 0x33) * 0x50);
  }
  uVar13 = *(undefined8 *)(param_1 + 0x298);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar7 != 0) {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar13;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  }
  *puVar12 = *param_2;
  puVar12[1] = param_2[1];
  puVar12[2] = param_2[2];
  plVar8 = (long *)param_2[3];
  puVar12[3] = plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  memcpy(puVar12 + 4,param_2 + 4,0x30);
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  *(long *)(param_1 + 0x290) = *(long *)(param_1 + 0x290) + 1;
  do {
    lVar7 = *plVar1;
    lVar10 = *(long *)(param_1 + 0x138);
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x138) = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x138);
    if (lVar3 != lVar7 || lVar4 != lVar10) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_01819ad0;
    }
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x134) = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar9 = true;
LAB_01819ad0:
  if (!bVar9) {
    do {
      lVar7 = *plVar1;
      lVar10 = *(long *)(param_1 + 0x138);
      if (lVar7 != lVar3 || lVar10 != lVar4) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x01819b90;
      }
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x134) = lVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar9 = true;
joined_r0x01819b90:
    if (!bVar9) {
      do {
        lVar3 = *plVar1;
        lVar4 = *(long *)(param_1 + 0x138);
        if (lVar3 != lVar7 || lVar4 != lVar10) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar7 = lVar3;
          lVar10 = lVar4;
          goto joined_r0x01819b90;
        }
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x134) = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar9 = true;
      lVar7 = lVar3;
      lVar10 = lVar4;
      goto joined_r0x01819b90;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x140));
  return;
}


