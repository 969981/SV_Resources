/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02eaac90; name: FUN_02eaac90
 */


void FUN_02eaac90(long param_1,int param_2)

{
  ushort *puVar1;
  long *plVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined1 (*pauVar5) [12];
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined1 (*pauVar9) [12];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined *puVar21;
  uint uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  int iVar25;
  long lVar26;
  ulong uVar27;
  long *plVar28;
  undefined1 (*pauVar29) [16];
  long lVar30;
  long lVar31;
  byte bVar32;
  long lVar33;
  uint uVar34;
  long *plVar35;
  ulong uVar36;
  uint uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar44;
  undefined1 auVar43 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  float fVar54;
  float fVar55;
  float fVar61;
  float fVar62;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar63;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar64;
  float fVar65;
  float fVar68;
  float fVar69;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar73;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined1 local_d0 [16];
  long *local_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 *local_88;
  ulong local_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  lVar33 = tpidr_el0;
  lVar26 = *(long *)(lVar33 + 0x1000b8);
  if (lVar26 == 0) {
    lVar26 = FUN_00e5d3b4();
    *(long *)(lVar33 + 0x1000b8) = lVar26;
  }
  plVar35 = *(long **)(lVar26 + 0x3e0);
  if (plVar35 != (long *)0x0) {
    lVar26 = *plVar35;
    if (*(code **)(lVar26 + 0x18) != (code *)0x0) {
      (**(code **)(lVar26 + 0x18))("BuildBoundingVolume",0x13,*(undefined8 *)(lVar26 + 0x28));
    }
    puVar24 = (undefined8 *)plVar35[2];
    uVar27 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
    if ((uVar27 <= (ulong)plVar35[3]) && (plVar35[2] = uVar27, puVar24 != (undefined8 *)0x0)) {
      *puVar24 = "TtBuildBoundingVolume";
      uVar23 = nn::os::GetSystemTick();
      puVar24[1] = uVar23;
    }
    if (((*(byte *)(lVar26 + 0x38) & 1) != 0) && (plVar35[6] != 0)) {
      puVar24 = (undefined8 *)plVar35[2];
      uVar27 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
      if ((uVar27 <= (ulong)plVar35[3]) && (plVar35[2] = uVar27, puVar24 != (undefined8 *)0x0)) {
        *puVar24 = &DAT_03c4e575;
        puVar24[1] = *(undefined8 *)(plVar35[6] + 8);
      }
    }
  }
  *(char *)(param_1 + 0x100) = (char)param_2;
  local_b8 = plVar35;
  if (param_2 == 2) {
    FUN_016c5c2c(param_1);
    goto LAB_02eab950;
  }
  plVar2 = (long *)(param_1 + 200);
  FUN_02eac5d8(plVar2,*(int *)(param_1 + 0x50) << 1);
  if (*(int *)(param_1 + 0x50) < 1) goto LAB_02eab950;
  lVar26 = *(long *)(lVar33 + 0x1000b8);
  if (lVar26 == 0) {
    lVar26 = FUN_00e5d3b4();
    *(long *)(lVar33 + 0x1000b8) = lVar26;
  }
  plVar35 = *(long **)(lVar26 + 0x3e0);
  if (plVar35 != (long *)0x0) {
    lVar26 = *plVar35;
    if (*(code **)(lVar26 + 0x18) != (code *)0x0) {
      (**(code **)(lVar26 + 0x18))("InsertAabbs",0xb,*(undefined8 *)(lVar26 + 0x28));
    }
    puVar24 = (undefined8 *)plVar35[2];
    uVar27 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
    if ((uVar27 <= (ulong)plVar35[3]) && (plVar35[2] = uVar27, puVar24 != (undefined8 *)0x0)) {
      *puVar24 = "TtInsertAabbs";
      uVar23 = nn::os::GetSystemTick();
      puVar24[1] = uVar23;
    }
    if (((*(byte *)(lVar26 + 0x38) & 1) != 0) && (plVar35[6] != 0)) {
      puVar24 = (undefined8 *)plVar35[2];
      uVar27 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
      if ((uVar27 <= (ulong)plVar35[3]) && (plVar35[2] = uVar27, puVar24 != (undefined8 *)0x0)) {
        *puVar24 = &DAT_03c4e575;
        puVar24[1] = *(undefined8 *)(plVar35[6] + 8);
      }
    }
  }
  plVar35 = (long *)(param_1 + 0x48);
  uVar34 = 0;
  do {
    uVar37 = uVar34;
    if ((*(uint *)(param_1 + 0x50) & ((int)*(uint *)(param_1 + 0x50) >> 0x1f ^ 0xffffffffU)) ==
        uVar37) goto LAB_02eab298;
    lVar26 = *plVar35;
    uVar34 = uVar37 + 1;
  } while ((*(byte *)((long)plVar35 + (ulong)(uVar37 & 0xffff) * 0x40 + lVar26 + 0x1e) & 1) != 0);
  if (uVar37 + 1 == 0) {
LAB_02eab298:
    uVar34 = 0;
  }
  else {
    uVar34 = 0;
    do {
      pfVar3 = (float *)((long)plVar35 + (ulong)(uVar37 & 0xffff) * 0x40 + lVar26);
      fVar42 = *pfVar3;
      fVar44 = pfVar3[1];
      fVar41 = pfVar3[2];
      fVar45 = pfVar3[3];
      fVar46 = fVar44 + fVar44;
      fVar47 = fVar41 + fVar41;
      fVar49 = (fVar42 + fVar42) * fVar42;
      fVar40 = (fVar42 + fVar42) * fVar45;
      fVar64 = 1.0 - fVar41 * fVar47;
      fVar73 = fVar47 * fVar44 - fVar40;
      fVar41 = fVar47 * fVar42 + fVar46 * fVar45;
      uStack_98 = (float *)CONCAT44(fVar73,fVar47 * fVar42 - fVar46 * fVar45);
      local_a0 = (undefined8 *)CONCAT44(fVar46 * fVar42 + fVar47 * fVar45,fVar64 - fVar46 * fVar44);
      local_88 = (undefined8 *)CONCAT44(fVar41,fVar47 * fVar44 + fVar40);
      local_90 = CONCAT44(fVar64 - fVar49,fVar46 * fVar42 - fVar47 * fVar45);
      uStack_78 = (ulong)(uint)((1.0 - fVar49) - fVar46 * fVar44);
      local_80 = CONCAT44(fVar73,fVar41);
      uStack_68 = (ulong)SUB164(*(undefined1 (*) [16])(pfVar3 + 4),8);
      uStack_70 = SUB168(*(undefined1 (*) [16])(pfVar3 + 4),0);
      lVar30 = *(long *)(pfVar3 + 0xc);
      lVar26 = 0;
      if (lVar30 != 0) {
        lVar26 = lVar30 + (long)(pfVar3 + 0xc);
      }
      if ((*(byte *)((long)pfVar3 + 0x1e) >> 3 & 1) == 0) {
        (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar26 + 0x18) * 0x200 + 0x18))
                  (lVar26,&local_a0,&local_e0);
      }
      else {
        auVar57._0_12_ = SUB1612(*(undefined1 (*) [16])(pfVar3 + 8),0);
        auVar57._12_4_ = 0x3f800000;
        uStack_a8 = auVar57._8_8_;
        local_b0 = SUB168(*(undefined1 (*) [16])(pfVar3 + 8),0);
        FUN_02f07fe8(lVar26,&local_a0,&local_b0,(*(byte *)((long)pfVar3 + 0x1e) >> 5 ^ 0xff) & 1,
                     &local_e0);
      }
      uVar6 = *(ushort *)(param_1 + 0xd8);
      if (uVar6 == 0) {
        FUN_02eac5d8(plVar2,1);
        uVar6 = *(ushort *)(param_1 + 0xd8);
      }
      uVar27 = (ulong)uVar6;
      lVar26 = *(long *)(param_1 + 200) + (long)plVar2;
      lVar30 = 0;
      if (*(long *)(param_1 + 200) != 0) {
        lVar30 = lVar26;
      }
      puVar4 = (undefined4 *)(lVar30 + uVar27 * 0x20);
      *(undefined2 *)(param_1 + 0xd8) = *(undefined2 *)(lVar26 + uVar27 * 0x20);
      *(undefined2 *)(puVar4 + 7) = 0;
      *(short *)((long)puVar4 + 0x1e) = (short)uVar37;
      puVar4[2] = uStack_d8;
      puVar4[3] = puVar4[3];
      *puVar4 = (undefined4)local_e0;
      puVar4[1] = local_e0._4_4_;
      auVar66._0_12_ = local_d0._0_12_;
      auVar66._12_4_ = puVar4[7];
      *(long *)(puVar4 + 6) = auVar66._8_8_;
      *(long *)(puVar4 + 4) = local_d0._0_8_;
      lVar31 = *(long *)(param_1 + 200);
      uVar7 = *(ushort *)(param_1 + 0xe4);
      lVar26 = lVar31 + (long)plVar2;
      lVar30 = 0;
      if (lVar31 != 0) {
        lVar30 = lVar26;
      }
      pauVar5 = (undefined1 (*) [12])(lVar30 + uVar27 * 0x20);
      if ((ulong)uVar7 == 0) {
        *(ushort *)(param_1 + 0xe4) = uVar6;
        *(undefined4 *)pauVar5[1] = 0x3f000000;
      }
      else {
        fVar46 = (float)*(undefined8 *)(*pauVar5 + 8);
        fVar47 = (float)((ulong)*(undefined8 *)(*pauVar5 + 8) >> 0x20);
        auVar19 = *pauVar5;
        auVar17 = *pauVar5;
        fVar45 = (float)*(undefined8 *)*pauVar5;
        fVar40 = (float)((ulong)*(undefined8 *)*pauVar5 >> 0x20);
        pauVar9 = (undefined1 (*) [12])(pauVar5[1] + 4);
        fVar41 = (float)*(undefined8 *)pauVar5[2];
        auVar20 = *pauVar9;
        auVar18 = *pauVar9;
        fVar42 = (float)*(undefined8 *)*pauVar9;
        fVar44 = (float)((ulong)*(undefined8 *)*pauVar9 >> 0x20);
        uVar8 = *(ushort *)(param_1 + 0xd8);
        if (uVar8 == 0) {
          FUN_02eac5d8(plVar2,1);
          lVar31 = *(long *)(param_1 + 200);
          lVar26 = lVar31 + (long)plVar2;
          uVar8 = *(ushort *)(param_1 + 0xd8);
        }
        *(undefined2 *)(param_1 + 0xd8) = *(undefined2 *)(lVar26 + (ulong)uVar8 * 0x20);
        lVar30 = 0;
        if (lVar31 != 0) {
          lVar30 = lVar26;
        }
        puVar24 = (undefined8 *)(lVar30 + (ulong)uVar8 * 0x20);
        pauVar29 = (undefined1 (*) [16])(lVar30 + (ulong)uVar7 * 0x20);
        uVar7 = *(ushort *)(pauVar29[1] + 0xc);
        if (uVar7 != 0) {
          fVar49 = fVar45 + fVar42;
          fVar64 = fVar40 + fVar44;
          fVar73 = fVar46 + fVar41;
          fVar42 = fVar42 - fVar45;
          fVar44 = fVar44 - fVar40;
          fVar41 = fVar41 - fVar46;
          while( true ) {
            lVar26 = 0;
            if (lVar31 != 0) {
              lVar26 = lVar31 + (long)plVar2;
            }
            local_a0 = (undefined8 *)(lVar26 + (ulong)uVar7 * 0x20);
            uStack_98 = (float *)(lVar26 + (ulong)*(ushort *)(pauVar29[1] + 0xe) * 0x20);
            uVar53 = (undefined4)((ulong)*(undefined8 *)(*pauVar29 + 8) >> 0x20);
            auVar71._12_4_ = uVar53;
            auVar71._0_12_ = *(undefined1 (*) [12])*pauVar29;
            auVar15._12_4_ = fVar47;
            auVar15._0_12_ = auVar17;
            auVar66 = NEON_fmin(auVar15,auVar71,4);
            auVar56._0_12_ = SUB1612(pauVar29[1],0);
            auVar56._12_4_ = 0;
            auVar67._0_12_ = auVar66._0_12_;
            auVar67._12_4_ = uVar53;
            auVar13._12_4_ = 0;
            auVar13._0_12_ = auVar18;
            auVar57 = NEON_fmax(auVar13,auVar56,4);
            auVar58._0_12_ = auVar57._0_12_;
            auVar58._12_4_ = (int)((ulong)*(undefined8 *)(pauVar29[1] + 8) >> 0x20);
            *(long *)(*pauVar29 + 8) = auVar67._8_8_;
            *(long *)*pauVar29 = auVar66._0_8_;
            *(long *)(pauVar29[1] + 8) = auVar58._8_8_;
            *(long *)pauVar29[1] = auVar57._0_8_;
            fVar50 = (float)local_a0[1];
            fVar51 = (float)((ulong)local_a0[1] >> 0x20);
            fVar46 = (float)*local_a0;
            fVar48 = (float)((ulong)*local_a0 >> 0x20);
            fVar45 = (float)local_a0[2];
            fVar40 = (float)((ulong)local_a0[2] >> 0x20);
            fVar65 = (*uStack_98 + uStack_98[4]) - fVar49;
            fVar68 = (uStack_98[1] + uStack_98[5]) - fVar64;
            fVar69 = (uStack_98[2] + uStack_98[6]) - fVar73;
            fVar70 = (uStack_98[3] + 0.0) - (fVar47 + 0.0);
            fVar55 = (fVar46 + fVar45) - fVar49;
            fVar61 = (fVar48 + fVar40) - fVar64;
            fVar62 = (fVar50 + (float)local_a0[3]) - fVar73;
            fVar63 = (fVar51 + 0.0) - (fVar47 + 0.0);
            fVar45 = fVar42 + (fVar45 - fVar46);
            fVar40 = fVar44 + (fVar40 - fVar48);
            fVar46 = fVar41 + ((float)local_a0[3] - fVar50);
            fVar48 = (0.0 - fVar47) + (0.0 - fVar51);
            fVar50 = fVar42 + (uStack_98[4] - *uStack_98);
            fVar51 = fVar44 + (uStack_98[5] - uStack_98[1]);
            fVar52 = fVar41 + (uStack_98[6] - uStack_98[2]);
            fVar54 = (0.0 - fVar47) + (0.0 - uStack_98[3]);
            auVar59._0_4_ = fVar55 * fVar55;
            auVar59._4_4_ = fVar61 * fVar61;
            auVar59._8_4_ = fVar62 * fVar62;
            auVar59._12_4_ = fVar63 * fVar63;
            auVar71 = NEON_ext(auVar59,auVar59,8,1);
            auVar72._4_4_ = fVar40;
            auVar72._0_4_ = fVar45;
            auVar72._8_4_ = fVar46;
            auVar72._12_4_ = fVar48;
            auVar10._4_4_ = fVar40;
            auVar10._0_4_ = fVar45;
            auVar10._8_4_ = fVar46;
            auVar10._12_4_ = fVar48;
            auVar72 = NEON_ext(auVar72,auVar10,8,1);
            auVar60._0_4_ = fVar65 * fVar65;
            auVar60._4_4_ = fVar68 * fVar68;
            auVar60._8_4_ = fVar69 * fVar69;
            auVar60._12_4_ = fVar70 * fVar70;
            auVar57 = NEON_ext(auVar60,auVar60,8,1);
            auVar11._4_4_ = fVar51;
            auVar11._0_4_ = fVar50;
            auVar11._8_4_ = fVar52;
            auVar11._12_4_ = fVar54;
            auVar12._4_4_ = fVar51;
            auVar12._0_4_ = fVar50;
            auVar12._8_4_ = fVar52;
            auVar12._12_4_ = fVar54;
            auVar66 = NEON_ext(auVar11,auVar12,8,1);
            pauVar29 = (undefined1 (*) [16])
                       (&local_a0)
                       [(ulong)-(uint)((auVar60._0_4_ + auVar60._4_4_ + auVar57._0_4_) *
                                       (auVar66._0_4_ + fVar50 + fVar51) <
                                      (auVar59._0_4_ + auVar59._4_4_ + auVar71._0_4_) *
                                      (auVar72._0_4_ + fVar45 + fVar40)) & 1];
            uVar7 = *(ushort *)(pauVar29[1] + 0xc);
            if (uVar7 == 0) break;
            lVar31 = *plVar2;
          }
        }
        if ((*(uint *)(*pauVar29 + 0xc) & 0xffff) == 0) {
          *(ushort *)(param_1 + 0xe4) = uVar8;
        }
        else {
          lVar26 = 0;
          if (*plVar2 != 0) {
            lVar26 = *plVar2 + (long)plVar2;
          }
          lVar30 = lVar26 + ((ulong)*(uint *)(*pauVar29 + 0xc) & 0xffff) * 0x20;
          *(ushort *)
           (lVar30 + (ulong)((uint)*(ushort *)(lVar30 + 0x1e) ==
                            ((uint)((int)pauVar29 - (int)lVar26) >> 5 & 0xffff)) * 2 + 0x1c) = uVar8
          ;
        }
        *(uint *)((long)puVar24 + 0xc) = *(ushort *)(*pauVar29 + 0xc) | 0x3f000000;
        lVar26 = *plVar2;
        *(ushort *)((long)puVar24 + 0x1e) = uVar6;
        iVar25 = 0;
        if (lVar26 != 0) {
          iVar25 = (int)lVar26 + (int)plVar2;
        }
        *(short *)((long)puVar24 + 0x1c) = (short)((uint)((int)pauVar29 - iVar25) >> 5);
        *(uint *)(*pauVar29 + 0xc) = uVar8 | 0x3f000000;
        lVar26 = 0;
        if (*plVar2 != 0) {
          lVar26 = *plVar2 + (long)plVar2;
        }
        *(uint *)(lVar26 + uVar27 * 0x20 + 0xc) = uVar8 | 0x3f000000;
        auVar38._0_12_ = SUB1612(pauVar29[1],0);
        auVar38._12_4_ = 0;
        auVar16._12_4_ = fVar47;
        auVar16._0_12_ = auVar19;
        auVar66 = NEON_fmin(*pauVar29,auVar16,4);
        auVar43._0_12_ = auVar66._0_12_;
        auVar43._12_4_ = *(undefined4 *)((long)puVar24 + 0xc);
        auVar14._12_4_ = 0;
        auVar14._0_12_ = auVar20;
        auVar57 = NEON_fmax(auVar38,auVar14,4);
        auVar39._0_12_ = auVar57._0_12_;
        auVar39._12_4_ = *(undefined4 *)((long)puVar24 + 0x1c);
        puVar24[1] = auVar43._8_8_;
        *puVar24 = auVar66._0_8_;
        puVar24[3] = auVar39._8_8_;
        puVar24[2] = auVar57._0_8_;
      }
      uVar34 = uVar34 + 1;
      *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
      uVar22 = uVar37 + 1;
      do {
        uVar37 = uVar22;
        if (*(int *)(param_1 + 0x50) <= (int)uVar37) goto LAB_02eab29c;
        lVar26 = *plVar35;
        uVar22 = uVar37 + 1;
      } while ((*(byte *)((long)plVar35 + (ulong)(uVar37 & 0xffff) * 0x40 + lVar26 + 0x1e) & 1) != 0
              );
    } while (uVar37 + 1 != 0);
  }
