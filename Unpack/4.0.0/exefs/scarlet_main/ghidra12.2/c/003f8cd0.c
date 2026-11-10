/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f8cd0; name: FUN_003f8cd0
 */


void FUN_003f8cd0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)(int)param_1[1];
  if ((int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
    lVar2 = *param_1;
    do {
      *(undefined4 *)(lVar2 + lVar1 * 4) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)((long)param_1 + 0xc));
  }
  return;
}


