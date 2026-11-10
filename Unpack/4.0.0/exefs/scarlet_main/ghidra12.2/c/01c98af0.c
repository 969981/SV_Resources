/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c98af0; name: FUN_01c98af0
 */


undefined8 FUN_01c98af0(undefined8 param_1)

{
  int iVar1;
  char *pcVar2;
  undefined2 uVar3;
  
  if (((DAT_048169a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048169a8), iVar1 != 0)) {
    DAT_04816b28 = 1;
    __cxa_guard_release(&DAT_048169a8);
  }
  pcVar2 = (char *)FUN_01c98960(param_1,1);
  if (((*pcVar2 == '\x01') || (*pcVar2 == '\0')) && (*(long *)(pcVar2 + 8) != 0)) {
    uVar3 = *(undefined2 *)(*(long *)(pcVar2 + 8) - ((ulong)~(uint)DAT_04816b28 & 1));
  }
  else {
    uVar3 = 0;
  }
  FUN_00c5d960(param_1,uVar3);
  return 1;
}


