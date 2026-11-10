/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d116a8; name: FUN_01d116a8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d116a8(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_047cfc88 + 0x10);
  FUN_01cfa5b0(param_1 + 1,9);
  FUN_01cfa5b0(param_1 + 5,0x29);
  lVar1 = _DAT_00000051;
  param_1[9] = _DAT_00000049;
  param_1[10] = lVar1;
  return;
}


