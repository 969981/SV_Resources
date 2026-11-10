/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0231c208; name: FUN_0231c208
 */


void FUN_0231c208(char *param_1)

{
  if (*param_1 == '\x01') {
    FUN_0231c3d8(param_1 + 8);
    return;
  }
  if (*param_1 == '\0') {
    FUN_0231c3b4(*(undefined8 *)(param_1 + 8));
    return;
  }
  FUN_0231c400();
  return;
}


