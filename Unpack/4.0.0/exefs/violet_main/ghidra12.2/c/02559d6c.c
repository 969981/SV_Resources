/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02559d6c; name: FUN_02559d6c
 */


void FUN_02559d6c(long *param_1,code *param_2,ulong param_3)

{
  if (*param_1 != 0) {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(*param_1 + ((long)param_3 >> 1)));
    }
    (*param_2)();
  }
  return;
}


