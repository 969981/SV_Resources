/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015cc66c; name: FUN_015cc66c
 */


void FUN_015cc66c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  FUN_015cc718(param_1,param_1[1]);
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return;
  }
  lVar1 = param_1[3];
  plVar5 = *(long **)param_1[4];
  uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00c4e600();
    if (0 < *(int *)(lVar3 + 0x12c8)) {
      FUN_00c48fe8(plVar5,lVar4,lVar1 - lVar4,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x015cc6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar1 - lVar4,8);
  return;
}


