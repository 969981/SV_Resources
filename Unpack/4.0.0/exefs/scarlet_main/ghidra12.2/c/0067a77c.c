/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0067a77c; name: FUN_0067a77c
 */


undefined8 FUN_0067a77c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  byte local_70;
  undefined7 uStack_6f;
  ulong local_60;
  long *plStack_58;
  byte local_50;
  undefined7 uStack_4f;
  ulong local_40;
  long *plStack_38;
  
  uVar2 = FUN_0066af14(param_3);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  uVar3 = FUN_0066af54(param_3);
  FUN_0066b4d4(&local_70,param_2);
  uVar2 = (ulong)&local_70 | 1;
  if ((local_70 & 1) != 0) {
    uVar2 = local_60;
  }
                    /* try { // try from 0067a7dc to 0067a7ef has its CatchHandler @ 0067a93c */
  FUN_00684810(&local_50,"current",uVar2);
  uVar2 = (ulong)&local_50 | 1;
  if ((local_50 & 1) != 0) {
    uVar2 = local_40;
  }
                    /* try { // try from 0067a804 to 0067a80b has its CatchHandler @ 0067a910 */
  FUN_0067c024(uVar3,uVar2);
  if ((local_50 & 1) == 0) {
    if ((local_70 & 1) != 0) goto LAB_0067a874;
LAB_0067a81c:
    lVar8 = *(long *)(param_1 + 0x50);
    puVar7 = (undefined8 *)(lVar8 + 0x10);
    piVar5 = *(int **)(lVar8 + 0x20);
    if (piVar5 == (int *)0x0) goto LAB_0067a8a0;
LAB_0067a82c:
    iVar1 = *(int *)(lVar8 + 0x18);
    iVar6 = *piVar5;
    if (iVar1 < iVar6) {
      *(int *)(lVar8 + 0x18) = iVar1 + 1;
      uVar4 = *(undefined8 *)(piVar5 + (long)iVar1 * 2 + 2);
      goto LAB_0067a8f0;
    }
    if (iVar6 == *(int *)(lVar8 + 0x1c)) goto LAB_0067a8b4;
  }
  else {
    (**(code **)(*plStack_38 + 0x18))
              (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
    if ((local_70 & 1) == 0) goto LAB_0067a81c;
LAB_0067a874:
    (**(code **)(*plStack_58 + 0x18))
              (plStack_58,local_60,CONCAT71(uStack_6f,local_70) & 0xfffffffffffffffe,1);
    lVar8 = *(long *)(param_1 + 0x50);
    puVar7 = (undefined8 *)(lVar8 + 0x10);
    piVar5 = *(int **)(lVar8 + 0x20);
    if (piVar5 != (int *)0x0) goto LAB_0067a82c;
LAB_0067a8a0:
    iVar6 = *(int *)(lVar8 + 0x1c);
LAB_0067a8b4:
                    /* try { // try from 0067a8b8 to 0067a8f7 has its CatchHandler @ 0067a96c */
    FUN_00532334(puVar7,iVar6 + 1);
    piVar5 = *(int **)(lVar8 + 0x20);
    iVar6 = *piVar5;
  }
  *piVar5 = iVar6 + 1;
  uVar4 = FUN_0069d898(*puVar7);
  iVar6 = *(int *)(lVar8 + 0x18);
  *(int *)(lVar8 + 0x18) = iVar6 + 1;
  *(undefined8 *)(*(long *)(lVar8 + 0x20) + (long)iVar6 * 8 + 8) = uVar4;
LAB_0067a8f0:
  FUN_00696ddc(uVar4,uVar3);
  return 1;
}


