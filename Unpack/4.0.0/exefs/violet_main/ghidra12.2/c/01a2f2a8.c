/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a2f2a8; name: FUN_01a2f2a8
 */


void FUN_01a2f2a8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  bool bVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 local_58;
  
  plVar8 = param_2 + 0x33;
  lVar6 = *plVar8;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar6) {
    plVar8 = (long *)0x0;
    bVar7 = true;
LAB_01a2f304:
    uVar5 = FUN_01a2f48c(param_1,*param_2,param_3);
    puVar1 = (undefined8 *)param_2[0x37];
    local_58 = uVar5;
    if (puVar1 == (undefined8 *)param_2[0x38]) {
      FUN_01163f20(param_2 + 0x36,&local_58);
    }
    else {
      uVar9 = param_2[0x39];
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar4 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar4 == 0) {
        *puVar1 = uVar5;
      }
      else {
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar9;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        *puVar1 = local_58;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      }
      param_2[0x37] = puVar1 + 1;
    }
    if (bVar7) {
      return;
    }
    *plVar8 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
    return;
  }
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar7) {
      *plVar8 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_01a2f300;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x34));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x34));
        while (*plVar8 == 0) {
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar7) {
            *plVar8 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01a2f300;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar7) {
      *plVar8 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01a2f300:
  bVar7 = false;
  goto LAB_01a2f304;
}