LAB_02eab29c:
  lVar26 = *(long *)(lVar33 + 0x1000b8);
  if (lVar26 == 0) {
    lVar26 = FUN_00e5d3b4();
    *(long *)(lVar33 + 0x1000b8) = lVar26;
  }
  plVar28 = *(long **)(lVar26 + 0x3e0);
  if (plVar28 != (long *)0x0) {
    lVar26 = *plVar28;
    if (((*(byte *)(lVar26 + 0x38) & 1) != 0) && (plVar28[6] != 0)) {
      puVar24 = (undefined8 *)plVar28[2];
      uVar27 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
      if ((uVar27 <= (ulong)plVar28[3]) && (plVar28[2] = uVar27, puVar24 != (undefined8 *)0x0)) {
        *puVar24 = &DAT_03c4e575;
        puVar24[1] = *(undefined8 *)(plVar28[6] + 8);
      }
    }
    puVar24 = (undefined8 *)plVar28[2];
    uVar27 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
    if ((uVar27 <= (ulong)plVar28[3]) && (plVar28[2] = uVar27, puVar24 != (undefined8 *)0x0)) {
      *puVar24 = &DAT_03c2d363;
      uVar23 = nn::os::GetSystemTick();
      puVar24[1] = uVar23;
    }
    if (*(code **)(lVar26 + 0x20) != (code *)0x0) {
      (**(code **)(lVar26 + 0x20))(*(undefined8 *)(lVar26 + 0x28));
    }
    lVar26 = *(long *)(lVar33 + 0x1000b8);
  }
  if (lVar26 == 0) {
    lVar26 = FUN_00e5d3b4();
    *(long *)(lVar33 + 0x1000b8) = lVar26;
  }
  plVar28 = *(long **)(lVar26 + 0x3e0);
  if (plVar28 != (long *)0x0) {
    lVar26 = *plVar28;
    if (*(code **)(lVar26 + 0x18) != (code *)0x0) {
      (**(code **)(lVar26 + 0x18))("rebuildSAH",10,*(undefined8 *)(lVar26 + 0x28));
    }
    puVar24 = (undefined8 *)plVar28[2];
    uVar27 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
    if ((uVar27 <= (ulong)plVar28[3]) && (plVar28[2] = uVar27, puVar24 != (undefined8 *)0x0)) {
      *puVar24 = "TtrebuildSAH";
      uVar23 = nn::os::GetSystemTick();
      puVar24[1] = uVar23;
    }
    if (((*(byte *)(lVar26 + 0x38) & 1) != 0) && (plVar28[6] != 0)) {
      puVar24 = (undefined8 *)plVar28[2];
      uVar27 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
      if ((uVar27 <= (ulong)plVar28[3]) && (plVar28[2] = uVar27, puVar24 != (undefined8 *)0x0)) {
        *puVar24 = &DAT_03c4e575;
        puVar24[1] = *(undefined8 *)(plVar28[6] + 8);
      }
    }
  }
  FUN_02eac7a4(plVar2,*(undefined2 *)(param_1 + 0xe4));
  FUN_02eae788(plVar2);
  lVar26 = *(long *)(lVar33 + 0x1000b8);
  if (lVar26 == 0) {
    lVar26 = FUN_00e5d3b4();
    *(long *)(lVar33 + 0x1000b8) = lVar26;
  }
  plVar28 = *(long **)(lVar26 + 0x3e0);
  if (plVar28 != (long *)0x0) {
    lVar26 = *plVar28;
    if (((*(byte *)(lVar26 + 0x38) & 1) != 0) && (plVar28[6] != 0)) {
      puVar24 = (undefined8 *)plVar28[2];
      uVar27 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
      if ((uVar27 <= (ulong)plVar28[3]) && (plVar28[2] = uVar27, puVar24 != (undefined8 *)0x0)) {
        *puVar24 = &DAT_03c4e575;
        puVar24[1] = *(undefined8 *)(plVar28[6] + 8);
      }
    }
    puVar24 = (undefined8 *)plVar28[2];
    uVar27 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
    if ((uVar27 <= (ulong)plVar28[3]) && (plVar28[2] = uVar27, puVar24 != (undefined8 *)0x0)) {
      *puVar24 = &DAT_03c2d363;
      uVar23 = nn::os::GetSystemTick();
      puVar24[1] = uVar23;
    }
    if (*(code **)(lVar26 + 0x20) != (code *)0x0) {
      (**(code **)(lVar26 + 0x20))(*(undefined8 *)(lVar26 + 0x28));
    }
    lVar26 = *(long *)(lVar33 + 0x1000b8);
  }
  if (lVar26 == 0) {
    lVar26 = FUN_00e5d3b4();
    *(long *)(lVar33 + 0x1000b8) = lVar26;
  }
  plVar28 = *(long **)(lVar26 + 0x3e0);
  if (plVar28 != (long *)0x0) {
    lVar26 = *plVar28;
    if (*(code **)(lVar26 + 0x18) != (code *)0x0) {
      (**(code **)(lVar26 + 0x18))("MapInstances",0xc,*(undefined8 *)(lVar26 + 0x28));
    }
    puVar24 = (undefined8 *)plVar28[2];
    uVar27 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
    if ((uVar27 <= (ulong)plVar28[3]) && (plVar28[2] = uVar27, puVar24 != (undefined8 *)0x0)) {
      *puVar24 = "TtMapInstances";
      uVar23 = nn::os::GetSystemTick();
      puVar24[1] = uVar23;
    }
    if (((*(byte *)(lVar26 + 0x38) & 1) != 0) && (plVar28[6] != 0)) {
      puVar24 = (undefined8 *)plVar28[2];
      uVar27 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
      if ((uVar27 <= (ulong)plVar28[3]) && (plVar28[2] = uVar27, puVar24 != (undefined8 *)0x0)) {
        *puVar24 = &DAT_03c4e575;
        puVar24[1] = *(undefined8 *)(plVar28[6] + 8);
      }
    }
    lVar26 = *(long *)(lVar33 + 0x1000b8);
  }
  local_a0 = (undefined8 *)0x0;
  uStack_98 = (float *)0x8000000000000000;
  if (lVar26 == 0) {
    lVar26 = FUN_00e5d3b4();
    *(long *)(lVar33 + 0x1000b8) = lVar26;
  }
  local_90 = *(long *)(*(long *)(lVar26 + 0x3d0) + 0x10);
  if (*(long *)(local_90 + 8) != 0) {
    local_90 = 0;
  }
  local_b0 = (ulong)(uVar34 << 1);
  local_80 = local_b0;
  if (local_90 == 0) {
    puVar24 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(1,&local_b0,0x40);
  }
  else {
    local_e0 = local_b0 + 0x3f & 0x1ffffffc0;
    if (local_e0 <= *(ulong *)(local_90 + 0x28)) {
      puVar24 = *(undefined8 **)(local_90 + 0x38);
      if (local_e0 + (long)puVar24 <= *(ulong *)(local_90 + 0x40)) {
        *(ulong *)(local_90 + 0x38) = local_e0 + (long)puVar24;
        goto LAB_02eab608;
      }
    }
    puVar24 = (undefined8 *)FUN_031cf3b4(local_90,&local_e0);
  }
