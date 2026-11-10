/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025011c0; name: FUN_025011c0
 */


void FUN_025011c0(char *param_1)

{
  if (*param_1 == '\x01') {
    FUN_02501248(param_1 + 8);
  }
  else if (*param_1 == '\0') {
    FUN_02501208(*(undefined8 *)(param_1 + 8));
  }
  return;
}


