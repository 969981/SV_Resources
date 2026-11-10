/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00610388; name: FUN_00610388
 */


void FUN_00610388(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong *puVar5;
  uint uVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_047cba80;
  uVar6 = *(uint *)(param_2 + 4);
  if (uVar6 == 0) {
    return;
  }
  if ((uVar6 & 1) == 0) goto LAB_00610444;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar5 = (ulong *)*puVar5;
  }
  if ((undefined *)*puVar1 == PTR_DAT_047cba80) {
    FUN_001fcdc8(puVar1,puVar5,PTR_DAT_047cba80);
  }
  uVar3 = (**(code **)(*param_2 + 0x70))(param_2);
  puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar4 = (undefined *)*puVar1;
    if (puVar4 == puVar2) goto LAB_0061042c;
LAB_00610408:
    FUN_001fcec0(puVar4,uVar3);
  }
  else {
    puVar5 = (ulong *)*puVar5;
    puVar4 = (undefined *)*puVar1;
    if (puVar4 != puVar2) goto LAB_00610408;
LAB_0061042c:
    FUN_001fcdc8(puVar1,puVar5);
  }
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  uVar6 = *(uint *)(param_2 + 4);
LAB_00610444:
  if ((uVar6 >> 1 & 1) != 0) {
    puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar7 = *(long *)(param_1 + 0x18);
    }
    else {
      puVar5 = (ulong *)*puVar5;
      lVar7 = *(long *)(param_1 + 0x18);
    }
    if (lVar7 == 0) {
      uVar3 = FUN_004eb86c(puVar5);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
    }
    uVar3 = (**(code **)(*param_2 + 0x78))(param_2);
    FUN_004eb614(*(undefined8 *)(param_1 + 0x18),uVar3);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
  }
  return;
}


