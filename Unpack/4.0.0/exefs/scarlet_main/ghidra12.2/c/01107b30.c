/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01107b30; name: FUN_01107b30
 */


void FUN_01107b30(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  plVar1 = (long *)(param_1 + 0xbe0);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_01107b68;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xbe8));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xbe8));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01107b68;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01107b68:
  puVar6 = *(undefined8 **)(param_1 + 0xbb0);
  if (puVar6 == *(undefined8 **)(param_1 + 3000)) {
    FUN_01108b90(param_1 + 0xba8,param_2);
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0xbc0);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 != 0) {
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar7;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    }
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    if ((code *)param_2[2] != (code *)0x0) {
      (*(code *)param_2[2])(param_2 + 4,puVar6 + 4);
      uVar7 = param_2[3];
      puVar6[1] = param_2[1];
      puVar6[3] = uVar7;
      uVar7 = *param_2;
      puVar6[2] = param_2[2];
      *puVar6 = uVar7;
    }
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    *(undefined8 **)(param_1 + 0xbb0) = puVar6 + 0x10;
  }
  *(undefined8 *)(param_1 + 0xbe0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xbe8));
  return;
}


