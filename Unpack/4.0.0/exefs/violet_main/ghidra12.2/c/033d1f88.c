/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033d1f88; name: FUN_033d1f88
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_033d1f88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 (*param_6) [12])

{
  float *pfVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 (*pauVar4) [12];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 (*pauVar12) [12];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  float fVar21;
  int iVar22;
  float fVar23;
  int iVar24;
  float fVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  
  uVar10 = _UNK_03cac188;
  uVar9 = _DAT_03cac180;
  uVar8 = _UNK_03cabfe8;
  uVar7 = _DAT_03cabfe0;
  uVar6 = _UNK_03cabb78;
  uVar5 = _DAT_03cabb70;
  if (*(char *)(param_1 + 0xd) != '\0') {
    fVar13 = *(float *)*param_6;
    fVar15 = *(float *)(*param_6 + 4);
    pfVar1 = (float *)(*param_6 + ((ulong)*(uint *)(param_1 + 8) & 0xfffffffe) * 4);
    fVar14 = *pfVar1;
    uVar11 = (ulong)*(uint *)(param_1 + 8) & 0xfffffffe;
    fVar16 = pfVar1[1];
    if ((int)uVar11 != 0) {
      pauVar12 = param_6;
      do {
        fVar18 = (float)((ulong)*(undefined8 *)(*pauVar12 + 8) >> 0x20);
        auVar3 = *pauVar12;
        auVar2 = *pauVar12;
        fVar17 = (float)((ulong)*(undefined8 *)*pauVar12 >> 0x20);
        fVar19 = (float)uVar7 - fVar17;
        fVar21 = (float)((ulong)uVar7 >> 0x20) - fVar17;
        fVar23 = (float)uVar8 - fVar18;
        fVar25 = (float)((ulong)uVar8 >> 0x20) - fVar18;
        iVar27 = -(uint)(fVar19 < 0.0);
        iVar28 = -(uint)(fVar21 < 0.0);
        iVar29 = -(uint)(fVar23 < 0.0);
        iVar30 = -(uint)(fVar25 < 0.0);
        iVar20 = -(uint)(0.0 <= fVar19);
        iVar22 = -(uint)(0.0 <= fVar21);
        iVar24 = -(uint)(0.0 <= fVar23);
        iVar26 = -(uint)(0.0 <= fVar25);
        fVar19 = (float)CONCAT13((byte)((uint)iVar27 >> 0x18) & (byte)((ulong)uVar5 >> 0x18) |
                                 (byte)((uint)iVar20 >> 0x18) & (byte)((ulong)uVar9 >> 0x18),
                                 CONCAT12((byte)((uint)iVar27 >> 0x10) &
                                          (byte)((ulong)uVar5 >> 0x10) |
                                          (byte)((uint)iVar20 >> 0x10) &
                                          (byte)((ulong)uVar9 >> 0x10),
                                          CONCAT11((byte)((uint)iVar27 >> 8) &
                                                   (byte)((ulong)uVar5 >> 8) |
                                                   (byte)((uint)iVar20 >> 8) &
                                                   (byte)((ulong)uVar9 >> 8),
                                                   (byte)iVar27 & (byte)uVar5 |
                                                   (byte)iVar20 & (byte)uVar9)));
        fVar23 = (float)CONCAT13((byte)((uint)iVar29 >> 0x18) & (byte)((ulong)uVar6 >> 0x18) |
                                 (byte)((uint)iVar24 >> 0x18) & (byte)((ulong)uVar10 >> 0x18),
                                 CONCAT12((byte)((uint)iVar29 >> 0x10) &
                                          (byte)((ulong)uVar6 >> 0x10) |
                                          (byte)((uint)iVar24 >> 0x10) &
                                          (byte)((ulong)uVar10 >> 0x10),
                                          CONCAT11((byte)((uint)iVar29 >> 8) &
                                                   (byte)((ulong)uVar6 >> 8) |
                                                   (byte)((uint)iVar24 >> 8) &
                                                   (byte)((ulong)uVar10 >> 8),
                                                   (byte)iVar29 & (byte)uVar6 |
                                                   (byte)iVar24 & (byte)uVar10)));
        fVar21 = (float)(CONCAT17((byte)((uint)iVar28 >> 0x18) & (byte)((ulong)uVar5 >> 0x38) |
                                  (byte)((uint)iVar22 >> 0x18) & (byte)((ulong)uVar9 >> 0x38),
                                  CONCAT16((byte)((uint)iVar28 >> 0x10) &
                                           (byte)((ulong)uVar5 >> 0x30) |
                                           (byte)((uint)iVar22 >> 0x10) &
                                           (byte)((ulong)uVar9 >> 0x30),
                                           CONCAT15((byte)((uint)iVar28 >> 8) &
                                                    (byte)((ulong)uVar5 >> 0x28) |
                                                    (byte)((uint)iVar22 >> 8) &
                                                    (byte)((ulong)uVar9 >> 0x28),
                                                    CONCAT14((byte)iVar28 &
                                                             (byte)((ulong)uVar5 >> 0x20) |
                                                             (byte)iVar22 &
                                                             (byte)((ulong)uVar9 >> 0x20),fVar19))))
                        >> 0x20);
        fVar25 = (float)(CONCAT17((byte)((uint)iVar30 >> 0x18) & (byte)((ulong)uVar6 >> 0x38) |
                                  (byte)((uint)iVar26 >> 0x18) & (byte)((ulong)uVar10 >> 0x38),
                                  CONCAT16((byte)((uint)iVar30 >> 0x10) &
                                           (byte)((ulong)uVar6 >> 0x30) |
                                           (byte)((uint)iVar26 >> 0x10) &
                                           (byte)((ulong)uVar10 >> 0x30),
                                           CONCAT15((byte)((uint)iVar30 >> 8) &
                                                    (byte)((ulong)uVar6 >> 0x28) |
                                                    (byte)((uint)iVar26 >> 8) &
                                                    (byte)((ulong)uVar10 >> 0x28),
                                                    CONCAT14((byte)iVar30 &
                                                             (byte)((ulong)uVar6 >> 0x20) |
                                                             (byte)iVar26 &
                                                             (byte)((ulong)uVar10 >> 0x20),fVar23)))
                                 ) >> 0x20);
        fVar19 = (ABS(fVar19 - fVar17) * -0.4052847 + 1.2732395) * (fVar19 - fVar17);
        fVar17 = (ABS(fVar21 - fVar17) * -0.4052847 + 1.2732395) * (fVar21 - fVar17);
        fVar21 = (ABS(fVar23 - fVar18) * -0.4052847 + 1.2732395) * (fVar23 - fVar18);
        fVar18 = (ABS(fVar25 - fVar18) * -0.4052847 + 1.2732395) * (fVar25 - fVar18);
        pauVar4 = pauVar12 + 1;
        *(ulong *)(*pauVar12 + 8) =
             CONCAT44((fVar18 + (-fVar18 + fVar18 * ABS(fVar18)) * 0.225) * auVar2._8_4_,
                      (fVar21 + (-fVar21 + fVar21 * ABS(fVar21)) * 0.225) * auVar3._8_4_);
        *(ulong *)*pauVar12 =
             CONCAT44((fVar17 + (-fVar17 + fVar17 * ABS(fVar17)) * 0.225) * auVar2._0_4_,
                      (fVar19 + (-fVar19 + fVar19 * ABS(fVar19)) * 0.225) * auVar3._0_4_);
        pauVar12 = (undefined1 (*) [12])(*pauVar4 + 4);
      } while ((undefined1 (*) [12])(*pauVar4 + 4) < (undefined1 (*) [12])(*param_6 + uVar11 * 4));
    }
    fVar17 = -4.712389;
    if (fVar15 <= 1.5707964) {
      fVar17 = 1.5707964;
    }
    fVar18 = -4.712389;
    if (fVar16 <= 1.5707964) {
      fVar18 = 1.5707964;
    }
    fVar17 = fVar17 + fVar15;
    fVar18 = fVar18 + fVar16;
    fVar16 = fVar16 * 1.2732395 - fVar16 * 0.4052847 * ABS(fVar16);
    fVar15 = fVar15 * 1.2732395 - fVar15 * 0.4052847 * ABS(fVar15);
    fVar18 = fVar18 * 1.2732395 - fVar18 * 0.4052847 * ABS(fVar18);
    fVar17 = fVar17 * 1.2732395 - fVar17 * 0.4052847 * ABS(fVar17);
    *(float *)(*param_6 + 4) = (fVar15 + (ABS(fVar15) * fVar15 - fVar15) * 0.225) * fVar13;
    *(float *)*param_6 = (fVar17 + (ABS(fVar17) * fVar17 - fVar17) * 0.225) * fVar13;
    *pfVar1 = (fVar18 + (ABS(fVar18) * fVar18 - fVar18) * 0.225) * fVar14;
    pfVar1[1] = (fVar16 + (ABS(fVar16) * fVar16 - fVar16) * 0.225) * fVar14;
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  FUN_033ce570(param_6,param_2,param_5,1,param_4);
  return;
}


