/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0032e288; name: FUN_0032e288
 */


void FUN_0032e288(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 8);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    lVar2 = *(long *)(param_2 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if ((lVar2 == *(long *)(lVar1 + 0x48)) || (lVar2 == *(long *)(lVar1 + 0x50))) {
                    /* WARNING: Could not recover jumptable at 0x0032e2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(lVar1 + 0x28) + 0x10))();
      return;
    }
  }
  *param_1 = 0;
  return;
}


