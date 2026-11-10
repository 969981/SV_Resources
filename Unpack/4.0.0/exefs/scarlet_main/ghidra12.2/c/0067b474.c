/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0067b474; name: FUN_0067b474
 */


void FUN_0067b474(long param_1,undefined8 param_2,int *param_3)

{
  ulong uVar1;
  int iVar2;
  ulong *puVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong local_80 [2];
  ulong local_70;
  long *plStack_68;
  byte local_60;
  undefined7 uStack_5f;
  ulong local_58;
  ulong local_50;
  long *plStack_48;
  
  lVar8 = *(long *)(param_1 + 0x50);
  piVar5 = *(int **)(lVar8 + 0x20);
  if (piVar5 == (int *)0x0) {
    iVar6 = *(int *)(lVar8 + 0x1c);
LAB_0067b510:
                    /* try { // try from 0067b514 to 0067b533 has its CatchHandler @ 0067b828 */
    FUN_00532334((undefined8 *)(lVar8 + 0x10),iVar6 + 1);
    piVar5 = *(int **)(lVar8 + 0x20);
    iVar6 = *piVar5;
LAB_0067b524:
    *piVar5 = iVar6 + 1;
    lVar7 = FUN_0069d898(*(undefined8 *)(lVar8 + 0x10));
    iVar6 = *(int *)(lVar8 + 0x18);
    *(int *)(lVar8 + 0x18) = iVar6 + 1;
    *(long *)(*(long *)(lVar8 + 0x20) + (long)iVar6 * 8 + 8) = lVar7;
    if (*(int *)(lVar7 + 0x1c) != 2) goto LAB_0067b4d0;
LAB_0067b55c:
    lVar8 = *(long *)(lVar7 + 0x10);
  }
  else {
    iVar2 = *(int *)(lVar8 + 0x18);
    iVar6 = *piVar5;
    if (iVar6 <= iVar2) {
      if (iVar6 == *(int *)(lVar8 + 0x1c)) goto LAB_0067b510;
      goto LAB_0067b524;
    }
    *(int *)(lVar8 + 0x18) = iVar2 + 1;
    lVar7 = *(long *)(piVar5 + (long)iVar2 * 2 + 2);
    if (*(int *)(lVar7 + 0x1c) == 2) goto LAB_0067b55c;
LAB_0067b4d0:
                    /* try { // try from 0067b4d0 to 0067b4ef has its CatchHandler @ 0067b82c */
    FUN_00696bf8(lVar7);
    *(undefined4 *)(lVar7 + 0x1c) = 2;
    puVar3 = (ulong *)(*(ulong *)(lVar7 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar7 + 8) & 1) != 0) {
      puVar3 = (ulong *)*puVar3;
    }
    lVar8 = FUN_0069da1c(puVar3);
    *(long *)(lVar7 + 0x10) = lVar8;
  }
  FUN_0066b4d4(local_80,param_2);
  uVar1 = (ulong)local_80 | 1;
  if ((local_80[0] & 1) != 0) {
    uVar1 = local_70;
  }
                    /* try { // try from 0067b584 to 0067b597 has its CatchHandler @ 0067b7f8 */
  FUN_00684810(&local_60,"current",uVar1);
  uVar1 = (ulong)&local_60 | 1;
  if ((local_60 & 1) != 0) {
    uVar1 = local_50;
  }
                    /* try { // try from 0067b5ac to 0067b5b3 has its CatchHandler @ 0067b7cc */
  FUN_0067b838(lVar8,uVar1);
  if ((local_60 & 1) == 0) {
    if ((local_80[0] & 1) == 0) goto LAB_0067b5c4;
LAB_0067b5f4:
    (**(code **)(*plStack_68 + 0x18))(plStack_68,local_70,local_80[0] & 0xfffffffffffffffe,1);
    iVar6 = *param_3;
  }
  else {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
    if ((local_80[0] & 1) != 0) goto LAB_0067b5f4;
LAB_0067b5c4:
    iVar6 = *param_3;
  }
  if (iVar6 == 0) goto LAB_0067b764;
  if (iVar6 == 1) {
    lVar7 = *(long *)(lVar8 + 0x18);
    if (lVar7 == 0) {
      puVar3 = (ulong *)(*(ulong *)(lVar8 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(lVar8 + 8) & 1) != 0) {
        puVar3 = (ulong *)*puVar3;
      }
                    /* try { // try from 0067b6f0 to 0067b70f has its CatchHandler @ 0067b82c */
      lVar7 = FUN_006856e4(puVar3);
      *(long *)(lVar8 + 0x18) = lVar7;
      iVar6 = *(int *)(lVar7 + 0x1c);
    }
    else {
      iVar6 = *(int *)(lVar7 + 0x1c);
    }
    if (iVar6 != 1) {
      FUN_00684e30(lVar7);
      *(undefined4 *)(lVar7 + 0x1c) = 1;
    }
    *(undefined1 *)(lVar7 + 0x10) = 1;
    goto LAB_0067b764;
  }
  if (iVar6 != 2) {
                    /* WARNING: Subroutine does not return */
    nn::detail::UnexpectedDefaultImpl("","",0);
  }
  local_80[0] = *(ulong *)(param_3 + 2);
  FUN_0025da20(&local_60,local_80);
  lVar7 = *(long *)(lVar8 + 0x18);
  if (lVar7 == 0) {
    puVar3 = (ulong *)(*(ulong *)(lVar8 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar8 + 8) & 1) != 0) {
      puVar3 = (ulong *)*puVar3;
    }
                    /* try { // try from 0067b67c to 0067b6b3 has its CatchHandler @ 0067b7b8 */
    lVar7 = FUN_006856e4(puVar3);
    *(long *)(lVar8 + 0x18) = lVar7;
    if (*(int *)(lVar7 + 0x1c) != 2) goto LAB_0067b694;
