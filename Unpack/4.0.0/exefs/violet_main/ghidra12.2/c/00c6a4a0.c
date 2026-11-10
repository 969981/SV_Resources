/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c6a4a0; name: FUN_00c6a4a0
 */


undefined1  [16] FUN_00c6a4a0(undefined1 (*param_1) [12])

{
  undefined1 auVar1 [16];
  
  if (param_1 == (undefined1 (*) [12])0x0) {
    return ZEXT816(0);
  }
  auVar1._12_4_ = 0;
  auVar1._0_12_ = *param_1;
  return auVar1;
}


