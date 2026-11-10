/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0151b0b8; name: FUN_0151b0b8
 */


void FUN_0151b0b8(long param_1,long *param_2,undefined1 *param_3,long *param_4,undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long local_78;
  long local_70;
  long lStack_68;
  long local_60;
  undefined1 auStack_58 [24];
  
  if (*param_2 == 0) {
    FUN_00d8a020(&local_78,*(undefined8 *)(param_1 + 8),param_5);
    lVar4 = local_78;
    local_78 = 0;
    lVar7 = *param_2;
    *param_2 = lVar4;
    if (lVar7 != 0) {
      FUN_00c4e5a0(auStack_58,0);
      FUN_00eeabac(lVar7);
      plVar1 = (long *)param_2[1];
      lVar4 = param_2[2];
      lVar8 = param_2[3];
      uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
      if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar7,lVar4,lVar8);
      }
      else {
        FUN_00c48fe8(plVar1,lVar7,lVar4,lVar8);
      }
      FUN_00c4e70c(auStack_58);
    }
    param_2[1] = local_70;
    param_2[2] = lStack_68;
    param_2[3] = local_60;
    *param_3 = 1;
  }
  lVar4 = *(long *)(*param_4 + 0x48);
  piVar6 = (int *)param_4[2];
  if (*(int *)(lVar4 + 200) == *(int *)param_4[1]) {
    iVar5 = *piVar6;
    if (*(int *)(lVar4 + 0xcc) == iVar5) {
      return;
    }
  }
  else {
    *(int *)(lVar4 + 200) = *(int *)param_4[1];
    iVar5 = *piVar6;
    if (*(int *)(lVar4 + 0xcc) == iVar5) goto LAB_0151b180;
  }
  *(int *)(lVar4 + 0xcc) = iVar5;
LAB_0151b180:
  *param_3 = 1;
  return;
}


