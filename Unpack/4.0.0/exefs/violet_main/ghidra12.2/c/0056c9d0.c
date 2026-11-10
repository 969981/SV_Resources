/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0056c9d0; name: FUN_0056c9d0
 */


void FUN_0056c9d0(long *param_1,undefined8 param_2,int *param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  byte local_60;
  undefined7 uStack_5f;
  ulong local_58;
  ulong local_50;
  long *plStack_48;
  undefined8 local_38;
  
  lVar3 = FUN_0049e770(PTR_FUN_047cba38,0x20);
  if (lVar3 != 0) {
                    /* try { // try from 0056ca08 to 0056ca13 has its CatchHandler @ 0056ccb8 */
    FUN_00579bf0(lVar3,0);
  }
  if (*(int *)(lVar3 + 0x1c) == 4) {
    uVar8 = *(undefined8 *)(lVar3 + 0x10);
  }
  else {
                    /* try { // try from 0056ca28 to 0056ca47 has its CatchHandler @ 0056cd00 */
    FUN_005799fc(lVar3);
    *(undefined4 *)(lVar3 + 0x1c) = 4;
    puVar5 = (ulong *)(*(ulong *)(lVar3 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    uVar8 = FUN_00585bdc(puVar5);
    *(undefined8 *)(lVar3 + 0x10) = uVar8;
  }
  FUN_00538e58(&local_60,param_2);
  uVar1 = (ulong)&local_60 | 1;
  if ((local_60 & 1) != 0) {
    uVar1 = local_50;
  }
                    /* try { // try from 0056ca74 to 0056ca7b has its CatchHandler @ 0056ccd0 */
  FUN_0056cd0c(uVar8,uVar1);
  if ((local_60 & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
  }
  if (*param_3 != 2) {
    if (*param_3 != 1) goto LAB_0056cc70;
    if (*(int *)(lVar3 + 0x1c) == 4) {
      lVar6 = *(long *)(lVar3 + 0x10);
      lVar7 = *(long *)(lVar6 + 0x18);
      if (lVar7 != 0) goto LAB_0056cacc;
LAB_0056cb4c:
      puVar5 = (ulong *)(*(ulong *)(lVar6 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(lVar6 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      lVar7 = FUN_00585ca4(puVar5);
      *(long *)(lVar6 + 0x18) = lVar7;
      iVar2 = *(int *)(lVar7 + 0x1c);
    }
    else {
                    /* try { // try from 0056cb1c to 0056cb77 has its CatchHandler @ 0056cd00 */
      FUN_005799fc(lVar3);
      *(undefined4 *)(lVar3 + 0x1c) = 4;
      puVar5 = (ulong *)(*(ulong *)(lVar3 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      lVar6 = FUN_00585bdc(puVar5);
      *(long *)(lVar3 + 0x10) = lVar6;
      lVar7 = *(long *)(lVar6 + 0x18);
      if (lVar7 == 0) goto LAB_0056cb4c;
LAB_0056cacc:
      iVar2 = *(int *)(lVar7 + 0x1c);
    }
    if (iVar2 != 1) {
      FUN_0057efa0(lVar7);
      *(undefined4 *)(lVar7 + 0x1c) = 1;
    }
    *(undefined1 *)(lVar7 + 0x10) = 1;
    goto LAB_0056cc70;
  }
  local_38 = *(undefined8 *)(param_3 + 2);
  FUN_0025da20(&local_60,&local_38);
  if (*(int *)(lVar3 + 0x1c) == 4) {
    lVar7 = *(long *)(lVar3 + 0x10);
    lVar6 = *(long *)(lVar7 + 0x18);
    if (lVar6 != 0) goto LAB_0056cb08;
LAB_0056cbbc:
    puVar5 = (ulong *)(*(ulong *)(lVar7 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar7 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar6 = FUN_00585ca4(puVar5);
    *(long *)(lVar7 + 0x18) = lVar6;
    if (*(int *)(lVar6 + 0x1c) != 2) goto LAB_0056cbe0;
LAB_0056cb14:
    puVar4 = *(undefined1 **)(lVar6 + 0x10);
  }
  else {
                    /* try { // try from 0056cb8c to 0056cbff has its CatchHandler @ 0056ccbc */
    FUN_005799fc(lVar3);
    *(undefined4 *)(lVar3 + 0x1c) = 4;
    puVar5 = (ulong *)(*(ulong *)(lVar3 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar7 = FUN_00585bdc(puVar5);
    *(long *)(lVar3 + 0x10) = lVar7;
    lVar6 = *(long *)(lVar7 + 0x18);
    if (lVar6 == 0) goto LAB_0056cbbc;
LAB_0056cb08:
    if (*(int *)(lVar6 + 0x1c) == 2) goto LAB_0056cb14;
LAB_0056cbe0:
    FUN_0057efa0(lVar6);
    *(undefined4 *)(lVar6 + 0x1c) = 2;
    puVar5 = (ulong *)(*(ulong *)(lVar6 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar6 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    puVar4 = (undefined1 *)FUN_0051444c(puVar5);
    *(undefined1 **)(lVar6 + 0x10) = puVar4;
  }
  puVar5 = (ulong *)(*(ulong *)(puVar4 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(puVar4 + 8) & 1) == 0) {
    if ((local_58 & 1) == 0) goto LAB_0056cc1c;
LAB_0056cc48:
    if (puVar5 == *(ulong **)(local_58 & 0xfffffffffffffffe)) goto LAB_0056cc54;
LAB_0056cc24:
                    /* try { // try from 0056cc24 to 0056cc67 has its CatchHandler @ 0056ccb4 */
    FUN_005142b4(puVar4,&local_60);
  }
  else {
    puVar5 = (ulong *)*puVar5;
    if ((local_58 & 1) != 0) goto LAB_0056cc48;
LAB_0056cc1c:
    if (puVar5 != (ulong *)(local_58 & 0xfffffffffffffffe)) goto LAB_0056cc24;
LAB_0056cc54:
    if (puVar4 != &local_60) {
      FUN_00514364(puVar4,&local_60);
    }
  }
  FUN_00513c68(&local_60);
LAB_0056cc70:
  *param_1 = lVar3;
  return;
}


