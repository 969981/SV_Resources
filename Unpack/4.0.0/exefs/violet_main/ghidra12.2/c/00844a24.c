/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00844a24; name: FUN_00844a24
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00844a24(long param_1,int param_2,long param_3,long *param_4,long *param_5,uint param_6,
                 uint param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  bool bVar18;
  int iVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  ushort *puVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  float *pfVar30;
  ulong uVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar52;
  undefined8 uVar37;
  float fVar49;
  undefined1 auVar39 [12];
  float fVar50;
  float fVar53;
  undefined1 auVar40 [12];
  undefined1 auVar41 [12];
  undefined1 auVar42 [12];
  undefined8 uVar38;
  undefined1 auVar43 [16];
  float fVar51;
  float fVar54;
  float fVar56;
  float fVar57;
  undefined1 auVar44 [16];
  float fVar55;
  float fVar58;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar60;
  float fVar61;
  undefined1 auVar59 [16];
  float fVar62;
  undefined8 uVar63;
  undefined1 auStack_340 [16];
  undefined1 auStack_330 [512];
  undefined8 local_130;
  float local_128;
  undefined8 local_124;
  float local_11c;
  undefined8 local_118;
  float local_110;
  undefined8 local_10c;
  float local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  byte local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  uint local_80;
  undefined8 local_7c;
  
  if (((param_6 & 1) == 0) && (FUN_03241cb8(param_3), param_4 != (long *)0x0)) {
    *(undefined4 *)(param_4 + 1) = 0;
  }
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_b8 = *(byte *)(param_1 + 0x3c);
  local_80 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_7c = 0xffffffffffffffff;
  auVar43 = *(undefined1 (*) [16])(param_1 + 0x10);
  auVar59._0_8_ =
       CONCAT44((*(float *)(param_1 + 0x24) - auVar43._4_4_) *
                (float)((ulong)*(undefined8 *)PTR_DAT_047d1a48 >> 0x20),
                (*(float *)(param_1 + 0x20) - auVar43._0_4_) *
                (float)*(undefined8 *)PTR_DAT_047d1a48);
  auVar59._8_4_ =
       (*(float *)(param_1 + 0x28) - auVar43._8_4_) * (float)*(undefined8 *)(PTR_DAT_047d1a48 + 8);
  auVar59._12_4_ =
       (*(float *)(param_1 + 0x2c) - auVar43._12_4_) *
       (float)((ulong)*(undefined8 *)(PTR_DAT_047d1a48 + 8) >> 0x20);
  uStack_f8 = auVar43._8_8_;
  local_100 = auVar43._0_8_;
  uStack_e8 = auVar59._8_8_;
  if (param_2 != -1) {
    local_7c = CONCAT44(param_2,param_2);
    local_b0 = param_1 + 0x40 + (long)param_2 * 0x60 + *(long *)(param_1 + 0x40);
    lVar23 = *(long *)(param_1 + 0x70);
    local_a0 = 0;
    if (lVar23 != 0) {
      local_a0 = lVar23 + param_1 + 0x70;
    }
    local_a0 = local_a0 + (ulong)*(uint *)(local_b0 + 0x48) * 4;
    lVar23 = *(long *)(param_1 + 0x80);
    local_98 = 0;
    if (lVar23 != 0) {
      local_98 = lVar23 + param_1 + 0x80;
    }
    local_98 = local_98 + (ulong)*(byte *)(local_b0 + 0x5b) * 0x80000;
    lVar24 = *(long *)(param_1 + 0x60);
    lVar23 = 0;
    if (lVar24 != 0) {
      lVar23 = lVar24 + param_1 + 0x60;
    }
    lVar24 = *(long *)(param_1 + 0x90);
    local_88 = 0;
    if (lVar24 != 0) {
      local_88 = lVar24 + param_1 + 0x90;
    }
    local_88 = local_88 + (ulong)*(uint *)(local_b0 + 0x54) * 4;
    local_80 = (uint)*(byte *)(local_b0 + 0x58);
    lVar24 = *(long *)(param_1 + 0x50);
    local_a8 = 0;
    if (lVar24 != 0) {
      local_a8 = lVar24 + param_1 + 0x50;
    }
    local_a8 = local_a8 + (ulong)*(uint *)(local_b0 + 0x50) * 4;
    local_e0 = *(undefined8 *)(local_b0 + 0x30);
    uStack_d8 = *(undefined8 *)(local_b0 + 0x38);
    uStack_c8 = (ulong)SUB124(*(undefined1 (*) [12])(local_b0 + 0x3c),8);
    local_d0 = SUB128(*(undefined1 (*) [12])(local_b0 + 0x3c),0);
    local_90 = lVar23 + (ulong)*(uint *)(local_b0 + 0x4c) * 2 +
               (ulong)*(byte *)(local_b0 + 0x58) * -2;
  }
  lVar24 = local_a8;
  lVar23 = local_b0;
  uStack_f0 = auVar59._0_8_;
  local_c0 = param_1;
  auVar43 = (**(code **)(*param_5 + 0x28))();
  fVar49 = auVar43._4_4_;
  fVar33 = auVar43._0_4_;
  auVar59 = NEON_ext(auVar43,auVar43,8,1);
  bVar18 = 0.0 <= auVar59._0_4_ * fVar33 * fVar49;
  iVar21 = 2;
  if (bVar18) {
    iVar21 = 1;
  }
  iVar22 = 2;
  if (!bVar18) {
    iVar22 = 1;
  }
  bVar3 = *(byte *)(lVar23 + 0x59);
  if ((ulong)bVar3 == 0) {
LAB_00845408:
    if ((param_7 & 1) != 0) {
      FUN_03192894(param_3);
    }
    return;
  }
  uVar31 = 0;
  do {
    lVar23 = lVar24 + uVar31 * 4;
    bVar4 = *(byte *)(lVar23 + 1);
    bVar5 = *(byte *)(lVar23 + 3);
    bVar6 = *(byte *)(lVar23 + 2);
    uVar27 = (uint)bVar6;
    iVar28 = (int)uVar31;
    if ((uint)bVar4 == (uint)bVar5) {
      if (uVar27 == 3) {
        uVar20 = (**(code **)(*param_5 + 0x10))(param_5,(int)local_7c << 8 | iVar28 << 1);
        if ((uVar20 & 1) != 0) {
          (**(code **)(*param_5 + 0x18))(param_5,&local_100,uVar31 & 0xffffffff,param_3);
        }
      }
      else if (uVar27 == 4) {
        (**(code **)(*param_5 + 0x20))(param_5,&local_100,uVar31 & 0xffffffff,param_3,param_4);
      }
    }
    else {
      if (*(byte *)(local_b0 + 0x5a) < 5) {
        iVar25 = 0;
      }
      else {
        iVar25 = 0;
        iVar19 = *(byte *)(local_b0 + 0x5a) - 1;
        do {
          while( true ) {
            iVar2 = iVar25 + iVar19 >> 1;
            iVar9 = iVar28 - (uint)*(byte *)(local_88 + (long)iVar2 * 4 + 2);
            if (iVar9 < 0) break;
            puVar26 = (ushort *)
                      (local_88 + ((long)((ulong)(uint)(iVar25 + iVar19) << 0x20) >> 0x21) * 4);
            if (iVar9 < (int)(uint)*(byte *)((long)puVar26 + 3)) goto LAB_00844d18;
            iVar25 = iVar2 + 1;
            if (iVar19 - iVar25 < 4) goto LAB_00844cf4;
          }
          iVar19 = iVar2;
        } while (3 < iVar2 - iVar25);
      }
LAB_00844cf4:
      for (puVar26 = (ushort *)(local_88 + (long)iVar25 * 4);
          (iVar25 = iVar28 - (uint)(byte)puVar26[1], iVar25 < 0 ||
          ((int)(uint)*(byte *)((long)puVar26 + 3) <= iVar25)); puVar26 = puVar26 + 2) {
      }
LAB_00844d18:
      bVar7 = *(byte *)(lVar24 + uVar31 * 4);
      uVar8 = *puVar26;
      if ((int)(uint)bVar7 < (int)local_80) {
        uVar29 = *(uint *)(local_a0 + (ulong)bVar7 * 4);
        auVar39._0_8_ = CONCAT44(uVar29 >> 0xb,uVar29) & 0x7ff000007ff;
        auVar39._8_4_ = uVar29 >> 0x16;
        uVar37 = local_e0;
        uVar63 = uStack_d8;
        fVar53 = (float)local_d0;
        fVar50 = local_d0._4_4_;
        fVar56 = (float)uStack_c8;
        fVar35 = uStack_c8._4_4_;
      }
      else {
        uVar20 = *(ulong *)(local_98 + (ulong)*(ushort *)(local_90 + (ulong)bVar7 * 2) * 8);
        auVar39._0_8_ = CONCAT44((int)(uVar20 >> 0x15),(int)uVar20) & 0x1fffff001fffff;
        auVar39._8_4_ = (uint)(uVar20 >> 0x2a);
        uVar37 = local_100;
        uVar63 = uStack_f8;
        fVar53 = (float)uStack_f0;
        fVar50 = uStack_f0._4_4_;
        fVar56 = (float)uStack_e8;
        fVar35 = uStack_e8._4_4_;
      }
      auVar46._12_4_ = 0;
      auVar46._0_12_ = auVar39;
      auVar59 = NEON_scvtf(auVar46,4);
      fVar34 = (float)uVar37 + fVar53 * auVar59._0_4_;
      fVar50 = (float)((ulong)uVar37 >> 0x20) + fVar50 * auVar59._4_4_;
      fVar53 = (float)uVar63 + fVar56 * auVar59._8_4_;
      fVar56 = (float)((ulong)uVar63 >> 0x20) + fVar35 * auVar59._12_4_;
      local_130 = CONCAT44(fVar50,fVar34);
      if (local_80 == bVar4 || (int)local_80 < (int)(uint)bVar4) {
        uVar20 = *(ulong *)(local_98 + (ulong)*(ushort *)(local_90 + (ulong)(uint)bVar4 * 2) * 8);
        auVar40._0_8_ = CONCAT44((int)(uVar20 >> 0x15),(int)uVar20) & 0x1fffff001fffff;
        auVar40._8_4_ = (uint)(uVar20 >> 0x2a);
        uVar37 = local_100;
        uVar63 = uStack_f8;
        fVar35 = (float)uStack_f0;
        fVar51 = uStack_f0._4_4_;
        fVar54 = (float)uStack_e8;
        fVar57 = uStack_e8._4_4_;
      }
      else {
        uVar29 = *(uint *)(local_a0 + (ulong)bVar4 * 4);
        auVar40._0_8_ = CONCAT44(uVar29 >> 0xb,uVar29) & 0x7ff000007ff;
        auVar40._8_4_ = uVar29 >> 0x16;
        uVar37 = local_e0;
        uVar63 = uStack_d8;
        fVar35 = (float)local_d0;
        fVar51 = local_d0._4_4_;
        fVar54 = (float)uStack_c8;
        fVar57 = uStack_c8._4_4_;
      }
      auVar47._12_4_ = 0;
      auVar47._0_12_ = auVar40;
      auVar59 = NEON_scvtf(auVar47,4);
      fVar35 = (float)uVar37 + fVar35 * auVar59._0_4_;
      fVar51 = (float)((ulong)uVar37 >> 0x20) + fVar51 * auVar59._4_4_;
      fVar54 = (float)uVar63 + fVar54 * auVar59._8_4_;
      fVar57 = (float)((ulong)uVar63 >> 0x20) + fVar57 * auVar59._12_4_;
      local_124 = CONCAT44(fVar51,fVar35);
      if ((int)uVar27 < (int)local_80) {
        uVar29 = *(uint *)(local_a0 + (ulong)bVar6 * 4);
        auVar41._0_8_ = CONCAT44(uVar29 >> 0xb,uVar29) & 0x7ff000007ff;
        auVar41._8_4_ = uVar29 >> 0x16;
        uVar37 = local_e0;
        uVar63 = uStack_d8;
        fVar55 = (float)local_d0;
        fVar52 = local_d0._4_4_;
        fVar58 = (float)uStack_c8;
        fVar62 = uStack_c8._4_4_;
      }
      else {
        uVar20 = *(ulong *)(local_98 + (ulong)*(ushort *)(local_90 + (ulong)bVar6 * 2) * 8);
        auVar41._0_8_ = CONCAT44((int)(uVar20 >> 0x15),(int)uVar20) & 0x1fffff001fffff;
        auVar41._8_4_ = (uint)(uVar20 >> 0x2a);
        uVar37 = local_100;
        uVar63 = uStack_f8;
        fVar55 = (float)uStack_f0;
        fVar52 = uStack_f0._4_4_;
        fVar58 = (float)uStack_e8;
        fVar62 = uStack_e8._4_4_;
      }
      auVar44._12_4_ = 0;
      auVar44._0_12_ = auVar41;
      auVar59 = NEON_scvtf(auVar44,4);
      fVar36 = (float)uVar37 + fVar55 * auVar59._0_4_;
      fVar52 = (float)((ulong)uVar37 >> 0x20) + fVar52 * auVar59._4_4_;
      uVar37 = CONCAT44(fVar52,fVar36);
      fVar55 = (float)uVar63 + fVar58 * auVar59._8_4_;
      fVar58 = (float)((ulong)uVar63 >> 0x20) + fVar62 * auVar59._12_4_;
      if (uVar27 == bVar5) {
        uVar27 = 1;
        local_10c = uVar37;
        local_104 = fVar55;
      }
      else {
        if ((int)(uint)bVar5 < (int)local_80) {
          uVar27 = *(uint *)(local_a0 + (ulong)bVar5 * 4);
          auVar42._0_8_ = CONCAT44(uVar27 >> 0xb,uVar27) & 0x7ff000007ff;
          auVar42._8_4_ = uVar27 >> 0x16;
          uVar63 = local_e0;
          uVar38 = uStack_d8;
          fVar62 = (float)local_d0;
          fVar60 = local_d0._4_4_;
          fVar61 = (float)uStack_c8;
        }
        else {
          uVar20 = *(ulong *)(local_98 + (ulong)*(ushort *)(local_90 + (ulong)bVar5 * 2) * 8);
          auVar42._0_8_ = CONCAT44((int)(uVar20 >> 0x15),(int)uVar20) & 0x1fffff001fffff;
          auVar42._8_4_ = (uint)(uVar20 >> 0x2a);
          uVar63 = local_100;
          uVar38 = uStack_f8;
          fVar62 = (float)uStack_f0;
          fVar60 = uStack_f0._4_4_;
          fVar61 = (float)uStack_e8;
        }
        auVar45._12_4_ = 0;
        auVar45._0_12_ = auVar42;
        auVar59 = NEON_scvtf(auVar45,4);
        local_10c = CONCAT44((float)((ulong)uVar63 >> 0x20) + fVar60 * auVar59._4_4_,
                             (float)uVar63 + fVar62 * auVar59._0_4_);
        local_104 = (float)uVar38 + fVar61 * auVar59._8_4_;
        uVar27 = 2;
      }
      iVar25 = *(int *)(param_3 + 0x20);
      bVar18 = false;
      local_128 = fVar53;
      local_11c = fVar54;
      local_118 = uVar37;
      local_110 = fVar55;
      if (param_8 == 0) {
        uVar29 = 0;
        do {
          uVar20 = (**(code **)(*param_5 + 0x10))(param_5,uVar29 | iVar28 << 1 | (int)local_7c << 8)
          ;
          if ((uVar20 & 1) != 0) {
            iVar19 = *(int *)(param_3 + 0x30);
            lVar23 = (long)iVar19;
            if ((int)(*(uint *)(param_3 + 0x34) & 0x7fffffff) <= iVar19) {
              FUN_02ebb440(param_3 + 0x28,PTR_PTR_047d1a50,lVar23 + 1);
              iVar19 = *(int *)(param_3 + 0x30);
            }
            piVar1 = (int *)(*(long *)(param_3 + 0x28) + (long)iVar19 * 0x10);
            *(int *)(param_3 + 0x30) = (int)(lVar23 + 1);
            *piVar1 = iVar25;
            piVar1[1] = iVar21 + iVar25 + uVar29;
            bVar18 = true;
            piVar1[2] = iVar22 + iVar25 + uVar29;
            piVar1[3] = (uint)uVar8;
          }
          uVar29 = uVar29 + 1;
        } while (uVar27 != uVar29);
      }
      else {
        uVar29 = 0;
        do {
          uVar32 = uVar29 | iVar28 << 1 | (int)local_7c << 8;
          uVar20 = (**(code **)(*param_5 + 0x10))(param_5,uVar32);
          if ((uVar20 & 1) != 0) {
            if (param_8 != 1) {
              FUN_032260f8(auStack_340,auStack_330,0x200);
              FUN_0322b1e0(auStack_340,"Triangle material type not supported.");
              iVar19 = FUN_03226f50(0xde9101f6,auStack_330,
                                    "../..\\Geometry/Collide/DataStructures/StaticMeshTree/hkcdStaticMeshTreeDecoder.inl"
                                    ,0x2dc);
              if (iVar19 != 0) {
                CallSupervisor(0x26);
              }
              FUN_032261b0(auStack_340);
              uVar32 = 0;
            }
            iVar19 = *(int *)(param_3 + 0x30);
            lVar23 = (long)iVar19;
            if ((int)(*(uint *)(param_3 + 0x34) & 0x7fffffff) <= iVar19) {
              FUN_02ebb440(param_3 + 0x28,PTR_PTR_047d1a50,lVar23 + 1);
              iVar19 = *(int *)(param_3 + 0x30);
            }
            piVar1 = (int *)(*(long *)(param_3 + 0x28) + (long)iVar19 * 0x10);
            *(int *)(param_3 + 0x30) = (int)(lVar23 + 1);
            bVar18 = true;
            *piVar1 = iVar25;
            piVar1[1] = iVar21 + iVar25 + uVar29;
            piVar1[2] = iVar22 + iVar25 + uVar29;
            piVar1[3] = uVar32;
          }
          uVar29 = uVar29 + 1;
        } while (uVar27 != uVar29);
      }
      if (bVar18) {
        auVar16._8_4_ = fVar55;
        auVar16._0_8_ = uVar37;
        auVar15._8_4_ = fVar55;
        auVar15._0_8_ = uVar37;
        auVar12._4_4_ = fVar50;
        auVar12._0_4_ = fVar34;
        auVar12._8_4_ = fVar53;
        auVar11._4_4_ = fVar50;
        auVar11._0_4_ = fVar34;
        auVar11._8_4_ = fVar53;
        auVar11._12_4_ = fVar56;
        auVar12._12_4_ = fVar56;
        auVar59 = NEON_ext(auVar11,auVar12,8,1);
        auVar14._4_4_ = fVar51;
        auVar14._0_4_ = fVar35;
        auVar14._8_4_ = fVar54;
        auVar13._4_4_ = fVar51;
        auVar13._0_4_ = fVar35;
        auVar13._8_4_ = fVar54;
        auVar13._12_4_ = fVar57;
        auVar14._12_4_ = fVar57;
        auVar46 = NEON_ext(auVar13,auVar14,8,1);
        auVar15._12_4_ = fVar58;
        auVar16._12_4_ = fVar58;
        auVar47 = NEON_ext(auVar15,auVar16,8,1);
        fVar34 = fVar33 * fVar34;
        fVar50 = fVar49 * fVar50;
        fVar56 = auVar43._8_4_;
        fVar53 = fVar56 * auVar59._0_4_;
        local_130 = CONCAT44(fVar50,fVar34);
        fVar35 = fVar33 * fVar35;
        fVar51 = fVar49 * fVar51;
        fVar54 = fVar56 * auVar46._0_4_;
        fVar36 = fVar33 * fVar36;
        fVar52 = fVar49 * fVar52;
        fVar55 = fVar56 * auVar47._0_4_;
        uVar37 = CONCAT44(fVar52,fVar36);
        local_124 = CONCAT44(fVar51,fVar35);
        local_118 = CONCAT44(fVar52,fVar36);
        uVar20 = (ulong)(uVar27 + 2);
        local_10c = CONCAT44(fVar49 * (float)((ulong)local_10c >> 0x20),fVar33 * (float)local_10c);
        local_104 = fVar56 * local_104;
        pfVar30 = &local_11c;
        fVar57 = fVar34;
        fVar52 = fVar50;
        fVar56 = fVar53;
        local_128 = fVar53;
        local_11c = fVar54;
        local_110 = fVar55;
        while( true ) {
          uVar20 = uVar20 - 1;
          iVar28 = *(int *)(param_3 + 0x20);
          lVar23 = (long)iVar28;
          if ((int)(*(uint *)(param_3 + 0x24) & 0x7fffffff) <= iVar28) {
            FUN_02e8df28(param_3 + 0x18,PTR_PTR_047d1a50,lVar23 + 1);
            iVar28 = *(int *)(param_3 + 0x20);
          }
          *(int *)(param_3 + 0x20) = (int)(lVar23 + 1);
          puVar10 = (undefined8 *)(*(long *)(param_3 + 0x18) + (long)iVar28 * 0x10);
          puVar10[1] = CONCAT44(fVar56,fVar56);
          *puVar10 = CONCAT44(fVar52,fVar57);
          if (uVar20 == 0) break;
          fVar57 = (float)*(undefined8 *)(pfVar30 + -2);
          fVar52 = (float)((ulong)*(undefined8 *)(pfVar30 + -2) >> 0x20);
          fVar56 = *pfVar30;
          pfVar30 = pfVar30 + 3;
        }
        uVar63 = CONCAT44(fVar50,fVar34);
      }
      else {
        uVar63 = CONCAT44(fVar50,fVar34);
      }
      if (param_4 != (long *)0x0) {
        lVar23 = (long)(int)param_4[1];
        if (bVar6 == bVar5) {
          iVar28 = (int)(lVar23 + 6);
          if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) < iVar28) {
            FUN_02e8df28(param_4,PTR_PTR_047d1a50,lVar23 + 6);
          }
          *(int *)(param_4 + 1) = iVar28;
          puVar10 = (undefined8 *)(*param_4 + lVar23 * 0x10);
          puVar10[1] = CONCAT44(fVar53,fVar53);
          *puVar10 = uVar63;
          puVar10[3] = CONCAT44(fVar54,fVar54);
          puVar10[2] = CONCAT44(fVar51,fVar35);
          puVar10[5] = CONCAT44(fVar54,fVar54);
          puVar10[4] = CONCAT44(fVar51,fVar35);
          puVar10[7] = CONCAT44(fVar55,fVar55);
          puVar10[6] = uVar37;
          puVar10[9] = CONCAT44(fVar55,fVar55);
          puVar10[8] = uVar37;
          puVar10[0xb] = CONCAT44(fVar53,fVar53);
          puVar10[10] = uVar63;
        }
        else {
          iVar28 = (int)param_4[1] + 8;
          if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) < iVar28) {
            FUN_02e8df28(param_4,PTR_PTR_047d1a50,(long)iVar28);
          }
          *(int *)(param_4 + 1) = iVar28;
          uVar38 = CONCAT44(fVar53,fVar53);
          puVar10 = (undefined8 *)(*param_4 + lVar23 * 0x10);
          puVar10[1] = uVar38;
          *puVar10 = uVar63;
          puVar10[3] = CONCAT44(fVar54,fVar54);
          puVar10[2] = CONCAT44(fVar51,fVar35);
          puVar10[5] = CONCAT44(fVar54,fVar54);
          puVar10[4] = CONCAT44(fVar51,fVar35);
          puVar10[7] = CONCAT44(fVar55,fVar55);
          puVar10[6] = uVar37;
          puVar10[9] = CONCAT44(fVar55,fVar55);
          puVar10[8] = uVar37;
          puVar10[0xf] = uVar38;
          puVar10[0xe] = uVar63;
          puVar10[0xb] = CONCAT44(local_104,local_104);
          puVar10[10] = local_10c;
          puVar10[0xd] = CONCAT44(local_104,local_104);
          puVar10[0xc] = local_10c;
          lVar23 = local_a8 + uVar31 * 4;
          if ((*(byte *)(lVar23 + 1) & local_b8) <= *(byte *)(lVar23 + 3)) {
            lVar24 = param_4[1];
            auVar48._8_8_ = uVar38;
            auVar48._0_8_ = uVar63;
            lVar23 = (long)(int)lVar24 + 2;
            iVar28 = (int)lVar23;
            if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) < iVar28) {
              FUN_02e8df28(param_4,PTR_PTR_047d1a50,lVar23);
              auVar48._8_4_ = fVar53;
              auVar48._12_4_ = fVar53;
            }
            puVar10 = (undefined8 *)(*param_4 + (long)(int)lVar24 * 0x10);
            *(int *)(param_4 + 1) = iVar28;
            puVar10[1] = auVar48._8_8_;
            *puVar10 = auVar48._0_8_;
            auVar17._8_4_ = fVar55;
            auVar17._0_8_ = uVar37;
            auVar17._12_4_ = fVar55;
            puVar10[3] = auVar17._8_8_;
            puVar10[2] = uVar37;
          }
        }
      }
    }
    uVar31 = uVar31 + 1;
    if (uVar31 == bVar3) goto LAB_00845408;
    lVar24 = local_a8;
  } while( true );
}


