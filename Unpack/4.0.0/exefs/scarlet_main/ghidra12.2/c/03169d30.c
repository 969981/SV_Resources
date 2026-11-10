/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03169d30; name: FUN_03169d30
 */


undefined8 FUN_03169d30(long param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  ushort *puVar5;
  undefined2 *puVar6;
  ushort uVar7;
  ushort uVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  ushort uVar12;
  long lVar13;
  int iVar14;
  
  iVar10 = *(int *)(param_1 + 0x128);
  iVar14 = (int)((long)iVar10 + 2);
  if ((int)(*(uint *)(param_1 + 300) & 0x7fffffff) < iVar14) {
    FUN_03169f70(param_1 + 0x120,PTR_PTR_047d1a50,(long)iVar10 + 2);
  }
  iVar11 = *(int *)(param_1 + 0x118);
  *(int *)(param_1 + 0x128) = iVar14;
  uVar12 = (ushort)iVar10;
  uVar1 = uVar12 + 1;
  if ((int)(*(uint *)(param_1 + 0x11c) & 0x7fffffff) <= iVar11) {
    FUN_0316a080(param_1 + 0x110,PTR_PTR_047d1a50,(long)iVar11 + 1);
  }
  *(int *)(param_1 + 0x118) = (int)((long)iVar11 + 1);
  puVar5 = (ushort *)(*(long *)(param_1 + 0x110) + (ulong)*param_2 * 8);
  puVar2 = (ushort *)(*(long *)(param_1 + 0x110) + (ulong)(ushort)iVar11 * 8);
  uVar7 = puVar5[1];
  lVar13 = *(long *)(param_1 + 0x120);
  uVar8 = *puVar5;
  puVar6 = (undefined2 *)(lVar13 + (ulong)uVar7 * 8);
  puVar6[2] = (ushort)(iVar10 << 2) | 2;
  puVar6[1] = uVar8;
  uVar9 = *(undefined2 *)(lVar13 + (ulong)uVar8 * 8);
  puVar3 = (undefined2 *)(lVar13 + (ulong)uVar12 * 8);
  puVar4 = (undefined2 *)(lVar13 + (ulong)uVar1 * 8);
  puVar3[1] = uVar1;
  puVar3[2] = uVar7 << 2 | 2;
  *puVar3 = uVar9;
  *puVar4 = *puVar6;
  *(undefined4 *)(puVar4 + 1) = 0x3ffff;
  puVar5[1] = *puVar5;
  *puVar2 = uVar12;
  puVar2[1] = uVar1;
  puVar2[2] = puVar5[2];
  *param_2 = (ushort)iVar11;
  return 1;
}


