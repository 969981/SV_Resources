/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a53320; name: FUN_01a53320
 */


undefined8 FUN_01a53320(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  char *pcVar8;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (pcVar8 = (char *)*puVar4, pcVar8 == (char *)0x0)) {
    if ((DAT_04802d10 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_04802d10);
      pcVar8 = &DAT_04802cf8;
      if (iVar3 != 0) {
        DAT_04802cf8 = 0;
        DAT_04802d00 = 0;
        FUN_00100190(PTR_FUN_047d3ed8,&DAT_04802cf8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04802d10);
      }
    }
    else {
      pcVar8 = &DAT_04802cf8;
    }
  }
  if ((DAT_04802d60 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04802d60);
    if (iVar3 != 0) {
      DAT_04803ea8 = '\x01';
      DAT_04803eb0 = '\x01';
      __cxa_guard_release(&DAT_04802d60);
    }
  }
  cVar1 = *pcVar8;
  pcVar6 = (code *)&DAT_00000120;
  if (DAT_04803ea8 == '\0') {
    pcVar6 = (code *)0x0;
  }
  if (cVar1 == '\x02') {
    if ((*(long *)(pcVar8 + 8) == 0) ||
       (lVar7 = *(long *)(*(long *)(pcVar8 + 8) + 0x10), lVar7 == 0)) {
LAB_01a53400:
      uVar2 = 0;
      goto LAB_01a533a4;
    }
    plVar5 = (long *)(lVar7 + -0x28);
  }
  else {
    if (cVar1 == '\x03') {
      uVar2 = FUN_01a534a4(pcVar8 + 8);
      goto LAB_01a533a4;
    }
    if ((cVar1 != '\x01') && (cVar1 != '\0')) goto LAB_01a53400;
    plVar5 = *(long **)(pcVar8 + 8);
    if (plVar5 == (long *)0x0) {
      uVar2 = 0;
      goto LAB_01a533a4;
    }
  }
  if (DAT_04803eb0 != '\0') {
    pcVar6 = *(code **)(pcVar6 + *plVar5);
  }
  uVar2 = (*pcVar6)();
LAB_01a533a4:
  FUN_00c5d960(param_1,uVar2);
  return 1;
}


