/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278c2e8; name: FUN_0278c2e8
 */


void FUN_0278c2e8(undefined1 *param_1,char *param_2)

{
  *param_1 = 0;
  if (*param_2 != '\0') {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *param_1 = 1;
  }
  return;
}


