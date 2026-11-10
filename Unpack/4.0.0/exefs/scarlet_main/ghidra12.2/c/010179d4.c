/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010179d4; name: FUN_010179d4
 */


void FUN_010179d4(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x420);
  (**(code **)(*plVar1 + 0x18))(param_1,plVar1);
  *(long **)(param_1 + 0x10) = plVar1;
  return;
}


