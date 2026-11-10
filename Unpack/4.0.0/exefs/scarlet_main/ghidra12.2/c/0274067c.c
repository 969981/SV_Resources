/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0274067c; name: FUN_0274067c
 */


void FUN_0274067c(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  *(long *)(*param_2 + 8) = param_2[1];
  *(long *)param_2[1] = *param_2;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -1;
  FUN_00f19f00(param_2 + 2);
  plVar3 = *(long **)(param_1 + 0x18);
  uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_00c4e600();
    if (0 < *(int *)(lVar2 + 0x12c8)) {
      FUN_00c48fe8(plVar3,param_2,0xd8,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x027406ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3,param_2,0xd8,8);
  return;
}


