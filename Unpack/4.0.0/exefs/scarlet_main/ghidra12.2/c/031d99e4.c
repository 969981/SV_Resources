/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d99e4; name: FUN_031d99e4
 */


long FUN_031d99e4(long param_1,long param_2,ulong *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  uVar3 = param_2 + 0xfU & 0xfffffffffffffff0;
  *param_3 = uVar3;
  uVar4 = *(ulong *)(param_1 + 0x10);
  if (uVar4 <= uVar3) {
    lVar7 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),uVar3,param_3);
    iVar6 = *(int *)(param_1 + 0x40);
    lVar5 = (long)iVar6;
    if ((int)(*(uint *)(param_1 + 0x44) & 0x7fffffff) <= iVar6) {
      FUN_031d9bfc(param_1 + 0x38,*(undefined8 *)(param_1 + 8),lVar5 + 1);
      iVar6 = *(int *)(param_1 + 0x40);
    }
    *(int *)(param_1 + 0x40) = (int)(lVar5 + 1);
    plVar1 = (long *)(*(long *)(param_1 + 0x38) + (long)iVar6 * 0x10);
    uVar3 = *param_3;
    *plVar1 = lVar7;
    plVar1[1] = uVar3;
    return lVar7;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
LAB_031d9a3c:
    uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),uVar4);
    iVar6 = *(int *)(param_1 + 0x30);
    lVar7 = (long)iVar6;
    if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) <= iVar6) {
      FUN_031cfdc8(param_1 + 0x28,*(undefined8 *)(param_1 + 8),lVar7 + 1);
      iVar6 = *(int *)(param_1 + 0x30);
    }
    *(int *)(param_1 + 0x30) = (int)(lVar7 + 1);
    *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)iVar6 * 8) = uVar2;
    iVar6 = *(int *)(param_1 + 0x18) + 1;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x20);
    iVar6 = *(int *)(param_1 + 0x18);
    if (lVar7 + uVar3 <= uVar4) goto LAB_031d9aa4;
    iVar6 = iVar6 + 1;
    if (*(int *)(param_1 + 0x30) <= iVar6) goto LAB_031d9a3c;
  }
  *(int *)(param_1 + 0x18) = iVar6;
  lVar7 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar3 = *param_3;
LAB_031d9aa4:
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + (long)iVar6 * 8);
  *(ulong *)(param_1 + 0x20) = lVar7 + uVar3;
  return lVar5 + lVar7;
}


