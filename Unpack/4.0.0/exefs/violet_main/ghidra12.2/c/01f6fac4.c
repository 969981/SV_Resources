/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6fac4; name: FUN_01f6fac4
 */


void FUN_01f6fac4(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  if (param_3 != 0) {
    param_3 = param_3 << 3;
    do {
      FUN_00254d7c(param_1,param_2);
      param_2 = param_2 + 8;
      param_3 = param_3 + -8;
    } while (param_3 != 0);
  }
  return;
}


