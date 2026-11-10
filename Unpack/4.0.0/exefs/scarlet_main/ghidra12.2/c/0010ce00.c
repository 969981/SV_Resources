/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0010ce00; name: FUN_0010ce00
 */


bool FUN_0010ce00(void)

{
  int iVar1;
  long in_stack_00000008;
  
  if (in_stack_00000008 == 0) {
    iVar1 = FUN_0010ce60();
  }
  else {
    iVar1 = FUN_00110cb0(in_stack_00000008);
  }
  return iVar1 != 0;
}


