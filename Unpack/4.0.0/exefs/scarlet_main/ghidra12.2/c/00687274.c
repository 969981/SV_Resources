/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00687274; name: FUN_00687274
 */


void FUN_00687274(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar6 = FUN_0021d48c();
    }
    else {
      lVar6 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar7 + 0x10);
    lVar2 = *(long *)(uVar7 + 0x18);
    if ((*(byte *)(uVar7 + 8) & 1) == 0) {
      lVar2 = uVar7 + 9;
      uVar1 = (ulong)(*(byte *)(uVar7 + 8) >> 1);
    }
    FUN_0021d540(lVar6,lVar2,uVar1);
  }
  iVar3 = *(int *)(param_2 + 0x1c);
  if (iVar3 == 3) {
    if (*(int *)(param_1 + 0x1c) == 3) {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      FUN_0068640c(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 3;
      puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      uVar4 = FUN_0068cc10(puVar5);
      *(undefined8 *)(param_1 + 0x10) = uVar4;
      if (*(int *)(param_2 + 0x1c) != 3) {
        FUN_00686890(uVar4,PTR_DAT_047cf600);
        return;
      }
    }
    FUN_00686890(uVar4,*(undefined8 *)(param_2 + 0x10));
    return;
  }
  if (iVar3 == 2) {
    if (*(int *)(param_1 + 0x1c) == 2) {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      FUN_0068640c(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 2;
      puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      uVar4 = FUN_0068cb4c(puVar5);
      *(undefined8 *)(param_1 + 0x10) = uVar4;
      if (*(int *)(param_2 + 0x1c) != 2) {
        FUN_0068677c(uVar4,PTR_DAT_047cf5a8);
        return;
      }
    }
    FUN_0068677c(uVar4,*(undefined8 *)(param_2 + 0x10));
    return;
  }
  if (iVar3 != 1) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 1) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    FUN_0068640c(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 1;
    puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    uVar4 = FUN_0068ca7c(puVar5);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    if (*(int *)(param_2 + 0x1c) != 1) {
      FUN_006865f8(uVar4,PTR_DAT_047cf598);
      return;
    }
  }
  FUN_006865f8(uVar4,*(undefined8 *)(param_2 + 0x10));
  return;
}


