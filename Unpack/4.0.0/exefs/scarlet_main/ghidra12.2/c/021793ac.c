/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021793ac; name: FUN_021793ac
 */


void FUN_021793ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_4 + 0x38);
  for (plVar2 = *(long **)(param_4 + 0x30); plVar2 != plVar1; plVar2 = plVar2 + 1) {
    FUN_011677a8(param_1,param_2,param_3,*(undefined8 *)(*plVar2 + 0x30));
  }
  return;
}


