/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f5820; name: FUN_002f5820
 */


long FUN_002f5820(char *param_1)

{
  int iVar1;
  
  iVar1 = strcmp(param_1,"TSI_INTEGRITY_ONLY");
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = strcmp(param_1,"TSI_PRIVACY_AND_INTEGRITY");
  return (ulong)(iVar1 == 0) << 1;
}


