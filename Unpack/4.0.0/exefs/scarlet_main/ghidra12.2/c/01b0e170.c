/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b0e170; name: FUN_01b0e170
 */


undefined8 FUN_01b0e170(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined1 uVar4;
  
  if (((DAT_04802f48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04802f48), iVar2 != 0)) {
    DAT_04803958 = '\x01';
    __cxa_guard_release(&DAT_04802f48);
  }
  pcVar3 = (char *)FUN_01b0e000(param_1,1);
  lVar1 = -1;
  if (DAT_04803958 != '\0') {
    lVar1 = 1;
  }
  if (((*pcVar3 == '\x01') || (*pcVar3 == '\0')) && (*(long *)(pcVar3 + 8) != 0)) {
    uVar4 = *(undefined1 *)(*(long *)(pcVar3 + 8) + lVar1);
  }
  else {
    uVar4 = 0;
  }
  FUN_00c5d960(param_1,uVar4);
  return 1;
}


