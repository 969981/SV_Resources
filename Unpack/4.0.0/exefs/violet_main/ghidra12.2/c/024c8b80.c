/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024c8b80; name: FUN_024c8b80
 */


void FUN_024c8b80(long *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  if (*param_1 != 0) {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(*param_1 + ((long)param_3 >> 1)));
    }
    (*param_2)(*param_4,param_4[2],param_4[4],param_4[6]);
  }
  return;
}


