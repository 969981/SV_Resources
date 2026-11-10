/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0069198c; name: FUN_0069198c
 */


void FUN_0069198c(long param_1,undefined *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  
  puVar6 = (ulong *)(param_1 + 8);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*puVar6 & 1) == 0) {
      lVar3 = FUN_0021d48c(puVar6);
    }
    else {
      lVar3 = (*puVar6 & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar9 + 0x10);
    lVar2 = *(long *)(uVar9 + 0x18);
    if ((*(byte *)(uVar9 + 8) & 1) == 0) {
      lVar2 = uVar9 + 9;
      uVar1 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
    }
    FUN_0021d540(lVar3,lVar2,uVar1);
  }
  if ((param_2 != PTR_DAT_047cf678) &&
     (puVar7 = *(undefined **)(param_2 + 0x10), puVar7 != (undefined *)0x0)) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
      puVar4 = (ulong *)(*puVar6 & 0xfffffffffffffffe);
      if ((*puVar6 & 1) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      lVar3 = FUN_0051444c(puVar4);
      *(long *)(param_1 + 0x10) = lVar3;
      puVar7 = *(undefined **)(param_2 + 0x10);
    }
    puVar8 = PTR_DAT_047cbe60;
    if (puVar7 != (undefined *)0x0) {
      puVar8 = puVar7;
    }
    FUN_005141f4(lVar3,puVar8);
  }
  puVar7 = PTR_DAT_047cba80;
  if (*(int *)(param_2 + 0x24) == 2) {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    if (*(int *)(param_1 + 0x24) == 2) {
      uVar9 = *(ulong *)(param_1 + 8);
    }
    else {
      FUN_00690efc(param_1);
      *(undefined4 *)(param_1 + 0x24) = 2;
      *(undefined **)(param_1 + 0x18) = puVar7;
      uVar9 = *(ulong *)(param_1 + 8);
    }
    puVar6 = (ulong *)(uVar9 & 0xfffffffffffffffe);
    if ((uVar9 & 1) == 0) {
      puVar8 = *(undefined **)(param_1 + 0x18);
    }
    else {
      puVar6 = (ulong *)*puVar6;
      puVar8 = *(undefined **)(param_1 + 0x18);
    }
    if (puVar8 == puVar7) {
      FUN_001fcdc8(param_1 + 0x18,puVar6,uVar5);
      return;
    }
    FUN_001fcec0(puVar8,uVar5);
    return;
  }
  if (*(int *)(param_2 + 0x24) != 1) {
    return;
  }
  if (*(int *)(param_1 + 0x24) == 1) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    FUN_00690efc(param_1);
    *(undefined4 *)(param_1 + 0x24) = 1;
    puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    uVar5 = FUN_0068f00c(puVar6);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    if (*(int *)(param_2 + 0x24) != 1) {
      FUN_0068df78(uVar5,PTR_DAT_047cf618);
      return;
    }
  }
  FUN_0068df78(uVar5,*(undefined8 *)(param_2 + 0x18));
  return;
}


