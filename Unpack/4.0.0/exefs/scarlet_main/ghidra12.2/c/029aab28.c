/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029aab28; name: FUN_029aab28
 */


void FUN_029aab28(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  plVar1 = DAT_0486acc0;
  uVar2 = (**(code **)(*DAT_0486acc0 + 0xf8))(DAT_0486acc0);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00c4e600();
    if (0 < *(int *)(lVar3 + 0x12c8)) {
      FUN_00c48fe8(plVar1,param_2,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x029aab74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2,0,8);
  return;
}


