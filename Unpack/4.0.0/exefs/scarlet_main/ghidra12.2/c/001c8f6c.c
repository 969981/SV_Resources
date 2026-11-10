/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c8f6c; name: FUN_001c8f6c
 */


void FUN_001c8f6c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  param_1[2] = lVar1 + -1;
  if (lVar1 + -1 == 0) {
    FUN_001c7e00(*param_1);
    FUN_001ec308(param_1);
    return;
  }
  return;
}


