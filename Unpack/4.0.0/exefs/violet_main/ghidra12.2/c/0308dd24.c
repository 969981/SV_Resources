/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0308dd24; name: FUN_0308dd24
 */


undefined8 FUN_0308dd24(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  float fVar34;
  float fVar35;
  int iVar36;
  float fVar37;
  int iVar38;
  float fVar39;
  int iVar40;
  int iVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  
  lVar7 = tpidr_el0;
  lVar2 = *(long *)(lVar7 + 0x1000b8);
  if (lVar2 == 0) {
    lVar2 = FUN_00e5d3b4();
    *(long *)(lVar7 + 0x1000b8) = lVar2;
  }
  plVar6 = *(long **)(lVar2 + 0x3e0);
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    if (*(code **)(lVar7 + 0x18) != (code *)0x0) {
      (**(code **)(lVar7 + 0x18))("calcBary",8,*(undefined8 *)(lVar7 + 0x28));
    }
    puVar4 = (undefined8 *)plVar6[2];
    uVar3 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= (ulong)plVar6[3]) && (plVar6[2] = uVar3, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = "TtcalcBary";
      uVar1 = nn::os::GetSystemTick();
      puVar4[1] = uVar1;
    }
    if (((*(byte *)(lVar7 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
      puVar4 = (undefined8 *)plVar6[2];
      uVar3 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((uVar3 <= (ulong)plVar6[3]) && (plVar6[2] = uVar3, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = &DAT_03c4e575;
        puVar4[1] = *(undefined8 *)(plVar6[6] + 8);
      }
    }
  }
  fVar8 = (float)*param_4;
  fVar12 = (float)*param_3;
  fVar15 = fVar8 * fVar12;
  fVar9 = (float)((ulong)*param_4 >> 0x20);
  fVar13 = (float)((ulong)*param_3 >> 0x20);
  fVar17 = fVar9 * fVar13;
  fVar10 = (float)param_4[1];
  fVar14 = (float)param_3[1];
  fVar18 = fVar10 * fVar14;
  fVar16 = fVar15 + fVar17 + fVar18;
  fVar18 = fVar15 + fVar17 + fVar18;
  iVar30 = (int)((ulong)(param_2 - (long)param_1) >> 4);
  fVar8 = fVar8 - fVar12 * fVar16;
  fVar9 = fVar9 - fVar13 * fVar18;
  uVar1 = CONCAT44(fVar9,fVar8);
  fVar10 = fVar10 - fVar14 * fVar16;
  uVar11 = CONCAT44((float)((ulong)param_4[1] >> 0x20) - (float)((ulong)param_3[1] >> 0x20) * fVar18
                    ,fVar10);
  if (3 < iVar30) {
    uVar5 = param_1[2];
    fVar15 = (float)*param_1;
    fVar16 = (float)((ulong)*param_1 >> 0x20);
    fVar17 = (float)param_1[1];
    fVar18 = fVar12 * fVar15 + fVar13 * fVar16 + fVar14 * fVar17;
    lVar7 = (ulong)(iVar30 - 2) - 1;
    puVar4 = param_1 + 4;
    uVar26 = param_1[3];
    do {
      fVar19 = (float)uVar5;
      fVar22 = (float)((ulong)uVar5 >> 0x20);
      fVar24 = (float)uVar26;
      fVar20 = fVar14 * fVar24 + fVar12 * fVar19 + fVar13 * fVar22;
      uVar27 = puVar4[1];
      uVar5 = *puVar4;
      fVar21 = (float)uVar5;
      fVar23 = (float)((ulong)uVar5 >> 0x20);
      fVar25 = (float)uVar27;
      fVar29 = fVar12 * fVar21 + fVar13 * fVar23 + fVar14 * fVar25;
      fVar28 = fVar21 - fVar12 * fVar29;
      fVar35 = fVar23 - fVar13 * (fVar12 * fVar21 + fVar13 * fVar23 + fVar14 * fVar25);
      fVar42 = fVar25 - fVar14 * fVar29;
      fVar43 = (fVar19 - fVar12 * fVar20) - fVar28;
      fVar44 = (fVar22 - fVar13 * (fVar14 * fVar24 + fVar12 * fVar19 + fVar13 * fVar22)) - fVar35;
      fVar45 = (fVar24 - fVar14 * fVar20) - fVar42;
      fVar34 = (fVar15 - fVar12 * fVar18) - fVar28;
      fVar37 = (fVar16 - fVar13 * (fVar12 * fVar15 + fVar13 * fVar16 + fVar14 * fVar17)) - fVar35;
      fVar39 = (fVar17 - fVar14 * fVar18) - fVar42;
      fVar20 = fVar43 * fVar43 + fVar44 * fVar44 + fVar45 * fVar45;
      fVar46 = fVar34 * fVar34 + fVar37 * fVar37 + fVar39 * fVar39;
      fVar49 = fVar20 * fVar46;
      fVar47 = fVar43 * fVar34 + fVar44 * fVar37 + fVar45 * fVar39;
      fVar48 = fVar43 * fVar34 + fVar44 * fVar37 + fVar45 * fVar39;
      fVar29 = fVar49 - fVar47 * fVar47;
      if ((fVar29 != 0.0) && (1.0 - fVar29 / fVar49 < 0.99800104)) {
        fVar28 = fVar28 - fVar8;
        fVar35 = fVar35 - fVar9;
        fVar42 = fVar42 - fVar10;
        uVar50 = NEON_fmov(0x3f800000,4);
        fVar49 = fVar45 * fVar42 + fVar43 * fVar28 + fVar44 * fVar35;
        fVar35 = fVar39 * fVar42 + fVar34 * fVar28 + fVar37 * fVar35;
        fVar28 = fVar47 * fVar35 - fVar46 * fVar49;
        fVar35 = fVar47 * fVar49 - fVar20 * fVar35;
        fVar20 = (float)uVar50 / fVar29;
        fVar37 = (float)((ulong)uVar50 >> 0x20) /
                 ((fVar43 * fVar43 + fVar44 * fVar44 + fVar45 * fVar45) *
                  (fVar34 * fVar34 + fVar37 * fVar37 + fVar39 * fVar39) - fVar48 * fVar48);
        fVar34 = fVar20 * fVar28;
        fVar28 = fVar37 * ((fVar29 - fVar28) - fVar35);
        fVar20 = fVar20 * fVar35;
        fVar37 = fVar37 * fVar35;
        iVar30 = -(uint)(-1e-05 <= fVar34);
        iVar31 = -(uint)(-1e-05 <= fVar28);
        iVar32 = -(uint)(-1e-05 <= fVar20);
        iVar33 = -(uint)(-1e-05 <= fVar37);
        iVar36 = -(uint)(fVar34 <= 1.00001);
        iVar38 = -(uint)(fVar28 <= 1.00001);
        iVar40 = -(uint)(fVar20 <= 1.00001);
        iVar41 = -(uint)(fVar37 <= 1.00001);
        if (CONCAT13((byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar31 >> 0x18) &
                     (byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar30 >> 0x18) &
                     (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar32 >> 0x18) &
                     (byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar33 >> 0x18),
                     CONCAT12((byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar31 >> 0x10) &
                              (byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar30 >> 0x10) &
                              (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar32 >> 0x10) &
                              (byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar33 >> 0x10),
                              CONCAT11((byte)((uint)iVar38 >> 8) & (byte)((uint)iVar31 >> 8) &
                                       (byte)((uint)iVar36 >> 8) & (byte)((uint)iVar30 >> 8) &
                                       (byte)((uint)iVar40 >> 8) & (byte)((uint)iVar32 >> 8) &
                                       (byte)((uint)iVar41 >> 8) & (byte)((uint)iVar33 >> 8),
                                       (byte)iVar38 & (byte)iVar31 & (byte)iVar36 & (byte)iVar30 &
                                       (byte)iVar40 & (byte)iVar32 & (byte)iVar41 & (byte)iVar33)))
            != 0) {
          uVar5 = 1;
          uVar1 = CONCAT44(fVar16 * fVar20 + fVar22 * fVar34 + fVar23 * fVar28,
                           fVar15 * fVar20 + fVar19 * fVar34 + fVar21 * fVar28);
          uVar11 = CONCAT44((float)((ulong)param_1[1] >> 0x20) * fVar20 +
                            (float)((ulong)uVar26 >> 0x20) * fVar34 +
                            (float)((ulong)uVar27 >> 0x20) * fVar28,
                            fVar17 * fVar20 + fVar24 * fVar34 + fVar25 * fVar28);
          goto LAB_0308dfc8;
        }
      }
      lVar7 = lVar7 + -1;
      puVar4 = puVar4 + 2;
      uVar26 = uVar27;
    } while (lVar7 != 0);
  }
  uVar5 = 0;
LAB_0308dfc8:
  param_4[1] = uVar11;
  *param_4 = uVar1;
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    if (((*(byte *)(lVar7 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
      puVar4 = (undefined8 *)plVar6[2];
      uVar3 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((uVar3 <= (ulong)plVar6[3]) && (plVar6[2] = uVar3, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = &DAT_03c4e575;
        puVar4[1] = *(undefined8 *)(plVar6[6] + 8);
      }
    }
    puVar4 = (undefined8 *)plVar6[2];
    uVar3 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= (ulong)plVar6[3]) && (plVar6[2] = uVar3, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = &DAT_03c2d363;
      uVar1 = nn::os::GetSystemTick();
      puVar4[1] = uVar1;
    }
    if (*(code **)(lVar7 + 0x20) != (code *)0x0) {
      (**(code **)(lVar7 + 0x20))(*(undefined8 *)(lVar7 + 0x28));
    }
  }
  return uVar5;
}


