/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f920c; name: FUN_001f920c
 */


void FUN_001f920c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    *param_1 = *(long *)(lVar1 + 0x88);
    *(undefined8 *)(lVar1 + 0x88) = 0;
    if (*param_1 == 0) {
      param_1[1] = 0;
    }
    param_1[2] = param_1[2] + -1;
  }
  return;
}


