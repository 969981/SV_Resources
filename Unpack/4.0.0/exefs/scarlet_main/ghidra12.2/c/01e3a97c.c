/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e3a97c; name: FUN_01e3a97c
 */


void FUN_01e3a97c(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_2 != (long *)0x0) {
    do {
      plVar4 = (long *)*param_2;
      FUN_00de1844(param_2 + 2);
      plVar3 = *(long **)(param_1 + 0x38);
      uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2,0x50,8);
      }
      else {
        FUN_00c48fe8(plVar3,param_2,0x50,8);
      }
      param_2 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
  return;
}


