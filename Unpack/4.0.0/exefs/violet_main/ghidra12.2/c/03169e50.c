/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03169e50; name: FUN_03169e50
 */


undefined8 FUN_03169e50(long param_1,ushort *param_2)

{
  ushort *puVar1;
  undefined2 *puVar2;
  ushort *puVar3;
  undefined2 *puVar4;
  ushort uVar5;
  ushort uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  ushort uVar11;
  long lVar12;
  int iVar13;
  
  iVar8 = *(int *)(param_1 + 0x128);
  lVar12 = (long)iVar8 + 2;
  iVar13 = (int)lVar12;
  if ((int)(*(uint *)(param_1 + 300) & 0x7fffffff) < iVar13) {
    FUN_03169f70(param_1 + 0x120,PTR_PTR_047d1a50,lVar12);
  }
  iVar9 = *(int *)(param_1 + 0x118);
  *(int *)(param_1 + 0x128) = iVar13;
  uVar11 = (ushort)iVar8;
  uVar10 = uVar11 + 1;
  if ((int)(*(uint *)(param_1 + 0x11c) & 0x7fffffff) <= iVar9) {
    FUN_0316a080(param_1 + 0x110,PTR_PTR_047d1a50,(long)iVar9 + 1);
  }
  *(int *)(param_1 + 0x118) = (int)((long)iVar9 + 1);
  puVar3 = (ushort *)(*(long *)(param_1 + 0x110) + (ulong)*param_2 * 8);
  puVar1 = (ushort *)(*(long *)(param_1 + 0x110) + (ulong)(ushort)iVar9 * 8);
  uVar5 = puVar3[1];
  lVar12 = *(long *)(param_1 + 0x120);
  uVar6 = *puVar3;
  puVar4 = (undefined2 *)(lVar12 + (ulong)uVar5 * 8);
  puVar4[1] = uVar6;
  puVar4[2] = uVar10 * 4 | 2;
  uVar7 = *(undefined2 *)(lVar12 + (ulong)uVar6 * 8);
  puVar2 = (undefined2 *)(lVar12 + (ulong)uVar10 * 8);
  puVar2[1] = uVar11;
  puVar2[2] = uVar5 << 2 | 2;
  *puVar2 = uVar7;
  puVar2 = (undefined2 *)(lVar12 + (ulong)uVar11 * 8);
  *puVar2 = *puVar4;
  *(undefined4 *)(puVar2 + 1) = 0x3ffff;
  puVar3[1] = *puVar3;
  *puVar1 = uVar10;
  puVar1[1] = uVar11;
  puVar1[2] = puVar3[2];
  *param_2 = (ushort)iVar9;
  return 1;
}


