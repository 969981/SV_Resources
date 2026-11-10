/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0027310c; name: FUN_0027310c
 */


void FUN_0027310c(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047cbe78;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (*(long **)PTR_DAT_047cbe70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  (**(code **)(**(long **)PTR_DAT_047cbe70 + 0x10))();
  puVar1 = PTR_DAT_047cc390;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


