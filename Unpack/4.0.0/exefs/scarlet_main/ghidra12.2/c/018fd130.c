/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018fd130; name: FUN_018fd130
 */


undefined8 FUN_018fd130(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  if (((DAT_04819d00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04819d00), iVar2 != 0)) {
    DAT_0481b160 = 1;
    __cxa_guard_release(&DAT_04819d00);
  }
  pcVar3 = (char *)FUN_018fd1e0(param_1,1);
  uVar1 = FUN_00c92df0(param_1,2,0);
  if (((*pcVar3 == '\0') || (*pcVar3 == '\x01')) && (*(long *)(pcVar3 + 8) != 0)) {
    *(undefined4 *)(*(long *)(pcVar3 + 8) - ((ulong)~(uint)DAT_0481b160 & 1)) = uVar1;
  }
  return 0;
}


