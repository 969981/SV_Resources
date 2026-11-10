/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035a980; name: FUN_0035a980
 */


uint16_t FUN_0035a980(long param_1)

{
  uint16_t uVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 1) == '\x1c') || (*(char *)(param_1 + 1) == '\x02')) {
    uVar1 = ntohs(*(uint16_t *)(param_1 + 2));
    return uVar1;
  }
  iVar2 = FUN_00362300();
  return (ushort)(iVar2 != 0);
}


