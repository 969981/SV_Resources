/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029d6618; name: FUN_029d6618
 */


void FUN_029d6618(float param_1,int *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  ushort *puVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  uint *puVar10;
  ushort *puVar11;
  uint uVar12;
  ulong uVar13;
  ushort uVar14;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xd) ||
     (uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6], uVar7 == 0)) {
    piVar9 = (int *)0x0;
  }
  else {
    puVar10 = (uint *)((long)param_2 + uVar7);
    piVar9 = (int *)((long)puVar10 + (ulong)*puVar10);
  }
  puVar11 = (ushort *)((long)piVar9 - (long)*piVar9);
  if (*puVar11 < 5) {
    lVar8 = 0;
LAB_029d6814:
    puVar10 = (uint *)0x0;
  }
  else {
    lVar8 = 0;
    if ((ulong)puVar11[2] != 0) {
      puVar10 = (uint *)((long)piVar9 + (ulong)puVar11[2]);
      lVar8 = (long)puVar10 + (ulong)*puVar10;
    }
    if ((*puVar11 < 7) || ((ulong)puVar11[3] == 0)) goto LAB_029d6814;
    puVar10 = (uint *)((long)piVar9 + (ulong)puVar11[3]);
    puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
  }
  uVar2 = *puVar10;
  uVar12 = *(uint *)(param_3 + 4);
  if (-1 < (int)uVar12) {
    if (uVar2 <= uVar12) {
      return;
    }
    if (*(char *)(param_3 + 2) == '\0') goto LAB_029d6744;
    uVar14 = *(ushort *)(lVar8 + (ulong)uVar12 * 2 + 4);
    *(undefined1 *)(param_3 + 2) = 0;
    fVar5 = (float)NEON_ucvtf((uint)uVar14);
    if (param_1 <= fVar5) goto LAB_029d6744;
    *(undefined4 *)(param_3 + 4) = 0xffffffff;
    *(undefined4 *)(param_3 + 0xc) = 1;
  }
  puVar11 = (ushort *)(lVar8 + 8);
  lVar3 = ((lVar8 + 4 + (ulong)uVar2 * 2) - (long)puVar11) + -2;
  if (lVar3 != 0) {
    uVar13 = lVar3 >> 1;
    puVar6 = puVar11 + (uVar13 >> 1) + 1;
    uVar7 = (uVar13 >> 1 ^ 0xffffffffffffffff) + uVar13;
    if (param_1 <= (float)puVar11[uVar13 >> 1]) {
      puVar6 = puVar11;
      uVar7 = uVar13 >> 1;
    }
    while (puVar11 = puVar6, uVar7 != 0) {
      uVar13 = uVar7 >> 1;
      puVar6 = puVar11 + uVar13 + 1;
      uVar7 = uVar7 + (uVar7 >> 1 ^ 0xffffffffffffffff);
      if (param_1 <= (float)puVar11[uVar13]) {
        puVar6 = puVar11;
        uVar7 = uVar13;
      }
    }
  }
  uVar12 = (int)((ulong)((long)puVar11 - (lVar8 + 4)) >> 1) - 2;
LAB_029d6744:
  uVar7 = (ulong)uVar12;
  iVar1 = 0;
  if (uVar12 <= uVar2) {
    iVar1 = uVar2 - uVar12;
  }
  if (uVar12 <= uVar2 && uVar2 - uVar12 != 0) {
    uVar13 = (ulong)(*(int *)(param_3 + 0xc) + 2U & 4);
    lVar8 = lVar8 + 4;
    lVar3 = param_3 + uVar13 * 4;
    uVar4 = NEON_ucvtf((uint)*(ushort *)(lVar8 + uVar7 * 2));
    *(undefined4 *)(lVar3 + 0x10) = uVar4;
    *(uint *)(lVar3 + 0x30) = puVar10[uVar7 + 1];
    if (iVar1 != 1) {
      uVar4 = NEON_ucvtf((uint)*(ushort *)(lVar8 + (uVar7 + 1) * 2));
      uVar13 = uVar13 << 2;
      lVar3 = param_3 + (uVar13 | 4);
      *(undefined4 *)(lVar3 + 0x10) = uVar4;
      *(uint *)(lVar3 + 0x30) = puVar10[uVar7 + 2];
      if (iVar1 != 2) {
        uVar4 = NEON_ucvtf((uint)*(ushort *)(lVar8 + (uVar7 + 2) * 2));
        lVar3 = param_3 + (uVar13 | 8);
        *(undefined4 *)(lVar3 + 0x10) = uVar4;
        *(uint *)(lVar3 + 0x30) = puVar10[uVar7 + 3];
        if (iVar1 != 3) {
          uVar4 = NEON_ucvtf((uint)*(ushort *)(lVar8 + (uVar7 + 3) * 2));
          lVar8 = param_3 + (uVar13 | 0xc);
          *(undefined4 *)(lVar8 + 0x10) = uVar4;
          *(uint *)(lVar8 + 0x30) = puVar10[uVar7 + 4];
        }
      }
    }
  }
  *(uint *)(param_3 + 4) = uVar12 + 4;
  return;
}


