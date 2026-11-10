/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0042b500; name: FUN_0042b500
 */


void FUN_0042b500(uint *param_1,undefined8 *param_2,uint *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint *puVar16;
  ulong *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  uint *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  undefined8 uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined8 uVar33;
  long lVar34;
  uint uVar35;
  uint uVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  ulong uVar55;
  ulong uVar56;
  ulong uVar57;
  ulong uVar58;
  uint local_a0 [2];
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar29 = param_2[4];
  puVar4 = &local_90;
  uStack_78 = CONCAT44((int)((ulong)param_2[5] >> 0x20) + (int)((ulong)param_2[1] >> 0x20),
                       (int)param_2[5] + (int)param_2[1]);
  local_80 = CONCAT44((int)((ulong)uVar29 >> 0x20) + (int)((ulong)*param_2 >> 0x20),
                      (int)uVar29 + (int)*param_2);
  uVar29 = *(undefined8 *)param_3;
  puVar10 = param_3 + 8;
  uVar33 = *(undefined8 *)puVar10;
  uVar35 = (int)*(undefined8 *)(param_3 + 10) + (int)*(undefined8 *)(param_3 + 2);
  uVar36 = (int)((ulong)*(undefined8 *)(param_3 + 10) >> 0x20) +
           (int)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20);
  uStack_68 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + (int)((ulong)param_2[3] >> 0x20),
                       (int)param_2[7] + (int)param_2[3]);
  local_70 = CONCAT44((int)((ulong)param_2[6] >> 0x20) + (int)((ulong)param_2[2] >> 0x20),
                      (int)param_2[6] + (int)param_2[2]);
  uVar28 = (int)*(undefined8 *)(param_3 + 0xc) + (int)*(undefined8 *)(param_3 + 4);
  uVar30 = (int)((ulong)*(undefined8 *)(param_3 + 0xc) >> 0x20) +
           (int)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
  uVar31 = (int)*(undefined8 *)(param_3 + 0xe) + (int)*(undefined8 *)(param_3 + 6);
  uVar32 = (int)((ulong)*(undefined8 *)(param_3 + 0xe) >> 0x20) +
           (int)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20);
  uStack_98 = CONCAT44(uVar36,uVar35);
  uStack_88 = CONCAT44(uVar32,uVar31);
  local_90 = CONCAT44(uVar30,uVar28);
  uVar2 = *param_3;
  uVar3 = *puVar10;
  uVar5 = 0;
  uVar7 = 0;
  puVar12 = (ulong *)(param_3 + 9);
  puVar18 = &uStack_68;
  lVar19 = 1;
  uVar23 = 7;
  uVar11 = 0;
  puVar22 = param_2;
  do {
    puVar18 = (undefined8 *)((long)puVar18 + 4);
    puVar4 = (ulong *)((long)puVar4 + 4);
    lVar13 = uVar11 * 4;
    lVar24 = (ulong)uVar2 * (ulong)*(uint *)((long)param_2 + lVar13);
    lVar26 = uVar7 + (ulong)(uint)((int)uVar33 + (int)uVar29) *
                     (ulong)*(uint *)((long)&local_80 + lVar13);
    lVar25 = uVar5 + (ulong)uVar3 * (ulong)*(uint *)((long)param_2 + (uVar11 + 8) * 4);
    if (lVar19 != 1) {
      lVar24 = lVar24 + (ulong)param_3[1] * (ulong)*(uint *)((long)param_2 + lVar13 + -4);
      lVar26 = lVar26 + (ulong)(uint)((int)((ulong)uVar33 >> 0x20) + (int)((ulong)uVar29 >> 0x20)) *
                        (ulong)*(uint *)((long)&uStack_88 + lVar13 + 4);
      lVar25 = lVar25 + (ulong)param_3[9] * (ulong)*(uint *)((long)param_2 + lVar13 + 0x1c);
      if (lVar19 != 2) {
        lVar24 = lVar24 + (ulong)param_3[2] * (ulong)*(uint *)((long)param_2 + lVar13 + -8);
        lVar26 = lVar26 + (ulong)uVar35 * (ulong)*(uint *)((long)&uStack_88 + lVar13);
        lVar25 = lVar25 + (ulong)param_3[10] * (ulong)*(uint *)((long)param_2 + lVar13 + 0x18);
        if (lVar19 != 3) {
          lVar24 = lVar24 + (ulong)param_3[3] * (ulong)*(uint *)((long)param_2 + lVar13 + -0xc);
          lVar26 = lVar26 + (ulong)uVar36 * (ulong)*(uint *)((long)&local_90 + lVar13 + 4);
          lVar25 = lVar25 + (ulong)param_3[0xb] * (ulong)*(uint *)((long)param_2 + lVar13 + 0x14);
          if (lVar19 != 4) {
            lVar24 = lVar24 + (ulong)param_3[4] * (ulong)*(uint *)((long)param_2 + lVar13 + -0x10);
            lVar26 = lVar26 + (ulong)uVar28 * (ulong)*(uint *)((long)&local_90 + lVar13);
            lVar25 = lVar25 + (ulong)param_3[0xc] * (ulong)*(uint *)((long)param_2 + lVar13 + 0x10);
            if (lVar19 != 5) {
              lVar24 = lVar24 + (ulong)param_3[5] * (ulong)*(uint *)((long)param_2 + lVar13 + -0x14)
              ;
              lVar26 = lVar26 + (ulong)uVar30 * (ulong)local_a0[uVar11 + 3];
              lVar25 = lVar25 + (ulong)param_3[0xd] * (ulong)*(uint *)((long)param_2 + lVar13 + 0xc)
              ;
              if (lVar19 != 6) {
                lVar24 = lVar24 + (ulong)param_3[6] *
                                  (ulong)*(uint *)((long)param_2 + lVar13 + -0x18);
                lVar26 = lVar26 + (ulong)uVar31 * (ulong)local_a0[uVar11 + 2];
                lVar25 = lVar25 + (ulong)param_3[0xe] * (ulong)*(uint *)((long)param_2 + lVar13 + 8)
                ;
                if (lVar19 != 7) {
                  lVar24 = lVar24 + (ulong)param_3[7] *
                                    (ulong)*(uint *)((long)param_2 + lVar13 + -0x1c);
                  lVar26 = lVar26 + (ulong)uVar32 * (ulong)local_a0[uVar11 + 1];
                  lVar25 = lVar25 + (ulong)param_3[0xf] *
                                    (ulong)*(uint *)((long)param_2 + lVar13 + 4);
                }
              }
            }
          }
        }
      }
    }
    uVar1 = uVar11 + 1;
    lVar26 = lVar26 - lVar24;
    lVar25 = lVar25 + lVar24;
    if (uVar11 < 7) {
      uVar5 = 7 - uVar11;
      if (uVar5 < 8) {
        lVar13 = 0;
        lVar24 = lVar19;
        uVar7 = uVar11;
      }
      else {
        lVar9 = 0;
        lVar13 = 0;
        lVar27 = 0;
        lVar34 = 0;
        lVar38 = 0;
        lVar37 = 0;
        lVar40 = 0;
        lVar39 = 0;
        lVar50 = 0;
        lVar49 = 0;
        lVar52 = 0;
        lVar51 = 0;
        lVar42 = 0;
        lVar41 = 0;
        uVar15 = uVar5 & 0xfffffffffffffff8;
        lVar44 = 0;
        lVar43 = 0;
        lVar54 = 0;
        lVar53 = 0;
        uVar8 = uVar23 & 0xfffffffffffffff8;
        lVar46 = 0;
        lVar45 = 0;
        lVar48 = 0;
        lVar47 = 0;
        lVar24 = lVar19 + uVar15;
        uVar7 = uVar11 + uVar15;
        puVar6 = puVar4;
        puVar14 = &local_70;
        puVar17 = puVar12;
        puVar20 = param_2 + 4;
        do {
          uVar55 = NEON_rev64(puVar20[-1],4);
          lVar25 = lVar25 - (puVar17[-4] & 0xffffffff) * (uVar55 & 0xffffffff);
          lVar9 = lVar9 - (puVar17[-4] >> 0x20) * (uVar55 >> 0x20);
          uVar55 = NEON_rev64(puVar20[-2],4);
          uVar57 = NEON_rev64(puVar20[-4],4);
          uVar56 = NEON_rev64(puVar20[-3],4);
          lVar39 = lVar39 - (puVar17[-1] & 0xffffffff) * (uVar57 & 0xffffffff);
          lVar40 = lVar40 - (puVar17[-1] >> 0x20) * (uVar57 >> 0x20);
          lVar34 = lVar34 - (puVar17[-3] & 0xffffffff) * (uVar55 & 0xffffffff);
          lVar27 = lVar27 - (puVar17[-3] >> 0x20) * (uVar55 >> 0x20);
          lVar37 = lVar37 - (puVar17[-2] & 0xffffffff) * (uVar56 & 0xffffffff);
          lVar38 = lVar38 - (puVar17[-2] >> 0x20) * (uVar56 >> 0x20);
          uVar57 = NEON_rev64(puVar14[-1],4);
          uVar55 = NEON_rev64(puVar14[1],4);
          uVar58 = NEON_rev64(puVar14[-2],4);
          uVar56 = NEON_rev64(*puVar14,4);
          lVar49 = lVar49 + (puVar6[-2] & 0xffffffff) * (uVar55 & 0xffffffff);
          lVar50 = lVar50 + (puVar6[-2] >> 0x20) * (uVar55 >> 0x20);
          lVar41 = lVar41 + (*puVar6 & 0xffffffff) * (uVar57 & 0xffffffff);
          lVar42 = lVar42 + (*puVar6 >> 0x20) * (uVar57 >> 0x20);
          lVar51 = lVar51 + (puVar6[-1] & 0xffffffff) * (uVar56 & 0xffffffff);
          lVar52 = lVar52 + (puVar6[-1] >> 0x20) * (uVar56 >> 0x20);
          lVar43 = lVar43 + (puVar6[1] & 0xffffffff) * (uVar58 & 0xffffffff);
          lVar44 = lVar44 + (puVar6[1] >> 0x20) * (uVar58 >> 0x20);
          uVar55 = NEON_rev64(puVar20[3],4);
          uVar57 = NEON_rev64(puVar20[1],4);
          uVar56 = NEON_rev64(puVar20[2],4);
          lVar26 = lVar26 + (*puVar17 & 0xffffffff) * (uVar55 & 0xffffffff);
          lVar13 = lVar13 + (*puVar17 >> 0x20) * (uVar55 >> 0x20);
          lVar53 = lVar53 + (puVar17[1] & 0xffffffff) * (uVar56 & 0xffffffff);
          lVar54 = lVar54 + (puVar17[1] >> 0x20) * (uVar56 >> 0x20);
          uVar55 = NEON_rev64(*puVar20,4);
          lVar47 = lVar47 + (puVar17[3] & 0xffffffff) * (uVar55 & 0xffffffff);
          lVar48 = lVar48 + (puVar17[3] >> 0x20) * (uVar55 >> 0x20);
          lVar45 = lVar45 + (puVar17[2] & 0xffffffff) * (uVar57 & 0xffffffff);
          lVar46 = lVar46 + (puVar17[2] >> 0x20) * (uVar57 >> 0x20);
          uVar8 = uVar8 - 8;
          puVar17 = puVar17 + 4;
          puVar14 = puVar14 + -4;
          puVar6 = puVar6 + 4;
          puVar20 = puVar20 + -4;
        } while (uVar8 != 0);
        lVar26 = lVar47 + lVar45 + lVar53 + lVar26 + lVar48 + lVar46 + lVar54 + lVar13;
        lVar13 = lVar43 + lVar41 + lVar51 + lVar49 + lVar44 + lVar42 + lVar52 + lVar50;
        lVar25 = lVar39 + lVar37 + lVar34 + lVar25 + lVar40 + lVar38 + lVar27 + lVar9;
        if (uVar5 == uVar15) goto LAB_0042b5cc;
      }
      lVar9 = 0;
      puVar16 = local_a0 + lVar24;
      puVar21 = puVar10 + lVar24;
      do {
        lVar27 = lVar9 * 4;
        lVar9 = lVar9 + -1;
        lVar34 = lVar27 + uVar7 * -4;
        lVar25 = lVar25 - (ulong)puVar21[-8] * (ulong)*(uint *)((long)puVar22 + lVar34 + 0x1c);
        lVar13 = lVar13 + (ulong)*puVar16 * (ulong)*(uint *)((long)puVar18 + lVar27 + uVar7 * -4);
        lVar26 = lVar26 + (ulong)*puVar21 * (ulong)*(uint *)((long)puVar22 + lVar34 + 0x3c);
        puVar16 = puVar16 + 1;
        puVar21 = puVar21 + 1;
      } while (lVar24 + -8 != lVar9);
    }
    else {
      lVar13 = 0;
    }
LAB_0042b5cc:
    param_1[uVar11] = (uint)(lVar25 + lVar13) & 0xfffffff;
    param_1[uVar11 + 8] = (uint)(lVar13 + lVar26) & 0xfffffff;
    uVar5 = (ulong)(lVar25 + lVar13) >> 0x1c;
    uVar7 = (ulong)(lVar13 + lVar26) >> 0x1c;
    lVar19 = lVar19 + 1;
    uVar23 = uVar23 - 1;
    puVar12 = (ulong *)((long)puVar12 + 4);
    puVar22 = (undefined8 *)((long)puVar22 + 4);
    uVar11 = uVar1;
    if (uVar1 == 8) {
      uVar11 = uVar5 + uVar7 + (ulong)param_1[8];
      uVar2 = *param_1;
      param_1[8] = (uint)uVar11 & 0xfffffff;
      param_1[9] = param_1[9] + (int)(uVar11 >> 0x1c);
      *param_1 = (uint)(uVar7 + uVar2) & 0xfffffff;
      param_1[1] = param_1[1] + (int)(uVar7 + uVar2 >> 0x1c);
      return;
    }
  } while( true );
}


