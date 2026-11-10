/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b147d0; name: FUN_01b147d0
 */


undefined8 FUN_01b147d0(undefined8 param_1)

{
  undefined2 uVar1;
  int iVar2;
  char *pcVar3;
  
  if (((DAT_04803400 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04803400), iVar2 != 0)) {
    DAT_04803b60 = 1;
    __cxa_guard_release(&DAT_04803400);
  }
  pcVar3 = (char *)FUN_015e30b0(param_1,1);
  uVar1 = FUN_00c92df0(param_1,2,0);
  if (((*pcVar3 == '\x01') || (*pcVar3 == '\0')) && (*(long *)(pcVar3 + 8) != 0)) {
    *(undefined2 *)(*(long *)(pcVar3 + 8) - ((ulong)~(uint)DAT_04803b60 & 1)) = uVar1;
  }
  return 0;
}


