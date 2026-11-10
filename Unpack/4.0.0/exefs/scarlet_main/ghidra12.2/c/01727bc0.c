/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01727bc0; name: FUN_01727bc0
 */


void FUN_01727bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  FUN_01727c5c(param_3);
  lVar1 = FUN_01727bf0();
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  *(undefined8 *)(lVar1 + 0x30) = param_2;
  FUN_01728020();
  return;
}


