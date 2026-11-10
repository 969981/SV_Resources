/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027dee98; name: FUN_027dee98
 */


void FUN_027dee98(long *param_1)

{
  if (*param_1 != 0) {
    FUN_027de574();
    (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],*param_1,param_1[2] - *param_1,8);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  return;
}


