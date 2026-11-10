/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bf1dd0; name: FUN_01bf1dd0
 */


undefined8 FUN_01bf1dd0(undefined8 param_1)

{
  short *psVar1;
  code *pcVar2;
  char cVar3;
  short sVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  char *pcVar8;
  long lVar9;
  short sVar10;
  char *pcVar11;
  long *plVar12;
  long *local_18;
  
  puVar7 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar7 == (undefined8 *)0x0) || (pcVar11 = (char *)*puVar7, pcVar11 == (char *)0x0)) {
    if ((DAT_0480fa68 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_0480fa68);
      pcVar11 = &DAT_0480fa58;
      if (iVar6 != 0) {
        DAT_0480fa58 = 0;
        DAT_0480fa60 = 0;
        FUN_00100190(&LAB_0095f894,&DAT_0480fa58,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0480fa68);
      }
    }
    else {
      pcVar11 = &DAT_0480fa58;
    }
  }
  puVar7 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar7 == (undefined8 *)0x0) || (pcVar8 = (char *)*puVar7, (char *)*puVar7 == (char *)0x0)) {
    if ((*PTR_DAT_047d4518 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_047d4518);
      pcVar8 = PTR_DAT_047d4520;
      if (iVar6 != 0) {
        *PTR_DAT_047d4520 = 0;
        *(undefined8 *)(pcVar8 + 8) = 0;
        FUN_00100190(PTR_FUN_047d47c8,pcVar8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4518);
      }
    }
    else {
      pcVar8 = PTR_DAT_047d4520;
    }
  }
  if (((DAT_0480fa50 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0480fa50), iVar6 != 0)) {
    DAT_04810508 = '\x01';
    __cxa_guard_release(&DAT_0480fa50);
  }
  cVar3 = *pcVar8;
  pcVar2 = (code *)PTR_FUN_047d5808;
  if (DAT_04810508 == '\0') {
    pcVar2 = (code *)0x0;
  }
  if (cVar3 == '\x02') {
    lVar9 = *(long *)(pcVar8 + 8);
    if ((lVar9 == 0) || (*(short *)(lVar9 + 0x1a) == 0)) {
      plVar12 = (long *)0x0;
    }
    else {
      psVar1 = (short *)(lVar9 + 0x1a);
      sVar10 = *(short *)(lVar9 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar10) {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01bf1f88;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01bf1f88:
          bVar5 = false;
        }
        if (bVar5) {
          plVar12 = (long *)0x0;
          if (*(long *)(lVar9 + 0x10) != 0) {
            plVar12 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
          }
          break;
        }
        plVar12 = (long *)0x0;
        sVar10 = sVar4;
      } while (sVar4 != 0);
    }
  }
  else if (((cVar3 == '\x01') || (plVar12 = (long *)0x0, cVar3 == '\0')) &&
          (plVar12 = *(long **)(pcVar8 + 8), plVar12 != (long *)0x0)) {
    (**(code **)(*plVar12 + 0x58))(plVar12);
  }
  if (((*pcVar11 == '\x01') || (*pcVar11 == '\0')) && (*(long *)(pcVar11 + 8) != 0)) {
    local_18 = plVar12;
    (*pcVar2)(*(long *)(pcVar11 + 8),&local_18);
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 0x60))();
    }
    plVar12 = (long *)0x0;
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x60))(plVar12);
  }
  return 0;
}


