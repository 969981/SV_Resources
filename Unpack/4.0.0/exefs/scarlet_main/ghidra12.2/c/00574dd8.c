/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00574dd8; name: FUN_00574dd8
 */


void FUN_00574dd8(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  ulong *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar5 = FUN_0021d48c();
    }
    else {
      lVar5 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar9 + 0x10);
    lVar2 = *(long *)(uVar9 + 0x18);
    if ((*(byte *)(uVar9 + 8) & 1) == 0) {
      lVar2 = uVar9 + 9;
      uVar1 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
    }
    FUN_0021d540(lVar5,lVar2,uVar1);
  }
  puVar4 = PTR_DAT_047cba80;
  iVar3 = *(int *)(param_2 + 0x1c);
  if (iVar3 == 3) {
    if (*(int *)(param_1 + 0x1c) == 3) {
      uVar8 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      FUN_0057434c(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 3;
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      uVar8 = FUN_005862e4(puVar6);
      *(undefined8 *)(param_1 + 0x10) = uVar8;
      if (*(int *)(param_2 + 0x1c) != 3) {
        FUN_005843f0(uVar8,PTR_DAT_047ce1e8);
        return;
      }
    }
    FUN_005843f0(uVar8,*(undefined8 *)(param_2 + 0x10));
    return;
  }
  if (iVar3 == 2) {
    if (*(int *)(param_1 + 0x1c) == 2) {
      uVar8 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      FUN_0057434c(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 2;
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      uVar8 = FUN_00586218(puVar6);
      *(undefined8 *)(param_1 + 0x10) = uVar8;
      if (*(int *)(param_2 + 0x1c) != 2) {
        FUN_0058393c(uVar8,PTR_DAT_047cdef0);
        return;
      }
    }
    FUN_0058393c(uVar8,*(undefined8 *)(param_2 + 0x10));
    return;
  }
  if (iVar3 != 1) {
    return;
  }
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(param_1 + 0x1c) == 1) {
    uVar9 = *(ulong *)(param_1 + 8);
  }
  else {
    FUN_0057434c(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 1;
    *(undefined **)(param_1 + 0x10) = puVar4;
    uVar9 = *(ulong *)(param_1 + 8);
  }
  puVar6 = (ulong *)(uVar9 & 0xfffffffffffffffe);
  if ((uVar9 & 1) == 0) {
    puVar7 = *(undefined **)(param_1 + 0x10);
  }
  else {
    puVar6 = (ulong *)*puVar6;
    puVar7 = *(undefined **)(param_1 + 0x10);
  }
  if (puVar7 == puVar4) {
    FUN_001fcdc8(param_1 + 0x10,puVar6,uVar8);
    return;
  }
  FUN_001fcec0(puVar7,uVar8);
  return;
}


