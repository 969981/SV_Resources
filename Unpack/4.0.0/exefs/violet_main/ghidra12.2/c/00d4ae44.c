/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d4ae44; name: FUN_00d4ae44
 */


void FUN_00d4ae44(ulong *param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  char *pcVar18;
  float fVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  ulong uVar24;
  undefined8 uVar25;
  float fVar27;
  undefined8 uVar26;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  ulong uVar38;
  ulong uVar39;
  float fVar40;
  undefined8 local_4a0 [4];
  undefined8 local_480;
  undefined8 local_478;
  char local_470 [980];
  undefined8 local_9c;
  float local_94;
  
  lVar13 = 0;
  local_4a0[2] = *(undefined8 *)(param_2 + 0x10);
  local_4a0[3] = *(undefined8 *)(param_2 + 0x18);
  local_480 = *(undefined8 *)(param_2 + 0x20);
  local_478 = *(undefined8 *)(param_2 + 0x28);
  uVar39 = param_1[1];
  uVar38 = *param_1;
  uVar24 = param_1[3];
  uVar20 = param_1[2];
  fVar40 = 3.4028235e+38;
  fVar33 = -3.4028235e+38;
  do {
    puVar9 = (undefined8 *)(param_2 + (long)(int)(&DAT_03d68568)[lVar13 * 3] * 0x10);
    puVar3 = (undefined8 *)(param_2 + (long)(int)(&DAT_03d68560)[lVar13 * 3] * 0x10);
    local_4a0[0] = *puVar3;
    local_4a0[1] = puVar3[1];
    puVar3 = (undefined8 *)(param_2 + (long)(int)(&DAT_03d68564)[lVar13 * 3] * 0x10);
    local_4a0[2] = *puVar3;
    local_4a0[3] = puVar3[1];
    local_480 = *puVar9;
    local_478 = puVar9[1];
    iVar14 = 0;
    uVar16 = 1;
    local_470[0] = '\0';
    do {
      if (iVar14 == 0) {
        lVar17 = 0;
        uVar7 = uVar38;
      }
      else if (iVar14 == 1) {
        lVar17 = 0;
        uVar7 = uVar20;
      }
      else {
        lVar17 = 1;
        if (iVar14 == 2) {
          uVar7 = uVar38 >> 0x20;
        }
        else {
          uVar7 = uVar20 >> 0x20;
        }
      }
      if (0 < (int)uVar16) {
        uVar15 = 0;
        do {
          lVar6 = (long)(int)uVar15;
          puVar9 = local_4a0 + lVar6 * 8;
          pcVar18 = local_470 + lVar6 * 0x40;
          if (*pcVar18 == '\0') {
            if (iVar14 == 0) {
              uVar25 = local_4a0[lVar6 * 8 + 1];
              uVar21 = *puVar9;
              uVar22 = local_4a0[lVar6 * 8 + 3];
              uVar26 = local_4a0[lVar6 * 8 + 2];
              fVar36 = (float)uVar38;
              bVar10 = fVar36 < (float)uVar26;
              bVar4 = fVar36 < (float)uVar21;
              uVar12 = local_4a0[lVar6 * 8 + 5];
              uVar11 = local_4a0[lVar6 * 8 + 4];
              bVar5 = fVar36 < (float)uVar11;
            }
            else if (iVar14 == 1) {
              uVar25 = local_4a0[lVar6 * 8 + 1];
              uVar21 = *puVar9;
              uVar22 = local_4a0[lVar6 * 8 + 3];
              uVar26 = local_4a0[lVar6 * 8 + 2];
              fVar36 = (float)uVar20;
              bVar10 = (float)uVar26 < fVar36;
              bVar4 = (float)uVar21 < fVar36;
              uVar12 = local_4a0[lVar6 * 8 + 5];
              uVar11 = local_4a0[lVar6 * 8 + 4];
              bVar5 = (float)uVar11 < fVar36;
            }
            else if (iVar14 == 2) {
              uVar25 = local_4a0[lVar6 * 8 + 1];
              uVar21 = *puVar9;
              uVar22 = local_4a0[lVar6 * 8 + 3];
              uVar26 = local_4a0[lVar6 * 8 + 2];
              fVar36 = (float)(uVar38 >> 0x20);
              bVar10 = fVar36 < (float)((ulong)uVar26 >> 0x20);
              bVar4 = fVar36 < (float)((ulong)uVar21 >> 0x20);
              uVar12 = local_4a0[lVar6 * 8 + 5];
              uVar11 = local_4a0[lVar6 * 8 + 4];
              bVar5 = fVar36 < (float)((ulong)uVar11 >> 0x20);
            }
            else {
              uVar25 = local_4a0[lVar6 * 8 + 1];
              uVar21 = *puVar9;
              uVar22 = local_4a0[lVar6 * 8 + 3];
              uVar26 = local_4a0[lVar6 * 8 + 2];
              fVar36 = (float)(uVar20 >> 0x20);
              bVar10 = (float)((ulong)uVar26 >> 0x20) < fVar36;
              bVar4 = (float)((ulong)uVar21 >> 0x20) < fVar36;
              uVar12 = local_4a0[lVar6 * 8 + 5];
              uVar11 = local_4a0[lVar6 * 8 + 4];
              bVar5 = (float)((ulong)uVar11 >> 0x20) < fVar36;
            }
            bVar8 = -bVar4 & 1;
            cVar2 = bVar10 + bVar8 + bVar5;
            if (bVar8 == 0 && bVar10) {
              uVar26 = local_4a0[lVar6 * 8 + 3];
              bVar10 = false;
              *puVar9 = local_4a0[lVar6 * 8 + 2];
              local_4a0[lVar6 * 8 + 1] = uVar26;
              bVar8 = 1;
              local_4a0[lVar6 * 8 + 3] = uVar25;
              local_4a0[lVar6 * 8 + 2] = uVar21;
              uVar26 = uVar21;
              uVar22 = uVar25;
            }
            if (bVar5 && bVar10 == false) {
              uVar11 = local_4a0[lVar6 * 8 + 4];
              uVar12 = local_4a0[lVar6 * 8 + 5];
              local_4a0[lVar6 * 8 + 5] = uVar22;
              local_4a0[lVar6 * 8 + 4] = uVar26;
              local_4a0[lVar6 * 8 + 2] = uVar11;
              local_4a0[lVar6 * 8 + 3] = uVar12;
              uVar11 = uVar26;
              uVar12 = uVar22;
joined_r0x00d4b074:
              if (bVar8 == 0) {
                uVar21 = local_4a0[lVar6 * 8 + 1];
                uVar22 = *puVar9;
                uVar26 = local_4a0[lVar6 * 8 + 3];
                *puVar9 = local_4a0[lVar6 * 8 + 2];
                local_4a0[lVar6 * 8 + 1] = uVar26;
                local_4a0[lVar6 * 8 + 3] = uVar21;
                local_4a0[lVar6 * 8 + 2] = uVar22;
              }
            }
            else if (bVar10 != false) goto joined_r0x00d4b074;
            fVar36 = (float)uVar7;
            if (cVar2 == '\x02') {
              uVar15 = lVar6 + 1;
              memcpy(local_4a0 + (long)(int)uVar16 * 8,local_4a0 + uVar15 * 8,0x31);
              *pcVar18 = '\0';
              local_470[uVar15 * 0x40] = '\0';
              uVar12 = local_4a0[lVar6 * 8 + 4];
              uVar11 = local_4a0[lVar6 * 8 + 1];
              local_9c = uVar12;
              fVar29 = (float)local_4a0[lVar6 * 8 + 5];
              local_94 = fVar29;
              uVar26 = local_4a0[lVar6 * 8 + 1];
              uVar22 = local_4a0[lVar6 * 8 + 3];
              fVar27 = (float)uVar12;
              fVar19 = (float)*puVar9 - fVar27;
              fVar28 = (float)((ulong)uVar12 >> 0x20);
              fVar23 = (float)((ulong)*puVar9 >> 0x20) - fVar28;
              fVar32 = (float)uVar26 - fVar29;
              fVar30 = (float)((ulong)local_4a0[lVar6 * 8 + 5] >> 0x20);
              local_9c = CONCAT44(fVar23,fVar19);
              local_94 = fVar32;
              fVar31 = (float)local_4a0[lVar6 * 8 + 2] - fVar27;
              fVar34 = (float)((ulong)local_4a0[lVar6 * 8 + 2] >> 0x20) - fVar28;
              fVar35 = (float)uVar22 - fVar29;
              local_9c = uVar12;
              local_94 = fVar29;
              fVar37 = (fVar36 - *(float *)(local_470 + lVar17 * 4 + 0x3d4)) /
                       *(float *)(local_470 + lVar17 * 4 + 0x3d4);
              uVar16 = uVar16 + 1;
              local_4a0[uVar15 * 8] = *puVar9;
              local_4a0[uVar15 * 8 + 1] = uVar11;
              uVar12 = local_4a0[lVar6 * 8 + 3];
              uVar11 = local_4a0[lVar6 * 8 + 2];
              local_4a0[uVar15 * 8 + 5] =
                   CONCAT44(fVar30 + ((float)((ulong)uVar26 >> 0x20) - fVar30) * fVar37,
                            fVar29 + fVar32 * fVar37);
              local_4a0[uVar15 * 8 + 4] =
                   CONCAT44(fVar28 + fVar23 * fVar37,fVar27 + fVar19 * fVar37);
              fVar19 = *(float *)(local_470 + lVar17 * 4 + 0x3d4);
              local_9c = CONCAT44(fVar34,fVar31);
              local_94 = fVar35;
              local_4a0[uVar15 * 8 + 2] = uVar11;
              local_4a0[uVar15 * 8 + 3] = uVar12;
              fVar23 = *(float *)(local_470 + lVar17 * 4 + 0x3d4);
              uVar11 = local_4a0[lVar6 * 8 + 3];
              *puVar9 = local_4a0[lVar6 * 8 + 2];
              local_4a0[lVar6 * 8 + 1] = uVar11;
              uVar11 = local_4a0[uVar15 * 8 + 5];
              fVar23 = (fVar36 - fVar19) / fVar23;
              local_4a0[lVar6 * 8 + 2] = local_4a0[uVar15 * 8 + 4];
              local_4a0[lVar6 * 8 + 3] = uVar11;
              local_4a0[lVar6 * 8 + 5] =
                   CONCAT44(fVar30 + ((float)((ulong)uVar22 >> 0x20) - fVar30) * fVar23,
                            fVar29 + fVar35 * fVar23);
              local_4a0[lVar6 * 8 + 4] = CONCAT44(fVar28 + fVar34 * fVar23,fVar27 + fVar31 * fVar23)
              ;
            }
            else if (cVar2 == '\x01') {
              *pcVar18 = '\0';
              local_9c = *puVar9;
              uVar26 = local_4a0[lVar6 * 8 + 3];
              fVar19 = (float)local_9c;
              fVar31 = (float)local_4a0[lVar6 * 8 + 2] - fVar19;
              fVar23 = (float)((ulong)local_9c >> 0x20);
              fVar34 = (float)((ulong)local_4a0[lVar6 * 8 + 2] >> 0x20) - fVar23;
              fVar32 = (float)local_4a0[lVar6 * 8 + 1];
              fVar35 = (float)uVar26 - fVar32;
              fVar27 = (float)((ulong)local_4a0[lVar6 * 8 + 1] >> 0x20);
              fVar28 = (float)uVar11 - fVar19;
              fVar29 = (float)((ulong)uVar11 >> 0x20) - fVar23;
              fVar30 = (float)uVar12 - fVar32;
              local_94 = fVar32;
              local_9c = CONCAT44(fVar34,fVar31);
              local_94 = fVar35;
              local_9c = CONCAT44(fVar29,fVar28);
              local_94 = fVar30;
              fVar37 = (fVar36 - *(float *)(local_470 + lVar17 * 4 + 0x3d4)) /
                       *(float *)(local_470 + lVar17 * 4 + 0x3d4);
              fVar36 = (fVar36 - *(float *)(local_470 + lVar17 * 4 + 0x3d4)) /
                       *(float *)(local_470 + lVar17 * 4 + 0x3d4);
              local_4a0[lVar6 * 8 + 3] =
                   CONCAT44(fVar27 + ((float)((ulong)uVar12 >> 0x20) - fVar27) * fVar36,
                            fVar32 + fVar30 * fVar36);
              local_4a0[lVar6 * 8 + 2] = CONCAT44(fVar23 + fVar29 * fVar36,fVar19 + fVar28 * fVar36)
              ;
              local_4a0[lVar6 * 8 + 5] =
                   CONCAT44(fVar27 + ((float)((ulong)uVar26 >> 0x20) - fVar27) * fVar37,
                            fVar32 + fVar35 * fVar37);
              local_4a0[lVar6 * 8 + 4] = CONCAT44(fVar23 + fVar34 * fVar37,fVar19 + fVar31 * fVar37)
              ;
            }
            else if (cVar2 == '\0') {
              *pcVar18 = '\x01';
            }
            else {
              *pcVar18 = '\0';
            }
          }
          uVar1 = (int)uVar15 + 1;
          uVar15 = (ulong)uVar1;
        } while ((int)uVar1 < (int)uVar16);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 != 4);
    if (0 < (int)uVar16) {
      uVar7 = (ulong)uVar16;
      puVar9 = local_4a0 + 4;
      do {
        if (*(char *)(puVar9 + 2) == '\0') {
          fVar19 = *(float *)(puVar9 + -3);
          fVar36 = fVar19;
          if (fVar40 <= fVar19) {
            fVar36 = fVar40;
          }
          if (fVar19 <= fVar33) {
            fVar19 = fVar33;
          }
          fVar32 = *(float *)(puVar9 + -1);
          fVar23 = fVar32;
          if (fVar36 <= fVar32) {
            fVar23 = fVar36;
          }
          if (fVar32 <= fVar19) {
            fVar32 = fVar19;
          }
          fVar33 = *(float *)(puVar9 + 1);
          fVar40 = fVar33;
          if (fVar23 <= fVar33) {
            fVar40 = fVar23;
          }
          if (fVar33 <= fVar32) {
            fVar33 = fVar32;
          }
        }
        uVar7 = uVar7 - 1;
        puVar9 = puVar9 + 8;
      } while (uVar7 != 0);
    }
    lVar13 = lVar13 + 1;
    if (lVar13 == 0xc) {
      fVar36 = (float)uVar39;
      if (fVar36 <= fVar40) {
        fVar36 = fVar40;
      }
      param_1[1] = CONCAT44((int)(uVar39 >> 0x20),fVar36);
      *param_1 = uVar38;
      param_1[3] = CONCAT44((int)(uVar24 >> 0x20),fVar33);
      param_1[2] = uVar20;
      return;
    }
  } while( true );
}


