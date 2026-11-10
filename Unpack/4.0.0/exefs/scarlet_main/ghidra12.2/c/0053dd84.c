/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0053dd84; name: FUN_0053dd84
 */


void FUN_0053dd84(long *param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte local_60;
  undefined7 uStack_5f;
  ulong local_50;
  long *plStack_48;
  
  lVar8 = *param_1;
  if (lVar8 == 0) {
    lVar8 = FUN_0049e770(PTR_FUN_047cba38,0x20);
    if (lVar8 != 0) {
                    /* try { // try from 0053ddc4 to 0053ddcf has its CatchHandler @ 0053e004 */
      FUN_00580be0(lVar8,0);
    }
    *param_1 = lVar8;
  }
                    /* try { // try from 0053ddd4 to 0053de3b has its CatchHandler @ 0053e03c */
  FUN_00580eec(lVar8);
  lVar8 = *param_1;
  if (*(int *)(lVar8 + 0x1c) == 1) {
    lVar9 = *(long *)(lVar8 + 0x10);
    lVar8 = *(long *)(lVar9 + 0x10);
  }
  else {
    FUN_00580ac0(lVar8);
    *(undefined4 *)(lVar8 + 0x1c) = 1;
    puVar3 = (ulong *)(*(ulong *)(lVar8 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar8 + 8) & 1) != 0) {
      puVar3 = (ulong *)*puVar3;
    }
    lVar9 = FUN_00585ef0(puVar3);
    *(long *)(lVar8 + 0x10) = lVar9;
    lVar8 = *(long *)(lVar9 + 0x10);
  }
  if (lVar8 == 0) {
    puVar3 = (ulong *)(*(ulong *)(lVar9 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar9 + 8) & 1) != 0) {
      puVar3 = (ulong *)*puVar3;
    }
    lVar8 = FUN_005854a4(puVar3);
    *(long *)(lVar9 + 0x10) = lVar8;
  }
                    /* try { // try from 0053de50 to 0053de5f has its CatchHandler @ 0053e038 */
  FUN_0056dec0(&local_60,*(undefined8 *)PTR_PTR_047cde38,param_2);
  uVar5 = (ulong)&local_60 | 1;
  if ((local_60 & 1) != 0) {
    uVar5 = local_50;
  }
                    /* try { // try from 0053de74 to 0053de7b has its CatchHandler @ 0053e008 */
  FUN_0053e04c(lVar8,uVar5);
  if ((local_60 & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
  }
  lVar8 = *param_3;
  lVar9 = param_3[1];
  do {
    if (lVar8 == lVar9) {
      return;
    }
    lVar7 = *param_1;
    if (*(int *)(lVar7 + 0x1c) == 1) {
      lVar10 = *(long *)(lVar7 + 0x10);
      lVar7 = *(long *)(lVar10 + 0x10);
    }
    else {
                    /* try { // try from 0053df00 to 0053df7b has its CatchHandler @ 0053e040 */
      FUN_00580ac0(lVar7);
      puVar3 = (ulong *)(*(ulong *)(lVar7 + 8) & 0xfffffffffffffffe);
      *(undefined4 *)(lVar7 + 0x1c) = 1;
      if ((*(ulong *)(lVar7 + 8) & 1) != 0) {
        puVar3 = (ulong *)*puVar3;
      }
      lVar10 = FUN_00585ef0(puVar3);
      *(long *)(lVar7 + 0x10) = lVar10;
      lVar7 = *(long *)(lVar10 + 0x10);
    }
    if (lVar7 == 0) {
      puVar3 = (ulong *)(*(ulong *)(lVar10 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(lVar10 + 8) & 1) != 0) {
        puVar3 = (ulong *)*puVar3;
      }
      lVar7 = FUN_005854a4(puVar3);
      *(long *)(lVar10 + 0x10) = lVar7;
    }
    puVar3 = (ulong *)(lVar7 + 0x10);
    lVar10 = FUN_0056b4f8(lVar8);
    uVar5 = *(ulong *)(lVar10 + 8);
    puVar4 = (ulong *)(uVar5 & 0xfffffffffffffffe);
    if ((uVar5 & 1) == 0) {
      if ((ulong *)*puVar3 != puVar4) goto LAB_0053df70;
LAB_0053df90:
      piVar6 = *(int **)(lVar7 + 0x20);
      if (piVar6 == (int *)0x0) goto LAB_0053df70;
      iVar1 = *piVar6;
      if (*(int *)(lVar7 + 0x1c) <= iVar1) goto LAB_0053df70;
      iVar2 = *(int *)(lVar7 + 0x18);
      if (iVar2 < iVar1) {
        *(undefined8 *)(piVar6 + (long)iVar1 * 2 + 2) =
             *(undefined8 *)(piVar6 + (long)iVar2 * 2 + 2);
      }
      *(long *)(piVar6 + (long)iVar2 * 2 + 2) = lVar10;
      *(int *)(lVar7 + 0x18) = iVar2 + 1;
      **(int **)(lVar7 + 0x20) = **(int **)(lVar7 + 0x20) + 1;
    }
    else {
      if (*puVar3 == *puVar4) goto LAB_0053df90;
LAB_0053df70:
      if ((uVar5 & 1) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      FUN_0053e16c(puVar3,lVar10,puVar4);
    }
    lVar8 = lVar8 + 8;
  } while( true );
}


