/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02784cf0; name: FUN_02784cf0
 */


void FUN_02784cf0(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if (param_1 != param_2) {
    plVar4 = (long *)(param_3 + 8);
    do {
      lVar3 = *param_1;
      *param_1 = 0;
      lVar2 = plVar4[-1];
      plVar4[-1] = lVar3;
      if (lVar2 != 0) {
        FUN_027853e8(plVar4);
      }
      lVar2 = param_1[1];
      plVar1 = param_1 + 2;
      lVar3 = param_1[3];
      param_1 = param_1 + 4;
      plVar4[1] = *plVar1;
      plVar4[2] = lVar3;
      *plVar4 = lVar2;
      plVar4 = plVar4 + 4;
    } while (param_1 != param_2);
  }
  return;
}


