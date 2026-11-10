/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f78be4; name: FUN_01f78be4
 */


void FUN_01f78be4(long *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_047cfc88 + 0x10);
  FUN_01cfa5b0(param_1 + 1,param_2 + 8);
  FUN_01cfa5b0(param_1 + 5,param_2 + 0x28);
  lVar1 = *(long *)(param_2 + 0x50);
  param_1[9] = *(long *)(param_2 + 0x48);
  param_1[10] = lVar1;
  return;
}


