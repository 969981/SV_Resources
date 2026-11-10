/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004d86c0; name: FUN_004d86c0
 */


void FUN_004d86c0(long param_1,long param_2)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  
  uVar6 = *(ulong *)(param_2 + 8);
  puVar1 = (ulong *)(param_1 + 8);
  if ((uVar6 & 1) != 0) {
    if ((*puVar1 & 1) == 0) {
      lVar3 = FUN_00264e54(puVar1);
    }
    else {
      lVar3 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    FUN_0051496c(lVar3,(uVar6 & 0xfffffffffffffffe) + 8);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 7) != 0) {
    if ((uVar2 & 1) != 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      puVar7 = *(undefined **)(param_1 + 0x18);
      if (puVar7 == PTR_DAT_047cba80) {
        FUN_001fcdc8((undefined8 *)(param_1 + 0x18),puVar4);
      }
      else {
        FUN_001fcec0(puVar7,uVar5);
      }
    }
    if ((uVar2 >> 1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if (lVar3 == 0) {
        puVar4 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar4 = (ulong *)*puVar4;
        }
        lVar3 = FUN_004e7150(puVar4);
        *(long *)(param_1 + 0x20) = lVar3;
      }
      puVar7 = PTR_DAT_047cd828;
      if (*(undefined **)(param_2 + 0x20) != (undefined *)0x0) {
        puVar7 = *(undefined **)(param_2 + 0x20);
      }
      FUN_004d87f0(lVar3,puVar7);
    }
    if ((uVar2 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  }
  return;
}


