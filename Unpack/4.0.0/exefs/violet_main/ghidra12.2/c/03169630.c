/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03169630; name: FUN_03169630
 */


void FUN_03169630(long param_1,ushort param_2,int param_3)

{
  short *psVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ushort *puVar12;
  
  uVar5 = *(uint *)(param_1 + 0x128);
  iVar9 = (int)((long)(int)uVar5 + 3);
  if ((int)(*(uint *)(param_1 + 300) & 0x7fffffff) < iVar9) {
    FUN_03169f70(param_1 + 0x120,PTR_PTR_047d1a50,(long)(int)uVar5 + 3);
  }
  uVar6 = *(uint *)(param_1 + 0x118);
  *(int *)(param_1 + 0x128) = iVar9;
  if ((int)(*(uint *)(param_1 + 0x11c) & 0x7fffffff) <= (int)uVar6) {
    FUN_0316a080(param_1 + 0x110,PTR_PTR_047d1a50,(long)(int)uVar6 + 1);
  }
  lVar10 = *(long *)(param_1 + 0x110);
  *(int *)(param_1 + 0x118) = (int)((long)(int)uVar6 + 1);
  puVar12 = (ushort *)(lVar10 + (ulong)param_2 * 8 + 2);
  uVar4 = *puVar12;
  lVar11 = *(long *)(param_1 + 0x120);
  if (*(int *)(param_1 + 0x138) != 0) {
    iVar9 = *(int *)(param_1 + 0x138) + -1;
    if (*(int *)(*(long *)(param_1 + 0x130) + (long)iVar9 * 4) == param_3) goto LAB_03169740;
  }
  iVar9 = FUN_03168de8(param_1,param_3);
LAB_03169740:
  puVar2 = (undefined2 *)(lVar11 + (ulong)uVar4 * 8);
  sVar8 = (short)(uVar5 + 2);
  puVar2[2] = sVar8 * 4 | 2;
  puVar3 = (undefined2 *)(lVar11 + ((ulong)uVar5 & 0xffff) * 8);
  puVar2[1] = (ushort)uVar5;
  *puVar3 = (short)iVar9;
  *(undefined4 *)(puVar3 + 1) = 0x3ffff;
  puVar3 = (undefined2 *)(lVar11 + ((ulong)(uVar5 + 1) & 0xffff) * 8);
  *puVar3 = *puVar2;
  *(undefined4 *)(puVar3 + 1) = 0x3ffff;
  puVar2 = (undefined2 *)(lVar11 + ((ulong)(uVar5 + 2) & 0xffff) * 8);
  *puVar2 = (short)iVar9;
  sVar7 = (short)(uVar5 + 1);
  puVar2[1] = sVar7;
  puVar2[2] = uVar4 << 2 | 2;
  *puVar12 = (ushort)uVar5;
  psVar1 = (short *)(*(long *)(param_1 + 0x110) + ((ulong)uVar6 & 0xffff) * 8);
  *psVar1 = sVar8;
  psVar1[1] = sVar7;
  psVar1[2] = *(short *)(lVar10 + (ulong)param_2 * 8 + 4);
  return;
}


