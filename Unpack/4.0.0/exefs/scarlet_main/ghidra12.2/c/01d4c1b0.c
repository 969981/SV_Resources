/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d4c1b0; name: FUN_01d4c1b0
 */


void FUN_01d4c1b0(char *param_1,long param_2,undefined8 param_3)

{
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    FUN_01d4c1e4(*(long *)(param_1 + 8) + param_2,param_3);
  }
  return;
}


