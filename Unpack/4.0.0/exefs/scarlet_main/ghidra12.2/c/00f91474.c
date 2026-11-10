/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f91474; name: FUN_00f91474
 */


void FUN_00f91474(long *param_1)

{
  long lVar1;
  long *local_30 [2];
  
  FUN_00f91650();
  if (*param_1 != 0) {
    FUN_00f91814(local_30);
    lVar1 = 0;
    if (local_30[0] != (long *)0x0) {
      lVar1 = *local_30[0];
    }
    param_1[1] = lVar1;
    FUN_00f91540(local_30);
  }
  return;
}


