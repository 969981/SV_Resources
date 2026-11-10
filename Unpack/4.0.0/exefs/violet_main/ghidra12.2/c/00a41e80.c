/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a41e80; name: FUN_00a41e80
 */


void FUN_00a41e80(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int local_1c [3];
  
  lVar13 = *(long *)(param_1 + 0x10);
  lVar12 = *(long *)(lVar13 + 0x80);
  if ((int)((ulong)(*(long *)(lVar13 + 0x18) - *(long *)(lVar13 + 0x10)) >> 2) < 1) {
    lVar15 = 0;
    lVar13 = lVar12;
  }
  else {
    lVar15 = (long)**(int **)(lVar13 + 0x48) << 1;
    lVar13 = lVar12 + (long)**(int **)(lVar13 + 0x48) * 4;
  }
  lVar15 = lVar12 + lVar15 * 4;
  iVar14 = 0;
  piVar3 = local_1c + 2;
  piVar4 = local_1c + 1;
  do {
    iVar10 = *(int *)(param_1 + 0x1c);
    fVar20 = (((float)iVar14 + 0.5) * (float)iVar10) / 704.0;
    fVar21 = fVar20 + -0.5;
    local_1c[2] = (int)fVar21;
    fVar20 = fVar20 + 0.5;
    fVar21 = (float)(int)fVar20 - fVar21;
    fVar22 = fVar20 - (float)(int)fVar20;
    local_1c[1] = 0;
    local_1c[0] = iVar10 + -1;
    piVar6 = piVar3;
    if (iVar10 <= local_1c[2]) {
      piVar6 = local_1c;
    }
    piVar5 = piVar4;
    if (-1 < local_1c[2]) {
      piVar5 = piVar6;
    }
    iVar8 = *(int *)(param_1 + 0x18);
    local_1c[1] = 0;
    iVar17 = 0;
    local_1c[2] = (int)fVar20;
    piVar6 = piVar3;
    if (iVar10 <= local_1c[2]) {
      piVar6 = local_1c;
    }
    piVar7 = piVar4;
    if (-1 < local_1c[2]) {
      piVar7 = piVar6;
    }
    lVar1 = param_2 + *piVar5 * iVar8 * 4;
    lVar2 = param_2 + iVar8 * *piVar7 * 4;
    lVar16 = 0;
    while( true ) {
      fVar20 = (((float)iVar17 + 0.5) * (float)iVar8) / 1280.0;
      fVar23 = fVar20 + -0.5;
      fVar20 = fVar20 + 0.5;
      local_1c[2] = (int)fVar23;
      iVar10 = (int)fVar20;
      piVar6 = piVar3;
      if (iVar8 <= local_1c[2]) {
        piVar6 = local_1c;
      }
      piVar5 = piVar4;
      if (-1 < local_1c[2]) {
        piVar5 = piVar6;
      }
      local_1c[0] = iVar8 + -1;
      local_1c[1] = 0;
      piVar6 = piVar3;
      if (iVar8 <= iVar10) {
        piVar6 = local_1c;
      }
      fVar23 = (float)(int)fVar20 - fVar23;
      fVar20 = fVar20 - (float)(int)fVar20;
      piVar7 = piVar4;
      if (-1 < iVar10) {
        piVar7 = piVar6;
      }
      lVar9 = (long)*piVar5 * 4;
      local_1c[1] = 0;
      local_1c[2] = iVar10;
      fVar26 = (float)NEON_ucvtf((uint)*(byte *)(lVar1 + lVar9));
      uVar18 = (long)(int)lVar9 | 1;
      uVar11 = (long)(int)lVar9 | 2;
      fVar27 = (float)NEON_ucvtf((uint)*(byte *)(lVar2 + lVar9));
      lVar9 = (long)*piVar7 * 4;
      fVar30 = (float)NEON_ucvtf((uint)*(byte *)(lVar1 + uVar18));
      fVar31 = (float)NEON_ucvtf((uint)*(byte *)(lVar2 + uVar18));
      uVar19 = (long)(int)lVar9 | 1;
      fVar32 = (float)NEON_ucvtf((uint)*(byte *)(lVar1 + uVar11));
      uVar18 = (long)(int)lVar9 | 2;
      fVar24 = (float)NEON_ucvtf((uint)*(byte *)(lVar2 + uVar11));
      fVar29 = (float)NEON_ucvtf((uint)*(byte *)(lVar2 + lVar9));
      fVar33 = (float)NEON_ucvtf((uint)*(byte *)(lVar1 + uVar19));
      fVar28 = (float)NEON_ucvtf((uint)*(byte *)(lVar1 + lVar9));
      fVar35 = (float)NEON_ucvtf((uint)*(byte *)(lVar1 + uVar18));
      fVar34 = (float)NEON_ucvtf((uint)*(byte *)(lVar2 + uVar19));
      fVar25 = (float)NEON_ucvtf((uint)*(byte *)(lVar2 + uVar18));
      *(float *)(lVar12 + lVar16) =
           fVar21 * (fVar23 * fVar26 + fVar20 * fVar28) +
           fVar22 * (fVar23 * fVar27 + fVar20 * fVar29);
      *(float *)(lVar13 + lVar16) =
           fVar21 * (fVar23 * fVar30 + fVar20 * fVar33) +
           fVar22 * (fVar23 * fVar31 + fVar20 * fVar34);
      *(float *)(lVar15 + lVar16) =
           fVar21 * (fVar23 * fVar32 + fVar20 * fVar35) +
           fVar22 * (fVar23 * fVar24 + fVar20 * fVar25);
      if (iVar17 == 0x4ff) break;
      iVar8 = *(int *)(param_1 + 0x18);
      lVar16 = lVar16 + 4;
      iVar17 = iVar17 + 1;
    }
    iVar14 = iVar14 + 1;
    lVar12 = lVar12 + lVar16 + 4;
    lVar13 = lVar13 + lVar16 + 4;
    lVar15 = lVar15 + lVar16 + 4;
  } while (iVar14 != 0x2c0);
  return;
}


