/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011902e4; name: FUN_011902e4
 */


void FUN_011902e4(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_2;
  *param_2 = 0;
  lVar5 = *param_1;
  *param_1 = lVar4;
  if (lVar5 != 0) {
    plVar1 = (long *)param_1[1];
    lVar4 = param_1[2];
    lVar6 = param_1[3];
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar5,lVar4,lVar6);
        goto LAB_01190314;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4,lVar6);
  }
LAB_01190314:
  lVar4 = param_2[1];
  lVar5 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar5;
  param_1[1] = lVar4;
  return;
}


