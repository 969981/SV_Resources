/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029d6acc; name: FUN_029d6acc
 */


undefined8 FUN_029d6acc(undefined8 param_1,int *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ushort *puVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  uint *puVar9;
  ushort *puVar10;
  uint uVar11;
  ulong uVar12;
  float fVar13;
  ushort uVar14;
  float fVar15;
  undefined4 uVar16;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xd) ||
     (uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6], uVar6 == 0)) {
    piVar8 = (int *)0x0;
  }
  else {
    puVar9 = (uint *)((long)param_2 + uVar6);
    piVar8 = (int *)((long)puVar9 + (ulong)*puVar9);
  }
  puVar10 = (ushort *)((long)piVar8 - (long)*piVar8);
  if (*puVar10 < 5) {
    lVar7 = 0;
LAB_029d6d34:
    puVar9 = (uint *)0x0;
  }
  else {
    lVar7 = 0;
    if ((ulong)puVar10[2] != 0) {
      puVar9 = (uint *)((long)piVar8 + (ulong)puVar10[2]);
      lVar7 = (long)puVar9 + (ulong)*puVar9;
    }
    if ((*puVar10 < 7) || ((ulong)puVar10[3] == 0)) goto LAB_029d6d34;
    puVar9 = (uint *)((long)piVar8 + (ulong)puVar10[3]);
    puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
  }
  uVar2 = *puVar9;
  uVar11 = *(uint *)(param_3 + 4);
  fVar13 = (float)param_1;
  if (-1 < (int)uVar11) {
    if (uVar2 <= uVar11) {
      return param_1;
    }
    if (*(char *)(param_3 + 2) == '\0') goto LAB_029d6bf8;
    uVar14 = *(ushort *)(lVar7 + (ulong)uVar11 * 2 + 4);
    *(undefined1 *)(param_3 + 2) = 0;
    fVar15 = (float)NEON_ucvtf((uint)uVar14);
    if (fVar13 <= fVar15) goto LAB_029d6bf8;
    *(undefined4 *)(param_3 + 4) = 0xffffffff;
    *(undefined4 *)(param_3 + 0xc) = 1;
  }
  puVar10 = (ushort *)(lVar7 + 8);
  lVar3 = ((lVar7 + 4 + (ulong)uVar2 * 2) - (long)puVar10) + -2;
  if (lVar3 != 0) {
    uVar12 = lVar3 >> 1;
    puVar5 = puVar10 + (uVar12 >> 1) + 1;
    uVar6 = (uVar12 >> 1 ^ 0xffffffffffffffff) + uVar12;
    if (fVar13 <= (float)puVar10[uVar12 >> 1]) {
      puVar5 = puVar10;
      uVar6 = uVar12 >> 1;
    }
    while (puVar10 = puVar5, uVar6 != 0) {
      uVar12 = uVar6 >> 1;
      puVar5 = puVar10 + uVar12 + 1;
      uVar6 = uVar6 + (uVar6 >> 1 ^ 0xffffffffffffffff);
      if (fVar13 <= (float)puVar10[uVar12]) {
        puVar5 = puVar10;
        uVar6 = uVar12;
      }
    }
  }
  uVar11 = (int)((ulong)((long)puVar10 - (lVar7 + 4)) >> 1) - 2;
LAB_029d6bf8:
  uVar6 = (ulong)uVar11;
  iVar1 = 0;
  if (uVar11 <= uVar2) {
    iVar1 = uVar2 - uVar11;
  }
  if (uVar11 <= uVar2 && uVar2 - uVar11 != 0) {
    lVar7 = lVar7 + 4;
    uVar16 = NEON_ucvtf((uint)*(ushort *)(lVar7 + uVar6 * 2));
    param_1 = 0;
    uVar12 = (ulong)(*(int *)(param_3 + 0xc) + 2U & 4);
    *(undefined4 *)(param_3 + uVar12 * 4 + 0x10) = uVar16;
    uVar4 = *(undefined8 *)(puVar9 + uVar6 * 3 + 1);
    lVar3 = param_3 + uVar12 * 0x10;
    *(ulong *)(lVar3 + 0x38) = (ulong)(puVar9 + uVar6 * 3 + 1)[2];
    *(undefined8 *)(lVar3 + 0x30) = uVar4;
    if (iVar1 != 1) {
      uVar16 = NEON_ucvtf((uint)*(ushort *)(lVar7 + (uVar6 + 1) * 2));
      *(undefined4 *)(param_3 + (uVar12 | 1) * 4 + 0x10) = uVar16;
      uVar4 = *(undefined8 *)(puVar9 + (uVar6 + 1) * 3 + 1);
      lVar3 = param_3 + (uVar12 | 1) * 0x10;
      *(ulong *)(lVar3 + 0x38) = (ulong)(puVar9 + (uVar6 + 1) * 3 + 1)[2];
      *(undefined8 *)(lVar3 + 0x30) = uVar4;
      if (iVar1 != 2) {
        uVar16 = NEON_ucvtf((uint)*(ushort *)(lVar7 + (uVar6 + 2) * 2));
        *(undefined4 *)(param_3 + (uVar12 | 2) * 4 + 0x10) = uVar16;
        uVar4 = *(undefined8 *)(puVar9 + (uVar6 + 2) * 3 + 1);
        lVar3 = param_3 + (uVar12 | 2) * 0x10;
        *(ulong *)(lVar3 + 0x38) = (ulong)(puVar9 + (uVar6 + 2) * 3 + 1)[2];
        *(undefined8 *)(lVar3 + 0x30) = uVar4;
        if (iVar1 != 3) {
          uVar16 = NEON_ucvtf((uint)*(ushort *)(lVar7 + (uVar6 + 3) * 2));
          *(undefined4 *)(param_3 + (uVar12 | 3) * 4 + 0x10) = uVar16;
          param_1 = *(undefined8 *)(puVar9 + (uVar6 + 3) * 3 + 1);
          lVar7 = param_3 + (uVar12 | 3) * 0x10;
          *(ulong *)(lVar7 + 0x38) = (ulong)(puVar9 + (uVar6 + 3) * 3 + 1)[2];
          *(undefined8 *)(lVar7 + 0x30) = param_1;
        }
      }
    }
  }
  *(uint *)(param_3 + 4) = uVar11 + 4;
  return param_1;
}


