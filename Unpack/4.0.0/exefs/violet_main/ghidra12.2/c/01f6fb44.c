/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6fb44; name: FUN_01f6fb44
 */


void FUN_01f6fb44(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_00267ec4(lVar1);
    FUN_0049e790(PTR_LAB_047cba48,lVar1);
    *param_1 = 0;
  }
  return;
}


