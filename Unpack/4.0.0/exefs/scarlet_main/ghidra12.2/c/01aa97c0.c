/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01aa97c0; name: FUN_01aa97c0
 */


void FUN_01aa97c0(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  lVar4 = *param_2;
  *param_2 = 0;
  lVar3 = *param_1;
  *param_1 = lVar4;
  if (lVar3 != 0) {
    FUN_00c4e5a0(auStack_48,0);
    plVar1 = (long *)param_1[1];
    lVar4 = param_1[2];
    lVar5 = param_1[3];
    uVar2 = FUN_00c4e564(plVar1);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar4,lVar5);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar4,lVar5);
    }
    FUN_00c4e70c(auStack_48);
  }
  lVar3 = param_2[1];
  lVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar4;
  param_1[1] = lVar3;
  return;
}


