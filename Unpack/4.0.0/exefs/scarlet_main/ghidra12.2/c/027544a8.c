/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027544a8; name: FUN_027544a8
 */


void FUN_027544a8(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_2 != (long *)0x0) {
    do {
      lVar2 = param_2[3];
      param_2[3] = 0;
      plVar4 = (long *)*param_2;
      if (lVar2 != 0) {
        FUN_027545a8(param_2 + 4);
      }
      plVar3 = *(long **)(param_1 + 0x38);
      uVar1 = FUN_00c4e564(plVar3);
      if ((uVar1 & 1) == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2,0x38,8);
      }
      else {
        FUN_00c48fe8(plVar3,param_2,0x38,8);
      }
      param_2 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
  return;
}


