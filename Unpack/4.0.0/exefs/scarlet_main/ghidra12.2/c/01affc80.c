/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01affc80; name: FUN_01affc80
 */


undefined8 FUN_01affc80(undefined8 param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (((DAT_04802660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04802660), iVar1 != 0)) {
    DAT_04802978 = 1;
    __cxa_guard_release(&DAT_04802660);
  }
  pcVar2 = (char *)FUN_01affbc0(param_1,1);
  iVar1 = FUN_00cc4dc0(param_1,2);
  if (((*pcVar2 == '\x01') || (*pcVar2 == '\0')) && (*(long *)(pcVar2 + 8) != 0)) {
    *(bool *)(*(long *)(pcVar2 + 8) - ((ulong)~(uint)DAT_04802978 & 1)) = iVar1 != 0;
  }
  return 0;
}


