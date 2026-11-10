/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017eb460; name: FUN_017eb460
 */


void FUN_017eb460(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  lVar1 = param_1[2];
  plVar2 = (long *)param_1[3];
  param_1[1] = lVar5;
  uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00c4e600();
    if (0 < *(int *)(lVar4 + 0x12c8)) {
      FUN_00c48fe8(plVar2,lVar5,lVar1 - lVar5,4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x017eb4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,4);
  return;
}


