/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a42284; name: FUN_00a42284
 */


void FUN_00a42284(long *param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  bool bVar14;
  undefined1 *puVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  float fVar23;
  long lVar24;
  int iVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_44;
  float fStack_40;
  float local_3c;
  float local_38;
  float local_34;
  
  lVar17 = *param_1;
  lVar19 = *(long *)(lVar17 + 0x10);
  lVar18 = *(long *)(lVar19 + 0x80);
  if ((int)((ulong)(*(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10)) >> 2) < 1) {
    lVar21 = 0;
    lVar19 = lVar18;
  }
  else {
    lVar21 = (long)**(int **)(lVar19 + 0x48) << 1;
    lVar19 = lVar18 + (long)**(int **)(lVar19 + 0x48) * 4;
  }
  iVar16 = *(int *)(lVar17 + 0x1c);
  if (0 < iVar16) {
    lVar21 = lVar18 + lVar21 * 4;
    iVar20 = 0;
    do {
      iVar25 = *(int *)param_1[1];
      local_3c = (float)(iVar25 + -1);
      fVar28 = (((float)iVar20 + 0.5) * (float)iVar25) / (float)iVar16;
      fVar27 = fVar28 + -0.5;
      fVar28 = fVar28 + 0.5;
      local_34 = (float)(int)fVar27;
      local_38 = 0.0;
      fVar23 = (float)(int)fVar28;
      pfVar12 = &local_34;
      if (iVar25 <= (int)local_34) {
        pfVar12 = &local_3c;
      }
      bVar14 = -1 < (int)local_34;
      pfVar13 = &local_38;
      if (bVar14) {
        pfVar13 = pfVar12;
      }
      iVar16 = *(int *)param_1[2];
      local_38 = 0.0;
      pfVar7 = &local_38;
      if (bVar14) {
        pfVar7 = pfVar12;
      }
      local_38 = 0.0;
      pfVar8 = &local_38;
      if (bVar14) {
        pfVar8 = pfVar12;
      }
      pfVar12 = &local_34;
      if (iVar25 <= (int)fVar23) {
        pfVar12 = &local_3c;
      }
      bVar14 = -1 < (int)fVar23;
      local_38 = 0.0;
      local_34 = fVar23;
      pfVar9 = &local_38;
      if (bVar14) {
        pfVar9 = pfVar12;
      }
      local_38 = 0.0;
      pfVar10 = &local_38;
      if (bVar14) {
        pfVar10 = pfVar12;
      }
      local_38 = 0.0;
      pfVar11 = &local_38;
      if (bVar14) {
        pfVar11 = pfVar12;
      }
      iVar25 = *(int *)(lVar17 + 0x18);
      if (0 < iVar25) {
        lVar1 = lVar18 + (long)(iVar16 * (int)*pfVar13) * 4;
        fVar27 = (float)(int)fVar28 - fVar27;
        fVar28 = fVar28 - (float)(int)fVar28;
        iVar22 = 1;
        lVar2 = lVar19 + (long)((int)*pfVar7 * iVar16) * 4;
        lVar3 = lVar21 + (long)((int)*pfVar8 * iVar16) * 4;
        lVar4 = lVar18 + (long)((int)*pfVar9 * iVar16) * 4;
        lVar5 = lVar19 + (long)((int)*pfVar10 * iVar16) * 4;
        lVar6 = lVar21 + (long)((int)*pfVar11 * iVar16) * 4;
        puVar15 = param_2;
        while( true ) {
          param_2 = puVar15 + 4;
          fVar23 = (((float)(iVar22 + -1) + 0.5) * (float)iVar16) / (float)iVar25;
          fVar29 = fVar23 + -0.5;
          fVar23 = fVar23 + 0.5;
          local_34 = (float)(int)fVar29;
          pfVar12 = &local_34;
          if (iVar16 <= (int)local_34) {
            pfVar12 = &local_3c;
          }
          local_38 = 0.0;
          pfVar13 = &local_38;
          if (-1 < (int)local_34) {
            pfVar13 = pfVar12;
          }
          local_34 = (float)(int)fVar23;
          local_3c = (float)(iVar16 + -1);
          fVar29 = (float)(int)fVar23 - fVar29;
          fVar23 = fVar23 - (float)(int)fVar23;
          lVar26 = (long)(int)*pfVar13;
          local_38 = 0.0;
          pfVar12 = &local_34;
          if (iVar16 <= (int)local_34) {
            pfVar12 = &local_3c;
          }
          pfVar13 = &local_38;
          if (-1 < (int)local_34) {
            pfVar13 = pfVar12;
          }
          lVar24 = (long)(int)*pfVar13;
          local_34 = fVar27 * (fVar29 * *(float *)(lVar1 + lVar26 * 4) +
                              fVar23 * *(float *)(lVar1 + lVar24 * 4)) +
                     fVar28 * (fVar29 * *(float *)(lVar4 + lVar26 * 4) +
                              fVar23 * *(float *)(lVar4 + lVar24 * 4));
          local_38 = fVar27 * (fVar29 * *(float *)(lVar2 + lVar26 * 4) +
                              fVar23 * *(float *)(lVar2 + lVar24 * 4)) +
                     fVar28 * (fVar29 * *(float *)(lVar5 + lVar26 * 4) +
                              fVar23 * *(float *)(lVar5 + lVar24 * 4));
          local_44 = 255.0;
          fStack_40 = 0.0;
          local_3c = fVar27 * (fVar29 * *(float *)(lVar3 + lVar26 * 4) +
                              fVar23 * *(float *)(lVar3 + lVar24 * 4)) +
                     fVar28 * (fVar29 * *(float *)(lVar6 + lVar26 * 4) +
                              fVar23 * *(float *)(lVar6 + lVar24 * 4));
          pfVar12 = &local_44;
          if (local_34 <= 255.0) {
            pfVar12 = &local_34;
          }
          pfVar13 = &fStack_40;
          if (0.0 <= local_34) {
            pfVar13 = pfVar12;
          }
          *puVar15 = (char)(int)*pfVar13;
          pfVar12 = &local_44;
          if (local_38 <= 255.0) {
            pfVar12 = &local_38;
          }
          local_44 = 255.0;
          fStack_40 = 0.0;
          pfVar13 = &fStack_40;
          if (0.0 <= local_38) {
            pfVar13 = pfVar12;
          }
          puVar15[1] = (char)(int)*pfVar13;
          pfVar12 = &local_44;
          if (local_3c <= 255.0) {
            pfVar12 = &local_3c;
          }
          local_44 = 255.0;
          fStack_40 = 0.0;
          pfVar13 = &fStack_40;
          if (0.0 <= local_3c) {
            pfVar13 = pfVar12;
          }
          fVar23 = *pfVar13;
          puVar15[3] = 0xff;
          puVar15[2] = (char)(int)fVar23;
          iVar25 = *(int *)(lVar17 + 0x18);
          if (iVar25 <= iVar22) break;
          iVar22 = iVar22 + 1;
          iVar16 = *(int *)param_1[2];
          puVar15 = param_2;
        }
      }
      iVar16 = *(int *)(lVar17 + 0x1c);
      iVar20 = iVar20 + 1;
    } while (iVar20 < iVar16);
  }
  return;
}


