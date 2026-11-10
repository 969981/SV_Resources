/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034fad30; name: FUN_034fad30
 */


void FUN_034fad30(long *param_1,float *param_2,long *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  char cVar13;
  ushort uVar14;
  long lVar15;
  float *pfVar16;
  ulong uVar17;
  float *pfVar18;
  ulong uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  bVar5 = *(byte *)(param_1 + 1);
  uVar14 = *(ushort *)((long)param_1 + 0x12);
  uVar19 = (ulong)uVar14;
  if (*(char *)((long)param_2 + 0xb) != '\0') {
    *(undefined1 *)((long)param_2 + 0xb) = 0;
    puVar7 = PTR_DAT_047e7208;
    if (*(char *)(param_2 + 3) == '\0') {
      if ((0.1 < *param_2) || (0.1 < param_2[1])) {
        cVar13 = '\0';
        *(undefined1 *)((long)param_2 + 10) = 0;
      }
      else {
        cVar13 = '\x01';
      }
      if (*(char *)((long)param_2 + 0xd) != cVar13) {
        *(undefined1 *)((long)param_2 + 0xe) = 0;
      }
      *(char *)((long)param_2 + 0xd) = cVar13;
      uVar1 = *(undefined2 *)puVar7;
      if (cVar13 == '\0') {
        uVar1 = 0;
      }
      *(undefined2 *)(param_2 + 2) = uVar1;
    }
    else {
      fVar21 = param_2[1];
      *(undefined1 *)(param_2 + 3) = 0;
      *param_2 = fVar21;
      *(undefined2 *)(param_2 + 2) = *(undefined2 *)puVar7;
      if (0.1 < fVar21) {
        *(undefined1 *)((long)param_2 + 10) = 0;
      }
      if ((bool)*(char *)((long)param_2 + 0xd) != fVar21 <= 0.1) {
        *(undefined1 *)((long)param_2 + 0xe) = 0;
      }
      *(bool *)((long)param_2 + 0xd) = fVar21 <= 0.1;
      if (0.1 < fVar21) {
        uVar10 = (uint)(fVar21 * -1042939.94 + 1.1696472e+09);
        fVar22 = (float)(uVar10 & 0x7fffff | 0x3f800000);
        fVar22 = (float)(uVar10 & 0xff800000) * 16.797443 *
                 (fVar22 * (fVar22 * 0.32518977 + 0.020805772) + 0.65304345);
        if (fVar21 < 30.0) {
          fVar22 = fVar21 * -433.33334 + 20000.0;
        }
        fVar23 = (float)NEON_ucvtf(*(undefined4 *)PTR_DAT_047e6fa0);
        fVar21 = (float)NEON_fminnm(fVar23 * 0.45,fVar22);
        fVar21 = tanf((fVar21 * 3.1415927) / fVar23);
        fVar21 = 1.0 / fVar21;
        fVar23 = fVar21 * fVar21;
        fVar22 = 1.0 / (fVar21 * 1.4142135 + 1.0 + fVar23);
        FUN_034fd1e0(fVar22,fVar22 + fVar22,fVar22,fVar22 * (2.0 - fVar23 * 2.0),
                     fVar22 * ((1.0 - fVar21 * 1.4142135) + fVar23),param_3 + 2);
      }
    }
  }
  puVar8 = PTR_DAT_047e7318;
  puVar7 = PTR_DAT_047e7208;
  uVar10 = (uint)uVar14;
  if (*(char *)((long)param_2 + 0xd) == '\0') {
    uVar14 = *(ushort *)(param_2 + 2);
    uVar9 = *(ushort *)PTR_DAT_047e7208;
    if (uVar14 < uVar9) {
      if (uVar10 != 0) {
        fVar22 = *param_2;
        fVar21 = param_2[1];
        uVar20 = 0;
        do {
          uVar2 = *(uint *)puVar8;
          if (uVar10 - uVar20 <= *(uint *)puVar8) {
            uVar2 = uVar10 - uVar20;
          }
          if (uVar14 < uVar9) {
            fVar24 = ((fVar21 - fVar22) * (float)(ushort)(uVar14 + 1)) / (float)uVar9 + fVar22;
            uVar11 = (uint)(fVar24 * -1042939.94 + 1.1696472e+09);
            *(ushort *)(param_2 + 2) = uVar14 + 1;
            fVar23 = (float)(uVar11 & 0x7fffff | 0x3f800000);
            fVar23 = (float)(uVar11 & 0xff800000) * 16.797443 *
                     (fVar23 * (fVar23 * 0.32518977 + 0.020805772) + 0.65304345);
            if (fVar24 < 30.0) {
              fVar23 = fVar24 * -433.33334 + 20000.0;
            }
            fVar24 = (float)NEON_ucvtf(*(undefined4 *)PTR_DAT_047e6fa0);
            fVar23 = (float)NEON_fminnm(fVar24 * 0.45,fVar23);
            fVar23 = tanf((fVar23 * 3.1415927) / fVar24);
            fVar23 = 1.0 / fVar23;
            fVar25 = fVar23 * fVar23;
            fVar24 = 1.0 / (fVar23 * 1.4142135 + 1.0 + fVar25);
            FUN_034fd1e0(fVar24,fVar24 + fVar24,fVar24,fVar24 * (2.0 - fVar25 * 2.0),
                         fVar24 * ((1.0 - fVar23 * 1.4142135) + fVar25),param_3 + 2);
          }
          FUN_033d3b30(param_3,*param_1 + (ulong)uVar20 * 4,uVar2,(short)param_1[2]);
          uVar14 = *(ushort *)(param_2 + 2);
          uVar20 = uVar2 + uVar20;
          uVar9 = *(ushort *)puVar7;
        } while (uVar20 < uVar10);
      }
      if ((uVar9 <= uVar14) && (*param_2 = param_2[1], param_2[1] <= 0.1)) {
        *(undefined1 *)((long)param_2 + 10) = 4;
      }
    }
    else {
      FUN_033d3b30(param_3,*param_1,uVar19,(short)param_1[2]);
      uVar10 = (int)*(char *)((long)param_2 + 10) - 1;
      if ((0 < *(char *)((long)param_2 + 10)) &&
         (*(char *)((long)param_2 + 10) = (char)uVar10, (uVar10 & 0xff) == 0)) {
        if (*(char *)((long)param_2 + 0xd) != '\x01') {
          *(undefined1 *)((long)param_2 + 0xe) = 0;
        }
        *(undefined1 *)((long)param_2 + 0xd) = 1;
      }
    }
  }
  else if (1 < uVar14) {
    uVar20 = (uint)bVar5;
    if (*(char *)((long)param_2 + 0xe) == '\0') {
      *(undefined1 *)((long)param_2 + 0xe) = 1;
      if (bVar5 == 0) {
        return;
      }
      uVar12 = 0;
      do {
        uVar2 = *(uint *)((long)param_3 + 0xc);
        lVar15 = *param_1;
        uVar9 = *(ushort *)(param_1 + 2);
        iVar6 = (int)(uVar12 >> 2);
        uVar11 = (uint)uVar12;
        if (uVar2 - 1 == uVar11 && (uVar2 & 1) != 0) {
          pfVar16 = (float *)(*param_3 +
                             (ulong)((iVar6 + (uint)(1 < (uVar11 & 3) && uVar2 != 1)) * 0x10) * 4);
          pfVar18 = pfVar16 + 2;
        }
        else {
          pfVar16 = (float *)(*param_3 + (ulong)(uint)(iVar6 << 4) * 4 + (ulong)(uVar11 & 3) * 4);
          pfVar18 = pfVar16 + 8;
        }
        fVar22 = *pfVar18 - *pfVar16;
        fVar21 = fVar22 * (1.0 / (float)uVar14);
        if (uVar19 - 1 < 3) {
          uVar17 = 0;
        }
        else {
          uVar17 = 0;
          pfVar16 = (float *)(lVar15 + uVar9 * uVar12 * 4 + 8);
          do {
            fVar23 = (fVar22 - fVar21) - fVar21;
            fVar24 = fVar23 - fVar21;
            pfVar16[-2] = pfVar16[-2] + (fVar22 - fVar21);
            pfVar16[-1] = pfVar16[-1] + fVar23;
            uVar17 = uVar17 + 4;
            fVar22 = fVar24 - fVar21;
            *pfVar16 = *pfVar16 + fVar24;
            pfVar16[1] = pfVar16[1] + fVar22;
            pfVar16 = pfVar16 + 4;
          } while ((uVar19 & 0xfffc) != uVar17);
        }
        if ((uVar14 & 3) != 0) {
          pfVar16 = (float *)(lVar15 + uVar9 * uVar12 * 4 + uVar17 * 4);
          uVar12 = uVar19 & 3;
          do {
            fVar22 = fVar22 - fVar21;
            *pfVar16 = *pfVar16 + fVar22;
            uVar12 = uVar12 - 1;
            pfVar16 = pfVar16 + 1;
          } while (uVar12 != 0);
        }
        uVar12 = (ulong)(uVar11 + 1 & 0xffff);
        uVar2 = uVar11 + 1 & 0xffff;
      } while (uVar2 <= bVar5 && uVar20 != uVar2);
    }
    if (uVar20 != 0) {
      uVar19 = 0;
      do {
        uVar2 = *(uint *)((long)param_3 + 0xc);
        uVar11 = (uint)uVar19;
        lVar15 = *param_1 + uVar19 * *(ushort *)(param_1 + 2) * 4;
        uVar19 = (ulong)(uVar11 & 3);
        uVar3 = *(undefined4 *)(lVar15 + (ulong)(uVar10 - 1) * 4);
        uVar4 = *(undefined4 *)(lVar15 + (ulong)(uVar10 - 2) * 4);
        if (uVar2 - 1 == uVar11 && (uVar2 & 1) != 0) {
          uVar19 = (ulong)(((uVar11 >> 2) + (uint)(1 < (uVar11 & 3) && uVar2 != 1)) * 0x10);
          *(undefined4 *)(*param_3 + uVar19 * 4) = uVar3;
          *(undefined4 *)(*param_3 + uVar19 * 4 + 4) = uVar4;
          *(undefined4 *)(*param_3 + uVar19 * 4 + 8) = uVar3;
          lVar15 = *param_3 + 0xc;
        }
        else {
          uVar2 = (uVar11 >> 2) << 4;
          *(undefined4 *)(*param_3 + (ulong)uVar2 * 4 + uVar19 * 4) = uVar3;
          *(undefined4 *)(*param_3 + (ulong)uVar2 * 4 + uVar19 * 4 + 0x10) = uVar4;
          *(undefined4 *)(*param_3 + (ulong)uVar2 * 4 + uVar19 * 4 + 0x20) = uVar3;
          lVar15 = *param_3 + (ulong)uVar2 * 4 + 0x30;
        }
        *(undefined4 *)(lVar15 + uVar19 * 4) = uVar4;
        uVar19 = (ulong)(uVar11 + 1 & 0xffff);
      } while ((uVar11 + 1 & 0xffff) < uVar20);
    }
  }
  return;
}


