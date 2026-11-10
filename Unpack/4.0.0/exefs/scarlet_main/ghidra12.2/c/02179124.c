/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02179124; name: FUN_02179124
 */


void FUN_02179124(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_3 + 0x38);
  for (plVar2 = *(long **)(param_3 + 0x30); plVar2 != plVar1; plVar2 = plVar2 + 1) {
    FUN_02179174(param_1,param_2,*(undefined8 *)(*plVar2 + 0x30));
  }
  return;
}


