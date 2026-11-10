/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00671bf0; name: FUN_00671bf0
 */


void FUN_00671bf0(undefined8 *param_1,undefined8 *param_2,byte *param_3)

{
  ulong uVar1;
  undefined7 *puVar2;
  byte *__s;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  void *pvVar7;
  size_t __n;
  int *piVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  byte local_90;
  undefined7 uStack_8f;
  ulong local_80;
  long *plStack_78;
  byte local_70;
  undefined7 uStack_6f;
  ulong local_60;
  long *plStack_58;
  byte local_50;
  undefined7 uStack_4f;
  undefined7 *local_40;
  long *plStack_38;
  
  uVar12 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar12;
  *param_2 = 0;
  param_2[1] = 0;
  lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x28);
  if (lVar5 != 0) {
                    /* try { // try from 00671c2c to 00671c37 has its CatchHandler @ 00671f3c */
    FUN_00691d7c(lVar5,0);
  }
  param_1[2] = lVar5;
  if (*(int *)(lVar5 + 0x24) == 2) {
    lVar11 = *(long *)(lVar5 + 0x18);
    piVar8 = *(int **)(lVar11 + 0x20);
    puVar10 = (undefined8 *)(lVar11 + 0x10);
    if (piVar8 == (int *)0x0) goto LAB_00671cc4;
LAB_00671c58:
    iVar4 = *(int *)(lVar11 + 0x18);
    iVar9 = *piVar8;
    if (iVar4 < iVar9) {
      *(int *)(lVar11 + 0x18) = iVar4 + 1;
      lVar5 = *(long *)(piVar8 + (long)iVar4 * 2 + 2);
      *(undefined1 *)(lVar5 + 0x18) = 0;
      bVar3 = *param_3;
      goto joined_r0x00671d20;
    }
    if (iVar9 == *(int *)(lVar11 + 0x1c)) goto LAB_00671cd8;
  }
  else {
                    /* try { // try from 00671c90 to 00671cfb has its CatchHandler @ 00671f88 */
    FUN_00691d0c(lVar5);
    *(undefined4 *)(lVar5 + 0x24) = 2;
    puVar6 = (ulong *)(*(ulong *)(lVar5 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar5 + 8) & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    lVar11 = FUN_0068cf38(puVar6);
    *(long *)(lVar5 + 0x18) = lVar11;
    piVar8 = *(int **)(lVar11 + 0x20);
    puVar10 = (undefined8 *)(lVar11 + 0x10);
    if (piVar8 != (int *)0x0) goto LAB_00671c58;
LAB_00671cc4:
    iVar9 = *(int *)(lVar11 + 0x1c);
LAB_00671cd8:
    FUN_00532334(puVar10,iVar9 + 1);
    piVar8 = *(int **)(lVar11 + 0x20);
    iVar9 = *piVar8;
  }
  *piVar8 = iVar9 + 1;
  lVar5 = FUN_0068c8f0(*puVar10);
  iVar9 = *(int *)(lVar11 + 0x18);
  *(int *)(lVar11 + 0x18) = iVar9 + 1;
  *(long *)(*(long *)(lVar11 + 0x20) + (long)iVar9 * 8 + 8) = lVar5;
  *(undefined1 *)(lVar5 + 0x18) = 0;
  bVar3 = *param_3;
joined_r0x00671d20:
  if ((bVar3 & 1) == 0) {
    __s = param_3 + 1;
    __n = (size_t)(bVar3 >> 1);
  }
  else {
    __n = *(size_t *)(param_3 + 8);
    __s = *(byte **)(param_3 + 0x10);
  }
  if (((__n == 0) || (pvVar7 = memchr(__s,0x2f,__n), pvVar7 == (void *)0x0)) ||
     ((long)pvVar7 - (long)__s == -1)) {
                    /* try { // try from 00671d58 to 00671d73 has its CatchHandler @ 00671f50 */
    FUN_00684810(&local_70,"current",&DAT_03c886bc);
    uVar1 = (ulong)&local_70 | 1;
    if ((local_70 & 1) != 0) {
      uVar1 = local_60;
    }
                    /* try { // try from 00671d8c to 00671dab has its CatchHandler @ 00671f54 */
    FUN_00671fbc(param_1[2],uVar1);
    if ((*param_3 & 1) == 0) {
      param_3 = param_3 + 1;
    }
    else {
      param_3 = *(byte **)(param_3 + 0x10);
    }
    FUN_006720dc(lVar5,param_3);
  }
  else {
    if ((bVar3 & 1) == 0) {
      param_3 = param_3 + 1;
    }
    else {
      param_3 = *(byte **)(param_3 + 0x10);
    }
    FUN_00250bf0(&local_70,param_3);
    uVar1 = (ulong)&local_70 | 1;
    if ((local_70 & 1) != 0) {
      uVar1 = local_60;
    }
                    /* try { // try from 00671e08 to 00671e1b has its CatchHandler @ 00671eac */
    FUN_00684810(&local_90,"current",uVar1);
    uVar1 = (ulong)&local_90 | 1;
    if ((local_90 & 1) != 0) {
      uVar1 = local_80;
    }
                    /* try { // try from 00671e34 to 00671e57 has its CatchHandler @ 00671ebc */
    FUN_00671fbc(param_1[2],uVar1);
    puVar2 = &uStack_4f;
    if ((local_50 & 1) != 0) {
      puVar2 = local_40;
    }
    FUN_006720dc(lVar5,puVar2);
    if ((local_90 & 1) != 0) {
      (**(code **)(*plStack_78 + 0x18))
                (plStack_78,local_80,CONCAT71(uStack_8f,local_90) & 0xfffffffffffffffe,1);
    }
    if ((local_50 & 1) != 0) {
      (**(code **)(*plStack_38 + 0x18))
                (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
    }
  }
  if ((local_70 & 1) != 0) {
    (**(code **)(*plStack_58 + 0x18))
              (plStack_58,local_60,CONCAT71(uStack_6f,local_70) & 0xfffffffffffffffe,1);
  }
  return;
}


