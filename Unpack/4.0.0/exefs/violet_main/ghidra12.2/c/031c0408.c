/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031c0408; name: FUN_031c0408
 */


int FUN_031c0408(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) * 0x19660d + 0x3c6ef35f;
  *(int *)(param_1 + 4) = iVar1;
  return iVar1;
}


