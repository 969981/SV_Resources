/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e266fc; name: FUN_01e266fc
 */


void FUN_01e266fc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (param_1[7] == *(long *)(param_2 + 0x38)) goto LAB_01e26784;
  FUN_0115603c(param_1);
  lVar5 = *param_1;
  *param_1 = 0;
  if (lVar5 != 0) {
    lVar1 = param_1[1];
    plVar2 = (long *)param_1[2];
    uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar2,lVar5,lVar1 << 3,8);
        goto LAB_01e26780;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 << 3,8);
  }
LAB_01e26780:
  param_1[1] = 0;
LAB_01e26784:
  lVar5 = *(long *)(param_2 + 0x10);
  lVar1 = *(long *)(param_2 + 0x18);
  lVar4 = *(long *)(param_2 + 0x28);
  param_1[4] = *(long *)(param_2 + 0x20);
  param_1[5] = lVar4;
  param_1[2] = lVar5;
  param_1[3] = lVar1;
  lVar5 = *(long *)(param_2 + 0x38);
  lVar1 = *(long *)(param_2 + 0x40);
  lVar4 = *(long *)(param_2 + 0x50);
  param_1[9] = *(long *)(param_2 + 0x48);
  param_1[10] = lVar4;
  param_1[7] = lVar5;
  param_1[8] = lVar1;
  return;
}


