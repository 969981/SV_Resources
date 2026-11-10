/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03100a30; name: FUN_03100a30
 */


void FUN_03100a30(long param_1,undefined8 param_2)

{
  void *__src;
  float *pfVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  ulong uVar7;
  int iVar8;
  void *__dest;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  int *piVar20;
  long *plVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  float fVar25;
  uint uVar26;
  float fVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  int iVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar37;
  float fVar38;
  undefined1 auVar36 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  int local_80 [2];
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar13 = *(long *)(param_1 + 0x170);
  if (lVar13 != 0) {
    lVar13 = *(long *)(lVar13 + 0x18) + ((long)*(int *)(lVar13 + 0x20) + -1) * 0x40;
    if (*(char *)(lVar13 + 0x28) == -1) {
      uVar18 = *(undefined8 *)(lVar13 + 0x10);
      *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(lVar13 + 0x18);
      *(undefined8 *)(param_1 + 0x140) = uVar18;
    }
    uVar18 = *(undefined8 *)(*(long *)(param_1 + 0x118) + 0x130);
    uStack_68 = 0;
    local_70 = *(undefined8 *)(param_1 + 0xb0);
    local_78 = (undefined **)0x0;
    local_80[0] = 1 << (ulong)(*(uint *)(param_1 + 0x94) & 0x1f);
    local_88 = *(long *)(param_1 + 0xd8);
    local_a8 = &DAT_0464de50;
    uStack_a0 = 0xffffffff;
    local_98 = 1;
    if (local_88 != 0) {
      local_78 = &local_a8;
    }
    local_b0 = 1;
    local_ac = 0xffffffff;
    local_b8 = CONCAT44(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x98));
    iVar8 = *(int *)PTR_DAT_047e4f38;
    lVar13 = tpidr_el0;
    lVar14 = *(long *)(lVar13 + 0x1000b8);
    uStack_90 = uVar18;
    if (lVar14 == 0) {
      lVar14 = FUN_00e5d3b4();
      *(long *)(lVar13 + 0x1000b8) = lVar14;
    }
    if (*(long *)(lVar14 + (long)iVar8 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    iVar8 = FUN_030ae9a4(uVar18,(undefined8 *)(param_1 + 0x30),local_80,&local_b8,&local_d0);
    if (iVar8 == -1) {
      FUN_03101024(param_1,1,param_2);
    }
    else {
      *(int *)(param_1 + 300) = iVar8;
      *(undefined8 *)(param_1 + 0x138) = uStack_c8;
      *(undefined8 *)(param_1 + 0x130) = local_d0;
    }
    if (*(char *)(param_1 + 0x128) == '\0') {
      lVar13 = *(long *)(param_1 + 0x170);
      uVar10 = *(uint *)(param_1 + 400);
      *(undefined8 *)(param_1 + 0x188) = uStack_c8;
      *(undefined8 *)(param_1 + 0x180) = local_d0;
      uVar24 = *(uint *)(lVar13 + 0x20);
      if ((((int)uVar10 < 0) || ((int)uVar24 <= (int)uVar10)) ||
         (*(int *)(*(long *)(lVar13 + 0x18) + (ulong)uVar10 * 0x40 + 0x34) != iVar8)) {
        lVar16 = 0;
        lVar14 = (long)(int)uVar10 * 0x40 + 0x74;
        do {
          if ((long)(int)uVar24 <= (long)(int)uVar10 + 1 + lVar16) {
            if ((int)uVar10 <= (int)uVar24) {
              uVar24 = uVar10;
            }
            uVar19 = (ulong)uVar24;
            goto LAB_03100bec;
          }
          lVar16 = lVar16 + 1;
          piVar20 = (int *)(*(long *)(lVar13 + 0x18) + lVar14);
          lVar14 = lVar14 + 0x40;
        } while (*piVar20 != iVar8);
        uVar10 = uVar10 + (int)lVar16;
        goto LAB_03100c0c;
      }
      goto LAB_03100c10;
    }
    goto LAB_03100eec;
  }
  goto LAB_03100fc4;
  while (*(int *)(*(long *)(lVar13 + 0x18) + uVar19 * 0x40 + 0x34) != iVar8) {
LAB_03100bec:
    iVar9 = (int)uVar19;
    uVar10 = iVar9 - 1;
    uVar19 = (ulong)uVar10;
    if (iVar9 < 1) {
      *(undefined4 *)(param_1 + 400) = 0xffffffff;
      FUN_03101024(param_1,2,param_2);
      goto LAB_03100c34;
    }
  }
LAB_03100c0c:
  *(uint *)(param_1 + 400) = uVar10;
LAB_03100c10:
  local_a8 = (undefined *)0x2000000008;
  uStack_a0 = 0x2000000008;
  local_98 = 0x3dc000003c000000;
  FUN_031041c0(lVar13,param_1 + 0x180,&local_a8);
LAB_03100c34:
  if (*(char *)(param_1 + 0x128) == '\0') {
    lVar13 = *(long *)(param_1 + 0x170);
    uVar19 = (ulong)*(int *)(param_1 + 400);
    pfVar1 = (float *)(*(long *)(lVar13 + 0x18) + uVar19 * 0x40);
    fVar33 = (float)*(undefined8 *)(param_1 + 0x188);
    fVar34 = (float)((ulong)*(undefined8 *)(param_1 + 0x188) >> 0x20);
    fVar30 = (float)*(undefined8 *)(param_1 + 0x180);
    fVar32 = (float)((ulong)*(undefined8 *)(param_1 + 0x180) >> 0x20);
    fVar22 = *pfVar1 - fVar30;
    fVar23 = pfVar1[1] - fVar32;
    fVar25 = pfVar1[2] - fVar33;
    fVar27 = pfVar1[3] - fVar34;
    bVar2 = *(byte *)(pfVar1 + 10);
    if (bVar2 != 0xff) {
      fVar29 = pfVar1[8];
      if (pfVar1[9] <= pfVar1[8]) {
        fVar29 = pfVar1[9];
      }
      iVar9 = (int)((uint)bVar2 << 0x18) >> 0x19;
      fVar29 = fVar29 * 0.01;
      fVar35 = *(float *)(PTR_DAT_047d19b0 + (long)iVar9 * 0x10 + 0x200);
      fVar37 = *(float *)(PTR_DAT_047d19b0 + (long)iVar9 * 0x10 + 0x204);
      fVar38 = *(float *)(PTR_DAT_047d19b0 + (long)iVar9 * 0x10 + 0x208);
      if ((bVar2 & 1) != 0) {
        fVar35 = -fVar35;
        fVar37 = -fVar37;
        fVar38 = -fVar38;
      }
      fVar22 = fVar22 - fVar35 * fVar29;
      fVar23 = fVar23 - fVar37 * fVar29;
      fVar25 = fVar25 - fVar38 * fVar29;
      fVar27 = fVar27 - *(float *)(PTR_DAT_047d19b0 + (long)iVar9 * 0x10 + 0x20c) * fVar29;
    }
    fVar29 = fVar22 * fVar22 + fVar23 * fVar23 + fVar25 * fVar25;
    fVar35 = fVar22 * fVar22 + fVar23 * fVar23 + fVar25 * fVar25;
    uVar7 = CONCAT44(-(uint)(0.0 < fVar35),-(uint)(0.0 < fVar29)) & 0x100000001;
    iVar9 = (int)uVar7;
    iVar31 = (int)(uVar7 >> 0x20);
    if (fVar29 == 0.0) {
      fVar29 = 0.0;
      fVar35 = 0.0;
    }
    else {
      uVar18 = NEON_fmov(0x3f800000,4);
      fVar29 = (float)uVar18 / SQRT(fVar29);
      fVar35 = (float)((ulong)uVar18 >> 0x20) / SQRT(fVar35);
    }
    uVar10 = (uint)fVar22 ^ ((uint)fVar22 ^ (uint)(fVar22 * fVar29)) & (iVar9 << 0x1f) >> 0x1f;
    uVar24 = (uint)fVar23 ^ ((uint)fVar23 ^ (uint)(fVar23 * fVar35)) & (iVar31 << 0x1f) >> 0x1f;
    uVar26 = (uint)fVar25 ^ ((uint)fVar25 ^ (uint)(fVar25 * fVar29)) & (iVar9 << 0x1f) >> 0x1f;
    uVar28 = (uint)fVar27 ^ ((uint)fVar27 ^ (uint)(fVar27 * fVar35)) & (iVar31 << 0x1f) >> 0x1f;
    *(undefined1 *)(param_1 + 0x50) = 1;
    *(uint *)(param_1 + 0x158) = uVar26;
    *(uint *)(param_1 + 0x15c) = uVar28;
    *(uint *)(param_1 + 0x150) = uVar10;
    *(uint *)(param_1 + 0x154) = uVar24;
    *(uint *)(param_1 + 0x48) = uVar26;
    *(uint *)(param_1 + 0x4c) = uVar28;
    *(uint *)(param_1 + 0x40) = uVar10;
    *(uint *)(param_1 + 0x44) = uVar24;
    iVar9 = *(int *)(lVar13 + 0x20) + -1;
    if (*(int *)(param_1 + 400) < iVar9) {
      lVar14 = *(long *)(lVar13 + 0x18);
      lVar13 = uVar19 << 0x20;
      fVar22 = *(float *)(param_1 + 0xa0);
      puVar17 = (undefined8 *)(lVar14 + uVar19 * 0x40);
      while( true ) {
        lVar13 = lVar13 + 0x100000000;
        fVar27 = (float)puVar17[1];
        fVar29 = (float)((ulong)puVar17[1] >> 0x20);
        fVar23 = (float)*puVar17;
        fVar25 = (float)((ulong)*puVar17 >> 0x20);
        fVar30 = fVar30 - fVar23;
        fVar32 = fVar32 - fVar25;
        fVar33 = fVar33 - fVar27;
        fVar34 = fVar34 - fVar29;
        fVar30 = fVar30 * fVar30;
        fVar32 = fVar32 * fVar32;
        fVar33 = fVar33 * fVar33;
        fVar34 = fVar34 * fVar34;
        auVar36._4_4_ = fVar32;
        auVar36._0_4_ = fVar30;
        auVar36._8_4_ = fVar33;
        auVar36._12_4_ = fVar34;
        auVar6._4_4_ = fVar32;
        auVar6._0_4_ = fVar30;
        auVar6._8_4_ = fVar33;
        auVar6._12_4_ = fVar34;
        auVar36 = NEON_ext(auVar36,auVar6,8,1);
        fVar30 = fVar30 + fVar32 + auVar36._0_4_;
        if (fVar22 * fVar22 < fVar30) break;
        if (*(int *)(puVar17 + 7) != -1) {
          iVar9 = (int)uVar19;
          if ((*(int *)(param_1 + 0x1a0) < iVar9) && (-1 < iVar9)) {
            puVar17 = (undefined8 *)(lVar14 + (uVar19 & 0xffffffff) * 0x40);
            auVar36 = *(undefined1 (*) [16])(lVar14 + (lVar13 >> 0x1a));
            uVar5 = puVar17[1];
            uVar18 = *puVar17;
            lVar13 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x118) +
                                                                      0x130) + 0x38) +
                                                   ((ulong)(*(uint *)((long)puVar17 + 0x34) >> 0xe)
                                                   & 0x3ff00) + 8) + 0x20) + 0x38);
            iVar31 = *(int *)(lVar13 + 0xbc);
            __src = (void *)(*(long *)(lVar13 + 0x48) +
                            (long)(int)(iVar31 * (uint)*(ushort *)
                                                        (*(long *)(lVar13 + 0x28) +
                                                        (long)*(int *)(puVar17 + 7) * 8)) * 4);
            iVar11 = *(int *)(param_1 + 0x1b8);
            lVar13 = (long)iVar11;
            if ((int)(*(uint *)(param_1 + 0x1bc) & 0x7fffffff) <= iVar11) {
              FUN_03102564(param_1 + 0x1b0,PTR_PTR_047d1a50,lVar13 + 1);
              iVar11 = *(int *)(param_1 + 0x1b8);
            }
            lVar14 = *(long *)(param_1 + 0x1b0);
            *(int *)(param_1 + 0x1b8) = (int)(lVar13 + 1);
            puVar15 = (undefined4 *)(lVar14 + (long)iVar11 * 0x60);
            plVar21 = (long *)(puVar15 + 0x14);
            *plVar21 = 0;
            piVar20 = puVar15 + 0x16;
            piVar20[0] = 0;
            piVar20[1] = -0x80000000;
            *(undefined8 *)(puVar15 + 6) = uVar5;
            *(undefined8 *)(puVar15 + 4) = uVar18;
            *(long *)(puVar15 + 10) = auVar36._8_8_;
            *(long *)(puVar15 + 8) = auVar36._0_8_;
            lVar13 = (long)iVar31;
            *puVar15 = 5;
            *(void **)(puVar15 + 0xc) = __src;
            *(void **)(puVar15 + 0xe) = (void *)((long)__src + (long)iVar31 * 4);
            if (iVar31 < 1) {
              __dest = (void *)0x0;
            }
            else {
              FUN_02f5f190(plVar21,PTR_PTR_047d1a50,lVar13);
              __dest = (void *)*plVar21;
            }
            memcpy(__dest,__src,lVar13 << 2);
            *piVar20 = iVar31;
            lVar16 = *plVar21;
            *(long *)(lVar14 + (long)iVar11 * 0x60 + 0x30) = lVar16;
            *(long *)(puVar15 + 0xe) = lVar16 + lVar13 * 4;
            *(int *)(param_1 + 0x1a0) = iVar9;
          }
          break;
        }
        fVar22 = fVar22 - SQRT(fVar30);
        uVar19 = uVar19 + 1;
        puVar17 = puVar17 + 8;
        fVar30 = fVar23;
        fVar32 = fVar25;
        fVar33 = fVar27;
        fVar34 = fVar29;
        if (iVar9 == (int)uVar19) break;
      }
    }
  }
