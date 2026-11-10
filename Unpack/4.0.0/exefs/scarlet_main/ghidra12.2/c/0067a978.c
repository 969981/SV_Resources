/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0067a978; name: FUN_0067a978
 */


undefined8 FUN_0067a978(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  byte *pbVar6;
  int *piVar7;
  int iVar8;
  ulong uVar9;
  int *piVar11;
  int *piVar10;
  long lVar12;
  int *piVar13;
  int *piVar14;
  long lVar15;
  int *piVar16;
  byte local_110;
  undefined7 uStack_10f;
  ulong local_100;
  long *plStack_f8;
  byte local_f0;
  undefined7 uStack_ef;
  ulong local_e0;
  long *plStack_d8;
  undefined1 auStack_d0 [144];
  
  uVar3 = FUN_0066af34(param_3);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  uVar4 = FUN_0066af64(param_3);
  FUN_00683668(auStack_d0,uVar4);
  lVar15 = *(long *)(param_1 + 0x50);
  piVar7 = *(int **)(lVar15 + 0x20);
  if (piVar7 == (int *)0x0) {
    iVar8 = *(int *)(lVar15 + 0x1c);
LAB_0067aa3c:
                    /* try { // try from 0067aa40 to 0067aa5f has its CatchHandler @ 0067ad88 */
    FUN_00532334((undefined8 *)(lVar15 + 0x10),iVar8 + 1);
    piVar7 = *(int **)(lVar15 + 0x20);
    iVar8 = *piVar7;
LAB_0067aa50:
    *piVar7 = iVar8 + 1;
    lVar12 = FUN_0069d898(*(undefined8 *)(lVar15 + 0x10));
    iVar8 = *(int *)(lVar15 + 0x18);
    *(int *)(lVar15 + 0x18) = iVar8 + 1;
    *(long *)(*(long *)(lVar15 + 0x20) + (long)iVar8 * 8 + 8) = lVar12;
    if (*(int *)(lVar12 + 0x1c) != 5) goto LAB_0067a9fc;
LAB_0067aa88:
    uVar4 = *(undefined8 *)(lVar12 + 0x10);
  }
  else {
    iVar2 = *(int *)(lVar15 + 0x18);
    iVar8 = *piVar7;
    if (iVar8 <= iVar2) {
      if (iVar8 == *(int *)(lVar15 + 0x1c)) goto LAB_0067aa3c;
      goto LAB_0067aa50;
    }
    *(int *)(lVar15 + 0x18) = iVar2 + 1;
    lVar12 = *(long *)(piVar7 + (long)iVar2 * 2 + 2);
    if (*(int *)(lVar12 + 0x1c) == 5) goto LAB_0067aa88;
LAB_0067a9fc:
                    /* try { // try from 0067a9fc to 0067aa1b has its CatchHandler @ 0067ad84 */
    FUN_00696bf8(lVar12);
    *(undefined4 *)(lVar12 + 0x1c) = 5;
    puVar5 = (ulong *)(*(ulong *)(lVar12 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar12 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    uVar4 = FUN_0069def0(puVar5);
    *(undefined8 *)(lVar12 + 0x10) = uVar4;
  }
  FUN_0066b4d4(&local_110,param_2);
  uVar3 = (ulong)&local_110 | 1;
  if ((local_110 & 1) != 0) {
    uVar3 = local_100;
  }
                    /* try { // try from 0067aab0 to 0067aac3 has its CatchHandler @ 0067ad4c */
  FUN_00684810(&local_f0,"current",uVar3);
  uVar3 = (ulong)&local_f0 | 1;
  if ((local_f0 & 1) != 0) {
    uVar3 = local_e0;
  }
                    /* try { // try from 0067aad8 to 0067aadf has its CatchHandler @ 0067ad00 */
  FUN_0067c144(uVar4,uVar3);
  if ((local_f0 & 1) == 0) {
    if ((local_110 & 1) == 0) goto LAB_0067aaf0;
LAB_0067ab34:
    (**(code **)(*plStack_f8 + 0x18))
              (plStack_f8,local_100,CONCAT71(uStack_10f,local_110) & 0xfffffffffffffffe,1);
    pbVar6 = (byte *)FUN_00683a80(auStack_d0);
    bVar1 = *pbVar6;
    if ((bVar1 & 1) != 0) goto LAB_0067ab60;
LAB_0067ab00:
    if (bVar1 < 2) goto LAB_0067ab74;
    pbVar6 = pbVar6 + 1;
  }
  else {
    (**(code **)(*plStack_d8 + 0x18))
              (plStack_d8,local_e0,CONCAT71(uStack_ef,local_f0) & 0xfffffffffffffffe,1);
    if ((local_110 & 1) != 0) goto LAB_0067ab34;
LAB_0067aaf0:
    pbVar6 = (byte *)FUN_00683a80(auStack_d0);
    bVar1 = *pbVar6;
    if ((bVar1 & 1) == 0) goto LAB_0067ab00;
LAB_0067ab60:
    if (*(long *)(pbVar6 + 8) == 0) goto LAB_0067ab74;
    pbVar6 = *(byte **)(pbVar6 + 0x10);
  }
                    /* try { // try from 0067ab6c to 0067ab73 has its CatchHandler @ 0067acfc */
  FUN_0067c264(uVar4,pbVar6);
LAB_0067ab74:
  iVar8 = *(int *)(*(long *)(param_1 + 0x50) + 0x18) + -1;
  piVar7 = *(int **)(param_1 + 0x80);
  if (piVar7 < *(int **)(param_1 + 0x88)) {
    *piVar7 = iVar8;
    FUN_00683668(piVar7 + 4,auStack_d0);
    *(int **)(param_1 + 0x80) = piVar7 + 0x28;
  }
  else {
    lVar15 = (long)piVar7 - *(long *)(param_1 + 0x78) >> 5;
    uVar3 = lVar15 * -0x3333333333333333 + 1;
    if (0x199999999999999 < uVar3) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0067acf4 to 0067acf7 has its CatchHandler @ 0067acf8 */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = (long)*(int **)(param_1 + 0x88) - *(long *)(param_1 + 0x78) >> 5;
    uVar9 = lVar12 * -0x6666666666666666;
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    if (0xcccccccccccccb < (ulong)(lVar12 * -0x3333333333333333)) {
      uVar3 = 0x199999999999999;
    }
    if (uVar3 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (**(code **)(**(long **)(param_1 + 0x90) + 0x10))
                         (*(long **)(param_1 + 0x90),uVar3 * 0xa0,0x10);
    }
    piVar13 = (int *)(lVar12 + lVar15 * 0x20);
    piVar16 = piVar13 + 0x28;
    *piVar13 = iVar8;
    FUN_00683668(piVar13 + 4,auStack_d0);
    piVar7 = *(int **)(param_1 + 0x78);
    piVar10 = *(int **)(param_1 + 0x80);
    piVar14 = piVar13;
    if (*(int **)(param_1 + 0x80) == piVar7) {
      piVar10 = piVar7;
    }
    else {
      do {
        piVar11 = piVar10 + -0x28;
        piVar13 = piVar14 + -0x28;
        *piVar13 = *piVar11;
        FUN_00683668(piVar14 + -0x24,piVar10 + -0x24);
        piVar10 = piVar11;
        piVar14 = piVar13;
      } while (piVar7 != piVar11);
      piVar7 = *(int **)(param_1 + 0x78);
      piVar10 = *(int **)(param_1 + 0x80);
    }
    *(int **)(param_1 + 0x78) = piVar13;
    *(int **)(param_1 + 0x80) = piVar16;
    lVar15 = *(long *)(param_1 + 0x88);
    *(ulong *)(param_1 + 0x88) = lVar12 + uVar3 * 0xa0;
    for (; piVar10 != piVar7; piVar10 = piVar10 + -0x28) {
      FUN_01e7396c(piVar10 + -0x24);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x90) + 0x18))
                (*(long **)(param_1 + 0x90),piVar7,lVar15 - (long)piVar7,0x10);
    }
  }
  FUN_01e7396c(auStack_d0);
  return 1;
}


