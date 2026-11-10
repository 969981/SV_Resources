/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d4b514; name: FUN_01d4b514
 */


void FUN_01d4b514(char *param_1,long param_2,long param_3)

{
  if (*param_1 == '\x01') {
    if (*(long *)(param_1 + 8) != 0) {
      param_2 = *(long *)(param_1 + 8) + param_2;
      FUN_01d4b5b4(param_2,param_3);
      FUN_01d4b5b4(param_2 + 0x38,param_3 + 0x38);
    }
    return;
  }
  if (*param_1 != '\0') {
    return;
  }
  if (*(long *)(param_1 + 8) != 0) {
    param_2 = *(long *)(param_1 + 8) + param_2;
    FUN_01d4b5b4(param_2,param_3);
    FUN_01d4b5b4(param_2 + 0x38,param_3 + 0x38);
  }
  return;
}