LAB_02eab608:
  puVar21 = PTR_PTR_047d1a50;
  iVar25 = (int)uStack_98;
  uStack_98 = (float *)(CONCAT44(uVar34,(int)uStack_98) | 0x8000000000000000);
  uVar6 = *(ushort *)(param_1 + 0xe4);
  local_a0 = puVar24;
  local_88 = puVar24;
  if ((ulong)uVar6 == 0) {
LAB_02eab71c:
    uVar27 = (ulong)uStack_98 & 0xffffffff;
  }
  else {
    lVar30 = *plVar2;
    lVar26 = 0;
    if (lVar30 != 0) {
      lVar26 = lVar30 + (long)plVar2;
    }
    uVar7 = *(ushort *)(lVar26 + (ulong)uVar6 * 0x20 + 0x1c);
    uVar27 = (ulong)uVar7;
    if (uVar7 != 0) {
      do {
        lVar26 = lVar30 + (long)plVar2;
        lVar31 = 0;
        if (lVar30 != 0) {
          lVar31 = lVar26;
        }
        if (*(short *)(lVar31 + uVar27 * 0x20 + 0x1c) == 0) {
          lVar26 = (long)(int)uStack_98;
          if ((int)(uStack_98._4_4_ & 0x7fffffff) <= (int)uStack_98) {
            FUN_02eaee40(&local_a0,puVar21,lVar26 + 1);
          }
          *(short *)((long)local_a0 + (long)(int)uStack_98 * 2) = (short)uVar27;
          uStack_98 = (float *)CONCAT44(uStack_98._4_4_,(int)(lVar26 + 1));
          lVar30 = *plVar2;
          lVar26 = lVar30 + (long)plVar2;
        }
        lVar31 = 0;
        if (lVar30 != 0) {
          lVar31 = lVar26;
        }
        uVar7 = *(ushort *)(lVar31 + uVar27 * 0x20 + 0x1c);
        uVar34 = (uint)uVar7;
        if (uVar7 == 0) {
          do {
            uVar34 = *(uint *)(lVar31 + uVar27 * 0x20 + 0xc);
            uVar36 = (ulong)uVar34 & 0xffff;
            uVar37 = (uint)uVar27;
            if ((uint)uVar6 == (uVar34 & 0xffff)) {
              bVar32 = 1;
              goto LAB_02eab6ec;
            }
            uVar27 = uVar36;
          } while (*(ushort *)(lVar31 + uVar36 * 0x20 + 0x1e) == uVar37);
          bVar32 = 0;
LAB_02eab6ec:
          uVar34 = uVar37;
          if ((int)uVar36 != 0) {
            uVar34 = (uint)*(ushort *)(lVar31 + uVar36 * 0x20 + 0x1e);
          }
          if ((bool)(bVar32 & uVar34 == uVar37)) break;
        }
        uVar27 = (ulong)uVar34;
      } while (uVar34 != 0);
      goto LAB_02eab71c;
    }
    uVar27 = (long)iVar25 + 1;
    if ((int)(uVar34 & 0x7fffffff) <= iVar25) {
      FUN_02eaee40(&local_a0,PTR_PTR_047d1a50,uVar27);
      iVar25 = (int)uStack_98;
    }
    *(ushort *)((long)local_a0 + (long)iVar25 * 2) = uVar6;
    uStack_98 = (float *)CONCAT44(uStack_98._4_4_,(int)uVar27);
  }
  if (0 < (int)uVar27) {
    lVar26 = 0;
    do {
      puVar1 = (ushort *)((long)local_a0 + lVar26);
      lVar30 = 0;
      if (*plVar2 != 0) {
        lVar30 = *plVar2 + (long)plVar2;
      }
      lVar26 = lVar26 + 2;
      *(ushort *)
       ((long)plVar35 +
       (ulong)*(ushort *)(lVar30 + (ulong)*puVar1 * 0x20 + 0x1e) * 0x40 + *plVar35 + 0x1c) = *puVar1
      ;
    } while ((uVar27 & 0xffffffff) * 2 != lVar26);
  }
  lVar26 = *(long *)(lVar33 + 0x1000b8);
  if (lVar26 == 0) {
    lVar26 = FUN_00e5d3b4();
    *(long *)(lVar33 + 0x1000b8) = lVar26;
  }
  plVar35 = *(long **)(lVar26 + 0x3e0);
  if (plVar35 != (long *)0x0) {
    lVar33 = *plVar35;
    if (((*(byte *)(lVar33 + 0x38) & 1) != 0) && (plVar35[6] != 0)) {
      puVar24 = (undefined8 *)plVar35[2];
      uVar27 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
      if ((uVar27 <= (ulong)plVar35[3]) && (plVar35[2] = uVar27, puVar24 != (undefined8 *)0x0)) {
        *puVar24 = &DAT_03c4e575;
        puVar24[1] = *(undefined8 *)(plVar35[6] + 8);
      }
    }
    puVar24 = (undefined8 *)plVar35[2];
    uVar27 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
    if ((uVar27 <= (ulong)plVar35[3]) && (plVar35[2] = uVar27, puVar24 != (undefined8 *)0x0)) {
      *puVar24 = &DAT_03c2d363;
      uVar23 = nn::os::GetSystemTick();
      puVar24[1] = uVar23;
    }
    if (*(code **)(lVar33 + 0x20) != (code *)0x0) {
      (**(code **)(lVar33 + 0x20))(*(undefined8 *)(lVar33 + 0x28));
    }
  }
  if (local_88 == local_a0) {
    uStack_98 = (float *)((ulong)uStack_98 & 0xffffffff00000000);
  }
  if (local_90 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar27 = local_80 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(local_90 + 0x28) < uVar27) ||
       (*(long *)(local_90 + 0x38) != uVar27 + (long)local_88)) {
      if (local_88 != (undefined8 *)0x0) {
        if (*(ulong *)(local_90 + 0x28) < uVar27 + 0x40) {
          *(int *)(*(long *)(local_90 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_90 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_90 + 0x10) + 0x18))
                    (*(long **)(local_90 + 0x10),
                     (long)local_88 - (long)*(int *)((long)local_88 + -4),uVar27 + 0x44);
        }
        else {
          if (*(long *)(local_90 + 0x38) == uVar27 + (long)local_88) {
            *(undefined8 **)(local_90 + 0x38) = local_88;
            goto LAB_02eab91c;
          }
          FUN_031cf778();
        }
      }
    }
    else {
      *(undefined8 **)(local_90 + 0x38) = local_88;
      if (*(undefined8 **)(local_90 + 0x48) == local_88) {
LAB_02eab91c:
        FUN_031cf578();
      }
    }
  }
  uVar27 = (ulong)uStack_98;
  uVar36 = (ulong)uStack_98._4_4_;
  uStack_98 = (float *)((ulong)uStack_98._4_4_ << 0x20);
  if ((-1 < (long)uVar27) && (local_a0 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_a0,uVar36 << 1);
  }
  plVar35 = local_b8;
LAB_02eab950:
  if (plVar35 != (long *)0x0) {
    lVar33 = *plVar35;
    if (((*(byte *)(lVar33 + 0x38) & 1) != 0) && (plVar35[6] != 0)) {
      puVar24 = (undefined8 *)plVar35[2];
      uVar27 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
      if ((uVar27 <= (ulong)plVar35[3]) && (plVar35[2] = uVar27, puVar24 != (undefined8 *)0x0)) {
        *puVar24 = &DAT_03c4e575;
        puVar24[1] = *(undefined8 *)(plVar35[6] + 8);
      }
    }
    puVar24 = (undefined8 *)plVar35[2];
    uVar27 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
    if ((uVar27 <= (ulong)plVar35[3]) && (plVar35[2] = uVar27, puVar24 != (undefined8 *)0x0)) {
      *puVar24 = &DAT_03c2d363;
      uVar23 = nn::os::GetSystemTick();
      puVar24[1] = uVar23;
    }
    if (*(code **)(lVar33 + 0x20) != (code *)0x0) {
      (**(code **)(lVar33 + 0x20))(*(undefined8 *)(lVar33 + 0x28));
    }
  }
  return;
}


