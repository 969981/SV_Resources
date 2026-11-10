/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021e85b4; name: FUN_021e85b4
 */


void FUN_021e85b4(undefined8 param_1)

{
  size_t sVar1;
  char local_30 [8];
  undefined1 *local_28;
  
  local_28 = local_30;
  local_30[0] = '\0';
  sVar1 = strlen(local_30);
  builtin_strncpy(local_30 + sVar1,"backup",7);
  FUN_00cf9768(param_1,&local_28);
  return;
}


