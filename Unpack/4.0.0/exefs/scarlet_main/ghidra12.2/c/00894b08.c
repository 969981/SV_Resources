/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00894b08; name: FUN_00894b08
 */


void FUN_00894b08(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[1];
  while (plVar2 = plVar3, param_1 != plVar2) {
    plVar3 = (long *)plVar2[1];
    if (param_1 != plVar2) {
      lVar1 = *plVar3;
      *(long **)(*plVar2 + 8) = plVar3;
      *plVar3 = *plVar2;
      *(long **)(lVar1 + 8) = plVar2;
      *plVar2 = lVar1;
    }
    if ((char)plVar2[5] == '\0') {
      plVar2 = plVar2 + -1;
      (**(code **)*plVar2)(plVar2);
      FUN_00896e98(plVar2);
    }
  }
  return;
}


