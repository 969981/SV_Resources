/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01837fc0; name: FUN_01837fc0
 */


void FUN_01837fc0(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_015ec69c();
  if (lVar1 == 0) {
    *(undefined1 *)(param_1 + 3) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    param_1[2] = lVar1 + 0x30;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return;
}


