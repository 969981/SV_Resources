/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017341fc; name: FUN_017341fc
 */


int FUN_017341fc(long param_1,int *param_2)

{
  if (*(int *)(param_1 + 0x28) == 0) {
    return *param_2 + *(int *)(param_1 + 0x20) * param_2[1];
  }
  return param_2[1] + *(int *)(param_1 + 0x24) * *param_2;
}


