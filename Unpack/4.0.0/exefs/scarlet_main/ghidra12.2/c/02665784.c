/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02665784; name: FUN_02665784
 */


bool FUN_02665784(long *param_1,char *param_2)

{
  if (((*param_2 == '\x01') || (*param_2 == '\0')) && (*(long *)(param_2 + 8) != 0)) {
    return *(char *)(*(long *)(param_2 + 8) + *param_1) != '\0';
  }
  return false;
}


