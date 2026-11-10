/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298d04c; name: FUN_0298d04c
 */


void FUN_0298d04c(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_2 < 5) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x30) + (ulong)param_2 * 0x38 + 0x28;
  }
  FUN_02923358(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290),lVar1,param_2);
  return;
}


