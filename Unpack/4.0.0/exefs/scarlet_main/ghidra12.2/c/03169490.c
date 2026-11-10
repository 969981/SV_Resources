/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03169490; name: FUN_03169490
 */


void FUN_03169490(long param_1,ushort param_2,int param_3)

{
  ushort *puVar1;
  short *psVar2;
  undefined2 *puVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  
  uVar6 = *(uint *)(param_1 + 0x128);
  iVar10 = (int)((long)(int)uVar6 + 3);
  if ((int)(*(uint *)(param_1 + 300) & 0x7fffffff) < iVar10) {
    FUN_03169f70(param_1 + 0x120,PTR_PTR_047d1a50,(long)(int)uVar6 + 3);
  }
  uVar7 = *(uint *)(param_1 + 0x118);
  *(int *)(param_1 + 0x128) = iVar10;
  if ((int)(*(uint *)(param_1 + 0x11c) & 0x7fffffff) <= (int)uVar7) {
    FUN_0316a080(param_1 + 0x110,PTR_PTR_047d1a50,(long)(int)uVar7 + 1);
  }
  lVar11 = *(long *)(param_1 + 0x110);
  puVar1 = (ushort *)(lVar11 + (ulong)param_2 * 8);
  *(int *)(param_1 + 0x118) = (int)((long)(int)uVar7 + 1);
  uVar4 = *puVar1;
  lVar12 = *(long *)(param_1 + 0x120);
  if (*(int *)(param_1 + 0x138) != 0) {
    iVar10 = *(int *)(param_1 + 0x138) + -1;
    if (*(int *)(*(long *)(param_1 + 0x130) + (long)iVar10 * 4) == param_3) goto LAB_031695a4;
  }
  iVar10 = FUN_03168de8(param_1,param_3);
LAB_031695a4:
  puVar3 = (undefined2 *)(lVar12 + ((ulong)uVar6 & 0xffff) * 8);
  *puVar3 = (short)iVar10;
  sVar9 = (short)(uVar6 + 1);
  puVar3[1] = uVar4;
  puVar3[2] = sVar9 * 4 | 2;
  uVar5 = *(undefined2 *)(lVar12 + (ulong)uVar4 * 8);
  puVar3 = (undefined2 *)(lVar12 + ((ulong)(uVar6 + 1) & 0xffff) * 8);
  puVar3[2] = (ushort)(uVar6 << 2) | 2;
  sVar8 = (short)(uVar6 + 2);
  puVar3[1] = sVar8;
  *puVar3 = uVar5;
  puVar3 = (undefined2 *)(lVar12 + ((ulong)(uVar6 + 2) & 0xffff) * 8);
  *puVar3 = (short)iVar10;
  *(undefined4 *)(puVar3 + 1) = 0x3ffff;
  *puVar1 = (ushort)uVar6;
  psVar2 = (short *)(*(long *)(param_1 + 0x110) + ((ulong)uVar7 & 0xffff) * 8);
  *psVar2 = sVar9;
  psVar2[1] = sVar8;
  psVar2[2] = *(short *)(lVar11 + (ulong)param_2 * 8 + 4);
  return;
}


