/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00214c34; name: FUN_00214c34
 */


void FUN_00214c34(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar4 = FUN_0021d48c();
    }
    else {
      lVar4 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar8 + 0x10);
    lVar2 = *(long *)(uVar8 + 0x18);
    if ((*(byte *)(uVar8 + 8) & 1) == 0) {
      lVar2 = uVar8 + 9;
      uVar1 = (ulong)(*(byte *)(uVar8 + 8) >> 1);
    }
    FUN_0021d540(lVar4,lVar2,uVar1);
  }
  puVar3 = PTR_DAT_047cba80;
  if (*(int *)(param_2 + 0x1c) == 2) {
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    if (*(int *)(param_1 + 0x1c) != 2) {
      FUN_0021c298(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 2;
      *(undefined **)(param_1 + 0x10) = PTR_DAT_047cba80;
    }
    puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    puVar6 = *(undefined **)(param_1 + 0x10);
    if (puVar6 == PTR_DAT_047cba80) goto LAB_00214cd0;
  }
  else {
    if (*(int *)(param_2 + 0x1c) != 1) {
      return;
    }
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    if (*(int *)(param_1 + 0x1c) == 1) {
      uVar8 = *(ulong *)(param_1 + 8);
    }
    else {
      FUN_0021c298(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 1;
      *(undefined **)(param_1 + 0x10) = puVar3;
      uVar8 = *(ulong *)(param_1 + 8);
    }
    puVar5 = (ulong *)(uVar8 & 0xfffffffffffffffe);
    if ((uVar8 & 1) == 0) {
      puVar6 = *(undefined **)(param_1 + 0x10);
    }
    else {
      puVar5 = (ulong *)*puVar5;
      puVar6 = *(undefined **)(param_1 + 0x10);
    }
    if (puVar6 == puVar3) {
LAB_00214cd0:
      FUN_001fcdc8(param_1 + 0x10,puVar5,uVar7);
      return;
    }
  }
  FUN_001fcec0(puVar6,uVar7);
  return;
}


