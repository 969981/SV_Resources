/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f74524; name: FUN_01f74524
 */


void FUN_01f74524(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_01d11cf4();
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_01f74694(param_1,param_2);
  return;
}