LAB_0067b650:
    pbVar4 = *(byte **)(lVar7 + 0x10);
  }
  else {
    if (*(int *)(lVar7 + 0x1c) == 2) goto LAB_0067b650;
LAB_0067b694:
    FUN_00684e30(lVar7);
    *(undefined4 *)(lVar7 + 0x1c) = 2;
    puVar3 = (ulong *)(*(ulong *)(lVar7 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar7 + 8) & 1) != 0) {
      puVar3 = (ulong *)*puVar3;
    }
    pbVar4 = (byte *)FUN_0051444c(puVar3);
    *(byte **)(lVar7 + 0x10) = pbVar4;
  }
  puVar3 = (ulong *)(*(ulong *)(pbVar4 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(pbVar4 + 8) & 1) == 0) {
    if ((local_58 & 1) == 0) goto LAB_0067b6d0;
LAB_0067b73c:
    if (puVar3 == *(ulong **)(local_58 & 0xfffffffffffffffe)) goto LAB_0067b748;
LAB_0067b6d8:
                    /* try { // try from 0067b6d8 to 0067b6df has its CatchHandler @ 0067b7b4 */
    FUN_005142b4(pbVar4,&local_60);
  }
  else {
    puVar3 = (ulong *)*puVar3;
    if ((local_58 & 1) != 0) goto LAB_0067b73c;
LAB_0067b6d0:
    if (puVar3 != (ulong *)(local_58 & 0xfffffffffffffffe)) goto LAB_0067b6d8;
LAB_0067b748:
    if (pbVar4 != &local_60) {
                    /* try { // try from 0067b754 to 0067b75b has its CatchHandler @ 0067b7b4 */
      FUN_00514364(pbVar4,&local_60);
    }
  }
  FUN_00513c68(&local_60);
LAB_0067b764:
  FUN_0067ad9c(param_1,1);
  return;
}


