/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03096684; name: FUN_03096684
 */


void FUN_03096684(long param_1,int *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  lVar15 = *(long *)(param_1 + 0x20);
  iVar4 = *param_2;
  if (iVar4 < *(int *)(lVar15 + 0x20)) {
    lVar12 = *(long *)(lVar15 + 0x18);
    iVar8 = iVar4;
    if (*(int *)(lVar15 + 0x98) != 0) {
      iVar8 = *(int *)(*(long *)(lVar15 + 0x90) + (long)iVar4 * 4);
    }
    if (iVar8 == -1) goto LAB_030966d0;
    plVar11 = (long *)(lVar15 + 0xb0);
    iVar4 = iVar8;
  }
  else {
    plVar11 = (long *)(lVar15 + 0xd0);
    iVar4 = iVar4 - *(int *)(lVar15 + 0x20);
  }
  lVar12 = *plVar11;
LAB_030966d0:
  uVar2 = *(ushort *)(lVar12 + (long)iVar4 * 0x10 + 8);
  uVar9 = (uint)(short)uVar2;
  if ((short)uVar2 < 1) {
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
  }
  else {
    lVar13 = (long)*(int *)(lVar15 + 0x30);
    iVar4 = *(int *)(lVar12 + (long)iVar4 * 0x10);
    lVar12 = (long)iVar4;
    uVar9 = (uint)uVar2;
    uVar10 = (uint)uVar2;
    if (uVar2 < 2) {
      uVar10 = 1;
    }
    uVar14 = (ulong)uVar10;
    iVar8 = *(int *)(lVar15 + 0x40);
    if (*(int *)(lVar15 + 0x78) == 0) {
      piVar5 = (int *)(*(long *)(lVar15 + 0xe0) + (lVar12 - lVar13) * 0x14);
      fVar19 = 0.0;
      fVar17 = 0.0;
      fVar18 = 0.0;
      lVar16 = 0;
      lVar6 = lVar12;
      do {
        iVar4 = iVar4 + 1;
        piVar7 = piVar5;
        if (lVar6 < lVar13) {
          piVar7 = (int *)(*(long *)(lVar15 + 0x28) + (lVar16 + lVar12) * 0x14);
          if (iVar4 != 0) {
            piVar7 = (int *)(*(long *)(lVar15 + 0xc0) + (lVar16 + lVar12) * 0x14);
          }
        }
        iVar3 = *piVar7;
        puVar1 = (undefined8 *)(*(long *)(lVar15 + 0x38) + (long)iVar3 * 0x10);
        if (iVar8 <= iVar3) {
          puVar1 = (undefined8 *)(*(long *)(lVar15 + 0xf0) + (long)(iVar3 - iVar8) * 0x10);
        }
        uVar14 = uVar14 - 1;
        fVar17 = fVar17 + (float)*puVar1;
        fVar18 = fVar18 + (float)((ulong)*puVar1 >> 0x20);
        fVar19 = fVar19 + (float)puVar1[1];
        lVar16 = lVar16 + 1;
        piVar5 = piVar5 + 5;
        lVar6 = lVar6 + 1;
      } while (uVar14 != 0);
    }
    else {
      piVar5 = (int *)(*(long *)(lVar15 + 0xe0) + (lVar12 - lVar13) * 0x14);
      fVar17 = 0.0;
      fVar18 = 0.0;
      fVar19 = 0.0;
      lVar16 = 0;
      lVar6 = lVar12;
      do {
        piVar7 = piVar5;
        if (lVar6 < lVar13) {
          iVar4 = *(int *)(*(long *)(lVar15 + 0x70) + lVar6 * 4);
          if (iVar4 == -1) {
            piVar7 = (int *)(*(long *)(lVar15 + 0x28) + (lVar16 + lVar12) * 0x14);
          }
          else {
            piVar7 = (int *)(*(long *)(lVar15 + 0xc0) + (long)iVar4 * 0x14);
          }
        }
        iVar4 = *piVar7;
        puVar1 = (undefined8 *)(*(long *)(lVar15 + 0x38) + (long)iVar4 * 0x10);
        if (iVar8 <= iVar4) {
          puVar1 = (undefined8 *)(*(long *)(lVar15 + 0xf0) + (long)(iVar4 - iVar8) * 0x10);
        }
        uVar14 = uVar14 - 1;
        fVar17 = fVar17 + (float)*puVar1;
        fVar18 = fVar18 + (float)((ulong)*puVar1 >> 0x20);
        fVar19 = fVar19 + (float)puVar1[1];
        lVar16 = lVar16 + 1;
        piVar5 = piVar5 + 5;
        lVar6 = lVar6 + 1;
      } while (uVar14 != 0);
    }
  }
  uVar22 = NEON_fmov(0x3f800000,4);
  uVar23 = *(undefined8 *)(param_1 + 0x80);
  uVar24 = *(undefined8 *)(param_1 + 0x90);
  uVar21 = NEON_scvtf(CONCAT44(uVar9,uVar9),4);
  fVar20 = (float)uVar22 / (float)uVar21;
  fVar17 = fVar17 * fVar20;
  fVar18 = fVar18 * ((float)((ulong)uVar22 >> 0x20) / (float)((ulong)uVar21 >> 0x20));
  fVar19 = fVar19 * fVar20;
  uVar21 = *(undefined8 *)(param_1 + 0x60);
  uVar22 = *(undefined8 *)(param_1 + 0x70);
  param_3[1] = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20) * fVar19 +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20) * fVar17 +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) * fVar18,
                        (float)*(undefined8 *)(param_1 + 0x98) +
                        (float)*(undefined8 *)(param_1 + 0x88) * fVar19 +
                        (float)*(undefined8 *)(param_1 + 0x68) * fVar17 +
                        (float)*(undefined8 *)(param_1 + 0x78) * fVar18);
  *param_3 = CONCAT44((float)((ulong)uVar24 >> 0x20) +
                      (float)((ulong)uVar23 >> 0x20) * fVar19 +
                      (float)((ulong)uVar21 >> 0x20) * fVar17 +
                      (float)((ulong)uVar22 >> 0x20) * fVar18,
                      (float)uVar24 +
                      (float)uVar23 * fVar19 + (float)uVar21 * fVar17 + (float)uVar22 * fVar18);
  return;
}