LAB_03100eec:
  if (*(int *)(param_1 + 0x124) == 8) {
    puVar17 = (undefined8 *)(param_1 + 0x30);
    if (iVar8 != -1) {
      puVar17 = &local_d0;
    }
    fVar30 = (float)*puVar17 - *(float *)(param_1 + 0x140);
    fVar32 = (float)((ulong)*puVar17 >> 0x20) - *(float *)(param_1 + 0x144);
    fVar33 = (float)puVar17[1] - *(float *)(param_1 + 0x148);
    fVar34 = (float)((ulong)puVar17[1] >> 0x20) - *(float *)(param_1 + 0x14c);
    fVar30 = fVar30 * fVar30;
    fVar32 = fVar32 * fVar32;
    fVar33 = fVar33 * fVar33;
    fVar34 = fVar34 * fVar34;
    auVar3._4_4_ = fVar32;
    auVar3._0_4_ = fVar30;
    auVar3._8_4_ = fVar33;
    auVar3._12_4_ = fVar34;
    auVar4._4_4_ = fVar32;
    auVar4._0_4_ = fVar30;
    auVar4._8_4_ = fVar33;
    auVar4._12_4_ = fVar34;
    auVar36 = NEON_ext(auVar3,auVar4,8,1);
    if (fVar30 + fVar32 + auVar36._0_4_ < *(float *)(param_1 + 0x9c) * *(float *)(param_1 + 0x9c)) {
      *(undefined8 *)(param_1 + 0x150) = 0;
      *(undefined8 *)(param_1 + 0x158) = 0;
      if (*(char *)(param_1 + 0x168) == '\0') {
        iVar8 = *(int *)(param_1 + 0x1b8);
        lVar13 = (long)iVar8;
        if ((int)(*(uint *)(param_1 + 0x1bc) & 0x7fffffff) <= iVar8) {
          FUN_03102564(param_1 + 0x1b0,PTR_PTR_047d1a50,lVar13 + 1);
          iVar8 = *(int *)(param_1 + 0x1b8);
        }
        puVar15 = (undefined4 *)(*(long *)(param_1 + 0x1b0) + (long)iVar8 * 0x60);
        *(int *)(param_1 + 0x1b8) = (int)(lVar13 + 1);
        *(undefined8 *)(puVar15 + 0x14) = 0;
        *(undefined8 *)(puVar15 + 0x16) = 0x8000000000000000;
        *puVar15 = 6;
        *(undefined1 *)(param_1 + 0x168) = 1;
      }
    }
  }
  if (*(char *)(param_1 + 0x168) != '\0') {
    uVar12 = 3;
    goto LAB_03100fd8;
  }
  if (*(char *)(param_1 + 0x128) == '\0') {
LAB_03100fbc:
    *(undefined4 *)(param_1 + 0x120) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x50) != '\0') {
    *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x40);
    goto LAB_03100fbc;
  }
LAB_03100fc4:
  if (*(long *)(param_1 + 0x160) == 0) {
    uVar12 = 1;
  }
  else {
    uVar12 = 2;
  }
LAB_03100fd8:
  *(undefined4 *)(param_1 + 0x120) = uVar12;
  return;
}


