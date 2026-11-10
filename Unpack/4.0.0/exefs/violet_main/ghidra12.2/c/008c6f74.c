/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c6f74; name: FUN_008c6f74
 */


void FUN_008c6f74(char *param_1,int param_2,undefined8 param_3,long param_4)

{
  nn::util::SNPrintf(param_1,(long)param_2,"%s_%d",param_3,(ulong)*(uint *)(param_4 + 4));
  return;
}


