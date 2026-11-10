/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c0ddc0; name: FUN_01c0ddc0
 */


undefined8 FUN_01c0ddc0(undefined8 param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (((DAT_048111c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048111c8), iVar1 != 0)) {
    DAT_04811f60 = 1;
    __cxa_guard_release(&DAT_048111c8);
  }
  pcVar2 = (char *)FUN_01c0dd00(param_1,1);
  iVar1 = FUN_00cc4dc0(param_1,2);
  if (((*pcVar2 == '\x01') || (*pcVar2 == '\0')) && (*(long *)(pcVar2 + 8) != 0)) {
    *(bool *)(*(long *)(pcVar2 + 8) - ((ulong)~(uint)DAT_04811f60 & 1)) = iVar1 != 0;
  }
  return 0;
}


