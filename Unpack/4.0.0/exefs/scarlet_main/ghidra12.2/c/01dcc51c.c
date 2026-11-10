/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dcc51c; name: FUN_01dcc51c
 */


void FUN_01dcc51c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_00e965dc(lVar1,0);
  *(undefined4 *)(lVar1 + 0x3c) = 0;
  *(undefined1 *)((long)param_1 + 0x31) = 0;
  if ((undefined1 *)param_1[7] != (undefined1 *)0x0) {
    *(undefined1 *)param_1[7] = 1;
  }
  return;
}


