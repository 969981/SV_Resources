/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0057d5cc; name: FUN_0057d5cc
 */


void FUN_0057d5cc(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  
  puVar5 = (ulong *)(param_1 + 8);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*puVar5 & 1) == 0) {
      lVar7 = FUN_0021d48c(puVar5);
    }
    else {
      lVar7 = (*puVar5 & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar8 + 0x10);
    lVar2 = *(long *)(uVar8 + 0x18);
    if ((*(byte *)(uVar8 + 8) & 1) == 0) {
      lVar2 = uVar8 + 9;
      uVar1 = (ulong)(*(byte *)(uVar8 + 8) >> 1);
    }
    FUN_0021d540(lVar7,lVar2,uVar1);
  }
  if (*(int *)(param_2 + 0x1c) == 2) {
    if (*(int *)(param_1 + 0x1c) == 2) {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      *(undefined4 *)(param_1 + 0x1c) = 2;
      puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      uVar4 = FUN_0051444c(puVar5);
      *(undefined8 *)(param_1 + 0x10) = uVar4;
      if (*(int *)(param_2 + 0x1c) != 2) {
        FUN_005141f4(uVar4,PTR_DAT_047cbe60);
        return;
      }
    }
    FUN_005141f4(uVar4,*(undefined8 *)(param_2 + 0x10));
    return;
  }
  if (*(int *)(param_2 + 0x1c) == 1) {
    uVar3 = *(undefined1 *)(param_2 + 0x10);
    if (*(int *)(param_1 + 0x1c) != 1) {
      if (*(int *)(param_1 + 0x1c) == 2) {
        puVar6 = (ulong *)(*puVar5 & 0xfffffffffffffffe);
        if ((*puVar5 & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        if ((puVar6 == (ulong *)0x0) && (lVar7 = *(long *)(param_1 + 0x10), lVar7 != 0)) {
          FUN_00513c68(lVar7);
          FUN_0049e790(PTR_LAB_047cba48,lVar7);
        }
      }
      *(undefined4 *)(param_1 + 0x1c) = 1;
    }
    *(undefined1 *)(param_1 + 0x10) = uVar3;
  }
  return;
}


