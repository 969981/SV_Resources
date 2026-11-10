/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026b0090; name: FUN_026b0090
 */


void FUN_026b0090(long *param_1,code *param_2,ulong param_3)

{
  long lVar1;
  
  if ((*param_1 != 0) && (lVar1 = *(long *)(*param_1 + 0x10), lVar1 != 0)) {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(lVar1 + ((long)param_3 >> 1) + -0x28));
    }
    (*param_2)(0);
  }
  return;
}


