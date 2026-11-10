/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012e3994; name: FUN_012e3994
 */


void FUN_012e3994(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *param_1;
  *param_1 = param_2;
  if (lVar5 == 0) {
    return;
  }
  plVar1 = (long *)param_1[1];
  lVar2 = param_1[2];
  lVar6 = param_1[3];
  uVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00c4e600();
    if (0 < *(int *)(lVar4 + 0x12c8)) {
      FUN_00c48fe8(plVar1,lVar5,lVar2,lVar6);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x012e3a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar2,lVar6);
  return;
}


