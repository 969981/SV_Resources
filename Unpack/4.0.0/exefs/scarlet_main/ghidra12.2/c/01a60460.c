/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a60460; name: FUN_01a60460
 */


undefined8 FUN_01a60460(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_38;
  long *local_18;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (pcVar5 = (char *)*puVar3, pcVar5 == (char *)0x0)) {
    if ((DAT_04851058 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04851058);
      pcVar5 = &DAT_04851030;
      if (iVar2 != 0) {
        DAT_04851030 = 0;
        DAT_04851038 = 0;
        FUN_00100190(&LAB_00e6361c,&DAT_04851030,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04851058);
      }
    }
    else {
      pcVar5 = &DAT_04851030;
    }
  }
  uVar4 = FUN_00c92df0(param_1,2,0);
  if (((DAT_04851060 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04851060), iVar2 != 0)) {
    DAT_04851c00 = '\x01';
    __cxa_guard_release(&DAT_04851060);
  }
  pcVar1 = (code *)PTR_FUN_047df778;
  if (DAT_04851c00 == '\0') {
    pcVar1 = (code *)0x0;
  }
  local_38 = uVar4;
  if (*pcVar5 == '\x01') {
    if (*(long *)(pcVar5 + 8) == 0) goto LAB_01a605a4;
    puVar3 = (undefined8 *)(*pcVar1)();
    plVar6 = (long *)*puVar3;
    local_18 = plVar6;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
      lVar7 = plVar6[7];
      goto LAB_01a60550;
    }
  }
  else {
    if (*pcVar5 == '\0') {
      FUN_01a60628(&local_18,*(undefined8 *)(pcVar5 + 8),pcVar1,0,&local_38);
      plVar6 = (long *)PTR_PTR_047d4508;
      if (local_18 != (long *)0x0) {
        plVar6 = local_18 + 7;
      }
      lVar7 = *plVar6;
      plVar6 = local_18;
      if (local_18 == (long *)0x0) goto LAB_01a604fc;
LAB_01a60550:
      (**(code **)(*plVar6 + 0x20))(plVar6);
      goto LAB_01a604fc;
    }
LAB_01a605a4:
    local_18 = (long *)0x0;
  }
  lVar7 = *(long *)PTR_PTR_047d4508;
LAB_01a604fc:
  FUN_00c85bd0(param_1,lVar7);
  return 1;
}


