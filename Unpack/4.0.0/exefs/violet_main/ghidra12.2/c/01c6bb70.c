/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c6bb70; name: FUN_01c6bb70
 */


void FUN_01c6bb70(undefined8 param_1,float *param_2)

{
  if (*(char *)(param_2 + 4) == '\0') {
    FUN_00ca1a30(param_1);
    FUN_00ca1a30(param_1);
    return;
  }
  FUN_00c46da0((double)*param_2,param_1);
  FUN_00c46da0((double)param_2[1],param_1);
  return;
}


