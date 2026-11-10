/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e5400c; name: FUN_00e5400c
 */


undefined8 FUN_00e5400c(code *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined1 *local_160;
  code *local_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 auStack_140 [96];
  code *local_e0;
  code *local_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined1 *local_c0 [13];
  undefined8 local_58;
  
  local_c0[0] = (undefined1 *)&local_160;
  lVar4 = *(long *)(param_1 + 0x1c8);
  bVar5 = true;
  param_1[0x448] = (code)0x1;
  for (; (lVar4 != 0 && (lVar4 = *(long *)(lVar4 + 0x10), lVar4 != 0));
      lVar4 = *(long *)(lVar4 + 0x1a0)) {
    *(undefined1 *)(lVar4 + 0x420) = 1;
  }
  param_1[0x450] = (code)0x1;
  local_160 = &LAB_02b52078;
  local_158 = FUN_02b52084;
  local_150 = &LAB_02b52088;
  puStack_148 = &LAB_02b5208c;
  param_1[0x44f] = (code)0x0;
  local_e0 = (code *)PTR_FUN_047db0a8;
  local_d8 = (code *)PTR_FUN_047db0b0;
  pcVar8 = param_1 + 0x1d8;
  local_d0 = PTR_LAB_047db0b8;
  puStack_c8 = PTR_LAB_047db0c0;
  lVar6 = *(long *)pcVar8;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar6) {
    pcVar8 = (code *)0x0;
LAB_00e540e8:
    puVar1 = *(undefined8 **)(param_1 + 0x1f8);
    for (puVar7 = *(undefined8 **)(param_1 + 0x1f0); puVar7 != puVar1; puVar7 = puVar7 + 1) {
      local_58 = *puVar7;
      (*local_e0)(local_c0,&local_58);
    }
    if (!bVar5) {
      *(long *)pcVar8 = 0;
      nn::os::SignalLightEvent((LightEventType *)(pcVar8 + 8));
    }
    pcVar8 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = (undefined *)0x0;
      puStack_c8 = (undefined *)0x0;
      local_e0 = (code *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar8)(local_c0);
    }
    pcVar8 = local_158;
    if (local_158 != (code *)0x0) {
      local_150 = (undefined1 *)0x0;
      puStack_148 = (undefined1 *)0x0;
      local_160 = (undefined1 *)0x0;
      local_158 = (code *)0x0;
      (*pcVar8)(auStack_140);
    }
    if (param_1[1099] == (code)0x0) {
      param_1[1099] = (code)0x1;
      if (((*PTR_DAT_047d89c8 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d89c8), iVar3 != 0)) {
        FUN_00100190(PTR_LAB_047d9110,PTR_DAT_047d89d0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d89c8);
      }
      lVar4 = *(long *)PTR_DAT_047d89d0;
      *(long *)PTR_DAT_047d89d8 = lVar4;
      local_e0 = param_1;
      FUN_00e54244(*(undefined8 *)(lVar4 + 0x30),&local_e0);
    }
    return 1;
  }
  lVar4 = nn::os::GetCurrentThread();
  while (*(long *)pcVar8 == 0) {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
    if (bVar5) {
      *(long *)pcVar8 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00e540e4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e0));
  do {
    if (*(long *)pcVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e0));
        while (*(long *)pcVar8 == 0) {
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
          if (bVar5) {
            *(long *)pcVar8 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00e540e4;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
    if (bVar5) {
      *(long *)pcVar8 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00e540e4:
  bVar5 = false;
  goto LAB_00e540e8;
}


