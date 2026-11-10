/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02477b80; name: FUN_02477b80
 */


undefined8 FUN_02477b80(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  
  if (((DAT_0484a370 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0484a370), iVar2 != 0)) {
    DAT_0484b2e8 = '\x01';
    __cxa_guard_release(&DAT_0484a370);
  }
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (pcVar4 = (char *)*puVar3, (char *)*puVar3 == (char *)0x0)) {
    if ((*PTR_DAT_047d59b8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d59b8);
      pcVar4 = PTR_DAT_047d59c0;
      if (iVar2 != 0) {
        *PTR_DAT_047d59c0 = 0;
        *(undefined8 *)(pcVar4 + 8) = 0;
        FUN_00100190(PTR_LAB_047deb30,pcVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d59b8);
      }
    }
    else {
      pcVar4 = PTR_DAT_047d59c0;
    }
  }
  iVar2 = FUN_00cc4dc0(param_1,2);
  lVar1 = 0x38;
  if (DAT_0484b2e8 == '\0') {
    lVar1 = -1;
  }
  if (((*pcVar4 == '\x01') || (*pcVar4 == '\0')) && (*(long *)(pcVar4 + 8) != 0)) {
    *(bool *)(*(long *)(pcVar4 + 8) + lVar1) = iVar2 != 0;
  }
  return 0;
}


