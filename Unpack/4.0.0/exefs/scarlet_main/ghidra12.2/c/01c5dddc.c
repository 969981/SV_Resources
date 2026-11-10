/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c5dddc; name: FUN_01c5dddc
 */


void FUN_01c5dddc(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_016c7db0();
  if (lVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_01e956a4(param_1,lVar1,5,param_2,0x2c);
  return;
}


