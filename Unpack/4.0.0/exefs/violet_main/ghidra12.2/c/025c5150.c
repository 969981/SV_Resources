/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025c5150; name: FUN_025c5150
 */


undefined8 FUN_025c5150(undefined8 param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  char *pcVar5;
  double dVar6;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (pcVar5 = (char *)*puVar4, pcVar5 == (char *)0x0)) {
    if ((DAT_04852c68 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_04852c68);
      pcVar5 = &DAT_04852c58;
      if (iVar3 != 0) {
        DAT_04852c58 = 0;
        DAT_04852c60 = 0;
        FUN_00100190(&LAB_02ba0eb8,&DAT_04852c58,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04852c68);
      }
    }
    else {
      pcVar5 = &DAT_04852c58;
    }
  }
  dVar6 = (double)FUN_00c41790(param_1,2,0);
  if (((DAT_04852d28 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04852d28), iVar3 != 0)) {
    DAT_048533a0 = '\x01';
    __cxa_guard_release(&DAT_04852d28);
  }
  pcVar1 = FUN_025ce9cc;
  if (DAT_048533a0 == '\0') {
    pcVar1 = (code *)0x0;
  }
  if ((*pcVar5 == '\0') || (*pcVar5 == '\x01')) {
    uVar2 = 0;
    if (*(long *)(pcVar5 + 8) != 0) {
      uVar2 = (*pcVar1)((float)dVar6);
    }
  }
  else {
    uVar2 = 0;
  }
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


