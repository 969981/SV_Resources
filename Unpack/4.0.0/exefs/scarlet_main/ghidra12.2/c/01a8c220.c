/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a8c220; name: FUN_01a8c220
 */


undefined8 FUN_01a8c220(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long lVar11;
  undefined1 *puVar12;
  bool bVar13;
  long lVar14;
  
  puVar5 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar5 == (undefined8 *)0x0) || (pcVar10 = (char *)*puVar5, pcVar10 == (char *)0x0)) {
    if ((DAT_0484aee8 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_0484aee8);
      pcVar10 = &DAT_0484aed0;
      if (iVar4 != 0) {
        DAT_0484aed0 = 0;
        DAT_0484aed8 = 0;
        FUN_00100190(&LAB_02495c48,&DAT_0484aed0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0484aee8);
      }
    }
    else {
      pcVar10 = &DAT_0484aed0;
    }
  }
  if (((DAT_0484aec8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0484aec8), iVar4 != 0)) {
    DAT_0484c048 = '\x01';
    __cxa_guard_release(&DAT_0484aec8);
  }
  cVar2 = *pcVar10;
  pcVar1 = FUN_02b97418;
  if (DAT_0484c048 == '\0') {
    pcVar1 = (code *)0x0;
  }
  if (cVar2 == '\x02') {
    if ((*(long *)(pcVar10 + 8) == 0) ||
       (lVar8 = *(long *)(*(long *)(pcVar10 + 8) + 0x10), lVar8 == 0)) goto LAB_01a8c3fc;
    lVar8 = lVar8 + -0x28;
LAB_01a8c298:
    lVar8 = (*pcVar1)(lVar8);
  }
  else {
    if (cVar2 != '\x03') {
      if (((cVar2 != '\x01') && (cVar2 != '\0')) || (lVar8 = *(long *)(pcVar10 + 8), lVar8 == 0))
      goto LAB_01a8c3fc;
      goto LAB_01a8c298;
    }
    lVar8 = FUN_01a8c4e8(pcVar10 + 8,pcVar1,0);
  }
  if (lVar8 != 0) {
    puVar5 = (undefined8 *)FUN_00c5e120(param_1,8,1);
    if (((*PTR_DAT_047d38a0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d38a0);
    }
    lVar14 = *(long *)PTR_DAT_047d38a8;
    *(long *)PTR_DAT_047d38b0 = lVar14;
    puVar3 = PTR_DAT_047d38f8;
    lVar11 = *(long *)PTR_DAT_047d38f8;
    lVar6 = nn::os::GetCurrentThread();
    if (lVar6 == lVar11) {
      bVar13 = true;
LAB_01a8c2fc:
      if (*(long *)(lVar14 + 0x28) == *(long *)(lVar14 + 0x30)) {
        puVar12 = (undefined1 *)FUN_00d97840(0x40,8);
      }
      else {
        puVar9 = (undefined8 *)(*(long *)(lVar14 + 0x30) + -8);
        puVar12 = (undefined1 *)*puVar9;
        *(undefined8 **)(lVar14 + 0x30) = puVar9;
      }
      if (!bVar13) {
        *(undefined8 *)puVar3 = 0;
        nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
      }
      *puVar12 = 0;
      *(long *)(puVar12 + 8) = lVar8;
      *puVar5 = puVar12;
      FUN_00c5fc50(param_1,0xfff0b9d8,(long)DAT_045baf68);
      FUN_00c5e190(param_1,0xfffffffe);
      return 1;
    }
    uVar7 = nn::os::GetCurrentThread();
    while (*(long *)puVar3 == 0) {
      cVar2 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar13) {
        *(undefined8 *)puVar3 = uVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_01a8c394;
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
            bVar13 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar13) {
              *(undefined8 *)puVar3 = uVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01a8c394;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar13) {
        *(undefined8 *)puVar3 = uVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01a8c394:
    bVar13 = false;
    goto LAB_01a8c2fc;
  }
LAB_01a8c3fc:
  FUN_00ca1a30(param_1);
  return 1;
}


