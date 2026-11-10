/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f07098; name: FUN_02f07098
 */


undefined4
FUN_02f07098(undefined8 param_1,int *param_2,int param_3,undefined8 *param_4,float *param_5,
            long param_6,int param_7)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  undefined *puVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  float *pfVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  byte *pbVar24;
  int iVar25;
  int iVar26;
  long *plVar27;
  long lVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  float fVar45;
  undefined1 auVar44 [16];
  float fVar46;
  undefined8 uVar47;
  float fVar48;
  float fVar49;
  ulong local_118;
  undefined1 auStack_110 [48];
  long local_e0 [7];
  ulong local_a8 [7];
  
  puVar11 = PTR_PTR_047d1a50;
  uVar4 = param_2[5];
  uVar21 = (ulong)uVar4;
  if (uVar4 != 0) {
    if (((float)param_1 == 0.0) || (param_3 == 0)) {
      uVar3 = param_2[1];
      uVar16 = (ulong)uVar3;
      lVar28 = 0;
      if (*param_2 != 0) {
        lVar28 = (long)*param_2 + (long)param_2;
      }
      iVar12 = param_2[6];
      lVar17 = 0;
      if (param_2[4] != 0) {
        lVar17 = (long)param_2 + (long)param_2[4] + 0x10;
      }
      lVar15 = 0;
      if (iVar12 != 0) {
        lVar15 = (long)iVar12 + (long)(param_2 + 6);
      }
      iVar12 = *(int *)(param_6 + 0x20);
      lVar1 = (long)iVar12 + (long)(int)uVar3;
      iVar25 = (int)lVar1;
      if ((int)(*(uint *)(param_6 + 0x24) & 0x7fffffff) < iVar25) {
        FUN_02e8df28(param_6 + 0x18,PTR_PTR_047d1a50,lVar1);
      }
      *(int *)(param_6 + 0x20) = iVar25;
      if (0 < (int)uVar3) {
        pfVar19 = (float *)(lVar28 + 8);
        puVar14 = (undefined8 *)(*(long *)(param_6 + 0x18) + (long)iVar12 * 0x10);
        do {
          fVar31 = *pfVar19;
          uVar16 = uVar16 - 1;
          uVar29 = *(undefined8 *)(pfVar19 + -2);
          pfVar19 = pfVar19 + 3;
          uVar43 = *param_4;
          uVar32 = *(undefined8 *)param_5;
          puVar14[1] = CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 2) >> 0x20) +
                                (float)((ulong)param_4[1] >> 0x20) * fVar31,
                                (float)*(undefined8 *)(param_5 + 2) + (float)param_4[1] * fVar31);
          *puVar14 = CONCAT44((float)((ulong)uVar32 >> 0x20) +
                              (float)((ulong)uVar43 >> 0x20) * (float)((ulong)uVar29 >> 0x20),
                              (float)uVar32 + (float)uVar43 * (float)uVar29);
          puVar14 = puVar14 + 2;
        } while (uVar16 != 0);
      }
      if ((int)(*(uint *)(param_6 + 0x34) & 0x7fffffff) <
          (int)(*(int *)(param_6 + 0x30) + uVar4 * 4)) {
        FUN_02ecf594(param_6 + 0x28,PTR_PTR_047d1a50);
      }
      if (0 < (int)uVar4) {
        uVar16 = 0;
        do {
          pbVar2 = (byte *)(lVar15 + (ulong)*(ushort *)(lVar17 + uVar16 * 4));
          bVar5 = *pbVar2;
          pbVar24 = (byte *)(lVar17 + uVar16 * 4 + 2);
          iVar25 = *(int *)(param_6 + 0x30);
          lVar28 = (ulong)*pbVar24 + (long)iVar25 + -2;
          iVar26 = (int)lVar28;
          if ((int)(*(uint *)(param_6 + 0x34) & 0x7fffffff) < iVar26) {
            FUN_02ebb440(param_6 + 0x28,PTR_PTR_047d1a50,lVar28);
          }
          *(int *)(param_6 + 0x30) = iVar26;
          if (2 < *pbVar24) {
            piVar18 = (int *)(*(long *)(param_6 + 0x28) + (long)iVar25 * 0x10);
            lVar28 = 0;
            do {
              bVar6 = pbVar2[lVar28 + 1];
              bVar7 = pbVar2[lVar28 + 2];
              *piVar18 = iVar12 + (uint)bVar5;
              piVar18[1] = iVar12 + (uint)bVar6;
              piVar18[2] = iVar12 + (uint)bVar7;
              piVar18[3] = param_7;
              uVar10 = lVar28 + 3;
              lVar28 = lVar28 + 1;
              piVar18 = piVar18 + 4;
            } while (uVar10 < *pbVar24);
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 != uVar21);
      }
      return 0;
    }
    if (param_3 == 1) {
      if ((int)uVar4 < 1) {
        uVar21 = 0;
        puVar14 = (undefined8 *)0x0;
        local_118 = 0x80000000;
      }
      else {
        puVar14 = (undefined8 *)
                  (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x18))
                            (PTR_PTR_047d1a50 + 0x20,uVar21 << 4);
        uVar29 = NEON_fmov(0x3f800000,4);
        auVar30 = NEON_fmov(0x3f800000,4);
        uVar16 = 0;
        puVar20 = puVar14;
        do {
          if (param_2[5] == 0) {
            lVar28 = 0;
            if (*param_2 != 0) {
              lVar28 = (long)*param_2 + (long)param_2;
            }
            puVar22 = (undefined8 *)(lVar28 + (uVar16 >> 0x18 & 0xff) * 0xc);
            uVar32 = *puVar22;
            fVar34 = *(float *)(puVar22 + 1);
            puVar23 = (undefined8 *)(lVar28 + (uVar16 >> 0x10 & 0xff) * 0xc);
            uVar43 = *puVar23;
            puVar22 = (undefined8 *)(lVar28 + (uVar16 >> 8 & 0xff) * 0xc);
            uVar47 = *puVar22;
            fVar31 = (float)uVar32;
            fVar35 = (float)uVar47;
            fVar48 = fVar35 - fVar31;
            fVar33 = (float)((ulong)uVar32 >> 0x20);
            fVar41 = (float)((ulong)uVar47 >> 0x20);
            fVar49 = fVar41 - fVar33;
            fVar40 = *(float *)(puVar22 + 1);
            puVar22 = (undefined8 *)(lVar28 + (uVar16 & 0xff) * 0xc);
            uVar32 = *puVar22;
            fVar46 = *(float *)(puVar22 + 1) - *(float *)(puVar23 + 1);
            fVar42 = (float)uVar32 - (float)uVar43;
            fVar45 = (float)((ulong)uVar32 >> 0x20) - (float)((ulong)uVar43 >> 0x20);
            uVar43 = NEON_ext(CONCAT44(fVar49,fVar48),(ulong)(uint)(fVar40 - fVar34),4,1);
            uVar32 = NEON_ext(CONCAT44(fVar45,fVar42),(ulong)(uint)fVar46,4,1);
            fVar35 = (fVar35 - fVar31) * (float)uVar32 - fVar42 * (float)uVar43;
            fVar41 = (fVar41 - fVar33) * (float)((ulong)uVar32 >> 0x20) -
                     fVar45 * (float)((ulong)uVar43 >> 0x20);
            fVar42 = (fVar40 - fVar34) * fVar42 - fVar48 * fVar46;
            fVar40 = (fVar40 - fVar34) * fVar45 - fVar49 * fVar46;
            auVar39._4_4_ = fVar41;
            auVar39._0_4_ = fVar35;
            auVar39._8_4_ = fVar42;
            auVar39._12_4_ = fVar40;
            auVar8._4_4_ = fVar41;
            auVar8._0_4_ = fVar35;
            auVar8._8_4_ = fVar42;
            auVar8._12_4_ = fVar40;
            auVar39 = NEON_ext(auVar39,auVar8,4,1);
            fVar40 = auVar39._0_4_;
            fVar42 = auVar39._4_4_;
            auVar36._8_4_ = fVar35;
            auVar36._0_8_ = auVar39._0_8_;
            auVar36._12_4_ = 0;
            fVar46 = fVar40 * fVar40 + fVar42 * fVar42 + fVar35 * fVar35;
            fVar48 = fVar40 * fVar40 + fVar42 * fVar42 + fVar35 * fVar35;
            uVar10 = CONCAT44(-(uint)(0.0 < fVar48),-(uint)(0.0 < fVar46)) & 0x100000001;
            iVar12 = (int)uVar10;
            iVar25 = (int)(uVar10 >> 0x20);
            fVar41 = 0.0;
            fVar45 = 0.0;
            puVar20[1] = (ulong)(uint)fVar35;
            *puVar20 = auVar39._0_8_;
            if (fVar46 != 0.0) {
              fVar41 = (float)uVar29 / SQRT(fVar46);
              fVar45 = (float)((ulong)uVar29 >> 0x20) / SQRT(fVar48);
            }
            auVar44._0_4_ = fVar40 * fVar41;
            auVar44._4_4_ = fVar42 * fVar45;
            auVar44._8_4_ = fVar35 * fVar41;
            auVar44._12_4_ = fVar45 * 0.0;
            auVar9._4_4_ = (iVar25 << 0x1f) >> 0x1f;
            auVar9._0_4_ = (iVar12 << 0x1f) >> 0x1f;
            auVar9._8_4_ = (iVar12 << 0x1f) >> 0x1f;
            auVar9._12_4_ = (iVar25 << 0x1f) >> 0x1f;
            auVar36 = auVar36 ^ (auVar36 ^ auVar44) & auVar9;
            auVar37._0_12_ = auVar36._0_12_;
            auVar37._12_4_ =
                 -(fVar31 * auVar36._0_4_ + fVar33 * auVar36._4_4_ + fVar34 * auVar36._8_4_);
          }
          else {
            auVar37 = *(undefined1 (*) [16])((long)(param_2 + 2) + uVar16 * 0x10 + (long)param_2[2])
            ;
          }
          puVar20[1] = auVar37._8_8_;
          *puVar20 = auVar37._0_8_;
          fVar31 = auVar37._0_4_ * (auVar30._0_4_ / (float)*param_4);
          fVar33 = auVar37._4_4_ * (auVar30._4_4_ / (float)((ulong)*param_4 >> 0x20));
          fVar34 = auVar37._8_4_ * (auVar30._8_4_ / (float)param_4[1]);
          uVar16 = uVar16 + 1;
          fVar35 = SQRT(fVar31 * fVar31 + fVar33 * fVar33 + fVar34 * fVar34);
          fVar40 = SQRT(fVar31 * fVar31 + fVar33 * fVar33 + fVar34 * fVar34);
          fVar31 = fVar31 / fVar35;
          fVar33 = fVar33 / fVar40;
          uVar32 = CONCAT44(fVar33,fVar31);
          fVar34 = fVar34 / fVar35;
          fVar40 = auVar37._12_4_ / fVar40;
          puVar20[1] = CONCAT44(fVar40,fVar34);
          *puVar20 = uVar32;
          auVar38._0_4_ = *param_5 * fVar31;
          auVar38._4_4_ = param_5[1] * fVar33;
          auVar38._8_4_ = param_5[2] * fVar34;
          auVar38._12_4_ = param_5[3] * fVar40;
          auVar39 = NEON_ext(auVar38,auVar38,8,1);
          puVar20[1] = CONCAT44(fVar40 - (auVar38._0_4_ + auVar38._4_4_ + auVar39._0_4_),fVar34);
          *puVar20 = uVar32;
          *(float *)((long)puVar20 + 0xc) = *(float *)((long)puVar20 + 0xc) - (float)param_1;
          puVar20 = puVar20 + 2;
        } while (uVar21 != uVar16);
        local_118 = uVar21;
      }
      FUN_0084f3cc(local_a8);
      FUN_0084f37c(local_e0);
      FUN_0084f37c(auStack_110);
      iVar12 = FUN_00851150(local_a8,puVar14,uVar21,auStack_110);
      if (iVar12 != -1) {
        FUN_0085c16c(local_a8,0,param_6,param_7,1);
        FUN_0084f57c(local_a8);
        if ((int)local_118 < 0) {
          return 0;
        }
        if (puVar14 == (undefined8 *)0x0) {
          return 0;
        }
        plVar27 = (long *)(puVar11 + 0x20);
        (**(code **)(*plVar27 + 0x20))(plVar27,puVar14,local_118 << 4);
        return 0;
      }
      FUN_0084f57c(local_a8);
      if ((-1 < (int)local_118) && (puVar14 != (undefined8 *)0x0)) {
        plVar27 = (long *)(puVar11 + 0x20);
        (**(code **)(*plVar27 + 0x20))(plVar27,puVar14,local_118 << 4);
      }
    }
  }
  uVar21 = (ulong)(uint)param_2[1];
  if (param_2[1] < 1) {
    return 0x80040200;
  }
  lVar28 = tpidr_el0;
  lVar17 = *(long *)(lVar28 + 0x1000b8);
  if (lVar17 == 0) {
    lVar17 = FUN_00e5d3b4();
    *(long *)(lVar28 + 0x1000b8) = lVar17;
  }
  lVar28 = *(long *)(*(long *)(lVar17 + 0x3d0) + 0x10);
  if (*(long *)(lVar28 + 8) == 0) {
    lVar17 = uVar21 * 0x10;
    local_e0[0] = lVar17;
    if (lVar28 != 0) {
      local_a8[0] = lVar17 + 0x3fU & 0x1fffffffc0;
      if (local_a8[0] <= *(ulong *)(lVar28 + 0x28)) {
        lVar15 = *(long *)(lVar28 + 0x38);
        if (local_a8[0] + lVar15 <= *(ulong *)(lVar28 + 0x40)) {
          *(ulong *)(lVar28 + 0x38) = local_a8[0] + lVar15;
          goto LAB_02f0763c;
        }
      }
      lVar15 = FUN_031cf3b4(lVar28,local_a8);
      goto LAB_02f0763c;
    }
  }
  else {
    local_e0[0] = uVar21 << 4;
  }
  lVar17 = local_e0[0];
  lVar15 = (**(code **)PTR_DAT_047d1a08)(1,local_e0,0x40);
  lVar28 = 0;
