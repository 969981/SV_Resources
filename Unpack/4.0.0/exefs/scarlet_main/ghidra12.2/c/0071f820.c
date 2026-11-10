/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0071f820; name: FUN_0071f820
 */


void FUN_0071f820(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *local_60 [4];
  long local_40;
  undefined8 uStack_38;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x70))();
  lVar6 = param_1 + 0x10;
  FUN_001fcec0(lVar6,uVar3);
  lVar7 = *(long *)(param_1 + 8);
  uStack_38 = 0;
  local_40 = lVar6;
  FUN_006eeb44(local_60,*(undefined8 *)(lVar7 + 0x10),&local_40);
  lVar4 = local_60[0][1];
  if (lVar4 == 0) {
    lVar4 = FUN_006ee9b0(lVar7,lVar6);
    *local_60[0] = lVar4;
    local_60[0][1] = lVar4;
  }
  lVar6 = *(long *)(param_1 + 0x30);
  pbVar8 = (byte *)(lVar4 + 0x18);
  *(byte **)(param_1 + 0x28) = pbVar8;
  *(uint *)(lVar6 + 0x20) = *(uint *)(lVar6 + 0x20) | 2;
  puVar1 = (undefined8 *)(lVar6 + 0x18);
  puVar5 = (ulong *)(*(ulong *)(lVar6 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(lVar6 + 8) & 1) != 0) {
    puVar5 = (ulong *)*puVar5;
  }
  puVar9 = (undefined8 *)*puVar1;
  if (puVar9 == (undefined8 *)PTR_DAT_047cba80) {
    FUN_001fcdc8(puVar1,puVar5,PTR_DAT_047cba80);
    puVar9 = (undefined8 *)*puVar1;
    pbVar8 = *(byte **)(param_1 + 0x28);
    bVar2 = *pbVar8;
  }
  else {
    bVar2 = *pbVar8;
  }
  if ((bVar2 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar8 + 0x10));
  }
  uVar10 = puVar9[1];
  uVar3 = *puVar9;
  *(undefined8 *)(pbVar8 + 0x10) = puVar9[2];
  *(undefined8 *)(pbVar8 + 8) = uVar10;
  *(undefined8 *)pbVar8 = uVar3;
  *(undefined2 *)puVar9 = 0;
  return;
}


