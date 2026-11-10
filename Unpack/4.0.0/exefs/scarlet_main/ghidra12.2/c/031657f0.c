/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031657f0; name: FUN_031657f0
 */


undefined8 FUN_031657f0(long param_1,ushort param_2,ushort param_3,int param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  iVar9 = *(int *)(param_1 + 0x98);
  lVar8 = (long)iVar9;
  if ((int)(*(uint *)(param_1 + 0x9c) & 0x7fffffff) <= iVar9) {
    FUN_03165928((long *)(param_1 + 0x90),PTR_PTR_047d1a50,lVar8 + 1);
    iVar9 = *(int *)(param_1 + 0x98);
  }
  piVar1 = (int *)(*(long *)(param_1 + 0x90) + (long)iVar9 * 0x10);
  *(int *)(param_1 + 0x98) = (int)(lVar8 + 1);
  *piVar1 = param_4 << 2;
  *(ushort *)(piVar1 + 1) = param_2;
  *(undefined2 *)(piVar1 + 2) =
       *(undefined2 *)(*(long *)(param_1 + 0x100) + (ulong)param_2 * 0x20 + 10);
  *(ushort *)((long)piVar1 + 6) = param_3;
  *(undefined2 *)((long)piVar1 + 10) =
       *(undefined2 *)(*(long *)(param_1 + 0x100) + (ulong)param_3 * 0x20 + 10);
  lVar8 = *(long *)(param_1 + 0x90);
  uVar10 = (long)*(int *)(param_1 + 0x98) - 1;
  puVar3 = (uint *)(lVar8 + uVar10 * 0x10);
  uVar6 = *puVar3;
  uVar11 = *(undefined8 *)(puVar3 + 1);
  uVar7 = puVar3[3];
  iVar9 = (int)uVar10;
  while (iVar9 != 1) {
    iVar9 = (int)uVar10;
    uVar10 = uVar10 >> 1 & 0x7fffffff;
    if (*(uint *)(lVar8 + uVar10 * 0x10) <= uVar6) goto LAB_031658f4;
    puVar4 = (undefined8 *)(lVar8 + uVar10 * 0x10);
    puVar2 = (undefined8 *)(lVar8 + (long)iVar9 * 0x10);
    uVar5 = puVar4[1];
    *puVar2 = *puVar4;
    puVar2[1] = uVar5;
    lVar8 = *(long *)(param_1 + 0x90);
    iVar9 = (int)uVar10;
  }
  iVar9 = 1;
LAB_031658f4:
  puVar3 = (uint *)(lVar8 + (long)iVar9 * 0x10);
  *puVar3 = uVar6;
  puVar3[3] = uVar7;
  *(undefined8 *)(puVar3 + 1) = uVar11;
  return 1;
}


