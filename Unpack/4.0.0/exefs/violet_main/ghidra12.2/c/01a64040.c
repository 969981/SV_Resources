/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a64040; name: FUN_01a64040
 */


undefined8 FUN_01a64040(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  char *pcVar8;
  undefined4 local_18;
  uint uStack_14;
  
  puVar6 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar6 == (undefined8 *)0x0) || (pcVar8 = (char *)*puVar6, pcVar8 == (char *)0x0)) {
    if ((DAT_04847868 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_04847868);
      pcVar8 = &DAT_04847850;
      if (iVar5 != 0) {
        DAT_04847850 = 0;
        DAT_04847858 = 0;
        FUN_00100190(FUN_01276ee0,&DAT_04847850,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04847868);
      }
    }
    else {
      pcVar8 = &DAT_04847850;
    }
  }
  uVar3 = FUN_00c92df0(param_1,2,0);
  uVar4 = FUN_00c92df0(param_1,3,0);
  if (((DAT_048478b8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_048478b8), iVar5 != 0)) {
    DAT_04847968 = '\x01';
    __cxa_guard_release(&DAT_048478b8);
  }
  pcVar1 = FUN_014faeac;
  if (DAT_04847968 == '\0') {
    pcVar1 = (code *)0x0;
  }
  cVar2 = *pcVar8;
  local_18 = uVar4;
  uStack_14 = uVar3;
  if (cVar2 == '\x02') {
    if (*(long *)(pcVar8 + 8) == 0) {
      return 0;
    }
    lVar7 = *(long *)(*(long *)(pcVar8 + 8) + 0x10);
    if (lVar7 == 0) {
      return 0;
    }
    lVar7 = lVar7 + -0x28;
  }
  else {
    if (cVar2 == '\x03') {
      FUN_01a641d4(pcVar8 + 8,pcVar1,0,&uStack_14,&local_18);
      return 0;
    }
    if ((cVar2 != '\x01') && (cVar2 != '\0')) {
      return 0;
    }
    lVar7 = *(long *)(pcVar8 + 8);
    if (lVar7 == 0) {
      return 0;
    }
  }
  (*pcVar1)(lVar7,uVar3);
  return 0;
}


