/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0056bee8; name: FUN_0056bee8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0056bee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong local_70;
  long local_68;
  ulong local_60;
  long *plStack_58;
  
  uVar3 = FUN_0049e770(PTR_FUN_047cba38,0x20);
  if (uVar3 != 0) {
                    /* try { // try from 0056bf28 to 0056bf33 has its CatchHandler @ 0056c2e8 */
    FUN_00579bf0(uVar3,0);
  }
  uVar4 = thunk_FUN_00258a7c(param_3);
  if (*(int *)(uVar3 + 0x1c) == 1) {
    lVar7 = *(long *)(uVar3 + 0x10);
    lVar6 = *(long *)(lVar7 + 0x10);
  }
  else {
                    /* try { // try from 0056bf64 to 0056c02b has its CatchHandler @ 0056c31c */
    FUN_005799fc(uVar3);
    *(undefined4 *)(uVar3 + 0x1c) = 1;
    puVar5 = (ulong *)(*(ulong *)(uVar3 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(uVar3 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar7 = FUN_00585980(puVar5);
    *(long *)(uVar3 + 0x10) = lVar7;
    lVar6 = *(long *)(lVar7 + 0x10);
  }
  if (lVar6 == 0) {
    puVar5 = (ulong *)(*(ulong *)(lVar7 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar7 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar6 = FUN_005853d8(puVar5);
    *(long *)(lVar7 + 0x10) = lVar6;
    lVar7 = *(long *)(lVar6 + 0x18);
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x18);
  }
  if (lVar7 == 0) {
    puVar5 = (ulong *)(*(ulong *)(lVar6 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar6 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar7 = FUN_0026b02c(puVar5);
    *(long *)(lVar6 + 0x18) = lVar7;
  }
  FUN_0026ac80(lVar7,uVar4);
  if (*(int *)(uVar3 + 0x1c) == 1) {
    lVar7 = *(long *)(uVar3 + 0x10);
    lVar6 = *(long *)(lVar7 + 0x10);
  }
  else {
    FUN_005799fc(uVar3);
    *(undefined4 *)(uVar3 + 0x1c) = 1;
    puVar5 = (ulong *)(*(ulong *)(uVar3 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(uVar3 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar7 = FUN_00585980(puVar5);
    *(long *)(uVar3 + 0x10) = lVar7;
    lVar6 = *(long *)(lVar7 + 0x10);
  }
  if (lVar6 == 0) {
    puVar5 = (ulong *)(*(ulong *)(lVar7 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar7 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar6 = FUN_005853d8(puVar5);
    *(long *)(lVar7 + 0x10) = lVar6;
  }
  FUN_00538e58(&local_70,param_2);
  uVar1 = (ulong)&local_70 | 1;
  if ((local_70 & 1) != 0) {
    uVar1 = local_60;
  }
                    /* try { // try from 0056c058 to 0056c05f has its CatchHandler @ 0056c2ec */
  FUN_0056b508(lVar6,uVar1);
  if ((local_70 & 1) != 0) {
    (**(code **)(*plStack_58 + 0x18))(plStack_58,local_60,local_70 & 0xfffffffffffffffe,1);
  }
  if (*(int *)(uVar3 + 0x1c) == 1) {
    lVar7 = *(long *)(uVar3 + 0x10);
    lVar6 = *(long *)(lVar7 + 0x18);
  }
  else {
                    /* try { // try from 0056c0c0 to 0056c173 has its CatchHandler @ 0056c31c */
    FUN_005799fc(uVar3);
    *(undefined4 *)(uVar3 + 0x1c) = 1;
    puVar5 = (ulong *)(*(ulong *)(uVar3 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(uVar3 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar7 = FUN_00585980(puVar5);
    *(long *)(uVar3 + 0x10) = lVar7;
    lVar6 = *(long *)(lVar7 + 0x18);
  }
  if (lVar6 == 0) {
    puVar5 = (ulong *)(*(ulong *)(lVar7 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar7 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar6 = FUN_00535218(puVar5);
    *(long *)(lVar7 + 0x18) = lVar6;
    iVar2 = *(int *)(uVar3 + 0x1c);
  }
  else {
    iVar2 = *(int *)(uVar3 + 0x1c);
  }
  if (iVar2 == 1) {
    lVar8 = *(long *)(uVar3 + 0x10);
    lVar7 = *(long *)(lVar8 + 0x10);
  }
  else {
    FUN_005799fc(uVar3);
    *(undefined4 *)(uVar3 + 0x1c) = 1;
    puVar5 = (ulong *)(*(ulong *)(uVar3 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(uVar3 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar8 = FUN_00585980(puVar5);
    *(long *)(uVar3 + 0x10) = lVar8;
    lVar7 = *(long *)(lVar8 + 0x10);
  }
  if (lVar7 == 0) {
    puVar5 = (ulong *)(*(ulong *)(lVar8 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar8 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar7 = FUN_005853d8(puVar5);
    *(long *)(lVar8 + 0x10) = lVar7;
    lVar8 = *(long *)(lVar7 + 0x18);
  }
  else {
    lVar8 = *(long *)(lVar7 + 0x18);
  }
  if (lVar8 == 0) {
    puVar5 = (ulong *)(*(ulong *)(lVar7 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar7 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar8 = FUN_0026b02c(puVar5);
    *(long *)(lVar7 + 0x18) = lVar8;
  }
  FUN_0026eb84(param_4,lVar6,lVar8,1);
  lVar6 = FUN_00538b54(param_3);
  local_70 = uVar3;
  if (lVar6 == 0) {
                    /* try { // try from 0056c1ec to 0056c1fb has its CatchHandler @ 0056c28c */
    FUN_0056b628(param_1,&local_70,1);
  }
  else {
    FUN_0056b878(&local_68,param_2,param_3);
                    /* try { // try from 0056c1b0 to 0056c1bf has its CatchHandler @ 0056c294 */
    FUN_0056b628(param_1,&local_70,2);
    if (local_68 != 0) {
      FUN_0057a198(local_68);
      FUN_0049e790(PTR_LAB_047cba48,local_68);
      local_68 = 0;
    }
  }
  uVar3 = local_70;
  if (local_70 != 0) {
    FUN_0057a198(local_70);
    FUN_0049e790(PTR_LAB_047cba48,uVar3);
  }
  return;
}


