/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d1aedc; name: FUN_01d1aedc
 */


void FUN_01d1aedc(undefined1 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_30 [2];
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_30[0] = param_2;
  local_8 = FUN_01d1b2c0(local_30);
  *param_1 = 1;
  uStack_4 = param_3;
  FUN_01d1b2cc(param_1 + 8,&local_8);
  return;
}


