/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0067aee8; name: FUN_0067aee8
 */


void FUN_0067aee8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int *param_5
                 )

{
  int iVar1;
  ulong *puVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong local_a0 [2];
  ulong local_90;
  long *plStack_88;
  byte local_80;
  undefined7 uStack_7f;
  ulong local_78;
  ulong local_70;
  long *plStack_68;
  
  lVar10 = *(long *)(param_1 + 0x50);
  piVar7 = *(int **)(lVar10 + 0x20);
  if (piVar7 == (int *)0x0) {
    iVar8 = *(int *)(lVar10 + 0x1c);
LAB_0067af9c:
                    /* try { // try from 0067afa0 to 0067afbf has its CatchHandler @ 0067b464 */
    FUN_00532334((undefined8 *)(lVar10 + 0x10),iVar8 + 1);
    piVar7 = *(int **)(lVar10 + 0x20);
    iVar8 = *piVar7;
LAB_0067afb0:
    *piVar7 = iVar8 + 1;
    lVar9 = FUN_0069d898(*(undefined8 *)(lVar10 + 0x10));
    iVar8 = *(int *)(lVar10 + 0x18);
    *(int *)(lVar10 + 0x18) = iVar8 + 1;
    *(long *)(*(long *)(lVar10 + 0x20) + (long)iVar8 * 8 + 8) = lVar9;
    if (*(int *)(lVar9 + 0x1c) != 1) goto LAB_0067af54;
LAB_0067afe8:
    lVar10 = *(long *)(lVar9 + 0x10);
    lVar9 = *(long *)(lVar10 + 0x10);
  }
  else {
    iVar1 = *(int *)(lVar10 + 0x18);
    iVar8 = *piVar7;
    if (iVar8 <= iVar1) {
      if (iVar8 == *(int *)(lVar10 + 0x1c)) goto LAB_0067af9c;
      goto LAB_0067afb0;
    }
    *(int *)(lVar10 + 0x18) = iVar1 + 1;
    lVar9 = *(long *)(piVar7 + (long)iVar1 * 2 + 2);
    if (*(int *)(lVar9 + 0x1c) == 1) goto LAB_0067afe8;
LAB_0067af54:
                    /* try { // try from 0067af54 to 0067af73 has its CatchHandler @ 0067b468 */
    FUN_00696bf8(lVar9);
    *(undefined4 *)(lVar9 + 0x1c) = 1;
    puVar2 = (ulong *)(*(ulong *)(lVar9 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar9 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    lVar10 = FUN_0069d958(puVar2);
    *(long *)(lVar9 + 0x10) = lVar10;
    lVar9 = *(long *)(lVar10 + 0x10);
  }
  if (lVar9 == 0) {
    puVar2 = (ulong *)(*(ulong *)(lVar10 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar10 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
                    /* try { // try from 0067b000 to 0067b003 has its CatchHandler @ 0067b468 */
    lVar9 = FUN_0068f00c(puVar2);
    *(long *)(lVar10 + 0x10) = lVar9;
  }
  FUN_0066b4d4(local_a0,param_2);
  uVar5 = (ulong)local_a0 | 1;
  if ((local_a0[0] & 1) != 0) {
    uVar5 = local_90;
  }
                    /* try { // try from 0067b030 to 0067b043 has its CatchHandler @ 0067b434 */
  FUN_00684810(&local_80,"current",uVar5);
  uVar5 = (ulong)&local_80 | 1;
  if ((local_80 & 1) != 0) {
    uVar5 = local_70;
  }
                    /* try { // try from 0067b058 to 0067b05f has its CatchHandler @ 0067b408 */
  FUN_0067a65c(lVar9,uVar5);
  if ((local_80 & 1) == 0) {
    if ((local_a0[0] & 1) != 0) goto LAB_0067b0a0;
LAB_0067b070:
    lVar9 = *(long *)(lVar10 + 0x10);
  }
  else {
    (**(code **)(*plStack_68 + 0x18))
              (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
    if ((local_a0[0] & 1) == 0) goto LAB_0067b070;
LAB_0067b0a0:
    (**(code **)(*plStack_88 + 0x18))(plStack_88,local_90,local_a0[0] & 0xfffffffffffffffe,1);
    lVar9 = *(long *)(lVar10 + 0x10);
  }
  if (lVar9 == 0) {
    puVar2 = (ulong *)(*(ulong *)(lVar10 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar10 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
                    /* try { // try from 0067b0d0 to 0067b0d3 has its CatchHandler @ 0067b468 */
    lVar9 = FUN_0068f00c(puVar2);
    *(long *)(lVar10 + 0x10) = lVar9;
  }
  lVar3 = thunk_FUN_002594d4(param_3);
  plVar11 = (long *)(*(ulong *)(lVar9 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(lVar9 + 8) & 1) != 0) {
    plVar11 = (long *)*plVar11;
  }
  if ((plVar11 == (long *)0x0) &&
     (puVar12 = *(undefined8 **)(lVar9 + 0x18), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)(puVar12);
    FUN_0049e790(PTR_LAB_047cba48,puVar12);
  }
  if (lVar3 != 0) {
    puVar2 = (ulong *)(*(ulong *)(lVar3 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if ((ulong *)plVar11 != puVar2) {
                    /* try { // try from 0067b138 to 0067b1b7 has its CatchHandler @ 0067b468 */
      lVar3 = FUN_0052b1c0(plVar11,lVar3);
    }
  }
  *(long *)(lVar9 + 0x18) = lVar3;
  lVar9 = *(long *)(lVar10 + 0x18);
  if (lVar9 == 0) {
    puVar2 = (ulong *)(*(ulong *)(lVar10 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar10 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    lVar9 = FUN_00535218(puVar2);
    *(long *)(lVar10 + 0x18) = lVar9;
    lVar3 = *(long *)(lVar10 + 0x10);
    if (lVar3 != 0) goto LAB_0067b15c;
LAB_0067b188:
    puVar2 = (ulong *)(*(ulong *)(lVar10 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar10 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    lVar3 = FUN_0068f00c(puVar2);
    *(long *)(lVar10 + 0x10) = lVar3;
    lVar6 = *(long *)(lVar3 + 0x18);
  }
  else {
    lVar3 = *(long *)(lVar10 + 0x10);
    if (lVar3 == 0) goto LAB_0067b188;
LAB_0067b15c:
    lVar6 = *(long *)(lVar3 + 0x18);
  }
  if (lVar6 == 0) {
    puVar2 = (ulong *)(*(ulong *)(lVar3 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    lVar6 = FUN_0026b02c(puVar2);
    *(long *)(lVar3 + 0x18) = lVar6;
  }
  FUN_0026eb84(param_4,lVar9,lVar6,1);
  iVar8 = *param_5;
  if (iVar8 == 0) goto LAB_0067b368;
  if (iVar8 == 1) {
    lVar9 = *(long *)(lVar10 + 0x20);
    if (lVar9 == 0) {
      puVar2 = (ulong *)(*(ulong *)(lVar10 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(lVar10 + 8) & 1) != 0) {
        puVar2 = (ulong *)*puVar2;
      }
                    /* try { // try from 0067b2b0 to 0067b2cf has its CatchHandler @ 0067b468 */
      lVar9 = FUN_006856e4(puVar2);
      *(long *)(lVar10 + 0x20) = lVar9;
      iVar8 = *(int *)(lVar9 + 0x1c);
    }
    else {
      iVar8 = *(int *)(lVar9 + 0x1c);
    }
    if (iVar8 != 1) {
      FUN_00684e30(lVar9);
      *(undefined4 *)(lVar9 + 0x1c) = 1;
    }
    *(undefined1 *)(lVar9 + 0x10) = 1;
    goto LAB_0067b368;
  }
  if (iVar8 != 2) {
                    /* WARNING: Subroutine does not return */
    nn::detail::UnexpectedDefaultImpl("","",0);
  }
  local_a0[0] = *(ulong *)(param_5 + 2);
  FUN_0025da20(&local_80,local_a0);
  lVar9 = *(long *)(lVar10 + 0x20);
  if (lVar9 == 0) {
    puVar2 = (ulong *)(*(ulong *)(lVar10 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar10 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
                    /* try { // try from 0067b23c to 0067b273 has its CatchHandler @ 0067b3f4 */
    lVar9 = FUN_006856e4(puVar2);
    *(long *)(lVar10 + 0x20) = lVar9;
    if (*(int *)(lVar9 + 0x1c) == 2) goto LAB_0067b210;
LAB_0067b254:
    FUN_00684e30(lVar9);
    *(undefined4 *)(lVar9 + 0x1c) = 2;
    puVar2 = (ulong *)(*(ulong *)(lVar9 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar9 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    pbVar4 = (byte *)FUN_0051444c(puVar2);
    *(byte **)(lVar9 + 0x10) = pbVar4;
  }
  else {
    if (*(int *)(lVar9 + 0x1c) != 2) goto LAB_0067b254;
LAB_0067b210:
    pbVar4 = *(byte **)(lVar9 + 0x10);
  }
  puVar2 = (ulong *)(*(ulong *)(pbVar4 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(pbVar4 + 8) & 1) == 0) {
    if ((local_78 & 1) != 0) goto LAB_0067b340;
LAB_0067b290:
    if (puVar2 == (ulong *)(local_78 & 0xfffffffffffffffe)) goto LAB_0067b34c;
LAB_0067b298:
                    /* try { // try from 0067b298 to 0067b29f has its CatchHandler @ 0067b3f0 */
    FUN_005142b4(pbVar4,&local_80);
  }
  else {
    puVar2 = (ulong *)*puVar2;
    if ((local_78 & 1) == 0) goto LAB_0067b290;
LAB_0067b340:
    if (puVar2 != *(ulong **)(local_78 & 0xfffffffffffffffe)) goto LAB_0067b298;
LAB_0067b34c:
    if (pbVar4 != &local_80) {
                    /* try { // try from 0067b358 to 0067b35f has its CatchHandler @ 0067b3f0 */
      FUN_00514364(pbVar4,&local_80);
    }
  }
  FUN_00513c68(&local_80);
LAB_0067b368:
  uVar5 = FUN_0067a77c(param_1,param_2,param_3);
  lVar10 = 1;
  if ((uVar5 & 1) != 0) {
    lVar10 = 2;
  }
  uVar5 = FUN_0067a978(param_1,param_2,param_3);
  FUN_0067ad9c(param_1,lVar10 + (uVar5 & 1));
  return;
}


