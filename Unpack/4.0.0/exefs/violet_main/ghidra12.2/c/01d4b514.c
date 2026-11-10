/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


