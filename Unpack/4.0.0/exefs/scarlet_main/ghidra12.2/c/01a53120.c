/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a53120; name: FUN_01a53120
 */


undefined8 FUN_01a53120(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  char *pcVar7;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (pcVar7 = (char *)*puVar3, pcVar7 == (char *)0x0)) {
    if ((DAT_04802d10 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04802d10);
      pcVar7 = &DAT_04802cf8;
      if (iVar2 != 0) {
        DAT_04802cf8 = 0;
        DAT_04802d00 = 0;
        FUN_00100190(PTR_FUN_047d3ed8,&DAT_04802cf8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04802d10);
      }
    }
    else {
      pcVar7 = &DAT_04802cf8;
    }
  }
  if ((DAT_04802d18 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04802d18);
    if (iVar2 != 0) {
      DAT_04803e28 = '\x01';
      DAT_04803e30 = '\x01';
      __cxa_guard_release(&DAT_04802d18);
    }
  }
  cVar1 = *pcVar7;
  pcVar5 = (code *)&DAT_000000a0;
  if (DAT_04803e28 == '\0') {
    pcVar5 = (code *)0x0;
  }
  if (cVar1 == '\x02') {
    if ((*(long *)(pcVar7 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(pcVar7 + 8) + 0x10), lVar6 == 0)) {
LAB_01a53200:
      iVar2 = 0;
      goto LAB_01a531a4;
    }
    plVar4 = (long *)(lVar6 + -0x28);
  }
  else {
    if (cVar1 == '\x03') {
      iVar2 = FUN_01a532a4(pcVar7 + 8);
      goto LAB_01a531a4;
    }
    if ((cVar1 != '\x01') && (cVar1 != '\0')) goto LAB_01a53200;
    plVar4 = *(long **)(pcVar7 + 8);
    if (plVar4 == (long *)0x0) {
      iVar2 = 0;
      goto LAB_01a531a4;
    }
  }
  if (DAT_04803e30 != '\0') {
    pcVar5 = *(code **)(pcVar5 + *plVar4);
  }
  iVar2 = (*pcVar5)();
LAB_01a531a4:
  FUN_00c5d960(param_1,(long)iVar2);
  return 1;
}


