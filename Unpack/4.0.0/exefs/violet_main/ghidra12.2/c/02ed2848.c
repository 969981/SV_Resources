/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ed2848; name: FUN_02ed2848
 */


long FUN_02ed2848(long *param_1,int *param_2,long *param_3,long *param_4)

{
  undefined1 (*pauVar1) [12];
  undefined8 *puVar2;
  undefined1 *puVar3;
  void *__src;
  undefined1 (*pauVar4) [12];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  undefined *puVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  long lVar32;
  void *__dest;
  long lVar33;
  undefined1 *puVar34;
  undefined8 *puVar35;
  undefined1 (*pauVar36) [16];
  undefined4 uVar37;
  float *pfVar38;
  ulong uVar39;
  long lVar40;
  ulong uVar41;
  long *plVar42;
  float fVar43;
  uint uVar44;
  float fVar50;
  float fVar52;
  undefined1 auVar45 [16];
  undefined8 uVar54;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  uint uVar51;
  uint uVar53;
  uint uVar55;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar56;
  float fVar60;
  float fVar61;
  undefined8 uVar62;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar73;
  float fVar74;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar75;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar82;
  float fVar83;
  uint local_154;
  long local_150;
  undefined *local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0 [16];
  undefined1 auStack_b0 [16];
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  float *local_78 [3];
  
  uVar29 = (**(code **)(*param_1 + 0x20))();
  uVar30 = (**(code **)(*param_1 + 0x40))(param_1);
  puVar28 = PTR_DAT_047d1a08;
  local_80 = CONCAT44(param_2[1],param_2[1]);
  local_e0 = (undefined *)0x70;
  lVar32 = (**(code **)PTR_DAT_047d1a08)(0,&local_e0,0);
  if (*(code **)(puVar28 + 0x10) != (code *)0x0) {
    (**(code **)(puVar28 + 0x10))(lVar32,"hknpExternMeshShapeData");
  }
  uVar44 = uVar30 + uVar29;
  FUN_02ed370c(lVar32);
  if (*param_2 == 2) {
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    lStack_98 = 0;
    FUN_02ed42dc(&local_a0,uVar44 * 2);
    if (0 < (int)uVar29) {
      uVar44 = 0;
      do {
        (**(code **)(*param_1 + 0x28))(param_1,uVar44,&local_e0);
        iVar31 = FUN_0324f5b0(&local_e0,&local_d0,local_c0,&local_80);
        if (iVar31 == 0) {
          auVar13._8_8_ = uStack_d8;
          auVar13._0_8_ = local_e0;
          auVar18._8_8_ = uStack_c8;
          auVar18._0_8_ = local_d0;
          auVar64 = NEON_fmin(auVar13,auVar18,4);
          auVar45 = NEON_fmax(auVar13,auVar18,4);
          auVar64 = NEON_fmin(auVar64,local_c0,4);
          auVar45 = NEON_fmax(auVar45,local_c0,4);
          uVar51 = (uint)local_90;
          if ((uint)local_90 == 0) {
            FUN_02ed42dc(&local_a0,1);
            uVar51 = (uint)local_90;
          }
          uVar39 = (ulong)uVar51;
          lVar33 = uVar39 * 2 + (ulong)uVar51;
          local_90 = CONCAT44(local_90._4_4_,
                              *(undefined4 *)
                               (auStack_b0 + local_a0 + 0x10 + (long)(int)uVar51 * 0x30));
          puVar34 = (undefined1 *)0x0;
          if (local_a0 != 0) {
            puVar34 = auStack_b0 + local_a0 + 0x10;
          }
          puVar35 = (undefined8 *)(puVar34 + lVar33 * 0x10);
          puVar35[1] = auVar64._8_8_;
          *puVar35 = auVar64._0_8_;
          puVar35[3] = auVar45._8_8_;
          puVar35[2] = auVar45._0_8_;
          *(undefined4 *)((long)puVar35 + 0x24) = 0;
          *(uint *)(puVar35 + 5) = uVar44;
          uVar41 = (ulong)uStack_88._4_4_;
          puVar34 = auStack_b0 + local_a0 + 0x10;
          puVar3 = (undefined1 *)0x0;
          if (local_a0 != 0) {
            puVar3 = puVar34;
          }
          if (uStack_88._4_4_ == 0) {
            uStack_88 = CONCAT44(uVar51,(undefined4)uStack_88);
            *(undefined4 *)(puVar3 + uVar39 * 0x30 + 0x20) = 0;
          }
          else {
            pauVar1 = (undefined1 (*) [12])(puVar3 + lVar33 * 0x10);
            fVar74 = (float)*(undefined8 *)(*pauVar1 + 8);
            fVar83 = (float)((ulong)*(undefined8 *)(*pauVar1 + 8) >> 0x20);
            auVar27 = *pauVar1;
            auVar24 = *pauVar1;
            fVar68 = (float)*(undefined8 *)*pauVar1;
            fVar73 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
            pauVar4 = (undefined1 (*) [12])(pauVar1[1] + 4);
            fVar61 = (float)*(undefined8 *)pauVar1[2];
            fVar82 = (float)((ulong)*(undefined8 *)pauVar1[2] >> 0x20);
            auVar26 = *pauVar4;
            auVar25 = *pauVar4;
            fVar56 = (float)*(undefined8 *)*pauVar4;
            fVar60 = (float)((ulong)*(undefined8 *)*pauVar4 >> 0x20);
            uVar53 = (uint)local_90;
            if ((uint)local_90 == 0) {
              iVar31 = FUN_02ed42dc(&local_a0,1);
              if (iVar31 < 0) goto LAB_02ed2c18;
              puVar34 = auStack_b0 + local_a0 + 0x10;
              uVar53 = (uint)local_90;
            }
            puVar3 = (undefined1 *)0x0;
            if (local_a0 != 0) {
              puVar3 = puVar34;
            }
            pauVar36 = (undefined1 (*) [16])(puVar3 + uVar41 * 0x30);
            local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)(puVar34 + (long)(int)uVar53 * 0x30));
            uVar55 = *(uint *)(pauVar36[2] + 4);
            if (uVar55 != 0) {
              fVar43 = fVar68 + fVar56;
              fVar50 = fVar73 + fVar60;
              fVar52 = fVar74 + fVar61;
              fVar56 = fVar56 - fVar68;
              fVar60 = fVar60 - fVar73;
              fVar61 = fVar61 - fVar74;
              do {
                puVar34 = (undefined1 *)0x0;
                if (local_a0 != 0) {
                  puVar34 = auStack_b0 + local_a0 + 0x10;
                }
                pfVar38 = (float *)(puVar34 + (ulong)*(uint *)(pauVar36[2] + 8) * 0x30);
                local_78[0] = (float *)(puVar34 + (ulong)uVar55 * 0x30);
                local_78[1] = pfVar38;
                auVar11._12_4_ = fVar83;
                auVar11._0_12_ = auVar24;
                auVar64 = NEON_fmin(*pauVar36,auVar11,4);
                auVar7._12_4_ = fVar82;
                auVar7._0_12_ = auVar25;
                auVar45 = NEON_fmax(pauVar36[1],auVar7,4);
                *(long *)(*pauVar36 + 8) = auVar64._8_8_;
                *(long *)*pauVar36 = auVar64._0_8_;
                *(long *)(pauVar36[1] + 8) = auVar45._8_8_;
                *(long *)pauVar36[1] = auVar45._0_8_;
                fVar76 = (*pfVar38 + pfVar38[4]) - fVar43;
                fVar77 = (pfVar38[1] + pfVar38[5]) - fVar50;
                fVar78 = (pfVar38[2] + pfVar38[6]) - fVar52;
                fVar79 = (pfVar38[3] + pfVar38[7]) - (fVar83 + fVar82);
                fVar68 = (*local_78[0] + local_78[0][4]) - fVar43;
                fVar73 = (local_78[0][1] + local_78[0][5]) - fVar50;
                fVar74 = (local_78[0][2] + local_78[0][6]) - fVar52;
                fVar75 = (local_78[0][3] + local_78[0][7]) - (fVar83 + fVar82);
                auVar63._0_4_ = fVar56 + (local_78[0][4] - *local_78[0]);
                auVar63._4_4_ = fVar60 + (local_78[0][5] - local_78[0][1]);
                auVar63._8_4_ = fVar61 + (local_78[0][6] - local_78[0][2]);
                auVar63._12_4_ = (fVar82 - fVar83) + (local_78[0][7] - local_78[0][3]);
                auVar66._0_4_ = fVar56 + (pfVar38[4] - *pfVar38);
                auVar66._4_4_ = fVar60 + (pfVar38[5] - pfVar38[1]);
                auVar66._8_4_ = fVar61 + (pfVar38[6] - pfVar38[2]);
                auVar66._12_4_ = (fVar82 - fVar83) + (pfVar38[7] - pfVar38[3]);
                auVar69._0_4_ = fVar68 * fVar68;
                auVar69._4_4_ = fVar73 * fVar73;
                auVar69._8_4_ = fVar74 * fVar74;
                auVar69._12_4_ = fVar75 * fVar75;
                auVar80 = NEON_ext(auVar69,auVar69,8,1);
                auVar81 = NEON_ext(auVar63,auVar63,8,1);
                auVar70._0_4_ = fVar76 * fVar76;
                auVar70._4_4_ = fVar77 * fVar77;
                auVar70._8_4_ = fVar78 * fVar78;
                auVar70._12_4_ = fVar79 * fVar79;
                auVar45 = NEON_ext(auVar70,auVar70,8,1);
                auVar64 = NEON_ext(auVar66,auVar66,8,1);
                pauVar36 = (undefined1 (*) [16])
                           local_78[(ulong)-(uint)((auVar70._0_4_ + auVar70._4_4_ + auVar45._0_4_) *
                                                   (auVar64._0_4_ + auVar66._0_4_ + auVar66._4_4_) <
                                                  (auVar69._0_4_ + auVar69._4_4_ + auVar80._0_4_) *
                                                  (auVar81._0_4_ + auVar63._0_4_ + auVar63._4_4_)) &
                                    1];
                uVar55 = *(uint *)(pauVar36[2] + 4);
              } while (uVar55 != 0);
            }
            uVar55 = *(uint *)pauVar36[2];
            if (uVar55 == 0) {
              uStack_88 = CONCAT44(uVar53,(undefined4)uStack_88);
              uVar37 = 0;
            }
            else {
              puVar34 = (undefined1 *)0x0;
              if (local_a0 != 0) {
                puVar34 = auStack_b0 + local_a0 + 0x10;
              }
              *(uint *)(puVar34 +
                       (ulong)(*(int *)(puVar34 + (ulong)uVar55 * 0x30 + 0x28) ==
                              (int)((ulong)((long)pauVar36 - (long)puVar34) >> 4) * -0x55555555) * 4
                       + (ulong)uVar55 * 0x30 + 0x24) = uVar53;
              uVar37 = *(undefined4 *)pauVar36[2];
            }
            puVar35 = (undefined8 *)(puVar3 + (ulong)uVar53 * 0x30);
            *(undefined4 *)(puVar35 + 4) = uVar37;
            puVar34 = (undefined1 *)0x0;
            if (local_a0 != 0) {
              puVar34 = auStack_b0 + local_a0 + 0x10;
            }
            *(int *)((long)puVar35 + 0x24) =
                 (int)((ulong)((long)pauVar36 - (long)puVar34) >> 4) * -0x55555555;
            *(uint *)(puVar35 + 5) = uVar51;
            *(uint *)pauVar36[2] = uVar53;
            puVar34 = (undefined1 *)0x0;
            if (local_a0 != 0) {
              puVar34 = auStack_b0 + local_a0 + 0x10;
            }
            *(uint *)(puVar34 + uVar39 * 0x30 + 0x20) = uVar53;
            auVar8._12_4_ = fVar82;
            auVar8._0_12_ = auVar26;
            auVar64 = NEON_fmax(pauVar36[1],auVar8,4);
            auVar12._12_4_ = fVar83;
            auVar12._0_12_ = auVar27;
            auVar45 = NEON_fmin(*pauVar36,auVar12,4);
            puVar35[1] = auVar45._8_8_;
            *puVar35 = auVar45._0_8_;
            puVar35[3] = auVar64._8_8_;
            puVar35[2] = auVar64._0_8_;
          }
LAB_02ed2c18:
          local_90 = CONCAT44(local_90._4_4_ + 1,(uint)local_90);
        }
        else if (param_3 != (long *)0x0) {
          iVar31 = (int)param_3[1];
          lVar33 = (long)iVar31;
          if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar31) {
            FUN_0133bb88(param_3,PTR_PTR_047d1a50,lVar33 + 1);
            iVar31 = (int)param_3[1];
          }
          *(uint *)(*param_3 + (long)iVar31 * 4) = uVar44;
          *(int *)(param_3 + 1) = (int)(lVar33 + 1);
        }
        uVar44 = uVar44 + 1;
      } while (uVar44 != uVar29);
    }
    if (0 < (int)uVar30) {
      uVar44 = 0;
      do {
        (**(code **)(*param_1 + 0x48))(param_1,uVar44,&local_e0);
        iVar31 = FUN_0324f5b0(&local_e0,&local_d0,local_c0,&local_80);
        if ((iVar31 == 0) &&
           (iVar31 = FUN_0324f5b0(&local_e0,local_c0,auStack_b0,&local_80), iVar31 == 0)) {
          auVar14._8_8_ = uStack_d8;
          auVar14._0_8_ = local_e0;
          auVar19._8_8_ = uStack_c8;
          auVar19._0_8_ = local_d0;
          auVar64 = NEON_fmin(auVar14,auVar19,4);
          auVar45 = NEON_fmax(auVar14,auVar19,4);
          auVar64 = NEON_fmin(auVar64,local_c0,4);
          auVar45 = NEON_fmax(auVar45,local_c0,4);
          auVar64 = NEON_fmin(auVar64,auStack_b0,4);
          auVar45 = NEON_fmax(auVar45,auStack_b0,4);
          uVar51 = (uint)local_90;
          if ((uint)local_90 == 0) {
            FUN_02ed42dc(&local_a0,1);
            uVar51 = (uint)local_90;
          }
          uVar39 = (ulong)uVar51;
          lVar33 = uVar39 * 2 + (ulong)uVar51;
          local_90 = CONCAT44(local_90._4_4_,
                              *(undefined4 *)
                               (auStack_b0 + local_a0 + 0x10 + (long)(int)uVar51 * 0x30));
          puVar34 = (undefined1 *)0x0;
          if (local_a0 != 0) {
            puVar34 = auStack_b0 + local_a0 + 0x10;
          }
          puVar35 = (undefined8 *)(puVar34 + lVar33 * 0x10);
          puVar35[1] = auVar64._8_8_;
          *puVar35 = auVar64._0_8_;
          puVar35[3] = auVar45._8_8_;
          puVar35[2] = auVar45._0_8_;
          *(undefined4 *)((long)puVar35 + 0x24) = 0;
          *(uint *)(puVar35 + 5) = uVar44 + uVar29;
          uVar41 = (ulong)uStack_88._4_4_;
          puVar34 = auStack_b0 + local_a0 + 0x10;
          puVar3 = (undefined1 *)0x0;
          if (local_a0 != 0) {
            puVar3 = puVar34;
          }
          if (uStack_88._4_4_ == 0) {
            uStack_88 = CONCAT44(uVar51,(undefined4)uStack_88);
            *(undefined4 *)(puVar3 + uVar39 * 0x30 + 0x20) = 0;
          }
          else {
            pauVar1 = (undefined1 (*) [12])(puVar3 + lVar33 * 0x10);
            fVar74 = (float)*(undefined8 *)(*pauVar1 + 8);
            fVar83 = (float)((ulong)*(undefined8 *)(*pauVar1 + 8) >> 0x20);
            auVar27 = *pauVar1;
            auVar24 = *pauVar1;
            fVar68 = (float)*(undefined8 *)*pauVar1;
            fVar73 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
            pauVar4 = (undefined1 (*) [12])(pauVar1[1] + 4);
            fVar61 = (float)*(undefined8 *)pauVar1[2];
            fVar82 = (float)((ulong)*(undefined8 *)pauVar1[2] >> 0x20);
            auVar26 = *pauVar4;
            auVar25 = *pauVar4;
            fVar56 = (float)*(undefined8 *)*pauVar4;
            fVar60 = (float)((ulong)*(undefined8 *)*pauVar4 >> 0x20);
            uVar53 = (uint)local_90;
            if ((uint)local_90 == 0) {
              iVar31 = FUN_02ed42dc(&local_a0,1);
              if (iVar31 < 0) goto LAB_02ed2f64;
              puVar34 = auStack_b0 + local_a0 + 0x10;
              uVar53 = (uint)local_90;
            }
            puVar3 = (undefined1 *)0x0;
            if (local_a0 != 0) {
              puVar3 = puVar34;
            }
            pauVar36 = (undefined1 (*) [16])(puVar3 + uVar41 * 0x30);
            local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)(puVar34 + (long)(int)uVar53 * 0x30));
            uVar55 = *(uint *)(pauVar36[2] + 4);
            if (uVar55 != 0) {
              fVar43 = fVar68 + fVar56;
              fVar50 = fVar73 + fVar60;
              fVar52 = fVar74 + fVar61;
              fVar56 = fVar56 - fVar68;
              fVar60 = fVar60 - fVar73;
              fVar61 = fVar61 - fVar74;
              do {
                puVar34 = (undefined1 *)0x0;
                if (local_a0 != 0) {
                  puVar34 = auStack_b0 + local_a0 + 0x10;
                }
                pfVar38 = (float *)(puVar34 + (ulong)*(uint *)(pauVar36[2] + 8) * 0x30);
                local_78[0] = (float *)(puVar34 + (ulong)uVar55 * 0x30);
                local_78[1] = pfVar38;
                auVar9._12_4_ = fVar83;
                auVar9._0_12_ = auVar24;
                auVar64 = NEON_fmin(*pauVar36,auVar9,4);
                auVar5._12_4_ = fVar82;
                auVar5._0_12_ = auVar25;
                auVar45 = NEON_fmax(pauVar36[1],auVar5,4);
                *(long *)(*pauVar36 + 8) = auVar64._8_8_;
                *(long *)*pauVar36 = auVar64._0_8_;
                *(long *)(pauVar36[1] + 8) = auVar45._8_8_;
                *(long *)pauVar36[1] = auVar45._0_8_;
                fVar76 = (*pfVar38 + pfVar38[4]) - fVar43;
                fVar77 = (pfVar38[1] + pfVar38[5]) - fVar50;
                fVar78 = (pfVar38[2] + pfVar38[6]) - fVar52;
                fVar79 = (pfVar38[3] + pfVar38[7]) - (fVar83 + fVar82);
                fVar68 = (*local_78[0] + local_78[0][4]) - fVar43;
                fVar73 = (local_78[0][1] + local_78[0][5]) - fVar50;
                fVar74 = (local_78[0][2] + local_78[0][6]) - fVar52;
                fVar75 = (local_78[0][3] + local_78[0][7]) - (fVar83 + fVar82);
                auVar65._0_4_ = fVar56 + (local_78[0][4] - *local_78[0]);
                auVar65._4_4_ = fVar60 + (local_78[0][5] - local_78[0][1]);
                auVar65._8_4_ = fVar61 + (local_78[0][6] - local_78[0][2]);
                auVar65._12_4_ = (fVar82 - fVar83) + (local_78[0][7] - local_78[0][3]);
                auVar67._0_4_ = fVar56 + (pfVar38[4] - *pfVar38);
                auVar67._4_4_ = fVar60 + (pfVar38[5] - pfVar38[1]);
                auVar67._8_4_ = fVar61 + (pfVar38[6] - pfVar38[2]);
                auVar67._12_4_ = (fVar82 - fVar83) + (pfVar38[7] - pfVar38[3]);
                auVar71._0_4_ = fVar68 * fVar68;
                auVar71._4_4_ = fVar73 * fVar73;
                auVar71._8_4_ = fVar74 * fVar74;
                auVar71._12_4_ = fVar75 * fVar75;
                auVar80 = NEON_ext(auVar71,auVar71,8,1);
                auVar81 = NEON_ext(auVar65,auVar65,8,1);
                auVar72._0_4_ = fVar76 * fVar76;
                auVar72._4_4_ = fVar77 * fVar77;
                auVar72._8_4_ = fVar78 * fVar78;
                auVar72._12_4_ = fVar79 * fVar79;
                auVar45 = NEON_ext(auVar72,auVar72,8,1);
                auVar64 = NEON_ext(auVar67,auVar67,8,1);
                pauVar36 = (undefined1 (*) [16])
                           local_78[(ulong)-(uint)((auVar72._0_4_ + auVar72._4_4_ + auVar45._0_4_) *
                                                   (auVar64._0_4_ + auVar67._0_4_ + auVar67._4_4_) <
                                                  (auVar71._0_4_ + auVar71._4_4_ + auVar80._0_4_) *
                                                  (auVar81._0_4_ + auVar65._0_4_ + auVar65._4_4_)) &
                                    1];
                uVar55 = *(uint *)(pauVar36[2] + 4);
              } while (uVar55 != 0);
            }
            uVar55 = *(uint *)pauVar36[2];
            if (uVar55 == 0) {
              uStack_88 = CONCAT44(uVar53,(undefined4)uStack_88);
              uVar37 = 0;
            }
            else {
              puVar34 = (undefined1 *)0x0;
              if (local_a0 != 0) {
                puVar34 = auStack_b0 + local_a0 + 0x10;
              }
              *(uint *)(puVar34 +
                       (ulong)(*(int *)(puVar34 + (ulong)uVar55 * 0x30 + 0x28) ==
                              (int)((ulong)((long)pauVar36 - (long)puVar34) >> 4) * -0x55555555) * 4
                       + (ulong)uVar55 * 0x30 + 0x24) = uVar53;
              uVar37 = *(undefined4 *)pauVar36[2];
            }
            puVar35 = (undefined8 *)(puVar3 + (ulong)uVar53 * 0x30);
            *(undefined4 *)(puVar35 + 4) = uVar37;
            puVar34 = (undefined1 *)0x0;
            if (local_a0 != 0) {
              puVar34 = auStack_b0 + local_a0 + 0x10;
            }
            *(int *)((long)puVar35 + 0x24) =
                 (int)((ulong)((long)pauVar36 - (long)puVar34) >> 4) * -0x55555555;
            *(uint *)(puVar35 + 5) = uVar51;
            *(uint *)pauVar36[2] = uVar53;
            puVar34 = (undefined1 *)0x0;
            if (local_a0 != 0) {
              puVar34 = auStack_b0 + local_a0 + 0x10;
            }
            *(uint *)(puVar34 + uVar39 * 0x30 + 0x20) = uVar53;
            auVar6._12_4_ = fVar82;
            auVar6._0_12_ = auVar26;
            auVar64 = NEON_fmax(pauVar36[1],auVar6,4);
            auVar10._12_4_ = fVar83;
            auVar10._0_12_ = auVar27;
            auVar45 = NEON_fmin(*pauVar36,auVar10,4);
            puVar35[1] = auVar45._8_8_;
            *puVar35 = auVar45._0_8_;
            puVar35[3] = auVar64._8_8_;
            puVar35[2] = auVar64._0_8_;
          }
LAB_02ed2f64:
          local_90 = CONCAT44(local_90._4_4_ + 1,(uint)local_90);
        }
        else if (param_4 != (long *)0x0) {
          iVar31 = (int)param_4[1];
          lVar33 = (long)iVar31;
          if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar31) {
            FUN_0133bb88(param_4,PTR_PTR_047d1a50,lVar33 + 1);
            iVar31 = (int)param_4[1];
          }
          *(uint *)(*param_4 + (long)iVar31 * 4) = uVar44;
          *(int *)(param_4 + 1) = (int)(lVar33 + 1);
        }
        uVar44 = uVar44 + 1;
      } while (uVar44 != uVar30);
    }
    iVar31 = FUN_02ed44bc(&local_a0,uStack_88._4_4_,1,0x20,0x10);
    if (-1 < iVar31) {
      FUN_02ed614c(&local_a0);
    }
    FUN_02ed3850(&local_a0,lVar32 + 0x20);
    if (lStack_98 < 0) {
      puVar34 = (undefined1 *)0x0;
      if (local_a0 != 0) {
        puVar34 = auStack_b0 + local_a0 + 0x10;
      }
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,puVar34,0);
    }
  }
  else {
    if ((int)uVar44 < 1) {
      local_150 = 0;
      local_154 = 0x80000000;
    }
    else {
      local_150 = (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x18))
                            (PTR_PTR_047d1a50 + 0x20,(ulong)uVar44 << 5);
      local_154 = uVar44;
    }
    puVar28 = PTR_DAT_047d1a08;
    local_e0 = (undefined *)0x78;
    puVar35 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_e0,0);
    if (*(code **)(puVar28 + 0x10) != (code *)0x0) {
      (**(code **)(puVar28 + 0x10))(puVar35,"hknpExternMeshShapeBuildContext");
    }
    memset(puVar35 + 1,0,0x70);
    *(undefined4 *)(puVar35 + 3) = 1;
    *(undefined1 *)((long)puVar35 + 0x1c) = 1;
    puVar35[5] = 0;
    *(undefined4 *)((long)puVar35 + 0x1d) = 0;
    puVar35[6] = 0x8000000000000000;
    puVar35[7] = 0;
    *puVar35 = &PTR_FUN_0460dea0;
    puVar35[0xb] = 0;
    puVar35[8] = 0x8000000000000000;
    puVar35[9] = 0;
    plVar42 = puVar35 + 10;
    *plVar42 = 0;
    local_e0 = (undefined *)0x100;
    __dest = (void *)(**(code **)puVar28)(0,&local_e0,0);
    __src = (void *)0x0;
    if (*plVar42 != 0) {
      __src = (void *)(*plVar42 + (long)plVar42);
    }
    memcpy(__dest,__src,(long)*(int *)(puVar35 + 0xb) << 7);
    if (*(int *)((long)puVar35 + 0x5c) < 0) {
      lVar33 = 0;
      if (*plVar42 != 0) {
        lVar33 = *plVar42 + (long)plVar42;
      }
      (**(code **)(puVar28 + 8))(0,lVar33,0);
    }
    lVar33 = 0;
    if (__dest != (void *)0x0) {
      lVar33 = (long)__dest - (long)plVar42;
    }
    puVar35[10] = lVar33;
    puVar35[0xb] = 0x8000000200000002;
    auVar45._8_4_ = 0x7f7fffee;
    auVar45._0_8_ = 0x7f7fffee7f7fffee;
    auVar45._12_4_ = 0x7f7fffee;
    puVar2 = (undefined8 *)(lVar33 + (long)plVar42);
    auVar64._8_4_ = 0xff7fffee;
    auVar64._0_8_ = 0xff7fffeeff7fffee;
    auVar64._12_4_ = 0xff7fffee;
    *(undefined2 *)(puVar2 + 0xe) = 0;
    uVar54 = auVar45._8_8_;
    puVar2[1] = uVar54;
    *puVar2 = 0x7f7fffee7f7fffee;
    uVar62 = auVar64._8_8_;
    puVar2[3] = uVar62;
    puVar2[2] = 0xff7fffeeff7fffee;
    puVar2[5] = uVar54;
    puVar2[4] = 0x7f7fffee7f7fffee;
    puVar2[7] = uVar62;
    puVar2[6] = 0xff7fffeeff7fffee;
    puVar2[9] = uVar54;
    puVar2[8] = 0x7f7fffee7f7fffee;
    puVar2[0xb] = uVar62;
    puVar2[10] = 0xff7fffeeff7fffee;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    lVar33 = puVar35[10];
    *(undefined8 *)((long)plVar42 + lVar33 + 0xe0) = 0;
    *(undefined8 *)((long)plVar42 + lVar33 + 0xe8) = 0;
    *(undefined2 *)((long)plVar42 + lVar33 + 0xf0) = 0;
    *(undefined8 *)((long)plVar42 + lVar33 + 0x88) = uVar54;
    *(undefined8 *)((long)plVar42 + lVar33 + 0x80) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar42 + lVar33 + 0x98) = uVar62;
    *(undefined8 *)((long)plVar42 + lVar33 + 0x90) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar42 + lVar33 + 0xa8) = uVar54;
    *(undefined8 *)((long)plVar42 + lVar33 + 0xa0) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar42 + lVar33 + 0xb8) = uVar62;
    *(undefined8 *)((long)plVar42 + lVar33 + 0xb0) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar42 + lVar33 + 200) = uVar54;
    *(undefined8 *)((long)plVar42 + lVar33 + 0xc0) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar42 + lVar33 + 0xd8) = uVar62;
    *(undefined8 *)((long)plVar42 + lVar33 + 0xd0) = 0xff7fffeeff7fffee;
    *(undefined1 *)(puVar35 + 0xc) = 1;
    puVar35[0xd] = 0;
    puVar35[0xe] = 0;
    *(undefined8 **)(lVar32 + 0x68) = puVar35;
    if ((int)(*(uint *)((long)puVar35 + 0x34) & 0x7fffffff) < (int)uVar44) {
      FUN_02e7ff18(puVar35 + 5,PTR_PTR_047d1a50,(long)(int)uVar44);
    }
    if (*param_2 == 0) {
      (**(code **)(*param_1 + 0x80))(param_1);
      uVar37 = 2;
    }
    else {
      uVar37 = 0;
    }
    *(undefined4 *)(*(long *)(lVar32 + 0x68) + 0xc) = uVar37;
    puVar28 = PTR_PTR_047d1a50;
    if (0 < (int)uVar29) {
      if (param_3 == (long *)0x0) {
        puVar35 = (undefined8 *)(local_150 + 0x10);
        uVar39 = 0;
        do {
          (**(code **)(*param_1 + 0x28))(param_1,uVar39 & 0xffffffff,&local_e0);
          iVar31 = FUN_0324f5b0(&local_e0,&local_d0,local_c0,&local_80);
          if (iVar31 == 0) {
            auVar81._8_8_ = uStack_d8;
            auVar81._0_8_ = local_e0;
            auVar21._8_8_ = uStack_c8;
            auVar21._0_8_ = local_d0;
            auVar64 = NEON_fmin(auVar81,auVar21,4);
            auVar45 = NEON_fmax(auVar81,auVar21,4);
            auVar64 = NEON_fmin(auVar64,local_c0,4);
            lVar40 = *(long *)(lVar32 + 0x68);
            auVar45 = NEON_fmax(auVar45,local_c0,4);
            iVar31 = *(int *)(lVar40 + 0x30);
            lVar33 = (long)iVar31;
            auVar80._0_8_ =
                 CONCAT44((auVar64._4_4_ + auVar45._4_4_) * 0.5,
                          (auVar64._0_4_ + auVar45._0_4_) * 0.5);
            auVar80._8_4_ = (auVar64._8_4_ + auVar45._8_4_) * 0.5;
            auVar80._12_4_ = (auVar64._12_4_ + auVar45._12_4_) * 0.5;
            if ((int)(*(uint *)(lVar40 + 0x34) & 0x7fffffff) <= iVar31) {
              FUN_02eaf0f8(lVar40 + 0x28,puVar28,lVar33 + 1);
              auVar80._8_8_ = auVar80._8_8_;
              iVar31 = *(int *)(lVar40 + 0x30);
            }
            uVar44 = (uint)(auVar80._0_4_ >> 0x1f) >> 1;
            uVar51 = (uint)(auVar80._4_4_ >> 0x1f) >> 1;
            uVar53 = (uint)(auVar80._8_4_ >> 0x1f) >> 1;
            uVar55 = (uint)(auVar80._12_4_ >> 0x1f) >> 1;
            puVar2 = (undefined8 *)(*(long *)(lVar40 + 0x28) + (long)iVar31 * 0x10);
            auVar47._0_8_ =
                 CONCAT17((byte)((char)auVar80[7] >> 7) >> 1 ^ auVar80[7],
                          CONCAT16((byte)(uVar51 >> 0x10) ^ auVar80[6],
                                   CONCAT15((byte)(uVar51 >> 8) ^ auVar80[5],
                                            CONCAT14((byte)uVar51 ^ auVar80[4],
                                                     CONCAT13((byte)((char)auVar80[3] >> 7) >> 1 ^
                                                              auVar80[3],
                                                              CONCAT12((byte)(uVar44 >> 0x10) ^
                                                                       auVar80[2],
                                                                       CONCAT11((byte)(uVar44 >> 8)
                                                                                ^ auVar80[1],
                                                                                (byte)uVar44 ^
                                                                                auVar80[0])))))));
            auVar47[8] = (byte)uVar53 ^ auVar80[8];
            auVar47[9] = (byte)(uVar53 >> 8) ^ auVar80[9];
            auVar47[10] = (byte)(uVar53 >> 0x10) ^ auVar80[10];
            auVar47[0xb] = (byte)((char)auVar80[0xb] >> 7) >> 1 ^ auVar80[0xb];
            auVar47[0xc] = (byte)uVar55 ^ auVar80[0xc];
            auVar47[0xd] = (byte)(uVar55 >> 8) ^ auVar80[0xd];
            auVar47[0xe] = (byte)(((uint3)(auVar80._13_3_ >> 0x17) >> 1) >> 8) ^ auVar80[0xe];
            auVar47[0xf] = (byte)((char)auVar80[0xf] >> 7) >> 1 ^ auVar80[0xf];
            puVar2[1] = auVar47._8_8_;
            *puVar2 = auVar47._0_8_;
            *(int *)((long)puVar2 + 0xc) = (int)uVar39;
            *(int *)(lVar40 + 0x30) = (int)(lVar33 + 1);
            puVar35[-1] = auVar64._8_8_;
            puVar35[-2] = auVar64._0_8_;
            puVar35[1] = auVar45._8_8_;
            *puVar35 = auVar45._0_8_;
          }
          uVar39 = uVar39 + 1;
          puVar35 = puVar35 + 4;
        } while (uVar29 != uVar39);
      }
      else {
        uVar39 = 0;
        puVar35 = (undefined8 *)(local_150 + 0x10);
        do {
          (**(code **)(*param_1 + 0x28))(param_1,uVar39 & 0xffffffff,&local_e0);
          iVar31 = FUN_0324f5b0(&local_e0,&local_d0,local_c0,&local_80);
          if (iVar31 == 0) {
            auVar15._8_8_ = uStack_d8;
            auVar15._0_8_ = local_e0;
            auVar20._8_8_ = uStack_c8;
            auVar20._0_8_ = local_d0;
            auVar64 = NEON_fmin(auVar15,auVar20,4);
            auVar45 = NEON_fmax(auVar15,auVar20,4);
            auVar64 = NEON_fmin(auVar64,local_c0,4);
            lVar40 = *(long *)(lVar32 + 0x68);
            auVar45 = NEON_fmax(auVar45,local_c0,4);
            iVar31 = *(int *)(lVar40 + 0x30);
            lVar33 = (long)iVar31;
            auVar57._0_8_ =
                 CONCAT44((auVar64._4_4_ + auVar45._4_4_) * 0.5,
                          (auVar64._0_4_ + auVar45._0_4_) * 0.5);
            auVar57._8_4_ = (auVar64._8_4_ + auVar45._8_4_) * 0.5;
            auVar57._12_4_ = (auVar64._12_4_ + auVar45._12_4_) * 0.5;
            if ((int)(*(uint *)(lVar40 + 0x34) & 0x7fffffff) <= iVar31) {
              FUN_02eaf0f8(lVar40 + 0x28,PTR_PTR_047d1a50,lVar33 + 1);
              auVar57._8_8_ = auVar57._8_8_;
              iVar31 = *(int *)(lVar40 + 0x30);
            }
            uVar44 = (uint)(auVar57._0_4_ >> 0x1f) >> 1;
            uVar51 = (uint)(auVar57._4_4_ >> 0x1f) >> 1;
            uVar53 = (uint)(auVar57._8_4_ >> 0x1f) >> 1;
            uVar55 = (uint)(auVar57._12_4_ >> 0x1f) >> 1;
            puVar2 = (undefined8 *)(*(long *)(lVar40 + 0x28) + (long)iVar31 * 0x10);
            auVar46._0_8_ =
                 CONCAT17((byte)((char)auVar57[7] >> 7) >> 1 ^ auVar57[7],
                          CONCAT16((byte)(uVar51 >> 0x10) ^ auVar57[6],
                                   CONCAT15((byte)(uVar51 >> 8) ^ auVar57[5],
                                            CONCAT14((byte)uVar51 ^ auVar57[4],
                                                     CONCAT13((byte)((char)auVar57[3] >> 7) >> 1 ^
                                                              auVar57[3],
                                                              CONCAT12((byte)(uVar44 >> 0x10) ^
                                                                       auVar57[2],
                                                                       CONCAT11((byte)(uVar44 >> 8)
                                                                                ^ auVar57[1],
                                                                                (byte)uVar44 ^
                                                                                auVar57[0])))))));
            auVar46[8] = (byte)uVar53 ^ auVar57[8];
            auVar46[9] = (byte)(uVar53 >> 8) ^ auVar57[9];
            auVar46[10] = (byte)(uVar53 >> 0x10) ^ auVar57[10];
            auVar46[0xb] = (byte)((char)auVar57[0xb] >> 7) >> 1 ^ auVar57[0xb];
            auVar46[0xc] = (byte)uVar55 ^ auVar57[0xc];
            auVar46[0xd] = (byte)(uVar55 >> 8) ^ auVar57[0xd];
            auVar46[0xe] = (byte)(((uint3)(auVar57._13_3_ >> 0x17) >> 1) >> 8) ^ auVar57[0xe];
            auVar46[0xf] = (byte)((char)auVar57[0xf] >> 7) >> 1 ^ auVar57[0xf];
            puVar2[1] = auVar46._8_8_;
            *puVar2 = auVar46._0_8_;
            *(int *)((long)puVar2 + 0xc) = (int)uVar39;
            *(int *)(lVar40 + 0x30) = (int)(lVar33 + 1);
            puVar35[-1] = auVar64._8_8_;
            puVar35[-2] = auVar64._0_8_;
            puVar35[1] = auVar45._8_8_;
            *puVar35 = auVar45._0_8_;
          }
          else {
            iVar31 = (int)param_3[1];
            lVar33 = (long)iVar31;
            if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar31) {
              FUN_0133bb88(param_3,PTR_PTR_047d1a50,lVar33 + 1);
              iVar31 = (int)param_3[1];
            }
            *(int *)(*param_3 + (long)iVar31 * 4) = (int)uVar39;
            *(int *)(param_3 + 1) = (int)(lVar33 + 1);
          }
          uVar39 = uVar39 + 1;
          puVar35 = puVar35 + 4;
        } while (uVar29 != uVar39);
      }
    }
    puVar28 = PTR_PTR_047d1a50;
    if (0 < (int)uVar30) {
      if (param_4 == (long *)0x0) {
        puVar35 = (undefined8 *)(local_150 + (long)(int)uVar29 * 0x20 + 0x10);
        uVar39 = 0;
        do {
          (**(code **)(*param_1 + 0x48))(param_1,uVar39 & 0xffffffff,&local_e0);
          iVar31 = FUN_0324f5b0(&local_e0,&local_d0,local_c0,&local_80);
          if ((iVar31 == 0) &&
             (iVar31 = FUN_0324f5b0(&local_e0,local_c0,auStack_b0,&local_80), iVar31 == 0)) {
            auVar17._8_8_ = uStack_d8;
            auVar17._0_8_ = local_e0;
            auVar23._8_8_ = uStack_c8;
            auVar23._0_8_ = local_d0;
            auVar64 = NEON_fmin(auVar17,auVar23,4);
            auVar45 = NEON_fmax(auVar17,auVar23,4);
            lVar40 = *(long *)(lVar32 + 0x68);
            iVar31 = *(int *)(lVar40 + 0x30);
            lVar33 = (long)iVar31;
            auVar64 = NEON_fmin(auVar64,local_c0,4);
            auVar45 = NEON_fmax(auVar45,local_c0,4);
            auVar64 = NEON_fmin(auVar64,auStack_b0,4);
            auVar45 = NEON_fmax(auVar45,auStack_b0,4);
            auVar59._0_8_ =
                 CONCAT44((auVar64._4_4_ + auVar45._4_4_) * 0.5,
                          (auVar64._0_4_ + auVar45._0_4_) * 0.5);
            auVar59._8_4_ = (auVar64._8_4_ + auVar45._8_4_) * 0.5;
            auVar59._12_4_ = (auVar64._12_4_ + auVar45._12_4_) * 0.5;
            if ((int)(*(uint *)(lVar40 + 0x34) & 0x7fffffff) <= iVar31) {
              FUN_02eaf0f8(lVar40 + 0x28,puVar28,lVar33 + 1);
              auVar59._8_8_ = auVar59._8_8_;
              iVar31 = *(int *)(lVar40 + 0x30);
            }
            uVar44 = (uint)(auVar59._0_4_ >> 0x1f) >> 1;
            uVar51 = (uint)(auVar59._4_4_ >> 0x1f) >> 1;
            uVar53 = (uint)(auVar59._8_4_ >> 0x1f) >> 1;
            uVar55 = (uint)(auVar59._12_4_ >> 0x1f) >> 1;
            puVar2 = (undefined8 *)(*(long *)(lVar40 + 0x28) + (long)iVar31 * 0x10);
            auVar49._0_8_ =
                 CONCAT17((byte)((char)auVar59[7] >> 7) >> 1 ^ auVar59[7],
                          CONCAT16((byte)(uVar51 >> 0x10) ^ auVar59[6],
                                   CONCAT15((byte)(uVar51 >> 8) ^ auVar59[5],
                                            CONCAT14((byte)uVar51 ^ auVar59[4],
                                                     CONCAT13((byte)((char)auVar59[3] >> 7) >> 1 ^
                                                              auVar59[3],
                                                              CONCAT12((byte)(uVar44 >> 0x10) ^
                                                                       auVar59[2],
                                                                       CONCAT11((byte)(uVar44 >> 8)
                                                                                ^ auVar59[1],
                                                                                (byte)uVar44 ^
                                                                                auVar59[0])))))));
            auVar49[8] = (byte)uVar53 ^ auVar59[8];
            auVar49[9] = (byte)(uVar53 >> 8) ^ auVar59[9];
            auVar49[10] = (byte)(uVar53 >> 0x10) ^ auVar59[10];
            auVar49[0xb] = (byte)((char)auVar59[0xb] >> 7) >> 1 ^ auVar59[0xb];
            auVar49[0xc] = (byte)uVar55 ^ auVar59[0xc];
            auVar49[0xd] = (byte)(uVar55 >> 8) ^ auVar59[0xd];
            auVar49[0xe] = (byte)(((uint3)(auVar59._13_3_ >> 0x17) >> 1) >> 8) ^ auVar59[0xe];
            auVar49[0xf] = (byte)((char)auVar59[0xf] >> 7) >> 1 ^ auVar59[0xf];
            puVar2[1] = auVar49._8_8_;
            *puVar2 = auVar49._0_8_;
            *(uint *)((long)puVar2 + 0xc) = uVar29 + (int)uVar39;
            *(int *)(lVar40 + 0x30) = (int)(lVar33 + 1);
            puVar35[-1] = auVar64._8_8_;
            puVar35[-2] = auVar64._0_8_;
            puVar35[1] = auVar45._8_8_;
            *puVar35 = auVar45._0_8_;
          }
          uVar39 = uVar39 + 1;
          puVar35 = puVar35 + 4;
        } while (uVar30 != uVar39);
      }
      else {
        puVar35 = (undefined8 *)(local_150 + (long)(int)uVar29 * 0x20 + 0x10);
        uVar39 = 0;
        do {
          (**(code **)(*param_1 + 0x48))(param_1,uVar39 & 0xffffffff,&local_e0);
          iVar31 = FUN_0324f5b0(&local_e0,&local_d0,local_c0,&local_80);
          if ((iVar31 == 0) &&
             (iVar31 = FUN_0324f5b0(&local_e0,local_c0,auStack_b0,&local_80), iVar31 == 0)) {
            auVar16._8_8_ = uStack_d8;
            auVar16._0_8_ = local_e0;
            auVar22._8_8_ = uStack_c8;
            auVar22._0_8_ = local_d0;
            auVar64 = NEON_fmin(auVar16,auVar22,4);
            auVar45 = NEON_fmax(auVar16,auVar22,4);
            lVar40 = *(long *)(lVar32 + 0x68);
            iVar31 = *(int *)(lVar40 + 0x30);
            lVar33 = (long)iVar31;
            auVar64 = NEON_fmin(auVar64,local_c0,4);
            auVar45 = NEON_fmax(auVar45,local_c0,4);
            auVar64 = NEON_fmin(auVar64,auStack_b0,4);
            auVar45 = NEON_fmax(auVar45,auStack_b0,4);
            auVar58._0_8_ =
                 CONCAT44((auVar64._4_4_ + auVar45._4_4_) * 0.5,
                          (auVar64._0_4_ + auVar45._0_4_) * 0.5);
            auVar58._8_4_ = (auVar64._8_4_ + auVar45._8_4_) * 0.5;
            auVar58._12_4_ = (auVar64._12_4_ + auVar45._12_4_) * 0.5;
            if ((int)(*(uint *)(lVar40 + 0x34) & 0x7fffffff) <= iVar31) {
              FUN_02eaf0f8(lVar40 + 0x28,puVar28,lVar33 + 1);
              auVar58._8_8_ = auVar58._8_8_;
              iVar31 = *(int *)(lVar40 + 0x30);
            }
            uVar44 = (uint)(auVar58._0_4_ >> 0x1f) >> 1;
            uVar51 = (uint)(auVar58._4_4_ >> 0x1f) >> 1;
            uVar53 = (uint)(auVar58._8_4_ >> 0x1f) >> 1;
            uVar55 = (uint)(auVar58._12_4_ >> 0x1f) >> 1;
            puVar2 = (undefined8 *)(*(long *)(lVar40 + 0x28) + (long)iVar31 * 0x10);
            auVar48._0_8_ =
                 CONCAT17((byte)((char)auVar58[7] >> 7) >> 1 ^ auVar58[7],
                          CONCAT16((byte)(uVar51 >> 0x10) ^ auVar58[6],
                                   CONCAT15((byte)(uVar51 >> 8) ^ auVar58[5],
                                            CONCAT14((byte)uVar51 ^ auVar58[4],
                                                     CONCAT13((byte)((char)auVar58[3] >> 7) >> 1 ^
                                                              auVar58[3],
                                                              CONCAT12((byte)(uVar44 >> 0x10) ^
                                                                       auVar58[2],
                                                                       CONCAT11((byte)(uVar44 >> 8)
                                                                                ^ auVar58[1],
                                                                                (byte)uVar44 ^
                                                                                auVar58[0])))))));
            auVar48[8] = (byte)uVar53 ^ auVar58[8];
            auVar48[9] = (byte)(uVar53 >> 8) ^ auVar58[9];
            auVar48[10] = (byte)(uVar53 >> 0x10) ^ auVar58[10];
            auVar48[0xb] = (byte)((char)auVar58[0xb] >> 7) >> 1 ^ auVar58[0xb];
            auVar48[0xc] = (byte)uVar55 ^ auVar58[0xc];
            auVar48[0xd] = (byte)(uVar55 >> 8) ^ auVar58[0xd];
            auVar48[0xe] = (byte)(((uint3)(auVar58._13_3_ >> 0x17) >> 1) >> 8) ^ auVar58[0xe];
            auVar48[0xf] = (byte)((char)auVar58[0xf] >> 7) >> 1 ^ auVar58[0xf];
            puVar2[1] = auVar48._8_8_;
            *puVar2 = auVar48._0_8_;
            *(uint *)((long)puVar2 + 0xc) = uVar29 + (int)uVar39;
            *(int *)(lVar40 + 0x30) = (int)(lVar33 + 1);
            puVar35[-1] = auVar64._8_8_;
            puVar35[-2] = auVar64._0_8_;
            puVar35[1] = auVar45._8_8_;
            *puVar35 = auVar45._0_8_;
          }
          else {
            iVar31 = (int)param_4[1];
            lVar33 = (long)iVar31;
            if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar31) {
              FUN_0133bb88(param_4,puVar28,lVar33 + 1);
              iVar31 = (int)param_4[1];
            }
            *(int *)(*param_4 + (long)iVar31 * 4) = (int)uVar39;
            *(int *)(param_4 + 1) = (int)(lVar33 + 1);
          }
          uVar39 = uVar39 + 1;
          puVar35 = puVar35 + 4;
        } while (uVar30 != uVar39);
      }
    }
    local_e0 = PTR_DAT_047e3470 + 0x10;
    local_d0 = local_150;
    uStack_d8 = 0;
    FUN_0325109c(*(undefined8 *)(lVar32 + 0x68),lVar32 + 0x50,&local_e0);
    if ((local_150 != 0) && (-1 < (int)local_154)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                (PTR_PTR_047d1a50 + 0x20,local_150,(ulong)local_154 << 5);
    }
  }
  return lVar32;
}


