/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018b303c; name: FUN_018b303c
 */


void FUN_018b303c(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    FUN_018b3108(param_1 + 8);
    return;
  }
  if (cVar1 == '\x01') {
    FUN_018b3450(param_1 + 8);
    return;
  }
  return;
}


