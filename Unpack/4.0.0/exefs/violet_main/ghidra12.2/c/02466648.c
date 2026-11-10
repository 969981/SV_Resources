/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02466648; name: FUN_02466648
 */


void FUN_02466648(undefined8 *param_1,long param_2,ulong param_3,int param_4)

{
  if ((param_2 == 0) || (param_4 != 0xc)) {
    *param_1 = 0;
    return;
  }
  FUN_00ddaef8(param_1,param_2 + (param_3 & 0xffffffff) * 4 + 8,0);
  return;
}


