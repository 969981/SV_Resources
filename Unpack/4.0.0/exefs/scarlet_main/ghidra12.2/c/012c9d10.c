/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012c9d10; name: FUN_012c9d10
 */


void FUN_012c9d10(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = param_1[2] - param_1[1];
  if (lVar3 != 0) {
    param_1[2] = param_1[2] + (lVar3 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
  }
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
  lVar1 = param_1[3];
  plVar4 = *(long **)param_1[4];
  uVar2 = FUN_00c4e564(plVar4);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x012c9d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,lVar1 - lVar3,8);
    return;
  }
  FUN_00c48fe8(plVar4,lVar3,lVar1 - lVar3,8);
  return;
}


