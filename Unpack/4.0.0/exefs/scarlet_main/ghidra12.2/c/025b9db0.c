/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025b9db0; name: FUN_025b9db0
 */


undefined8 FUN_025b9db0(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (pcVar4 = (char *)*puVar3, (char *)*puVar3 == (char *)0x0)) {
    if ((*PTR_DAT_047d8368 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d8368);
      pcVar4 = PTR_DAT_047d8370;
      if (iVar2 != 0) {
        *PTR_DAT_047d8370 = 0;
        *(undefined8 *)(pcVar4 + 8) = 0;
        FUN_00100190(PTR_LAB_047dfb50,pcVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8368);
      }
    }
    else {
      pcVar4 = PTR_DAT_047d8370;
    }
  }
  if (((DAT_04852678 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04852678), iVar2 != 0)) {
    DAT_04852998 = '\x01';
    __cxa_guard_release(&DAT_04852678);
  }
  pcVar1 = (code *)PTR_FUN_047dfc38;
  if (DAT_04852998 == '\0') {
    pcVar1 = (code *)0x0;
  }
  if (((*pcVar4 == '\x01') || (*pcVar4 == '\0')) && (*(long *)(pcVar4 + 8) != 0)) {
    (*pcVar1)();
  }
  return 0;
}


