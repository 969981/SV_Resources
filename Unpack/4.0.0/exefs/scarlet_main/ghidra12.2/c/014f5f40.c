/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014f5f40; name: FUN_014f5f40
 */


undefined8 FUN_014f5f40(long param_1,int param_2)

{
  if ((((param_2 == 0) && (*(int *)(*(long *)(param_1 + 0x38) + 0x30) == 1)) &&
      (*(char *)(*(long *)(param_1 + 0x38) + 0x8c) == '\0')) && (*(char *)(param_1 + 0x96) == '\0'))
  {
    return 1;
  }
  return 0;
}


