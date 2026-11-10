/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00df4d30; name: FUN_00df4d30
 */


void FUN_00df4d30(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 == 0) {
    return;
  }
  lVar1 = param_1[2];
  plVar4 = *(long **)param_1[1];
  uVar2 = FUN_00c4e564(plVar4);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00df4d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,lVar1 * 0x48,8);
    return;
  }
  FUN_00c48fe8(plVar4,lVar3,lVar1 * 0x48,8);
  return;
}


