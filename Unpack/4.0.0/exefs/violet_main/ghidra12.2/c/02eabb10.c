/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eabb10; name: FUN_02eabb10
 */


void FUN_02eabb10(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [12];
  undefined8 *puVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  undefined2 uVar10;
  undefined1 (*pauVar11) [12];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  ulong uVar23;
  long lVar24;
  undefined1 (*pauVar25) [16];
  long lVar26;
  long lVar27;
  ulong uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  undefined1 auVar34 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined4 uVar44;
  float fVar45;
  float fVar46;
  float fVar52;
  float fVar53;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar54;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar55;
  float fVar56;
  float fVar59;
  float fVar60;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar64;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  float *local_a0 [4];
  undefined8 local_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  if (*(char *)(param_1 + 0x100) == '\x02') {
    FUN_016c5c2c(param_1);
    return;
  }
  if (0 < (int)param_3) {
    uVar28 = 0;
    plVar1 = (long *)(param_1 + 200);
    do {
      uVar23 = (ulong)*(ushort *)(param_2 + uVar28 * 2);
      if (uVar23 != 0xffff) {
        pfVar2 = (float *)(param_1 + 0x48 + uVar23 * 0x40 + *(long *)(param_1 + 0x48));
        fVar33 = *pfVar2;
        fVar35 = pfVar2[1];
        fVar32 = pfVar2[2];
        fVar36 = pfVar2[3];
        fVar37 = fVar35 + fVar35;
        fVar38 = fVar32 + fVar32;
        fVar40 = (fVar33 + fVar33) * fVar33;
        fVar31 = (fVar33 + fVar33) * fVar36;
        fVar55 = 1.0 - fVar32 * fVar38;
        fVar64 = fVar38 * fVar35 - fVar31;
        fVar32 = fVar38 * fVar33 + fVar37 * fVar36;
        local_a0[1] = (float *)CONCAT44(fVar64,fVar38 * fVar33 - fVar37 * fVar36);
        local_a0[0] = (float *)CONCAT44(fVar37 * fVar33 + fVar38 * fVar36,fVar55 - fVar37 * fVar35);
        local_a0[3] = (float *)CONCAT44(fVar32,fVar38 * fVar35 + fVar31);
        local_a0[2] = (float *)CONCAT44(fVar55 - fVar40,fVar37 * fVar33 - fVar38 * fVar36);
        uStack_78 = (ulong)(uint)((1.0 - fVar40) - fVar37 * fVar35);
        local_80 = CONCAT44(fVar64,fVar32);
        uStack_68 = (ulong)SUB164(*(undefined1 (*) [16])(pfVar2 + 4),8);
        uStack_70 = SUB168(*(undefined1 (*) [16])(pfVar2 + 4),0);
        lVar24 = *(long *)(pfVar2 + 0xc);
        lVar27 = 0;
        if (lVar24 != 0) {
          lVar27 = lVar24 + (long)(pfVar2 + 0xc);
        }
        if ((*(byte *)((long)pfVar2 + 0x1e) >> 3 & 1) == 0) {
          (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar27 + 0x18) * 0x200 + 0x18))
                    (lVar27,local_a0,&local_d0);
        }
        else {
          auVar48._0_12_ = SUB1612(*(undefined1 (*) [16])(pfVar2 + 8),0);
          auVar48._12_4_ = 0x3f800000;
          uStack_a8 = auVar48._8_8_;
          local_b0 = SUB168(*(undefined1 (*) [16])(pfVar2 + 8),0);
          FUN_02f07fe8(lVar27,local_a0,&local_b0,(*(byte *)((long)pfVar2 + 0x1e) >> 5 ^ 0xff) & 1,
                       &local_d0);
        }
        uVar10 = *(undefined2 *)(param_2 + uVar28 * 2);
        uVar7 = *(ushort *)(param_1 + 0xd8);
        if (uVar7 == 0) {
          FUN_02eac5d8(plVar1,1);
          uVar7 = *(ushort *)(param_1 + 0xd8);
        }
        uVar23 = (ulong)uVar7;
        lVar27 = *(long *)(param_1 + 200) + (long)plVar1;
        lVar24 = 0;
        if (*(long *)(param_1 + 200) != 0) {
          lVar24 = lVar27;
        }
        puVar3 = (undefined4 *)(lVar24 + uVar23 * 0x20);
        *(undefined2 *)(param_1 + 0xd8) = *(undefined2 *)(lVar27 + uVar23 * 0x20);
        *(undefined2 *)(puVar3 + 7) = 0;
        *(undefined2 *)((long)puVar3 + 0x1e) = uVar10;
        puVar3[2] = uStack_c8;
        puVar3[3] = puVar3[3];
        *puVar3 = local_d0;
        puVar3[1] = uStack_cc;
        auVar57._0_12_ = local_c0._0_12_;
        auVar57._12_4_ = puVar3[7];
        *(long *)(puVar3 + 6) = auVar57._8_8_;
        *(long *)(puVar3 + 4) = local_c0._0_8_;
        lVar26 = *(long *)(param_1 + 200);
        uVar8 = *(ushort *)(param_1 + 0xe4);
        lVar27 = lVar26 + (long)plVar1;
        lVar24 = 0;
        if (lVar26 != 0) {
          lVar24 = lVar27;
        }
        pauVar4 = (undefined1 (*) [12])(lVar24 + uVar23 * 0x20);
        if ((ulong)uVar8 == 0) {
          *(ushort *)(param_1 + 0xe4) = uVar7;
          *(undefined4 *)pauVar4[1] = 0x3f000000;
        }
        else {
          fVar37 = (float)*(undefined8 *)(*pauVar4 + 8);
          fVar38 = (float)((ulong)*(undefined8 *)(*pauVar4 + 8) >> 0x20);
          auVar21 = *pauVar4;
          auVar19 = *pauVar4;
          fVar36 = (float)*(undefined8 *)*pauVar4;
          fVar31 = (float)((ulong)*(undefined8 *)*pauVar4 >> 0x20);
          pauVar11 = (undefined1 (*) [12])(pauVar4[1] + 4);
          fVar32 = (float)*(undefined8 *)pauVar4[2];
          auVar22 = *pauVar11;
          auVar20 = *pauVar11;
          fVar33 = (float)*(undefined8 *)*pauVar11;
          fVar35 = (float)((ulong)*(undefined8 *)*pauVar11 >> 0x20);
          uVar9 = *(ushort *)(param_1 + 0xd8);
          if (uVar9 == 0) {
            FUN_02eac5d8(plVar1,1);
            lVar26 = *(long *)(param_1 + 200);
            lVar27 = lVar26 + (long)plVar1;
            uVar9 = *(ushort *)(param_1 + 0xd8);
          }
          *(undefined2 *)(param_1 + 0xd8) = *(undefined2 *)(lVar27 + (ulong)uVar9 * 0x20);
          lVar24 = 0;
          if (lVar26 != 0) {
            lVar24 = lVar27;
          }
          puVar5 = (undefined8 *)(lVar24 + (ulong)uVar9 * 0x20);
          pauVar25 = (undefined1 (*) [16])(lVar24 + (ulong)uVar8 * 0x20);
          uVar8 = *(ushort *)(pauVar25[1] + 0xc);
          if (uVar8 != 0) {
            fVar40 = fVar36 + fVar33;
            fVar55 = fVar31 + fVar35;
            fVar64 = fVar37 + fVar32;
            fVar33 = fVar33 - fVar36;
            fVar35 = fVar35 - fVar31;
            fVar32 = fVar32 - fVar37;
            while( true ) {
              lVar27 = 0;
              if (lVar26 != 0) {
                lVar27 = lVar26 + (long)plVar1;
              }
              local_a0[0] = (float *)(lVar27 + (ulong)uVar8 * 0x20);
              local_a0[1] = (float *)(lVar27 + (ulong)*(ushort *)(pauVar25[1] + 0xe) * 0x20);
              uVar44 = (undefined4)((ulong)*(undefined8 *)(*pauVar25 + 8) >> 0x20);
              auVar62._12_4_ = uVar44;
              auVar62._0_12_ = *(undefined1 (*) [12])*pauVar25;
              auVar17._12_4_ = fVar38;
              auVar17._0_12_ = auVar19;
              auVar57 = NEON_fmin(auVar17,auVar62,4);
              auVar47._0_12_ = SUB1612(pauVar25[1],0);
              auVar47._12_4_ = 0;
              auVar58._0_12_ = auVar57._0_12_;
              auVar58._12_4_ = uVar44;
              auVar15._12_4_ = 0;
              auVar15._0_12_ = auVar20;
              auVar48 = NEON_fmax(auVar15,auVar47,4);
              auVar49._0_12_ = auVar48._0_12_;
              auVar49._12_4_ = (int)((ulong)*(undefined8 *)(pauVar25[1] + 8) >> 0x20);
              *(long *)(*pauVar25 + 8) = auVar58._8_8_;
              *(long *)*pauVar25 = auVar57._0_8_;
              *(long *)(pauVar25[1] + 8) = auVar49._8_8_;
              *(long *)pauVar25[1] = auVar48._0_8_;
              fVar41 = (float)*(undefined8 *)(local_a0[0] + 2);
              fVar42 = (float)((ulong)*(undefined8 *)(local_a0[0] + 2) >> 0x20);
              fVar37 = (float)*(undefined8 *)local_a0[0];
              fVar39 = (float)((ulong)*(undefined8 *)local_a0[0] >> 0x20);
              fVar36 = (float)*(undefined8 *)(local_a0[0] + 4);
              fVar31 = (float)((ulong)*(undefined8 *)(local_a0[0] + 4) >> 0x20);
              fVar56 = (*local_a0[1] + local_a0[1][4]) - fVar40;
              fVar59 = (local_a0[1][1] + local_a0[1][5]) - fVar55;
              fVar60 = (local_a0[1][2] + local_a0[1][6]) - fVar64;
              fVar61 = (local_a0[1][3] + 0.0) - (fVar38 + 0.0);
              fVar46 = (fVar37 + fVar36) - fVar40;
              fVar52 = (fVar39 + fVar31) - fVar55;
              fVar53 = (fVar41 + (float)*(undefined8 *)(local_a0[0] + 6)) - fVar64;
              fVar54 = (fVar42 + 0.0) - (fVar38 + 0.0);
              fVar36 = fVar33 + (fVar36 - fVar37);
              fVar31 = fVar35 + (fVar31 - fVar39);
              fVar37 = fVar32 + ((float)*(undefined8 *)(local_a0[0] + 6) - fVar41);
              fVar39 = (0.0 - fVar38) + (0.0 - fVar42);
              fVar41 = fVar33 + (local_a0[1][4] - *local_a0[1]);
              fVar42 = fVar35 + (local_a0[1][5] - local_a0[1][1]);
              fVar43 = fVar32 + (local_a0[1][6] - local_a0[1][2]);
              fVar45 = (0.0 - fVar38) + (0.0 - local_a0[1][3]);
              auVar50._0_4_ = fVar46 * fVar46;
              auVar50._4_4_ = fVar52 * fVar52;
              auVar50._8_4_ = fVar53 * fVar53;
              auVar50._12_4_ = fVar54 * fVar54;
              auVar62 = NEON_ext(auVar50,auVar50,8,1);
              auVar63._4_4_ = fVar31;
              auVar63._0_4_ = fVar36;
              auVar63._8_4_ = fVar37;
              auVar63._12_4_ = fVar39;
              auVar12._4_4_ = fVar31;
              auVar12._0_4_ = fVar36;
              auVar12._8_4_ = fVar37;
              auVar12._12_4_ = fVar39;
              auVar63 = NEON_ext(auVar63,auVar12,8,1);
              auVar51._0_4_ = fVar56 * fVar56;
              auVar51._4_4_ = fVar59 * fVar59;
              auVar51._8_4_ = fVar60 * fVar60;
              auVar51._12_4_ = fVar61 * fVar61;
              auVar48 = NEON_ext(auVar51,auVar51,8,1);
              auVar13._4_4_ = fVar42;
              auVar13._0_4_ = fVar41;
              auVar13._8_4_ = fVar43;
              auVar13._12_4_ = fVar45;
              auVar14._4_4_ = fVar42;
              auVar14._0_4_ = fVar41;
              auVar14._8_4_ = fVar43;
              auVar14._12_4_ = fVar45;
              auVar57 = NEON_ext(auVar13,auVar14,8,1);
              pauVar25 = (undefined1 (*) [16])
                         local_a0[(ulong)-(uint)((auVar51._0_4_ + auVar51._4_4_ + auVar48._0_4_) *
                                                 (auVar57._0_4_ + fVar41 + fVar42) <
                                                (auVar50._0_4_ + auVar50._4_4_ + auVar62._0_4_) *
                                                (auVar63._0_4_ + fVar36 + fVar31)) & 1];
              uVar8 = *(ushort *)(pauVar25[1] + 0xc);
              if (uVar8 == 0) break;
              lVar26 = *plVar1;
            }
          }
          if ((*(uint *)(*pauVar25 + 0xc) & 0xffff) == 0) {
            *(ushort *)(param_1 + 0xe4) = uVar9;
          }
          else {
            lVar27 = 0;
            if (*plVar1 != 0) {
              lVar27 = *plVar1 + (long)plVar1;
            }
            lVar24 = lVar27 + ((ulong)*(uint *)(*pauVar25 + 0xc) & 0xffff) * 0x20;
            *(ushort *)
             (lVar24 + (ulong)((uint)*(ushort *)(lVar24 + 0x1e) ==
                              ((uint)((int)pauVar25 - (int)lVar27) >> 5 & 0xffff)) * 2 + 0x1c) =
                 uVar9;
          }
          *(uint *)((long)puVar5 + 0xc) = *(ushort *)(*pauVar25 + 0xc) | 0x3f000000;
          lVar27 = *plVar1;
          *(ushort *)((long)puVar5 + 0x1e) = uVar7;
          iVar6 = 0;
          if (lVar27 != 0) {
            iVar6 = (int)lVar27 + (int)plVar1;
          }
          *(short *)((long)puVar5 + 0x1c) = (short)((uint)((int)pauVar25 - iVar6) >> 5);
          *(uint *)(*pauVar25 + 0xc) = uVar9 | 0x3f000000;
          lVar27 = 0;
          if (*plVar1 != 0) {
            lVar27 = *plVar1 + (long)plVar1;
          }
          *(uint *)(lVar27 + uVar23 * 0x20 + 0xc) = uVar9 | 0x3f000000;
          auVar29._0_12_ = SUB1612(pauVar25[1],0);
          auVar29._12_4_ = 0;
          auVar18._12_4_ = fVar38;
          auVar18._0_12_ = auVar21;
          auVar57 = NEON_fmin(*pauVar25,auVar18,4);
          auVar34._0_12_ = auVar57._0_12_;
          auVar34._12_4_ = *(undefined4 *)((long)puVar5 + 0xc);
          auVar16._12_4_ = 0;
          auVar16._0_12_ = auVar22;
          auVar48 = NEON_fmax(auVar29,auVar16,4);
          auVar30._0_12_ = auVar48._0_12_;
          auVar30._12_4_ = *(undefined4 *)((long)puVar5 + 0x1c);
          puVar5[1] = auVar34._8_8_;
          *puVar5 = auVar57._0_8_;
          puVar5[3] = auVar30._8_8_;
          puVar5[2] = auVar48._0_8_;
        }
        *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
        *(ushort *)(pfVar2 + 7) = uVar7;
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 != param_3);
  }
  return;
}


