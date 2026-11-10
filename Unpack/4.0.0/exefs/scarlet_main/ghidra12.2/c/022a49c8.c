/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022a49c8; name: FUN_022a49c8
 */


void FUN_022a49c8(undefined8 *param_1,char *param_2)

{
  if (*param_2 == '\x01') {
    FUN_022a4bf8(param_2 + 8);
    return;
  }
  if (*param_2 == '\0') {
    FUN_022a4b98(*(undefined8 *)(param_2 + 8));
    return;
  }
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


