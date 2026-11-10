/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


