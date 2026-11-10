/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005389c8; name: FUN_005389c8
 */


void FUN_005389c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  byte local_50;
  undefined7 uStack_4f;
  ulong local_40;
  long *plStack_38;
  
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 == 0) {
    lVar6 = FUN_0049e770(PTR_FUN_047cba38,0x38);
    if (lVar6 != 0) {
                    /* try { // try from 00538a34 to 00538a3f has its CatchHandler @ 00538b1c */
      FUN_0057dd48(lVar6,0);
    }
    *(long *)(param_1 + 8) = lVar6;
    piVar4 = *(int **)(lVar6 + 0x20);
    puVar8 = (undefined8 *)(lVar6 + 0x10);
    if (piVar4 == (int *)0x0) goto LAB_00538a50;
LAB_005389f4:
    iVar2 = *(int *)(lVar6 + 0x18);
    iVar5 = *piVar4;
    if (iVar2 < iVar5) {
      *(int *)(lVar6 + 0x18) = iVar2 + 1;
      uVar7 = *(undefined8 *)(piVar4 + (long)iVar2 * 2 + 2);
      goto LAB_00538aa4;
    }
    if (iVar5 == *(int *)(lVar6 + 0x1c)) goto LAB_00538a64;
  }
  else {
    piVar4 = *(int **)(lVar6 + 0x20);
    puVar8 = (undefined8 *)(lVar6 + 0x10);
    if (piVar4 != (int *)0x0) goto LAB_005389f4;
LAB_00538a50:
    iVar5 = *(int *)(lVar6 + 0x1c);
LAB_00538a64:
                    /* try { // try from 00538a68 to 00538ab7 has its CatchHandler @ 00538b50 */
    FUN_00532334(puVar8,iVar5 + 1);
    piVar4 = *(int **)(lVar6 + 0x20);
    iVar5 = *piVar4;
  }
  *piVar4 = iVar5 + 1;
  uVar7 = FUN_00585d64(*puVar8);
  iVar5 = *(int *)(lVar6 + 0x18);
  *(int *)(lVar6 + 0x18) = iVar5 + 1;
  *(undefined8 *)(*(long *)(lVar6 + 0x20) + (long)iVar5 * 8 + 8) = uVar7;
LAB_00538aa4:
  uVar3 = FUN_0053ec68(param_3);
  FUN_005809f0(uVar7,uVar3);
  FUN_00251690(&local_50,param_2);
  uVar1 = (ulong)&local_50 | 1;
  if ((local_50 & 1) != 0) {
    uVar1 = local_40;
  }
                    /* try { // try from 00538adc to 00538ae3 has its CatchHandler @ 00538b20 */
  FUN_00538b6c(uVar7,uVar1);
  if ((local_50 & 1) != 0) {
    (**(code **)(*plStack_38 + 0x18))
              (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
  }
  return;
}


