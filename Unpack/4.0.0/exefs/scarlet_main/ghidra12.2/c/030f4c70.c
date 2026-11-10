/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030f4c70; name: FUN_030f4c70
 */


void FUN_030f4c70(long param_1,int *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  float *pfVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  float fVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined *local_158;
  undefined1 local_150;
  long local_148;
  int local_140;
  undefined8 local_138;
  long local_130;
  undefined8 local_128;
  long local_120;
  undefined8 local_118;
  undefined *local_110;
  undefined4 local_108;
  long local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined4 local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined *puStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long *local_70;
  
  lVar18 = tpidr_el0;
  lVar9 = *(long *)(lVar18 + 0x1000b8);
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar18 + 0x1000b8) = lVar9;
  }
  plVar19 = *(long **)(lVar9 + 0x3e0);
  if (plVar19 != (long *)0x0) {
    lVar9 = *plVar19;
    if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
      (**(code **)(lVar9 + 0x18))
                ("threadSafeResetClearanceMediator",0x20,*(undefined8 *)(lVar9 + 0x28));
    }
    puVar1 = (undefined8 *)plVar19[2];
    uVar10 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= (ulong)plVar19[3]) && (plVar19[2] = uVar10, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtthreadSafeResetClearanceMediator";
      uVar7 = nn::os::GetSystemTick();
      puVar1[1] = uVar7;
    }
    if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (plVar19[6] != 0)) {
      puVar1 = (undefined8 *)plVar19[2];
      uVar10 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar10 <= (ulong)plVar19[3]) && (plVar19[2] = uVar10, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar19[6] + 8);
      }
    }
    lVar9 = *(long *)(lVar18 + 0x1000b8);
  }
  puVar6 = PTR_DAT_047e4f38;
  iVar13 = *(int *)PTR_DAT_047e4f38;
  local_70 = plVar19;
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar18 + 0x1000b8) = lVar9;
  }
  if (*(long *)(lVar9 + (long)iVar13 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  puVar5 = PTR_PTR_047d1a50;
  lVar9 = *(long *)(*(long *)(param_1 + 0x38) + (long)*param_2 * 0x100);
  local_c8 = 0xffffffff;
  local_c0 = 0;
  uStack_b8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  puStack_d0 = PTR_DAT_047e51d0 + 0x10;
  local_80 = 0x40000000;
  local_e0 = 0;
  local_d8._0_4_ = 0;
  local_d8._4_4_ = 0x80000000;
  local_90 = 0;
  uStack_88 = 0;
  if (0 < (int)((ulong)((long)param_4 - (long)param_3) >> 5)) {
    FUN_0300996c(&local_e0,PTR_PTR_047d1a50 + 0x20,
                 (ulong)((long)param_4 - (long)param_3) >> 5 & 0xffffffff);
  }
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  lVar15 = 8;
  plVar14 = (long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x18) +
                    (long)*(int *)(*(long *)(lVar9 + 0x20) + 0x180) * 0x18);
  uVar2 = *(uint *)(plVar14 + 1);
  lVar12 = 0;
  do {
    lVar17 = lVar12;
    if ((long)(int)((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) - 1) + 1 == lVar17)
    goto LAB_030f4eb4;
    lVar11 = *plVar14;
    pfVar16 = (float *)(lVar11 + lVar15);
    lVar15 = lVar15 + 0x18;
    lVar12 = lVar17 + 1;
  } while (*pfVar16 < 0.0);
  if ((int)(lVar17 + 1) != 0) {
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    do {
      iVar13 = (int)lVar17;
      lVar17 = (long)iVar13;
      lVar15 = lVar17 * 2 + (long)iVar13;
      pfVar16 = (float *)(lVar11 + 0x20 + lVar15 * 8);
      fVar28 = *(float *)(lVar11 + lVar15 * 8 + 8);
      iVar13 = iVar13 + 1;
      if ((float)CONCAT13(uVar23,CONCAT12(uVar22,CONCAT11(uVar21,uVar20))) == fVar28 ||
          (float)CONCAT13(uVar23,CONCAT12(uVar22,CONCAT11(uVar21,uVar20))) < fVar28) {
        uVar20 = SUB41(fVar28,0);
        uVar21 = (undefined1)((uint)fVar28 >> 8);
        uVar22 = (undefined1)((uint)fVar28 >> 0x10);
        uVar23 = (undefined1)((uint)fVar28 >> 0x18);
      }
      do {
        lVar17 = lVar17 + 1;
        if ((int)uVar2 <= lVar17) goto LAB_030f4eb4;
        fVar28 = *pfVar16;
        iVar13 = iVar13 + 1;
        pfVar16 = pfVar16 + 6;
      } while (fVar28 < 0.0);
    } while (iVar13 != 0);
  }
LAB_030f4eb4:
  if (param_3 != param_4) {
    fVar28 = (float)CONCAT13(uVar23,CONCAT12(uVar22,CONCAT11(uVar21,uVar20)));
    fVar3 = (float)CONCAT13(uVar23,CONCAT12(uVar22,CONCAT11(uVar21,uVar20)));
    do {
      uVar43 = param_3[1];
      uVar7 = *param_3;
      uVar46 = param_3[3];
      uVar45 = param_3[2];
      lVar15 = (long)(int)local_d8;
      if ((int)(local_d8._4_4_ & 0x7fffffff) <= (int)local_d8) {
        FUN_02ebb550(&local_e0,puVar5 + 0x20,lVar15 + 1);
      }
      fVar38 = (float)uVar7;
      fVar27 = (float)uVar45;
      iVar13 = -(uint)(fVar27 < fVar38);
      fVar40 = (float)((ulong)uVar7 >> 0x20);
      fVar30 = (float)((ulong)uVar45 >> 0x20);
      iVar4 = -(uint)(fVar30 < fVar40);
      fVar26 = (float)uVar43;
      fVar32 = (float)uVar46;
      iVar24 = -(uint)(fVar32 < fVar26);
      lVar12 = (long)(int)local_d8;
      local_d8._0_4_ = (int)(lVar15 + 1);
      if (CONCAT13((byte)((uint)iVar4 >> 0x18) | (byte)((uint)iVar13 >> 0x18) |
                   (byte)((uint)iVar24 >> 0x18),
                   CONCAT12((byte)((uint)iVar4 >> 0x10) | (byte)((uint)iVar13 >> 0x10) |
                            (byte)((uint)iVar24 >> 0x10),
                            CONCAT11((byte)((uint)iVar4 >> 8) | (byte)((uint)iVar13 >> 8) |
                                     (byte)((uint)iVar24 >> 8),
                                     (byte)iVar4 | (byte)iVar13 | (byte)iVar24))) == 0) {
        fVar34 = (fVar38 + fVar27) * 0.5;
        fVar35 = (fVar40 + fVar30) * 0.5;
        fVar25 = (fVar26 + fVar32) * 0.5;
        fVar29 = (fVar27 - fVar38) * 0.5;
        fVar31 = (fVar30 - fVar40) * 0.5;
        fVar33 = (fVar32 - fVar26) * 0.5;
        fVar39 = (float)*(undefined8 *)(lVar9 + 0x70);
        fVar41 = (float)((ulong)*(undefined8 *)(lVar9 + 0x70) >> 0x20);
        fVar42 = (float)*(undefined8 *)(lVar9 + 0x78);
        fVar44 = (float)((ulong)*(undefined8 *)(lVar9 + 0x78) >> 0x20);
        fVar30 = (float)*(undefined8 *)(lVar9 + 0x60);
        fVar32 = (float)((ulong)*(undefined8 *)(lVar9 + 0x60) >> 0x20);
        fVar36 = (float)*(undefined8 *)(lVar9 + 0x68);
        fVar37 = (float)((ulong)*(undefined8 *)(lVar9 + 0x68) >> 0x20);
        fVar47 = (float)*(undefined8 *)(lVar9 + 0x80);
        fVar48 = (float)((ulong)*(undefined8 *)(lVar9 + 0x80) >> 0x20);
        fVar49 = (float)*(undefined8 *)(lVar9 + 0x88);
        fVar50 = (float)((ulong)*(undefined8 *)(lVar9 + 0x88) >> 0x20);
        fVar38 = (float)*(undefined8 *)(lVar9 + 0x90) +
                 fVar47 * fVar25 + fVar30 * fVar34 + fVar39 * fVar35;
        fVar40 = (float)((ulong)*(undefined8 *)(lVar9 + 0x90) >> 0x20) +
                 fVar48 * fVar25 + fVar32 * fVar34 + fVar41 * fVar35;
        fVar26 = (float)*(undefined8 *)(lVar9 + 0x98) +
                 fVar49 * fVar25 + fVar36 * fVar34 + fVar42 * fVar35;
        fVar27 = (float)((ulong)*(undefined8 *)(lVar9 + 0x98) >> 0x20) +
                 fVar50 * fVar25 + fVar37 * fVar34 + fVar44 * fVar35;
        fVar30 = ABS(fVar30 * fVar29) + ABS(fVar39 * fVar31) + fVar3 + ABS(fVar47 * fVar33);
        fVar32 = ABS(fVar32 * fVar29) + ABS(fVar41 * fVar31) +
                 (float)(CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(uVar20,fVar3))))
                        >> 0x20) + ABS(fVar48 * fVar33);
        fVar34 = ABS(fVar36 * fVar29) + ABS(fVar42 * fVar31) + fVar28 + ABS(fVar49 * fVar33);
        fVar35 = ABS(fVar37 * fVar29) + ABS(fVar44 * fVar31) + fVar28 + ABS(fVar50 * fVar33);
        uVar45 = CONCAT44(fVar40 + fVar32,fVar38 + fVar30);
        uVar46 = CONCAT44(fVar27 + fVar35,fVar26 + fVar34);
        uVar7 = CONCAT44(fVar40 - fVar32,fVar38 - fVar30);
        uVar43 = CONCAT44(fVar27 - fVar35,fVar26 - fVar34);
      }
      puVar1 = (undefined8 *)(local_e0 + lVar12 * 0x20);
      param_3 = param_3 + 4;
      puVar1[1] = uVar43;
      *puVar1 = uVar7;
      puVar1[3] = uVar46;
      puVar1[2] = uVar45;
    } while (param_3 != param_4);
  }
  local_a0 = local_e0 + (long)(int)local_d8 * 0x20;
  iVar13 = *(int *)puVar6;
  local_a8 = local_e0;
  lVar9 = *(long *)(lVar18 + 0x1000b8);
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar18 + 0x1000b8) = lVar9;
  }
  if (*(long *)(lVar9 + (long)iVar13 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  local_140 = *param_2;
  local_150 = 0;
  local_158 = &DAT_0464dd18;
  local_130 = 0;
  local_128 = -0x8000000000000000;
  local_110 = &DAT_03d7702c;
  local_108 = 0;
  local_f0 = &DAT_03d7702c;
  local_e8 = 0;
  local_120 = 0;
  local_118 = -0x8000000000000000;
  local_100 = 0;
  local_f8 = -0x8000000000000000;
  local_138 = *(undefined8 *)(*(long *)(param_1 + 0x38) + (long)local_140 * 0x100);
  local_148 = param_1;
  FUN_0308fff8(local_138,&local_130);
  (**(code **)(**(long **)(param_1 + 0xe0) + 0x58))
            (*(long **)(param_1 + 0xe0),&puStack_d0,&local_158);
  local_158 = &DAT_0464dd18;
  FUN_030900f4(local_138,&local_130);
  iVar13 = (int)local_118 + -1;
  if (0 < (int)local_118) {
    do {
      piVar8 = (int *)(local_120 + (long)iVar13 * 0x18);
      FUN_030900f4(*(undefined8 *)(*(long *)(local_148 + 0x38) + (long)*piVar8 * 0x100),piVar8 + 2);
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
  }
  if ((local_f0 != (undefined *)0x0) && (*(int *)(local_f0 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar5[8],local_f0,0);
    local_f0 = &DAT_03d7702c;
    local_e8 = 0;
  }
  lVar18 = local_f8;
  uVar10 = (ulong)local_f8._4_4_;
  local_f8 = (ulong)local_f8._4_4_ << 0x20;
  if ((-1 < lVar18) && (local_100 != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))(puVar5,local_100,uVar10 << 2);
  }
  local_100 = 0;
  local_f8 = CONCAT44(0x80000000,(undefined4)local_f8);
  if ((local_110 != (undefined *)0x0) && (*(int *)(local_110 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar5[8],local_110,0);
    local_110 = &DAT_03d7702c;
    local_108 = 0;
  }
  lVar18 = local_120;
  if ((int)local_118 != 0) {
    lVar9 = (long)(int)local_118 * 0x18;
    do {
      lVar15 = lVar18 + lVar9;
      *(undefined4 *)(lVar15 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar15 + -4)) && (*(long *)(lVar15 + -0x10) != 0)) {
        (**(code **)(*(long *)(puVar5 + 0x20) + 0x20))
                  (puVar5 + 0x20,*(long *)(lVar15 + -0x10),(ulong)*(uint *)(lVar15 + -4) << 3);
      }
      lVar9 = lVar9 + -0x18;
      *(undefined8 *)(lVar15 + -0x10) = 0;
      *(undefined4 *)(lVar15 + -4) = 0x80000000;
    } while (lVar9 != 0);
  }
  lVar18 = local_118;
  uVar10 = (ulong)local_118._4_4_;
  local_118 = (ulong)local_118._4_4_ << 0x20;
  if ((-1 < lVar18) && (local_120 != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))(puVar5,local_120,uVar10 * 0x18);
  }
  lVar18 = local_128;
  local_118 = CONCAT44(0x80000000,(int)local_118);
  uVar10 = (ulong)local_128._4_4_;
  local_120 = 0;
  local_128 = (ulong)local_128._4_4_ << 0x20;
  if ((-1 < lVar18) && (local_130 != 0)) {
    (**(code **)(*(long *)(puVar5 + 0x20) + 0x20))(puVar5 + 0x20,local_130,uVar10 << 3);
  }
  uVar2 = local_d8._4_4_;
  uVar10 = (ulong)local_d8._4_4_;
  local_d8 = (ulong)local_d8._4_4_ << 0x20;
  if ((-1 < (int)uVar2) && (local_e0 != 0)) {
    (**(code **)(*(long *)(puVar5 + 0x20) + 0x20))(puVar5 + 0x20,local_e0,uVar10 << 5);
  }
  if (plVar19 != (long *)0x0) {
    lVar18 = *plVar19;
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar19[6] != 0)) {
      puVar1 = (undefined8 *)plVar19[2];
      uVar10 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar10 <= (ulong)plVar19[3]) && (plVar19[2] = uVar10, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar19[6] + 8);
      }
    }
    puVar1 = (undefined8 *)plVar19[2];
    uVar10 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= (ulong)plVar19[3]) && (plVar19[2] = uVar10, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_03c2d363;
      uVar7 = nn::os::GetSystemTick();
      puVar1[1] = uVar7;
    }
    if (*(code **)(lVar18 + 0x20) != (code *)0x0) {
      (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x28));
    }
  }
  return;
}


