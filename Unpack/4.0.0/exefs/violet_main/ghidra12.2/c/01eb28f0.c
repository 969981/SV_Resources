/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb28f0; name: FUN_01eb28f0
 */


void FUN_01eb28f0(int *param_1,long param_2,undefined8 param_3)

{
  int local_18 [2];
  
  FUN_01eb2948(local_18);
  if (local_18[0] == 0) {
    FUN_019438a4(param_1,param_2 + 3,param_3);
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


