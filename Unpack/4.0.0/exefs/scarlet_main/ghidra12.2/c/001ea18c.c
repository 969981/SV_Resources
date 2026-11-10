/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ea18c; name: FUN_001ea18c
 */


void FUN_001ea18c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    FUN_001ce394(param_2,3,&DAT_03c0815f,*(undefined1 *)(param_1 + lVar1));
    lVar1 = lVar1 + 1;
    param_2 = param_2 + 2;
  } while (lVar1 != 0x20);
  return;
}


