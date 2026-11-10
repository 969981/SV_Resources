/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0056ba5c; name: FUN_0056ba5c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0056ba5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong local_70;
  long local_68;
  ulong local_60;
  long *plStack_58;
  
  uVar3 = FUN_0049e770(PTR_FUN_047cba38,0x20);
  if (uVar3 != 0) {
                    /* try { // try from 0056ba9c to 0056baa7 has its CatchHandler @ 0056bea8 */
    FUN_00579bf0(uVar3,0);
  }
  if (*(int *)(uVar3 + 0x1c) == 1) {
    lVar6 = *(long *)(uVar3 + 0x10);
    lVar5 = *(long *)(lVar6 + 0x10);
  }
  else {
                    /* try { // try from 0056bac4 to 0056bb03 has its CatchHandler @ 0056bedc */
    FUN_005799fc(uVar3);
    *(undefined4 *)(uVar3 + 0x1c) = 1;
    puVar4 = (ulong *)(*(ulong *)(uVar3 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(uVar3 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    lVar6 = FUN_00585980(puVar4);
    *(long *)(uVar3 + 0x10) = lVar6;
    lVar5 = *(long *)(lVar6 + 0x10);
  }
  if (lVar5 == 0) {
    puVar4 = (ulong *)(*(ulong *)(lVar6 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar6 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    lVar5 = FUN_005853d8(puVar4);
    *(long *)(lVar6 + 0x10) = lVar5;
  }
  lVar6 = thunk_FUN_002594d4(param_3);
  plVar7 = (long *)(*(ulong *)(lVar5 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(lVar5 + 8) & 1) != 0) {
    plVar7 = (long *)*plVar7;
  }
  if ((plVar7 == (long *)0x0) &&
     (puVar9 = *(undefined8 **)(lVar5 + 0x18), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)(puVar9);
    FUN_0049e790(PTR_LAB_047cba48,puVar9);
  }
  if (lVar6 != 0) {
    puVar4 = (ulong *)(*(ulong *)(lVar6 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar6 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    if ((ulong *)plVar7 != puVar4) {
                    /* try { // try from 0056bb68 to 0056bbd7 has its CatchHandler @ 0056bedc */
      lVar6 = FUN_0052b1c0(plVar7,lVar6);
    }
  }
  *(long *)(lVar5 + 0x18) = lVar6;
  if (*(int *)(uVar3 + 0x1c) == 1) {
    lVar6 = *(long *)(uVar3 + 0x10);
    lVar5 = *(long *)(lVar6 + 0x10);
  }
  else {
    FUN_005799fc(uVar3);
    *(undefined4 *)(uVar3 + 0x1c) = 1;
    puVar4 = (ulong *)(*(ulong *)(uVar3 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(uVar3 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    lVar6 = FUN_00585980(puVar4);
    *(long *)(uVar3 + 0x10) = lVar6;
    lVar5 = *(long *)(lVar6 + 0x10);
  }
  if (lVar5 == 0) {
    puVar4 = (ulong *)(*(ulong *)(lVar6 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar6 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    lVar5 = FUN_005853d8(puVar4);
    *(long *)(lVar6 + 0x10) = lVar5;
  }
  FUN_00538e58(&local_70,param_2);
  uVar1 = (ulong)&local_70 | 1;
  if ((local_70 & 1) != 0) {
    uVar1 = local_60;
  }
                    /* try { // try from 0056bc04 to 0056bc0b has its CatchHandler @ 0056beac */
  FUN_0056b508(lVar5,uVar1);
  if ((local_70 & 1) != 0) {
    (**(code **)(*plStack_58 + 0x18))(plStack_58,local_60,local_70 & 0xfffffffffffffffe,1);
  }
  if (*(int *)(uVar3 + 0x1c) == 1) {
    lVar6 = *(long *)(uVar3 + 0x10);
    lVar5 = *(long *)(lVar6 + 0x18);
  }
  else {
                    /* try { // try from 0056bc6c to 0056bd1f has its CatchHandler @ 0056bedc */
    FUN_005799fc(uVar3);
    *(undefined4 *)(uVar3 + 0x1c) = 1;
    puVar4 = (ulong *)(*(ulong *)(uVar3 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(uVar3 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    lVar6 = FUN_00585980(puVar4);
    *(long *)(uVar3 + 0x10) = lVar6;
    lVar5 = *(long *)(lVar6 + 0x18);
  }
  if (lVar5 == 0) {
    puVar4 = (ulong *)(*(ulong *)(lVar6 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar6 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    lVar5 = FUN_00535218(puVar4);
    *(long *)(lVar6 + 0x18) = lVar5;
    iVar2 = *(int *)(uVar3 + 0x1c);
  }
  else {
    iVar2 = *(int *)(uVar3 + 0x1c);
  }
  if (iVar2 == 1) {
    lVar8 = *(long *)(uVar3 + 0x10);
    lVar6 = *(long *)(lVar8 + 0x10);
  }
  else {
    FUN_005799fc(uVar3);
    *(undefined4 *)(uVar3 + 0x1c) = 1;
    puVar4 = (ulong *)(*(ulong *)(uVar3 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(uVar3 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    lVar8 = FUN_00585980(puVar4);
    *(long *)(uVar3 + 0x10) = lVar8;
    lVar6 = *(long *)(lVar8 + 0x10);
  }
  if (lVar6 == 0) {
    puVar4 = (ulong *)(*(ulong *)(lVar8 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar8 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    lVar6 = FUN_005853d8(puVar4);
    *(long *)(lVar8 + 0x10) = lVar6;
    lVar8 = *(long *)(lVar6 + 0x18);
  }
  else {
    lVar8 = *(long *)(lVar6 + 0x18);
  }
  if (lVar8 == 0) {
    puVar4 = (ulong *)(*(ulong *)(lVar6 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar6 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    lVar8 = FUN_0026b02c(puVar4);
    *(long *)(lVar6 + 0x18) = lVar8;
  }
  FUN_0026eb84(param_4,lVar5,lVar8,1);
  lVar5 = FUN_00538b54(param_3);
  local_70 = uVar3;
  if (lVar5 == 0) {
                    /* try { // try from 0056bd98 to 0056bda7 has its CatchHandler @ 0056be4c */
    FUN_0056b628(param_1,&local_70,1);
  }
  else {
    FUN_0056b740(&local_68,param_2,param_3);
                    /* try { // try from 0056bd5c to 0056bd6b has its CatchHandler @ 0056be54 */
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


