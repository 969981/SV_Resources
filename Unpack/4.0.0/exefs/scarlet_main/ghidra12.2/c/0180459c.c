/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0180459c; name: FUN_0180459c
 */


void FUN_0180459c(char *param_1,long param_2,undefined8 param_3)

{
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    FUN_00c6c994(*(long *)(param_1 + 8) + param_2,param_3);
    return;
  }
  return;
}


