/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0056c328; name: FUN_0056c328
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0056c328(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_98;
  ulong local_90;
  ulong local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  
  lVar3 = FUN_0049e770(PTR_FUN_047cba38,0x20);
  if (lVar3 != 0) {
                    /* try { // try from 0056c368 to 0056c373 has its CatchHandler @ 0056c948 */
    FUN_00579bf0(lVar3,0);
  }
  uVar4 = thunk_FUN_00258a7c(param_3);
  if (*(int *)(lVar3 + 0x1c) == 1) {
    lVar9 = *(long *)(lVar3 + 0x10);
    lVar7 = *(long *)(lVar9 + 0x10);
    if (lVar7 == 0) goto LAB_0056c3d4;
LAB_0056c398:
    lVar9 = *(long *)(lVar7 + 0x18);
  }
  else {
                    /* try { // try from 0056c3a4 to 0056c46b has its CatchHandler @ 0056c9a4 */
    FUN_005799fc(lVar3);
    *(undefined4 *)(lVar3 + 0x1c) = 1;
    puVar5 = (ulong *)(*(ulong *)(lVar3 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar9 = FUN_00585980(puVar5);
    *(long *)(lVar3 + 0x10) = lVar9;
    lVar7 = *(long *)(lVar9 + 0x10);
    if (lVar7 != 0) goto LAB_0056c398;
LAB_0056c3d4:
    puVar5 = (ulong *)(*(ulong *)(lVar9 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar9 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar7 = FUN_005853d8(puVar5);
    *(long *)(lVar9 + 0x10) = lVar7;
    lVar9 = *(long *)(lVar7 + 0x18);
  }
  if (lVar9 == 0) {
    puVar5 = (ulong *)(*(ulong *)(lVar7 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar7 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar9 = FUN_0026b02c(puVar5);
    *(long *)(lVar7 + 0x18) = lVar9;
  }
  FUN_0026ac80(lVar9,uVar4);
  if (*(int *)(lVar3 + 0x1c) == 1) {
    lVar9 = *(long *)(lVar3 + 0x10);
    lVar7 = *(long *)(lVar9 + 0x10);
  }
  else {
    FUN_005799fc(lVar3);
    *(undefined4 *)(lVar3 + 0x1c) = 1;
    puVar5 = (ulong *)(*(ulong *)(lVar3 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar9 = FUN_00585980(puVar5);
    *(long *)(lVar3 + 0x10) = lVar9;
    lVar7 = *(long *)(lVar9 + 0x10);
  }
  if (lVar7 == 0) {
    puVar5 = (ulong *)(*(ulong *)(lVar9 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar9 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar7 = FUN_005853d8(puVar5);
    *(long *)(lVar9 + 0x10) = lVar7;
  }
  FUN_00538e58(&local_98,param_2);
  uVar1 = (ulong)&local_98 | 1;
  if ((local_98 & 1) != 0) {
    uVar1 = local_88;
  }
                    /* try { // try from 0056c498 to 0056c49f has its CatchHandler @ 0056c960 */
  FUN_0056b508(lVar7,uVar1);
  if ((local_98 & 1) != 0) {
    (**(code **)(*plStack_80 + 0x18))(plStack_80,local_88,local_98 & 0xfffffffffffffffe,1);
  }
  if (*param_4 != 2) {
    if (*param_4 != 1) goto LAB_0056c6b4;
    if (*(int *)(lVar3 + 0x1c) == 1) {
      lVar9 = *(long *)(lVar3 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x20);
      if (lVar7 == 0) goto LAB_0056c570;
LAB_0056c4f0:
      iVar2 = *(int *)(lVar7 + 0x1c);
    }
    else {
                    /* try { // try from 0056c540 to 0056c59b has its CatchHandler @ 0056c9a4 */
      FUN_005799fc(lVar3);
      *(undefined4 *)(lVar3 + 0x1c) = 1;
      puVar5 = (ulong *)(*(ulong *)(lVar3 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      lVar9 = FUN_00585980(puVar5);
      *(long *)(lVar3 + 0x10) = lVar9;
      lVar7 = *(long *)(lVar9 + 0x20);
      if (lVar7 != 0) goto LAB_0056c4f0;
LAB_0056c570:
      puVar5 = (ulong *)(*(ulong *)(lVar9 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(lVar9 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      lVar7 = FUN_00585ca4(puVar5);
      *(long *)(lVar9 + 0x20) = lVar7;
      iVar2 = *(int *)(lVar7 + 0x1c);
    }
    if (iVar2 != 1) {
      FUN_0057efa0(lVar7);
      *(undefined4 *)(lVar7 + 0x1c) = 1;
    }
    *(undefined1 *)(lVar7 + 0x10) = 1;
    goto LAB_0056c6b4;
  }
  local_48 = *(undefined8 *)(param_4 + 2);
  FUN_0025da20(&local_98,&local_48);
  if (*(int *)(lVar3 + 0x1c) == 1) {
    lVar7 = *(long *)(lVar3 + 0x10);
    lVar9 = *(long *)(lVar7 + 0x20);
    if (lVar9 == 0) goto LAB_0056c5e0;
LAB_0056c52c:
    if (*(int *)(lVar9 + 0x1c) != 2) goto LAB_0056c604;
LAB_0056c538:
    puVar6 = *(undefined8 **)(lVar9 + 0x10);
  }
  else {
                    /* try { // try from 0056c5b0 to 0056c623 has its CatchHandler @ 0056c94c */
    FUN_005799fc(lVar3);
    *(undefined4 *)(lVar3 + 0x1c) = 1;
    puVar5 = (ulong *)(*(ulong *)(lVar3 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar7 = FUN_00585980(puVar5);
    *(long *)(lVar3 + 0x10) = lVar7;
    lVar9 = *(long *)(lVar7 + 0x20);
    if (lVar9 != 0) goto LAB_0056c52c;
LAB_0056c5e0:
    puVar5 = (ulong *)(*(ulong *)(lVar7 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar7 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar9 = FUN_00585ca4(puVar5);
    *(long *)(lVar7 + 0x20) = lVar9;
    if (*(int *)(lVar9 + 0x1c) == 2) goto LAB_0056c538;
LAB_0056c604:
    FUN_0057efa0(lVar9);
    *(undefined4 *)(lVar9 + 0x1c) = 2;
    puVar5 = (ulong *)(*(ulong *)(lVar9 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar9 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    puVar6 = (undefined8 *)FUN_0051444c(puVar5);
    *(undefined8 **)(lVar9 + 0x10) = puVar6;
  }
  puVar5 = (ulong *)(puVar6[1] & 0xfffffffffffffffe);
  if ((puVar6[1] & 1) == 0) {
    if ((local_90 & 1) != 0) goto LAB_0056c68c;
LAB_0056c640:
    if (puVar5 == (ulong *)(local_90 & 0xfffffffffffffffe)) goto LAB_0056c698;
LAB_0056c648:
                    /* try { // try from 0056c648 to 0056c6ab has its CatchHandler @ 0056c8e8 */
    FUN_005142b4(puVar6,&local_98);
  }
  else {
    puVar5 = (ulong *)*puVar5;
    if ((local_90 & 1) == 0) goto LAB_0056c640;
LAB_0056c68c:
    if (puVar5 != *(ulong **)(local_90 & 0xfffffffffffffffe)) goto LAB_0056c648;
LAB_0056c698:
    if (puVar6 != &local_98) {
      FUN_00514364(puVar6,&local_98);
    }
  }
  FUN_00513c68(&local_98);
LAB_0056c6b4:
  local_98 = (ulong)local_98._5_3_ << 0x28;
  local_90 = 0;
  local_88 = 0;
  plStack_80 = (long *)0x0;
  local_78 = FUN_01cf7e20();
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = FUN_01cf7e20();
  if (*(int *)(lVar3 + 0x1c) == 1) {
    lVar9 = *(long *)(lVar3 + 0x10);
    lVar7 = *(long *)(lVar9 + 0x18);
  }
  else {
                    /* try { // try from 0056c714 to 0056c7c7 has its CatchHandler @ 0056c990 */
    FUN_005799fc(lVar3);
    *(undefined4 *)(lVar3 + 0x1c) = 1;
    puVar5 = (ulong *)(*(ulong *)(lVar3 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar9 = FUN_00585980(puVar5);
    *(long *)(lVar3 + 0x10) = lVar9;
    lVar7 = *(long *)(lVar9 + 0x18);
  }
  if (lVar7 == 0) {
    puVar5 = (ulong *)(*(ulong *)(lVar9 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar9 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar7 = FUN_00535218(puVar5);
    *(long *)(lVar9 + 0x18) = lVar7;
    iVar2 = *(int *)(lVar3 + 0x1c);
  }
  else {
    iVar2 = *(int *)(lVar3 + 0x1c);
  }
  if (iVar2 == 1) {
    lVar8 = *(long *)(lVar3 + 0x10);
    lVar9 = *(long *)(lVar8 + 0x10);
  }
  else {
    FUN_005799fc(lVar3);
    *(undefined4 *)(lVar3 + 0x1c) = 1;
    puVar5 = (ulong *)(*(ulong *)(lVar3 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar8 = FUN_00585980(puVar5);
    *(long *)(lVar3 + 0x10) = lVar8;
    lVar9 = *(long *)(lVar8 + 0x10);
  }
  if (lVar9 == 0) {
    puVar5 = (ulong *)(*(ulong *)(lVar8 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar8 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar9 = FUN_005853d8(puVar5);
    *(long *)(lVar8 + 0x10) = lVar9;
    lVar8 = *(long *)(lVar9 + 0x18);
  }
  else {
    lVar8 = *(long *)(lVar9 + 0x18);
  }
  if (lVar8 == 0) {
    puVar5 = (ulong *)(*(ulong *)(lVar9 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar9 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar8 = FUN_0026b02c(puVar5);
    *(long *)(lVar9 + 0x18) = lVar8;
  }
  FUN_0026eb84(&local_98,lVar7,lVar8,1);
  FUN_00539428(&local_98);
  lVar7 = FUN_00538b54(param_3);
  local_98 = lVar3;
  if (lVar7 == 0) {
                    /* try { // try from 0056c848 to 0056c857 has its CatchHandler @ 0056c8ec */
    FUN_0056b628(param_1,&local_98,1);
  }
  else {
    FUN_0056b878(&local_90,param_2,param_3);
                    /* try { // try from 0056c80c to 0056c81b has its CatchHandler @ 0056c8f4 */
    FUN_0056b628(param_1,&local_98,2);
    uVar1 = local_90;
    if (local_90 != 0) {
      FUN_0057a198(local_90);
      FUN_0049e790(PTR_LAB_047cba48,uVar1);
      local_90 = 0;
    }
  }
  lVar3 = local_98;
  if (local_98 != 0) {
    FUN_0057a198(local_98);
    FUN_0049e790(PTR_LAB_047cba48,lVar3);
  }
  return;
}


