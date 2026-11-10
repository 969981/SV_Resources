/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02571c94; name: FUN_02571c94
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02571c94(long param_1,code *param_2,ulong param_3)

{
  if (param_1 != 0) {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(param_1 + ((long)param_3 >> 1)));
    }
    (*param_2)();
  }
  return;
}


