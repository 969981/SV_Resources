/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026e7a5c; name: FUN_026e7a5c
 */


void FUN_026e7a5c(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  
  if (param_2[1] != *param_2) {
    uVar1 = 0;
    do {
      FUN_026e8908(param_1,uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (ulong)(param_2[1] - *param_2 >> 3));
  }
  return;
}


