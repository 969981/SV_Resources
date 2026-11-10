/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0086f578; name: FUN_0086f578
 */


uint FUN_0086f578(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long *plVar1;
  undefined1 (*pauVar2) [12];
  long lVar3;
  undefined1 (*pauVar4) [12];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  int iVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined1 (*pauVar23) [16];
  long lVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar46 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float *local_50 [2];
  
  lVar27 = *(long *)(param_1 + 0x18);
  uVar26 = *(uint *)(lVar27 + 0x28);
  plVar1 = (long *)(lVar27 + 0x18);
  if (uVar26 == 0) {
    FUN_02ed42dc(plVar1,1);
    uVar26 = *(uint *)(lVar27 + 0x28);
  }
  lVar21 = *(long *)(lVar27 + 0x18) + (long)plVar1;
  uVar28 = (ulong)uVar26;
  lVar3 = 0;
  if (*(long *)(lVar27 + 0x18) != 0) {
    lVar3 = lVar21;
  }
  lVar20 = (uVar28 + (ulong)uVar26 * 2) * 0x10;
  puVar22 = (undefined8 *)(lVar3 + lVar20);
  *(undefined4 *)(lVar27 + 0x28) = *(undefined4 *)(lVar21 + (long)(int)uVar26 * 0x30);
  *(undefined4 *)((long)puVar22 + 0x24) = 0;
  *(undefined4 *)(puVar22 + 5) = param_3;
  uVar6 = *param_2;
  puVar22[1] = param_2[1];
  *puVar22 = uVar6;
  auVar35 = *(undefined1 (*) [16])(param_2 + 2);
  puVar22[3] = auVar35._8_8_;
  puVar22[2] = auVar35._0_8_;
  lVar24 = *(long *)(lVar27 + 0x18);
  uVar25 = *(uint *)(lVar27 + 0x34);
  lVar21 = lVar24 + (long)plVar1;
  lVar3 = 0;
  if (lVar24 != 0) {
    lVar3 = lVar21;
  }
  if (uVar25 == 0) {
    *(uint *)(lVar27 + 0x34) = uVar26;
    *(undefined4 *)(lVar3 + uVar28 * 0x30 + 0x20) = 0;
  }
  else {
    pauVar2 = (undefined1 (*) [12])(lVar3 + lVar20);
    fVar39 = (float)*(undefined8 *)(*pauVar2 + 8);
    fVar53 = (float)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
    auVar17 = *pauVar2;
    auVar14 = *pauVar2;
    fVar37 = (float)*(undefined8 *)*pauVar2;
    fVar38 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
    pauVar4 = (undefined1 (*) [12])(pauVar2[1] + 4);
    fVar34 = (float)*(undefined8 *)pauVar2[2];
    fVar52 = (float)((ulong)*(undefined8 *)pauVar2[2] >> 0x20);
    auVar16 = *pauVar4;
    auVar15 = *pauVar4;
    fVar32 = (float)*(undefined8 *)*pauVar4;
    fVar33 = (float)((ulong)*(undefined8 *)*pauVar4 >> 0x20);
    uVar19 = *(uint *)(lVar27 + 0x28);
    if (uVar19 == 0) {
      iVar18 = FUN_02ed42dc(plVar1,1);
      if (iVar18 < 0) goto LAB_0086f800;
      lVar24 = *(long *)(lVar27 + 0x18);
      lVar21 = lVar24 + (long)plVar1;
      uVar19 = *(uint *)(lVar27 + 0x28);
    }
    lVar3 = 0;
    if (lVar24 != 0) {
      lVar3 = lVar21;
    }
    pauVar23 = (undefined1 (*) [16])(lVar3 + (ulong)uVar25 * 0x30);
    *(undefined4 *)(lVar27 + 0x28) = *(undefined4 *)(lVar21 + (long)(int)uVar19 * 0x30);
    uVar25 = *(uint *)(pauVar23[2] + 4);
    if (uVar25 != 0) {
      fVar29 = fVar37 + fVar32;
      fVar30 = fVar38 + fVar33;
      fVar31 = fVar39 + fVar34;
      fVar32 = fVar32 - fVar37;
      fVar33 = fVar33 - fVar38;
      fVar34 = fVar34 - fVar39;
      while( true ) {
        lVar21 = 0;
        if (lVar24 != 0) {
          lVar21 = lVar24 + (long)plVar1;
        }
        local_50[0] = (float *)(lVar21 + (ulong)uVar25 * 0x30);
        local_50[1] = (float *)(lVar21 + (ulong)*(uint *)(pauVar23[2] + 8) * 0x30);
        uVar6 = *(undefined8 *)(pauVar23[1] + 8);
        auVar13 = *(undefined1 (*) [12])pauVar23[1];
        auVar11._12_4_ = fVar53;
        auVar11._0_12_ = auVar14;
        auVar35 = NEON_fmin(*pauVar23,auVar11,4);
        *(long *)(*pauVar23 + 8) = auVar35._8_8_;
        *(long *)*pauVar23 = auVar35._0_8_;
        auVar35._12_4_ = (int)((ulong)uVar6 >> 0x20);
        auVar35._0_12_ = auVar13;
        auVar9._12_4_ = fVar52;
        auVar9._0_12_ = auVar15;
        auVar35 = NEON_fmax(auVar35,auVar9,4);
        *(long *)(pauVar23[1] + 8) = auVar35._8_8_;
        *(long *)pauVar23[1] = auVar35._0_8_;
        fVar39 = (float)*(undefined8 *)(local_50[0] + 6);
        fVar40 = (float)((ulong)*(undefined8 *)(local_50[0] + 6) >> 0x20);
        fVar37 = (float)*(undefined8 *)(local_50[0] + 4);
        fVar38 = (float)((ulong)*(undefined8 *)(local_50[0] + 4) >> 0x20);
        fVar45 = (*local_50[1] + local_50[1][4]) - fVar29;
        fVar47 = (local_50[1][1] + local_50[1][5]) - fVar30;
        fVar48 = (local_50[1][2] + local_50[1][6]) - fVar31;
        fVar49 = (local_50[1][3] + local_50[1][7]) - (fVar53 + fVar52);
        fVar41 = (*local_50[0] + fVar37) - fVar29;
        fVar42 = (local_50[0][1] + fVar38) - fVar30;
        fVar43 = (local_50[0][2] + fVar39) - fVar31;
        fVar44 = (local_50[0][3] + fVar40) - (fVar53 + fVar52);
        auVar36._0_4_ = fVar32 + (fVar37 - *local_50[0]);
        auVar36._4_4_ = fVar33 + (fVar38 - local_50[0][1]);
        auVar36._8_4_ = fVar34 + (fVar39 - local_50[0][2]);
        auVar36._12_4_ = (fVar52 - fVar53) + (fVar40 - local_50[0][3]);
        fVar37 = fVar32 + (local_50[1][4] - *local_50[1]);
        fVar38 = fVar33 + (local_50[1][5] - local_50[1][1]);
        fVar39 = fVar34 + (local_50[1][6] - local_50[1][2]);
        fVar40 = (fVar52 - fVar53) + (local_50[1][7] - local_50[1][3]);
        fVar41 = fVar41 * fVar41;
        fVar42 = fVar42 * fVar42;
        fVar43 = fVar43 * fVar43;
        fVar44 = fVar44 * fVar44;
        auVar50._4_4_ = fVar42;
        auVar50._0_4_ = fVar41;
        auVar50._8_4_ = fVar43;
        auVar50._12_4_ = fVar44;
        auVar51._4_4_ = fVar42;
        auVar51._0_4_ = fVar41;
        auVar51._8_4_ = fVar43;
        auVar51._12_4_ = fVar44;
        auVar50 = NEON_ext(auVar50,auVar51,8,1);
        auVar51 = NEON_ext(auVar36,auVar36,8,1);
        fVar45 = fVar45 * fVar45;
        fVar47 = fVar47 * fVar47;
        fVar48 = fVar48 * fVar48;
        fVar49 = fVar49 * fVar49;
        auVar7._4_4_ = fVar47;
        auVar7._0_4_ = fVar45;
        auVar7._8_4_ = fVar48;
        auVar7._12_4_ = fVar49;
        auVar8._4_4_ = fVar47;
        auVar8._0_4_ = fVar45;
        auVar8._8_4_ = fVar48;
        auVar8._12_4_ = fVar49;
        auVar35 = NEON_ext(auVar7,auVar8,8,1);
        auVar46._4_4_ = fVar38;
        auVar46._0_4_ = fVar37;
        auVar46._8_4_ = fVar39;
        auVar46._12_4_ = fVar40;
        auVar5._4_4_ = fVar38;
        auVar5._0_4_ = fVar37;
        auVar5._8_4_ = fVar39;
        auVar5._12_4_ = fVar40;
        auVar46 = NEON_ext(auVar46,auVar5,8,1);
        pauVar23 = (undefined1 (*) [16])
                   local_50[(fVar45 + fVar47 + auVar35._0_4_) * (auVar46._0_4_ + fVar37 + fVar38) <
                            (fVar41 + fVar42 + auVar50._0_4_) *
                            (auVar51._0_4_ + auVar36._0_4_ + auVar36._4_4_)];
        uVar25 = *(uint *)(pauVar23[2] + 4);
        if (uVar25 == 0) break;
        lVar24 = *plVar1;
      }
    }
    if (*(uint *)pauVar23[2] == 0) {
      *(uint *)(lVar27 + 0x34) = uVar19;
    }
    else {
      lVar21 = 0;
      if (*plVar1 != 0) {
        lVar21 = *plVar1 + (long)plVar1;
      }
      lVar20 = lVar21 + (ulong)*(uint *)pauVar23[2] * 0x30;
      *(uint *)(lVar20 + (ulong)(*(int *)(lVar20 + 0x28) ==
                                (int)((ulong)((long)pauVar23 - lVar21) >> 4) * -0x55555555) * 4 +
               0x24) = uVar19;
    }
    puVar22 = (undefined8 *)(lVar3 + (ulong)uVar19 * 0x30);
    *(undefined4 *)(puVar22 + 4) = *(undefined4 *)pauVar23[2];
    lVar21 = 0;
    if (*plVar1 != 0) {
      lVar21 = *plVar1 + (long)plVar1;
    }
    *(int *)((long)puVar22 + 0x24) = (int)((ulong)((long)pauVar23 - lVar21) >> 4) * -0x55555555;
    *(uint *)(puVar22 + 5) = uVar26;
    *(uint *)pauVar23[2] = uVar19;
    lVar21 = 0;
    if (*plVar1 != 0) {
      lVar21 = *plVar1 + (long)plVar1;
    }
    *(uint *)(lVar21 + uVar28 * 0x30 + 0x20) = uVar19;
    auVar10._12_4_ = fVar52;
    auVar10._0_12_ = auVar16;
    auVar46 = NEON_fmax(pauVar23[1],auVar10,4);
    auVar12._12_4_ = fVar53;
    auVar12._0_12_ = auVar17;
    auVar35 = NEON_fmin(*pauVar23,auVar12,4);
    puVar22[1] = auVar35._8_8_;
    *puVar22 = auVar35._0_8_;
    puVar22[3] = auVar46._8_8_;
    puVar22[2] = auVar46._0_8_;
  }
LAB_0086f800:
  *(int *)(lVar27 + 0x2c) = *(int *)(lVar27 + 0x2c) + 1;
  return uVar26;
}


