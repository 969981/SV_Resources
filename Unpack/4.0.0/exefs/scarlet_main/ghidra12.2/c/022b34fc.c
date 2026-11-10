/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022b34fc; name: FUN_022b34fc
 */


void FUN_022b34fc(undefined8 *param_1,char *param_2)

{
  if (*param_2 == '\x01') {
    FUN_022b384c(param_2 + 8);
    return;
  }
  if (*param_2 == '\0') {
    FUN_022b3800(*(undefined8 *)(param_2 + 8));
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 4) = 5;
  param_1[2] = 0x7f7fffffffffffff;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  return;
}


