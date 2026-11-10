/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e94eb8; name: FUN_00e94eb8
 */


void FUN_00e94eb8(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &DAT_04608b48;
  if (param_1[7] != 0) {
    FUN_00dae5f0();
    lVar5 = param_1[7];
    lVar4 = param_1[9];
    plVar1 = (long *)param_1[10];
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar5,lVar4 - lVar5,8);
        goto LAB_00e94ee0;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 - lVar5,8);
  }
LAB_00e94ee0:
  lVar4 = param_1[2];
  param_1[2] = 0;
  if (lVar4 == 0) {
    return;
  }
  FUN_00e94f7c(param_1 + 3);
  return;
}


