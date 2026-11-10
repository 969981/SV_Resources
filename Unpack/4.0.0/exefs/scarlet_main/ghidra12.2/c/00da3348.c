/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00da3348; name: FUN_00da3348
 */


void FUN_00da3348(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *local_38;
  
  param_1[2] = 0;
  puVar3 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  puVar3 = PTR_DAT_047d8c78;
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar6 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar6;
  param_1[4] = (long)(puVar3 + 0x88);
  plVar7 = param_1 + 5;
  *plVar7 = (long)(puVar3 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar7);
  *param_1 = (long)&DAT_045ec9c8;
  param_1[4] = (long)&PTR_LAB_045eca70;
  *plVar7 = (long)&DAT_045ecac0;
  lVar5 = *param_2;
  param_1[8] = (long)param_1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0xc] = lVar5;
  param_1[0xd] = 0x1fffffffffffffff;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = lVar5;
  param_1[0x14] = 0x1fffffffffffffff;
  param_1[0x15] = 0;
  lVar5 = *param_2;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x17] = (long)param_1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = lVar5;
  param_1[0x1c] = 0x1fffffffffffffff;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = lVar5;
  param_1[0x23] = 0x1fffffffffffffff;
  param_1[0x24] = 0;
  lVar5 = *param_2;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0;
  param_1[0x2a] = lVar5;
  param_1[0x2b] = 0x1fffffffffffffff;
  param_1[0x30] = 0;
  param_1[0x31] = lVar5;
  param_1[0x37] = 0x16;
  param_1[0x38] = 0;
  param_1[0x26] = (long)param_1;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0x1fffffffffffffff;
  param_1[0x33] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)((long)param_1 + 0x1e4) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x3b,0,1);
  param_1[0x3f] = 0;
  param_1[0x3d] = (long)param_2;
  param_1[0x3e] = 0;
  FUN_00da3640(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  FUN_00da3640(param_1 + 0x48);
  *(undefined1 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)((long)param_1 + 0x284) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x4f,0,1);
  *(undefined2 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  FUN_00da3640(param_1 + 0x54);
  *(undefined1 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  FUN_00da3640(param_1 + 0x5c);
  *(undefined1 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  *(undefined4 *)((long)param_1 + 0x324) = 1;
  nn::os::InitializeLightEvent(param_1 + 99,0,1);
  *(undefined4 *)(param_1 + 0x69) = 1;
  param_1[0x6a] = 1;
  lVar6 = param_1[0x3d];
  plVar7 = (long *)(lVar6 + 0x50);
  *(undefined2 *)(param_1 + 0x65) = 0;
  param_1[0x66] = (long)param_1;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x68] = (long)param_1;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  local_38 = param_1;
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00da356c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x58));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x58));
        while (*plVar7 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00da356c;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00da356c:
  FUN_00e227ac(lVar6 + 0xd0,&local_38);
  *(undefined8 *)(lVar6 + 0x50) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x58));
  return;
}


