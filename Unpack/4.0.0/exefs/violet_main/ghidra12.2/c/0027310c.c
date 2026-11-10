/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


