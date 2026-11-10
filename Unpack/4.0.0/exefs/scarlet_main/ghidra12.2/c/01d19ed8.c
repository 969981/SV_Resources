/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d19ed8; name: FUN_01d19ed8
 */


void FUN_01d19ed8(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  lVar4 = *param_1;
  *param_1 = param_2;
  if (lVar4 != 0) {
    FUN_00c4e5a0(auStack_48,0);
    plVar1 = (long *)param_1[1];
    lVar2 = param_1[2];
    lVar5 = param_1[3];
    uVar3 = FUN_00c4e564(plVar1);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar2,lVar5);
    }
    else {
      FUN_00c48fe8(plVar1,lVar4,lVar2,lVar5);
    }
    FUN_00c4e70c(auStack_48);
  }
  return;
}


