/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c344f4; name: FUN_01c344f4
 */


void FUN_01c344f4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_0126a9c0();
  if (lVar1 == 0) {
    *param_1 = 0;
    return;
  }
  FUN_01e70f40(param_1);
  return;
}


