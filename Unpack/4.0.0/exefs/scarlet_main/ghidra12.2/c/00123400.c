/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00123400; name: FUN_00123400
 */


void FUN_00123400(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(*(long *)(param_1 + 0x10) + -8) == 'D') &&
     (*(long *)(*(long *)(param_1 + 0x10) + -0x10) == *(long *)(*(long *)(param_1 + 0x18) + 0x110)))
  {
                    /* WARNING: Subroutine does not return */
    FUN_00126bd0(param_1,4);
  }
  FUN_00126240();
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x123438);
  (*pcVar1)();
}


