/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ce0cb0; name: FUN_01ce0cb0
 */


undefined8 FUN_01ce0cb0(undefined8 param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (((DAT_048199e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048199e0), iVar1 != 0)) {
    DAT_0481aef0 = 1;
    __cxa_guard_release(&DAT_048199e0);
  }
  pcVar2 = (char *)FUN_019ae630(param_1,1);
  if (((*pcVar2 == '\x01') || (*pcVar2 == '\0')) && (*(long *)(pcVar2 + 8) != 0)) {
    iVar1 = *(int *)(*(long *)(pcVar2 + 8) - ((ulong)~(uint)DAT_0481aef0 & 1));
  }
  else {
    iVar1 = 0;
  }
  FUN_00c5d960(param_1,(long)iVar1);
  return 1;
}


