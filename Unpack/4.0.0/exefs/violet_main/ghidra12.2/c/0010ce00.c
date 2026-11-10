/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


