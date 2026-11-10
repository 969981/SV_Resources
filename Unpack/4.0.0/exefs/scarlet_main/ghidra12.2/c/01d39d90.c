/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d39d90; name: FUN_01d39d90
 */


undefined8 FUN_01d39d90(undefined8 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (pcVar6 = (char *)*puVar4, (char *)*puVar4 == (char *)0x0)) {
    if ((*PTR_DAT_047d3d48 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047d3d48);
      pcVar6 = PTR_DAT_047d3d50;
      if (iVar3 != 0) {
        *PTR_DAT_047d3d50 = 0;
        *(undefined8 *)(pcVar6 + 8) = 0;
        FUN_00100190(PTR_LAB_047d3f60,pcVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3d48);
      }
    }
    else {
      pcVar6 = PTR_DAT_047d3d50;
    }
  }
  uVar5 = FUN_00c92df0(param_1,2,0);
  if ((DAT_0482dd90 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_0482dd90);
    if (iVar3 != 0) {
      DAT_0482eb60 = '\x01';
      __cxa_guard_release(&DAT_0482dd90,uVar5);
    }
  }
  pcVar1 = (code *)PTR_FUN_047d7450;
  if (DAT_0482eb60 == '\0') {
    pcVar1 = (code *)0x0;
  }
  if ((*pcVar6 == '\0') || (*pcVar6 == '\x01')) {
    uVar2 = 0;
    if (*(long *)(pcVar6 + 8) != 0) {
      uVar2 = (*pcVar1)(*(long *)(pcVar6 + 8),uVar5);
    }
  }
  else {
    uVar2 = 0;
  }
  FUN_00c5d960(param_1,uVar2);
  return 1;
}


