/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01767b00; name: FUN_01767b00
 */


void FUN_01767b00(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  *(long *)(*param_2 + 8) = param_2[1];
  *(long *)param_2[1] = *param_2;
  plVar1 = *(long **)(param_1 + 0x18);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -1;
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00c4e600();
    if (0 < *(int *)(lVar3 + 0x12c8)) {
      FUN_00c48fe8(plVar1,param_2,0x18,4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01767b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2,0x18,4);
  return;
}


