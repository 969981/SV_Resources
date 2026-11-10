/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d1b07c; name: FUN_00d1b07c
 */


void FUN_00d1b07c(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar1 = param_1[2];
    plVar2 = (long *)param_1[3];
    param_1[1] = lVar4;
    uVar3 = FUN_00c4e564(plVar2);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar1 - lVar4,0x10);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar1 - lVar4,0x10);
    }
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  return;
}


