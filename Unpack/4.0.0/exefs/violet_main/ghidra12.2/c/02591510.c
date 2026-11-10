/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


