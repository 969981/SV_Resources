/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a41ae4; name: FUN_01a41ae4
 */


void FUN_01a41ae4(char *param_1)

{
  if (*param_1 == '\x01') {
    FUN_01ae7cec(param_1 + 8);
    return;
  }
  if (*param_1 == '\0') {
    FUN_01ae7c40(*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}