LAB_02f0763c:
  lVar1 = 0;
  if (*param_2 != 0) {
    lVar1 = (long)*param_2 + (long)param_2;
  }
  uVar13 = FUN_02f07760(param_1,lVar1,uVar21,param_3,param_4,param_5,param_6,param_7);
  if (lVar28 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar15,lVar17);
    return uVar13;
  }
  uVar21 = lVar17 + 0x3fU & 0x1fffffffc0;
  if ((*(ulong *)(lVar28 + 0x28) < uVar21) || (*(long *)(lVar28 + 0x38) != uVar21 + lVar15)) {
    if (lVar15 == 0) {
      return uVar13;
    }
    if (*(ulong *)(lVar28 + 0x28) < uVar21 + 0x40) {
      *(int *)(*(long *)(lVar28 + 0x30) + 0x20) = *(int *)(*(long *)(lVar28 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar28 + 0x10) + 0x18))
                (*(long **)(lVar28 + 0x10),lVar15 - *(int *)(lVar15 + -4),uVar21 + 0x44);
      return uVar13;
    }
    if (*(long *)(lVar28 + 0x38) != uVar21 + lVar15) {
      FUN_031cf778(lVar28,lVar15);
      return uVar13;
    }
    *(long *)(lVar28 + 0x38) = lVar15;
  }
  else {
    *(long *)(lVar28 + 0x38) = lVar15;
    if (*(long *)(lVar28 + 0x48) != lVar15) {
      return uVar13;
    }
  }
  FUN_031cf578(lVar28);
  return uVar13;
}


