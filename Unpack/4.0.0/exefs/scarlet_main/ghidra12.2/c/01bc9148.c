/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bc9148; name: FUN_01bc9148
 */


void FUN_01bc9148(char *param_1,long param_2,undefined8 param_3)

{
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    FUN_00d3cecc(*(long *)(param_1 + 8) + param_2,param_3);
  }
  return;
}


