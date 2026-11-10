/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bbbe28; name: FUN_01bbbe28
 */


void FUN_01bbbe28(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 local_38;
  
  puVar3 = PTR_DAT_047d38f8;
  lVar6 = *(long *)PTR_DAT_047d38f8;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar6) {
    bVar7 = true;
LAB_01bbbe64:
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    local_38 = param_2;
    if (puVar1 < *(undefined8 **)(param_1 + 0x38)) {
      uVar8 = *(undefined8 *)(param_1 + 0x40);
      if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar5 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar5 == 0) {
        *puVar1 = param_2;
      }
      else {
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar8;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        *puVar1 = local_38;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      }
      *(undefined8 **)(param_1 + 0x30) = puVar1 + 1;
    }
    else {
      FUN_01a959a4(param_1 + 0x28,&local_38);
    }
    if (bVar7) {
      return;
    }
    *(undefined8 *)puVar3 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
    return;
  }
  uVar8 = nn::os::GetCurrentThread();
  while (*(long *)puVar3 == 0) {
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar7) {
      *(undefined8 *)puVar3 = uVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_01bbbf04;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
  do {
    if (*(long *)puVar3 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
        while (*(long *)puVar3 == 0) {
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar7) {
            *(undefined8 *)puVar3 = uVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01bbbf04;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar7) {
      *(undefined8 *)puVar3 = uVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01bbbf04:
  bVar7 = false;
  goto LAB_01bbbe64;
}


