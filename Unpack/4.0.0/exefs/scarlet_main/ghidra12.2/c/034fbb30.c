/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034fbb30; name: FUN_034fbb30
 */


void FUN_034fbb30(long *param_1,long *param_2,float *param_3,long *param_4)

{
  float *pfVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  float *pfVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  char cVar15;
  ushort uVar16;
  long lVar17;
  float *pfVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  bVar6 = *(byte *)(param_1 + 1);
  uVar7 = *(ushort *)((long)param_1 + 0x12);
  uVar21 = (ulong)uVar7;
  if (*(char *)((long)param_3 + 0xb) != '\0') {
    *(undefined1 *)((long)param_3 + 0xb) = 0;
    puVar9 = PTR_DAT_047e7208;
    if (*(char *)(param_3 + 3) == '\0') {
      if ((0.1 < *param_3) || (0.1 < param_3[1])) {
        cVar15 = '\0';
        *(undefined1 *)((long)param_3 + 10) = 0;
      }
      else {
        cVar15 = '\x01';
      }
      if (*(char *)((long)param_3 + 0xd) != cVar15) {
        *(undefined1 *)((long)param_3 + 0xe) = 0;
      }
      *(char *)((long)param_3 + 0xd) = cVar15;
      uVar3 = *(undefined2 *)puVar9;
      if (cVar15 == '\0') {
        uVar3 = 0;
      }
      *(undefined2 *)(param_3 + 2) = uVar3;
    }
    else {
      fVar24 = param_3[1];
      *(undefined1 *)(param_3 + 3) = 0;
      *param_3 = fVar24;
      *(undefined2 *)(param_3 + 2) = *(undefined2 *)puVar9;
      if (0.1 < fVar24) {
        *(undefined1 *)((long)param_3 + 10) = 0;
      }
      if ((bool)*(char *)((long)param_3 + 0xd) != fVar24 <= 0.1) {
        *(undefined1 *)((long)param_3 + 0xe) = 0;
      }
      *(bool *)((long)param_3 + 0xd) = fVar24 <= 0.1;
      if (0.1 < fVar24) {
        uVar13 = (uint)(fVar24 * -1042939.94 + 1.1696472e+09);
        fVar25 = (float)(uVar13 & 0x7fffff | 0x3f800000);
        fVar25 = (float)(uVar13 & 0xff800000) * 16.797443 *
                 (fVar25 * (fVar25 * 0.32518977 + 0.020805772) + 0.65304345);
        if (fVar24 < 30.0) {
          fVar25 = fVar24 * -433.33334 + 20000.0;
        }
        fVar26 = (float)NEON_ucvtf(*(undefined4 *)PTR_DAT_047e6fa0);
        fVar24 = (float)NEON_fminnm(fVar26 * 0.45,fVar25);
        fVar24 = tanf((fVar24 * 3.1415927) / fVar26);
        fVar24 = 1.0 / fVar24;
        fVar26 = fVar24 * fVar24;
        fVar25 = 1.0 / (fVar24 * 1.4142135 + 1.0 + fVar26);
        FUN_034fd1e0(fVar25,fVar25 + fVar25,fVar25,fVar25 * (2.0 - fVar26 * 2.0),
                     fVar25 * ((1.0 - fVar24 * 1.4142135) + fVar26),param_4 + 2);
      }
    }
  }
  puVar10 = PTR_DAT_047e7318;
  puVar9 = PTR_DAT_047e7208;
  uVar13 = (uint)uVar7;
  if (*(char *)((long)param_3 + 0xd) == '\0') {
    uVar16 = *(ushort *)(param_3 + 2);
    uVar12 = *(ushort *)PTR_DAT_047e7208;
    if (uVar16 < uVar12) {
      if (uVar7 != 0) {
        fVar25 = *param_3;
        fVar24 = param_3[1];
        uVar22 = 0;
        do {
          uVar2 = *(uint *)puVar10;
          if (uVar13 - uVar22 <= *(uint *)puVar10) {
            uVar2 = uVar13 - uVar22;
          }
          if (uVar16 < uVar12) {
            fVar27 = ((fVar24 - fVar25) * (float)(ushort)(uVar16 + 1)) / (float)uVar12 + fVar25;
            uVar14 = (uint)(fVar27 * -1042939.94 + 1.1696472e+09);
            *(ushort *)(param_3 + 2) = uVar16 + 1;
            fVar26 = (float)(uVar14 & 0x7fffff | 0x3f800000);
            fVar26 = (float)(uVar14 & 0xff800000) * 16.797443 *
                     (fVar26 * (fVar26 * 0.32518977 + 0.020805772) + 0.65304345);
            if (fVar27 < 30.0) {
              fVar26 = fVar27 * -433.33334 + 20000.0;
            }
            fVar27 = (float)NEON_ucvtf(*(undefined4 *)PTR_DAT_047e6fa0);
            fVar26 = (float)NEON_fminnm(fVar27 * 0.45,fVar26);
            fVar26 = tanf((fVar26 * 3.1415927) / fVar27);
            fVar26 = 1.0 / fVar26;
            fVar28 = fVar26 * fVar26;
            fVar27 = 1.0 / (fVar26 * 1.4142135 + 1.0 + fVar28);
            FUN_034fd1e0(fVar27,fVar27 + fVar27,fVar27,fVar27 * (2.0 - fVar28 * 2.0),
                         fVar27 * ((1.0 - fVar26 * 1.4142135) + fVar28),param_4 + 2);
          }
          FUN_034fd3c0(param_4,*param_1 + (ulong)uVar22 * 4,uVar2,(short)param_1[2],
                       *param_2 + (ulong)uVar22 * 4);
          uVar16 = *(ushort *)(param_3 + 2);
          uVar22 = uVar2 + uVar22;
          uVar12 = *(ushort *)puVar9;
        } while (uVar22 < uVar13);
      }
      if ((uVar12 <= uVar16) && (*param_3 = param_3[1], param_3[1] <= 0.1)) {
        *(undefined1 *)((long)param_3 + 10) = 4;
      }
    }
    else {
      FUN_034fd3c0(param_4,*param_1,uVar7,(short)param_1[2],*param_2);
      uVar13 = (int)*(char *)((long)param_3 + 10) - 1;
      if ((0 < *(char *)((long)param_3 + 10)) &&
         (*(char *)((long)param_3 + 10) = (char)uVar13, (uVar13 & 0xff) == 0)) {
        if (*(char *)((long)param_3 + 0xd) != '\x01') {
          *(undefined1 *)((long)param_3 + 0xe) = 0;
        }
        *(undefined1 *)((long)param_3 + 0xd) = 1;
      }
    }
  }
  else if (1 < uVar7) {
    uVar22 = (uint)bVar6;
    if (*(char *)((long)param_3 + 0xe) == '\0') {
      *(undefined1 *)((long)param_3 + 0xe) = 1;
      if (uVar22 == 0) {
        return;
      }
      uVar23 = 0;
      do {
        uVar2 = *(uint *)((long)param_4 + 0xc);
        lVar17 = *param_1;
        uVar16 = *(ushort *)(param_1 + 2);
        lVar19 = *param_2;
        uVar12 = *(ushort *)(param_2 + 2);
        iVar8 = (int)(uVar23 >> 2);
        uVar14 = (uint)uVar23;
        if (uVar2 - 1 == uVar14 && (uVar2 & 1) != 0) {
          pfVar18 = (float *)(*param_4 +
                             (ulong)((iVar8 + (uint)(1 < (uVar14 & 3) && uVar2 != 1)) * 0x10) * 4);
          pfVar11 = pfVar18 + 2;
        }
        else {
          pfVar18 = (float *)(*param_4 + (ulong)(uint)(iVar8 << 4) * 4 + (ulong)(uVar14 & 3) * 4);
          pfVar11 = pfVar18 + 8;
        }
        fVar25 = *pfVar11 - *pfVar18;
        fVar24 = fVar25 * (1.0 / (float)uVar7);
        if (uVar21 - 1 < 3) {
          uVar20 = 0;
        }
        else {
          uVar20 = 0;
          pfVar18 = (float *)(lVar19 + uVar12 * uVar23 * 4 + 8);
          pfVar11 = (float *)(lVar17 + uVar16 * uVar23 * 4 + 8);
          do {
            pfVar18[-2] = pfVar11[-2] - fVar25;
            fVar26 = fVar25 + fVar24 + fVar24;
            pfVar18[-1] = pfVar11[-1] - (fVar25 + fVar24);
            fVar27 = fVar26 + fVar24;
            *pfVar18 = *pfVar11 - fVar26;
            pfVar1 = pfVar11 + 1;
            pfVar11 = pfVar11 + 4;
            fVar25 = fVar27 + fVar24;
            uVar20 = uVar20 + 4;
            pfVar18[1] = *pfVar1 - fVar27;
            pfVar18 = pfVar18 + 4;
          } while ((uVar21 & 0xfffc) != uVar20);
        }
        if ((uVar7 & 3) != 0) {
          pfVar18 = (float *)(lVar17 + uVar16 * uVar23 * 4 + uVar20 * 4);
          pfVar11 = (float *)(lVar19 + uVar12 * uVar23 * 4 + uVar20 * 4);
          uVar23 = uVar21 & 3;
          do {
            fVar26 = *pfVar18 - fVar25;
            fVar25 = fVar25 + fVar24;
            uVar23 = uVar23 - 1;
            *pfVar11 = fVar26;
            pfVar18 = pfVar18 + 1;
            pfVar11 = pfVar11 + 1;
          } while (uVar23 != 0);
        }
        uVar23 = (ulong)(uVar14 + 1 & 0xffff);
      } while ((uVar14 + 1 & 0xffff) < uVar22);
    }
    else {
      if (uVar22 == 0) {
        return;
      }
      uVar23 = 0;
      do {
        lVar17 = (uVar23 & 0xffff) * 4;
        memcpy((void *)(*param_2 + lVar17 * (ulong)*(ushort *)(param_2 + 2)),
               (void *)(*param_1 + lVar17 * (ulong)*(ushort *)(param_1 + 2)),uVar21 << 2);
        uVar2 = (int)uVar23 + 1;
        uVar23 = (ulong)uVar2;
      } while ((uVar2 & 0xffff) < uVar22);
    }
    uVar21 = 0;
    do {
      uVar2 = *(uint *)((long)param_4 + 0xc);
      uVar14 = (uint)uVar21;
      lVar17 = *param_1 + uVar21 * *(ushort *)(param_1 + 2) * 4;
      uVar21 = (ulong)(uVar14 & 3);
      uVar4 = *(undefined4 *)(lVar17 + (ulong)(uVar13 - 1) * 4);
      uVar5 = *(undefined4 *)(lVar17 + (ulong)(uVar13 - 2) * 4);
      if (uVar2 - 1 == uVar14 && (uVar2 & 1) != 0) {
        uVar21 = (ulong)(((uVar14 >> 2) + (uint)(1 < (uVar14 & 3) && uVar2 != 1)) * 0x10);
        *(undefined4 *)(*param_4 + uVar21 * 4) = uVar4;
        *(undefined4 *)(*param_4 + uVar21 * 4 + 4) = uVar5;
        *(undefined4 *)(*param_4 + uVar21 * 4 + 8) = uVar4;
        lVar17 = *param_4 + 0xc;
      }
      else {
        uVar2 = (uVar14 >> 2) << 4;
        *(undefined4 *)(*param_4 + (ulong)uVar2 * 4 + uVar21 * 4) = uVar4;
        *(undefined4 *)(*param_4 + (ulong)uVar2 * 4 + uVar21 * 4 + 0x10) = uVar5;
        *(undefined4 *)(*param_4 + (ulong)uVar2 * 4 + uVar21 * 4 + 0x20) = uVar4;
        lVar17 = *param_4 + (ulong)uVar2 * 4 + 0x30;
      }
      *(undefined4 *)(lVar17 + uVar21 * 4) = uVar5;
      uVar21 = (ulong)(uVar14 + 1 & 0xffff);
    } while ((uVar14 + 1 & 0xffff) < uVar22);
  }
  return;
}


