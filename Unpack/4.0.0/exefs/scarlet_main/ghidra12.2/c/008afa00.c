/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008afa00; name: FUN_008afa00
 */


void FUN_008afa00(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[1];
  while (plVar3 != param_1) {
    FUN_00894590(plVar3 + 3,param_2,(char)plVar3[0xb] == '\0');
    if (param_1 != plVar3) {
      plVar1 = (long *)plVar3[1];
      lVar2 = *plVar1;
      *(long **)(*plVar3 + 8) = plVar1;
      *plVar1 = *plVar3;
      *(long **)(lVar2 + 8) = plVar3;
      *plVar3 = lVar2;
    }
    FUN_00896e98(plVar3);
    plVar3 = (long *)param_1[1];
  }
  return;
}


