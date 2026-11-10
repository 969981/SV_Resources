/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c11b20; name: FUN_01c11b20
 */


undefined8 FUN_01c11b20(undefined8 param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (((DAT_048113a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048113a0), iVar1 != 0)) {
    DAT_04811f88 = 1;
    __cxa_guard_release(&DAT_048113a0);
  }
  pcVar2 = (char *)FUN_01c11a60(param_1,1);
  iVar1 = FUN_00cc4dc0(param_1,2);
  if (((*pcVar2 == '\x01') || (*pcVar2 == '\0')) && (*(long *)(pcVar2 + 8) != 0)) {
    *(bool *)(*(long *)(pcVar2 + 8) - ((ulong)~(uint)DAT_04811f88 & 1)) = iVar1 != 0;
  }
  return 0;
}


