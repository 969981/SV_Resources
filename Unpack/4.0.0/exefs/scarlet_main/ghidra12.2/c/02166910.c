/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02166910; name: FUN_02166910
 */


long * FUN_02166910(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 != param_2) {
    do {
      lVar2 = *param_1;
      plVar1 = (long *)param_1[3];
      if (plVar1 == (long *)0x0) {
        lVar3 = *param_3;
      }
      else {
        (**(code **)(*plVar1 + 0x18))(plVar1);
        lVar3 = *param_3;
        (**(code **)(*plVar1 + 0x20))(plVar1);
      }
      if (lVar2 == lVar3) {
        return param_1;
      }
      param_1 = param_1 + 6;
    } while (param_1 != param_2);
    param_1 = param_2;
  }
  return param_1;
}


