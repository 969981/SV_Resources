/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0251e704; name: FUN_0251e704
 */


void FUN_0251e704(long param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  if (param_1 == 0) {
    return;
  }
  if ((param_3 & 1) != 0) {
    param_2 = *(code **)(param_2 + *(long *)(param_1 + ((long)param_3 >> 1)));
  }
  (*param_2)(*param_4);
  return;
}


