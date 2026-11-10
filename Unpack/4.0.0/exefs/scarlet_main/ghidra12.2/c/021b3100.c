/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021b3100; name: FUN_021b3100
 */


void FUN_021b3100(long *param_1,long *param_2)

{
  long lVar1;
  long *local_30 [2];
  
  local_30[0] = (long *)*param_1;
  *param_1 = 0;
  FUN_021af8c0(local_30);
  lVar1 = *param_2;
  *param_2 = 0;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    FUN_021b34e0(local_30);
    lVar1 = 0;
    if (local_30[0] != (long *)0x0) {
      lVar1 = *local_30[0];
    }
    param_1[1] = lVar1;
    FUN_021afcdc(local_30);
  }
  return;
}


