/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018db6f0; name: FUN_018db6f0
 */


undefined8 FUN_018db6f0(undefined8 param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (((DAT_04819c20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04819c20), iVar1 != 0)) {
    DAT_0481b0b0 = 1;
    __cxa_guard_release(&DAT_04819c20);
  }
  pcVar2 = (char *)FUN_018db7a0(param_1,1);
  iVar1 = FUN_00cc4dc0(param_1,2);
  if (((*pcVar2 == '\0') || (*pcVar2 == '\x01')) && (*(long *)(pcVar2 + 8) != 0)) {
    *(bool *)(*(long *)(pcVar2 + 8) - ((ulong)~(uint)DAT_0481b0b0 & 1)) = iVar1 != 0;
  }
  return 0;
}


