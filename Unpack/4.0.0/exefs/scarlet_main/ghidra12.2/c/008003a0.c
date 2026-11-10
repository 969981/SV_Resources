/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008003a0; name: FUN_008003a0
 */


void FUN_008003a0(int *param_1,long param_2,undefined8 param_3)

{
  FUN_00800664(*(undefined8 *)(param_2 + 0x1398));
  if (*param_1 == 0) {
    *(undefined8 *)(param_2 + 0x13a0) = param_3;
    FUN_0078cd58(*(undefined8 *)(param_2 + 0x1398),0);
    return;
  }
  return;
}


