/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022984e0; name: FUN_022984e0
 */


void FUN_022984e0(undefined8 *param_1,long *param_2,code *param_3,ulong param_4)

{
  long local_38;
  long local_18;
  
  if (*param_2 == 0) {
    local_38 = 0;
  }
  else {
    FUN_022936e0(&local_18);
    local_38 = local_18;
    if (local_18 != 0) {
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *(long *)(local_18 + ((long)param_4 >> 1)));
      }
      (*param_3)(param_1);
      FUN_0229376c(&local_38);
      return;
    }
  }
  FUN_0229376c(&local_38);
  *param_1 = 0x3f80000040c00000;
  param_1[1] = 0x42c800003f800000;
  param_1[2] = 0x3f000000;
  return;
}


