/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02505fb0; name: FUN_02505fb0
 */


void FUN_02505fb0(char *param_1)

{
  if (*param_1 == '\x01') {
    FUN_02506024(param_1 + 8);
  }
  else if (*param_1 == '\0') {
    FUN_02505ff0(*(undefined8 *)(param_1 + 8));
  }
  return;
}


