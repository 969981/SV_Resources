/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02591510; name: FUN_02591510
 */


void FUN_02591510(undefined8 param_1,char *param_2)

{
  if (*param_2 == '\0') {
    FUN_00ca1a30(param_1);
    FUN_00ca1a30(param_1);
    return;
  }
  FUN_00c46da0((double)*(float *)(param_2 + 0x10),param_1);
  FUN_00c46da0((double)*(float *)(param_2 + 0x14),param_1);
  return;
}


