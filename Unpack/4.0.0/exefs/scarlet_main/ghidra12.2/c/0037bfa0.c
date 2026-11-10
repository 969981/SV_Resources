/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0037bfa0; name: FUN_0037bfa0
 */


void FUN_0037bfa0(undefined8 *param_1)

{
  ulong uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  free((void *)*param_1);
  free((void *)param_1[1]);
  free((void *)param_1[2]);
  free((void *)param_1[3]);
  if (param_1[5] != 0) {
    uVar1 = 0;
    do {
      free(*(void **)(param_1[4] + uVar1 * 8));
      free(*(void **)(param_1[6] + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (ulong)param_1[5]);
  }
  free((void *)param_1[4]);
  free((void *)param_1[6]);
  free((void *)param_1[7]);
  free(param_1);
  return;
}


