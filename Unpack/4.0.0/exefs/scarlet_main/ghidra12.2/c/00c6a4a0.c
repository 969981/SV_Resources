/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


