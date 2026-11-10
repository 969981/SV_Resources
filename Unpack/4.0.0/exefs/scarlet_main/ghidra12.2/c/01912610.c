/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01912610; name: FUN_01912610
 */


undefined8 FUN_01912610(undefined8 param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (((DAT_04832228 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04832228), iVar1 != 0)) {
    DAT_04832288 = 1;
    __cxa_guard_release(&DAT_04832228);
  }
  pcVar2 = (char *)FUN_019126c0(param_1,1);
  if (((*pcVar2 == '\x01') || (*pcVar2 == '\0')) && (*(long *)(pcVar2 + 8) != 0)) {
    iVar1 = *(int *)(*(long *)(pcVar2 + 8) - ((ulong)~(uint)DAT_04832288 & 1));
  }
  else {
    iVar1 = 0;
  }
  FUN_00c5d960(param_1,(long)iVar1);
  return 1;
}


