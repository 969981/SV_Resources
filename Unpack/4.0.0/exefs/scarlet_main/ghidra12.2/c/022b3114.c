/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022b3114; name: FUN_022b3114
 */


void FUN_022b3114(undefined8 *param_1,char *param_2)

{
  if (*param_2 == '\x01') {
    FUN_022b32ec(param_2 + 8);
    return;
  }
  if (*param_2 == '\0') {
    FUN_022b32b8(*(undefined8 *)(param_2 + 8));
    return;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


