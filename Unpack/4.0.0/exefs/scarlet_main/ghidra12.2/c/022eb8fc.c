/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022eb8fc; name: FUN_022eb8fc
 */


bool FUN_022eb8fc(long param_1,long param_2)

{
  long lVar1;
  ulong local_18;
  
  local_18 = param_2 << 0x20 | 1;
  lVar1 = FUN_00d74de4(param_1,param_1 + 0x80,&local_18);
  return **(char **)(lVar1 + 8) != '\0';
}


