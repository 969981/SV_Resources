/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02147020; name: FUN_02147020
 */


void FUN_02147020(long param_1,int param_2,byte param_3)

{
  *(byte *)(param_1 + param_2 + 299) = param_3 & 1;
  return;
}


