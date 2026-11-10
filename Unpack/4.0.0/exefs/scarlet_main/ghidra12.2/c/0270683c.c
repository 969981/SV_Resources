/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0270683c; name: FUN_0270683c
 */


void FUN_0270683c(undefined8 *param_1,char *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  if ((undefined8 **)puVar1 == &DAT_04859d88) {
    DAT_04859d88 = param_1;
    DAT_04859d90 = param_1;
    DAT_04859d98 = param_1;
  }
  else if (*param_2 == '\0') {
    puVar1[2] = param_1;
    if (puVar1 == DAT_04859d98) {
      DAT_04859d98 = param_1;
    }
  }
  else {
    puVar1[1] = param_1;
    if (puVar1 == DAT_04859d90) {
      DAT_04859d90 = param_1;
    }
  }
  *param_1 = puVar1;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


