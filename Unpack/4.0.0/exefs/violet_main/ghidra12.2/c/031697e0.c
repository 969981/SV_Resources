/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031697e0; name: FUN_031697e0
 */


undefined8
FUN_031697e0(long param_1,ushort param_2,int param_3,undefined2 *param_4,undefined2 *param_5)

{
  ushort *puVar1;
  short *psVar2;
  long lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  ushort uVar6;
  undefined2 uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  undefined2 uVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  
  uVar9 = *(uint *)(param_1 + 0x128);
  iVar17 = (int)((long)(int)uVar9 + 5);
  if ((int)(*(uint *)(param_1 + 300) & 0x7fffffff) < iVar17) {
    FUN_03169f70(param_1 + 0x120,PTR_PTR_047d1a50,(long)(int)uVar9 + 5);
  }
  uVar18 = *(uint *)(param_1 + 0x11c) & 0x7fffffff;
  uVar10 = *(uint *)(param_1 + 0x118);
  lVar3 = (long)(int)uVar10 + 1;
  *(int *)(param_1 + 0x128) = iVar17;
  if ((int)uVar18 <= (int)uVar10) {
    FUN_0316a080(param_1 + 0x110,PTR_PTR_047d1a50,lVar3);
    uVar18 = *(uint *)(param_1 + 0x11c) & 0x7fffffff;
  }
  uVar19 = (uint)lVar3;
  *(uint *)(param_1 + 0x118) = uVar19;
  lVar20 = (long)(int)uVar10 + 2;
  if ((int)uVar18 <= (int)uVar19) {
    FUN_0316a080(param_1 + 0x110,PTR_PTR_047d1a50,lVar20);
  }
  lVar21 = *(long *)(param_1 + 0x110);
  puVar1 = (ushort *)(lVar21 + (ulong)param_2 * 8);
  *(int *)(param_1 + 0x118) = (int)lVar20;
  uVar6 = *puVar1;
  uVar8 = puVar1[1];
  lVar20 = *(long *)(param_1 + 0x120);
  if (*(int *)(param_1 + 0x138) != 0) {
    iVar17 = *(int *)(param_1 + 0x138) + -1;
    if (*(int *)(*(long *)(param_1 + 0x130) + (long)iVar17 * 4) == param_3) goto LAB_03169960;
  }
  iVar17 = FUN_03168de8(param_1,param_3);
LAB_03169960:
  puVar4 = (undefined2 *)(lVar20 + (ulong)uVar8 * 8);
  sVar16 = (short)(uVar9 + 2);
  uVar11 = (ushort)uVar9;
  puVar4[1] = uVar11;
  puVar5 = (undefined2 *)(lVar20 + ((ulong)uVar9 & 0xffff) * 8);
  puVar4[2] = sVar16 * 4 | 2;
  sVar15 = (short)(uVar9 + 3);
  puVar5[1] = uVar6;
  uVar12 = (undefined2)iVar17;
  *puVar5 = uVar12;
  puVar5[2] = sVar15 * 4 | 2;
  uVar7 = *puVar4;
  puVar4 = (undefined2 *)(lVar20 + ((ulong)(uVar9 + 1) & 0xffff) * 8);
  puVar5 = (undefined2 *)(lVar20 + ((ulong)(uVar9 + 2) & 0xffff) * 8);
  *(undefined4 *)(puVar4 + 1) = 0x3ffff;
  *puVar4 = uVar7;
  *puVar5 = uVar12;
  sVar13 = (short)(uVar9 + 1);
  puVar5[1] = sVar13;
  puVar4 = (undefined2 *)(lVar20 + ((ulong)(uVar9 + 3) & 0xffff) * 8);
  puVar5[2] = uVar8 << 2 | 2;
  puVar5 = (undefined2 *)(lVar20 + ((ulong)(uVar9 + 4) & 0xffff) * 8);
  uVar7 = *(undefined2 *)(lVar20 + (ulong)uVar6 * 8);
  sVar14 = (short)(uVar9 + 4);
  puVar4[1] = sVar14;
  puVar4[2] = (ushort)(uVar9 << 2) | 2;
  *puVar4 = uVar7;
  *puVar5 = uVar12;
  *(undefined4 *)(puVar5 + 1) = 0x3ffff;
  puVar1[1] = uVar11;
  *puVar1 = uVar11;
  psVar2 = (short *)(*(long *)(param_1 + 0x110) + (ulong)(uVar10 & 0xffff) * 8);
  lVar21 = lVar21 + (ulong)param_2 * 8;
  *psVar2 = sVar16;
  psVar2[1] = sVar13;
  psVar2[2] = *(short *)(lVar21 + 4);
  psVar2 = (short *)(*(long *)(param_1 + 0x110) + (ulong)(uVar19 & 0xffff) * 8);
  *psVar2 = sVar15;
  psVar2[1] = sVar14;
  psVar2[2] = *(short *)(lVar21 + 4);
  *param_4 = (short)uVar10;
  *param_5 = (short)lVar3;
  return 1;
}


