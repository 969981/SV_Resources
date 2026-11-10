/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


