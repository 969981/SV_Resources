/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c6bb48; name: FUN_00c6bb48
 */


void FUN_00c6bb48(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  uint local_6c;
  undefined8 local_68;
  
  plVar8 = (long *)(param_1 + 0x128);
  local_68 = param_2;
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00c6bb90;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x130));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x130));
        while (*plVar8 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00c6bb90;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00c6bb90:
  plVar8 = (long *)(param_1 + 0x20);
  FUN_00c6bd20(plVar8,(*(long *)(param_1 + 0x28) - *plVar8 >> 4) + (ulong)param_3);
  puVar4 = PTR_LAB_047d3900;
  local_6c = 0;
  if (param_3 != 0) {
    do {
      uVar5 = local_6c;
      puVar1 = *(undefined8 **)(param_1 + 0x28);
      if (puVar1 < *(undefined8 **)(param_1 + 0x30)) {
        uVar9 = *(undefined8 *)(param_1 + 0x38);
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar4,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar7 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar7 == 0) {
          *puVar1 = local_68;
          *(uint *)(puVar1 + 1) = uVar5;
        }
        else {
          if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar9;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
          *puVar1 = local_68;
          *(uint *)(puVar1 + 1) = uVar5;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
        *(undefined8 **)(param_1 + 0x28) = puVar1 + 2;
      }
      else {
        FUN_00c6bf30(plVar8,&local_68,&local_6c);
      }
      local_6c = uVar5 + 1;
    } while (param_3 != local_6c);
  }
  *(undefined8 *)(param_1 + 0x128) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x130));
  return;
}


