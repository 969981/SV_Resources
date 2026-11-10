/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019dbf94; name: FUN_019dbf94
 */


void FUN_019dbf94(undefined8 param_1,char *param_2)

{
  if (*param_2 == '\x01') {
    FUN_01d4664c(param_2 + 8);
    return;
  }
  if (*param_2 == '\0') {
    FUN_01d4662c(*(undefined8 *)(param_2 + 8));
    return;
  }
  FUN_01941afc(param_1);
  return;
}


