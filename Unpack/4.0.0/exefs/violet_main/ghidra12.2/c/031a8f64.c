/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031a8f64; name: FUN_031a8f64
 */


void FUN_031a8f64(void)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  float fVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong *puVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ushort *puVar26;
  ulong uVar27;
  ulong uVar28;
  undefined2 uVar29;
  undefined2 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  ulong local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_68;
  
  bVar2 = DAT_0487e9e0 != 0;
  DAT_0487e9e0 = 0;
  plVar11 = DAT_0487e9d0;
  if ((((bVar2) && (DAT_0487e9e0 = 0, DAT_0487e9e8 != 0)) && (*(int *)(DAT_0487e9e8 + 4) != -2)) &&
     ((-1 < DAT_0487e9f0 &&
      (*(undefined4 *)(DAT_0487e9e8 + 4) = 0xffffffff, plVar11 = DAT_0487e9d0, 0 < DAT_0487e9f0))))
  {
    lVar20 = 0;
    lVar21 = 0xc;
    do {
      *(undefined4 *)(DAT_0487e9e8 + lVar21) = 0xffffffff;
      lVar20 = lVar20 + 1;
      lVar21 = lVar21 + 8;
      plVar11 = DAT_0487e9d0;
    } while (lVar20 < DAT_0487e9f0);
  }
  for (; plVar11 != (long *)0x0; plVar11 = (long *)plVar11[1]) {
    auVar34 = (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar20 = auVar34._0_8_;
    iVar7 = (int)((ulong)(auVar34._8_8_ - lVar20) >> 2) * -0x55555555;
    if (iVar7 != 0) {
      iVar19 = 0;
      do {
        puVar18 = (ulong *)(lVar20 + (long)iVar19 * 0xc);
        uVar27 = *puVar18;
        uVar8 = (uint)*puVar18;
        uVar24 = (ulong)uVar8;
        uVar3 = *(uint *)((long)puVar18 + 4);
        uVar23 = (ulong)uVar3;
        cVar4 = *(char *)((long)&DAT_0487f14d + uVar24 * 0x38 + 7);
        if (cVar4 == '\0') {
          fVar33 = (float)NEON_ucvtf((uint)(ushort)(&DAT_0487f130)[uVar24 * 0x1c]);
        }
        else {
          lVar21 = uVar24 * 0x38;
          fVar33 = (float)NEON_ucvtf((uint)(ushort)(&DAT_0487f130)[uVar24 * 0x1c]);
          fVar33 = fVar33 / (float)((uint)(byte)(&DAT_0487f133)[lVar21] *
                                    (uint)(byte)(&DAT_0487f132)[lVar21] *
                                   (uint)(byte)(&DAT_0487f134)[lVar21]);
        }
        cVar5 = *(char *)((long)&DAT_0487f14d + uVar23 * 0x38 + 7);
        if (cVar5 == '\0') {
          fVar10 = (float)NEON_ucvtf((uint)(ushort)(&DAT_0487f130)[uVar23 * 0x1c]);
        }
        else {
          lVar21 = uVar23 * 0x38;
          fVar10 = (float)NEON_ucvtf((uint)(ushort)(&DAT_0487f130)[uVar23 * 0x1c]);
          fVar10 = fVar10 / (float)((uint)(byte)(&DAT_0487f133)[lVar21] *
                                    (uint)(byte)(&DAT_0487f132)[lVar21] *
                                   (uint)(byte)(&DAT_0487f134)[lVar21]);
        }
        fVar31 = fVar33 + fVar10;
        uVar14 = *(uint *)(lVar20 + (long)iVar19 * 0xc + 8);
        fVar32 = fVar31 + fVar31;
        if ((uVar14 & 1) != 0) {
          fVar32 = fVar31;
        }
        if ((cVar5 == '\0' && cVar4 == '\0') &&
           ((uVar12 = (int)fVar33 - ((uint)(int)fVar33 >> 1 & 0x55555555),
            uVar12 = (uVar12 & 0x33333333) + (uVar12 >> 2 & 0x33333333),
            (uVar12 + (uVar12 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 != 1 ||
            (uVar12 = (int)fVar10 - ((uint)(int)fVar10 >> 1 & 0x55555555),
            uVar12 = (uVar12 & 0x33333333) + (uVar12 >> 2 & 0x33333333),
            (uVar12 + (uVar12 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 != 1)))) {
          fVar32 = fVar32 + fVar32;
        }
        local_88 = uVar27;
        lVar21 = FUN_031b0150();
        if (lVar21 == 0) {
          uVar29 = 0xffee;
          uVar30 = 0x7f7f;
        }
        else {
          uVar9 = *(undefined4 *)(DAT_0487e9d8 + (long)*(int *)(lVar21 + 4) * 0x20 + 0x1c);
          uVar29 = (undefined2)uVar9;
          uVar30 = (undefined2)((uint)uVar9 >> 0x10);
        }
        if (fVar32 < (float)CONCAT22(uVar30,uVar29)) {
          uVar12 = FUN_031b0360(&local_88);
          if (DAT_0487e9e0 == uVar12) {
            uVar13 = uVar12;
            if ((int)(DAT_0487e9e4 & 0x7fffffff) <= (int)uVar12) {
              FUN_031b048c((long)(int)(uVar12 + 1));
              uVar13 = DAT_0487e9e0;
            }
            puVar18 = (ulong *)(DAT_0487e9d8 + (long)(int)uVar13 * 0x20);
            *(uint *)(puVar18 + 2) = uVar8;
            *(uint *)((long)puVar18 + 0x14) = uVar3;
            *puVar18 = uVar27;
            puVar18[1] = (ulong)plVar11;
            *(uint *)(puVar18 + 3) = uVar14;
            *(float *)((long)puVar18 + 0x1c) = fVar32;
            DAT_0487e9e0 = uVar12 + 1;
          }
          else {
            lVar21 = DAT_0487e9d8 + ((long)((ulong)uVar12 << 0x20) >> 0x1b);
            *(long **)(lVar21 + 8) = plVar11;
            *(uint *)(lVar21 + 0x10) = uVar8;
            *(uint *)(lVar21 + 0x14) = uVar3;
            *(uint *)(lVar21 + 0x18) = uVar14;
            *(float *)(lVar21 + 0x1c) = fVar32;
          }
        }
        iVar19 = iVar19 + 1;
      } while (iVar7 != iVar19);
    }
  }
  uVar23 = 0;
  uVar24 = 0;
  puVar26 = &DAT_0487f130;
  do {
    local_68 = uVar23 | uVar24;
    local_88 = 0;
    local_80 = CONCAT44((int)uVar24,(int)uVar24);
    if ((char)puVar26[0x12] == '\0') {
      uVar6 = *puVar26;
      uVar8 = (uint)uVar6 - (uVar6 >> 1 & 0x55555555);
      uVar8 = (uVar8 & 0x33333333) + (uVar8 >> 2 & 0x33333333);
      fVar33 = (float)uVar6 + (float)uVar6;
      local_78 = CONCAT44(fVar33,1);
      if ((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 != 1) goto LAB_031a9310;
    }
    else {
      local_78 = 1;
      fVar33 = (float)NEON_ucvtf((uint)*puVar26);
      fVar33 = fVar33 / (float)((uint)*(byte *)((long)puVar26 + 3) * (uint)(byte)puVar26[1] *
                               (uint)(byte)puVar26[2]);
LAB_031a9310:
      local_78 = CONCAT44(fVar33 + fVar33,(undefined4)local_78);
    }
    FUN_031a96a4(&local_68,&local_88);
    uVar24 = uVar24 + 1;
    puVar26 = puVar26 + 0x1c;
    uVar23 = uVar23 + 0x100000000;
    if (uVar24 == 0x116) {
      lVar20 = 0;
      uVar24 = 1;
      do {
        lVar21 = 0;
        uVar23 = 1;
        do {
          if (((uVar24 != uVar23) &&
              (lVar15 = FUN_031b0150(uVar23 & 0xffffffff,uVar24 & 0xffffffff), lVar15 != 0)) &&
             (*(float *)(DAT_0487e9d8 + (long)*(int *)(lVar15 + 4) * 0x20 + 0x1c) < 3.40282e+38)) {
            lVar15 = 0;
            uVar27 = 0x100000000;
            do {
              if ((lVar21 != lVar15) && (lVar20 != lVar15)) {
                uVar28 = uVar27 | uVar23;
                local_68 = uVar28;
                lVar16 = FUN_031b0150(uVar24 & 0xffffffff,(int)lVar15 + 1);
                lVar1 = DAT_0487e9d8;
                if (lVar16 != 0) {
                  lVar16 = DAT_0487e9d8 + (long)*(int *)(lVar16 + 4) * 0x20;
                  fVar33 = *(float *)(lVar16 + 0x1c);
                  if (fVar33 < 3.40282e+38) {
                    local_88 = 0;
                    local_80 = 0;
                    local_78 = 0x7f7fffee00000000;
                    lVar17 = FUN_031b0150(uVar23 & 0xffffffff,uVar24 & 0xffffffff);
                    if (lVar17 == 0) {
                      puVar18 = &local_88;
                    }
                    else {
                      puVar18 = (ulong *)(lVar1 + (long)*(int *)(lVar17 + 4) * 0x20 + 8);
                    }
                    uVar8 = (uint)puVar18[1];
                    uVar22 = (ulong)uVar8;
                    if (*(char *)((long)&DAT_0487f14d + uVar22 * 0x38 + 7) == '\0') {
                      fVar10 = (float)NEON_ucvtf((uint)(ushort)(&DAT_0487f130)[uVar22 * 0x1c]);
                    }
                    else {
                      lVar17 = uVar22 * 0x38;
                      fVar10 = (float)NEON_ucvtf((uint)(ushort)(&DAT_0487f130)[uVar22 * 0x1c]);
                      fVar10 = fVar10 / (float)((uint)(byte)(&DAT_0487f133)[lVar17] *
                                                (uint)(byte)(&DAT_0487f132)[lVar17] *
                                               (uint)(byte)(&DAT_0487f134)[lVar17]);
                    }
                    uVar3 = *(uint *)((long)puVar18 + 0xc);
                    uVar22 = (ulong)uVar3;
                    if (*(char *)((long)&DAT_0487f14d + uVar22 * 0x38 + 7) == '\0') {
                      fVar32 = (float)NEON_ucvtf((uint)(ushort)(&DAT_0487f130)[uVar22 * 0x1c]);
                    }
                    else {
                      lVar17 = uVar22 * 0x38;
                      fVar32 = (float)NEON_ucvtf((uint)(ushort)(&DAT_0487f130)[uVar22 * 0x1c]);
                      fVar32 = fVar32 / (float)((uint)(byte)(&DAT_0487f133)[lVar17] *
                                                (uint)(byte)(&DAT_0487f132)[lVar17] *
                                               (uint)(byte)(&DAT_0487f134)[lVar17]);
                    }
                    if (fVar32 < fVar10) {
                      uVar22 = (ulong)*(uint *)(lVar16 + 0x10);
                      if (*(char *)((long)&DAT_0487f14d + uVar22 * 0x38 + 7) == '\0') {
                        fVar10 = (float)NEON_ucvtf((uint)(ushort)(&DAT_0487f130)[uVar22 * 0x1c]);
                      }
                      else {
                        lVar17 = uVar22 * 0x38;
                        fVar10 = (float)NEON_ucvtf((uint)(ushort)(&DAT_0487f130)[uVar22 * 0x1c]);
                        fVar10 = fVar10 / (float)((uint)(byte)(&DAT_0487f133)[lVar17] *
                                                  (uint)(byte)(&DAT_0487f132)[lVar17] *
                                                 (uint)(byte)(&DAT_0487f134)[lVar17]);
                      }
                      uVar22 = (ulong)*(uint *)(lVar16 + 0x14);
                      if (*(char *)((long)&DAT_0487f14d + uVar22 * 0x38 + 7) == '\0') {
                        fVar32 = (float)NEON_ucvtf((uint)(ushort)(&DAT_0487f130)[uVar22 * 0x1c]);
                      }
                      else {
                        lVar16 = uVar22 * 0x38;
                        fVar32 = (float)NEON_ucvtf((uint)(ushort)(&DAT_0487f130)[uVar22 * 0x1c]);
                        fVar32 = fVar32 / (float)((uint)(byte)(&DAT_0487f133)[lVar16] *
                                                  (uint)(byte)(&DAT_0487f132)[lVar16] *
                                                 (uint)(byte)(&DAT_0487f134)[lVar16]);
                      }
                      if (fVar10 < fVar32) goto LAB_031a9644;
                    }
                    fVar33 = fVar33 + *(float *)((long)puVar18 + 0x14);
                    if (fVar33 < 3.40282e+38) {
                      uVar25 = *puVar18;
                      uVar22 = puVar18[2];
                      lVar16 = FUN_031b0150(uVar23 & 0xffffffff,uVar28 >> 0x20);
                      if (lVar16 == 0) {
                        uVar29 = 0xffee;
                        uVar30 = 0x7f7f;
                      }
                      else {
                        uVar9 = *(undefined4 *)(lVar1 + (long)*(int *)(lVar16 + 4) * 0x20 + 0x1c);
                        uVar29 = (undefined2)uVar9;
                        uVar30 = (undefined2)((uint)uVar9 >> 0x10);
                      }
                      if (fVar33 < (float)CONCAT22(uVar30,uVar29)) {
                        uVar14 = FUN_031b0360(&local_68);
                        if (DAT_0487e9e0 == uVar14) {
                          uVar12 = uVar14;
                          if ((int)(DAT_0487e9e4 & 0x7fffffff) <= (int)uVar14) {
                            FUN_031b048c((long)(int)(uVar14 + 1));
                            uVar12 = DAT_0487e9e0;
                          }
                          puVar18 = (ulong *)(DAT_0487e9d8 + (long)(int)uVar12 * 0x20);
                          *(float *)((long)puVar18 + 0x1c) = fVar33;
                          *puVar18 = uVar28;
                          puVar18[1] = uVar25;
                          *(uint *)(puVar18 + 2) = uVar8;
                          *(uint *)((long)puVar18 + 0x14) = uVar3;
                          *(int *)(puVar18 + 3) = (int)uVar22;
                          DAT_0487e9e0 = uVar14 + 1;
                        }
                        else {
                          lVar1 = DAT_0487e9d8 + ((long)((ulong)uVar14 << 0x20) >> 0x1b);
                          *(ulong *)(lVar1 + 8) = uVar25;
                          *(uint *)(lVar1 + 0x10) = uVar8;
                          *(uint *)(lVar1 + 0x14) = uVar3;
                          *(int *)(lVar1 + 0x18) = (int)uVar22;
                          *(float *)(lVar1 + 0x1c) = fVar33;
                        }
                      }
                    }
                  }
                }
              }
LAB_031a9644:
              lVar15 = lVar15 + 1;
              uVar27 = uVar27 + 0x100000000;
            } while (lVar15 != 0x115);
          }
          uVar23 = uVar23 + 1;
          lVar21 = lVar21 + 1;
        } while (uVar23 != 0x116);
        uVar24 = uVar24 + 1;
        lVar20 = lVar20 + 1;
        if (uVar24 == 0x116) {
          DAT_0487ea20 = 1;
          return;
        }
      } while( true );
    }
  } while( true );
}


