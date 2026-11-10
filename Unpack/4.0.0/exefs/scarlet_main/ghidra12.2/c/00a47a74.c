/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a47a74; name: FUN_00a47a74
 */


/* WARNING: Removing unreachable block (ram,0x00a47dd8) */

void FUN_00a47a74(undefined ***param_1,undefined ***param_2,long param_3,long param_4,long param_5,
                 long param_6)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  float *pfVar20;
  uint uVar21;
  float *pfVar22;
  float *pfVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  int iVar26;
  long lVar27;
  float *pfVar28;
  float *pfVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  undefined **ppuVar33;
  uint uVar34;
  undefined **ppuVar35;
  undefined8 *puVar36;
  int iVar37;
  uint uVar38;
  long lVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar47;
  undefined8 uVar46;
  float fVar48;
  float fVar50;
  undefined8 uVar49;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined **local_158;
  int local_144;
  uint local_11c;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined **local_f0;
  undefined **local_e8;
  long local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  undefined **local_c0;
  undefined **local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined **local_90;
  undefined **local_88;
  undefined **local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined **local_70;
  
  if (((((*(char *)(param_1 + 1) == '\0') || (*(char *)(param_2 + 1) == '\0')) ||
       (*(char *)(param_3 + 8) == '\0')) ||
      ((*(char *)(param_4 + 8) == '\0' || (*(char *)(param_5 + 8) == '\0')))) ||
     (*(char *)(param_6 + 8) == '\0')) {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else if (param_1 == param_2) {
    local_b0 = 0;
    local_f0 = &PTR_FUN_04540ef8;
    local_e8 = (undefined **)CONCAT71(local_e8._1_7_,1);
    local_78 = 0;
    local_e0 = 0;
    local_d8 = (undefined **)0x0;
    local_d0 = 0;
    local_c8 = DAT_04836488;
    local_c0 = (undefined **)0x3fffffffffffffff;
    local_b8 = (undefined **)0x0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = DAT_04836488;
    local_88 = (undefined **)0x3fffffffffffffff;
    local_80 = (undefined **)0x0;
    local_70 = (undefined **)0x0;
    FUN_00a47a74(&local_f0,param_1,param_3,param_4,param_5,param_6);
    ppuVar35 = DAT_04836488;
    ppuVar33 = param_1[0x10];
    if (ppuVar33 != (undefined **)0x0) {
      if (param_1[2] == param_1[3]) {
        lVar39 = 0;
      }
      else {
        lVar39 = 1;
        ppuVar25 = param_1[2];
        do {
          ppuVar24 = (undefined **)((long)ppuVar25 + 4);
          lVar39 = (long)*(int *)ppuVar25 * (long)(int)lVar39;
          ppuVar25 = ppuVar24;
        } while (param_1[3] != ppuVar24);
        lVar39 = lVar39 * 0x88;
      }
      uVar14 = (**(code **)(*DAT_04836488 + 0xf8))(DAT_04836488);
      if (((uVar14 & 1) == 0) || (lVar27 = FUN_00c4e600(), *(int *)(lVar27 + 0x12c8) < 1)) {
        (**(code **)(*ppuVar35 + 0x18))(ppuVar35,ppuVar33,lVar39,0x40);
      }
      else {
        FUN_00c48fe8(ppuVar35,ppuVar33,lVar39,0x40);
      }
      param_1[0x10] = (undefined **)0x0;
    }
    ppuVar35 = param_1[2];
    param_1[3] = ppuVar35;
    param_1[10] = param_1[9];
    if ((char)local_e8 == '\0') {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    else {
      if (&local_f0 != param_1) {
        ppuVar33 = param_1[5];
        if (ppuVar33 != local_c8) {
          ppuVar25 = param_1[4];
          param_1[3] = ppuVar35;
          uVar14 = (**(code **)(*ppuVar33 + 0xf8))(ppuVar33);
          if (((uVar14 & 1) == 0) || (lVar39 = FUN_00c4e600(), *(int *)(lVar39 + 0x12c8) < 1)) {
            (**(code **)(*ppuVar33 + 0x18))(ppuVar33,ppuVar35,(long)ppuVar25 - (long)ppuVar35,4);
          }
          else {
            FUN_00c48fe8(ppuVar33,ppuVar35,(long)ppuVar25 - (long)ppuVar35,4);
          }
          param_1[3] = (undefined **)0x0;
          param_1[4] = (undefined **)0x0;
          param_1[2] = (undefined **)0x0;
        }
        param_1[7] = local_b8;
        param_1[8] = (undefined **)CONCAT44(uStack_ac,local_b0);
        param_1[5] = local_c8;
        param_1[6] = local_c0;
        FUN_00a4a9e4(param_1 + 2,local_e0,local_d8);
        ppuVar35 = param_1[0xc];
        if (ppuVar35 != local_90) {
          ppuVar25 = param_1[9];
          param_1[10] = ppuVar25;
          ppuVar33 = param_1[0xb];
          uVar14 = (**(code **)(*ppuVar35 + 0xf8))(ppuVar35);
          if (((uVar14 & 1) == 0) || (lVar39 = FUN_00c4e600(), *(int *)(lVar39 + 0x12c8) < 1)) {
            (**(code **)(*ppuVar35 + 0x18))(ppuVar35,ppuVar25,(long)ppuVar33 - (long)ppuVar25,4);
          }
          else {
            FUN_00c48fe8(ppuVar35,ppuVar25,(long)ppuVar33 - (long)ppuVar25,4);
          }
          param_1[10] = (undefined **)0x0;
          param_1[0xb] = (undefined **)0x0;
          param_1[9] = (undefined **)0x0;
        }
        param_1[0xe] = local_80;
        param_1[0xf] = (undefined **)CONCAT44(uStack_74,local_78);
        param_1[0xc] = local_90;
        param_1[0xd] = local_88;
        FUN_00a4a9e4(param_1 + 9,local_a8,local_a0);
      }
      param_1[0x10] = local_70;
      local_70 = (undefined **)0x0;
      local_d8 = (undefined **)local_e0;
      local_a0 = local_a8;
    }
    FUN_00a43810(&local_f0);
  }
  else {
    if ((int)((ulong)((long)param_2[3] - (long)param_2[2]) >> 2) < 1) {
      local_144 = 0;
    }
    else {
      local_144 = *(int *)param_2[2];
    }
    local_f0 = (undefined **)0x0;
    local_e8 = (undefined **)0x0;
    local_e0 = 0;
    local_d8 = DAT_04836488;
    local_d0 = 0x3fffffffffffffff;
    local_c8 = (undefined **)0x0;
    local_fc = 0x2c000000003;
    local_f4 = 0x500;
    local_c0 = (undefined **)((ulong)local_c0 & 0xffffffff00000000);
    FUN_00a416f8(&local_f0,0,&local_fc,&local_f0);
    FUN_00a42c28(param_1,&local_f0,0);
    ppuVar33 = local_d8;
    ppuVar35 = local_f0;
    cVar4 = *(char *)(param_1 + 1);
    if (local_f0 != (undefined **)0x0) {
      local_e8 = local_f0;
      lVar39 = local_e0 - (long)local_f0;
      uVar14 = (**(code **)(*local_d8 + 0xf8))(local_d8);
      if (((uVar14 & 1) == 0) || (lVar27 = FUN_00c4e600(), *(int *)(lVar27 + 0x12c8) < 1)) {
        (**(code **)(*ppuVar33 + 0x18))(ppuVar33,ppuVar35,lVar39,4);
      }
      else {
        FUN_00c48fe8(ppuVar33,ppuVar35,lVar39,4);
      }
    }
    if (cVar4 != '\0') {
      pfVar22 = *(float **)(param_6 + 0x80);
      pfVar28 = *(float **)(param_4 + 0x80);
      fVar6 = *pfVar22;
      fVar7 = pfVar22[2];
      pfVar29 = *(float **)(param_5 + 0x80);
      fVar8 = pfVar22[1];
      if ((int)((ulong)(*(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10)) >> 2) < 1) {
        lVar39 = 0;
        pfVar22 = pfVar29;
      }
      else {
        lVar39 = (long)**(int **)(param_5 + 0x48) << 1;
        pfVar22 = pfVar29 + **(int **)(param_5 + 0x48);
      }
      ppuVar35 = param_1[0x10];
      if ((int)((ulong)((long)param_1[3] - (long)param_1[2]) >> 2) < 1) {
        lVar27 = 0;
        local_158 = ppuVar35;
      }
      else {
        lVar27 = (long)*(int *)param_1[9] << 1;
        local_158 = (undefined **)((long)ppuVar35 + (long)*(int *)param_1[9] * 4);
      }
      if (0 < local_144) {
        pfVar23 = pfVar29 + lVar39;
        iVar1 = 0;
        do {
          fVar9 = *pfVar29;
          pfVar29 = pfVar29 + 1;
          fVar10 = *pfVar22;
          pfVar22 = pfVar22 + 1;
          fVar11 = *pfVar23;
          pfVar23 = pfVar23 + 1;
          fVar12 = *pfVar28;
          pfVar28 = pfVar28 + 1;
          if ((int)((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10)) >> 2) < 1) {
            lVar39 = 0;
          }
          else {
            lVar39 = (long)**(int **)(param_3 + 0x48) * (long)iVar1;
          }
          pfVar2 = (float *)(*(long *)(param_3 + 0x80) + lVar39 * 4);
          iVar18 = 0;
          local_11c = 4;
          ppuVar33 = ppuVar35;
          ppuVar25 = local_158;
          puVar36 = (undefined8 *)((long)ppuVar35 + lVar27 * 4);
          do {
            uVar14 = 0;
            do {
              iVar37 = (int)uVar14;
              if (uVar14 == 0) {
                iVar26 = 4;
                uVar32 = 3;
                uVar30 = 0xffffffff;
LAB_00a47de8:
                uVar31 = (int)uVar32 + (int)((uVar32 >> 1 & 0x7fffffff) / 0x4ff) * -0x9fe;
                if (0x4ff < uVar31) {
                  uVar31 = 0x9fe - uVar31;
                }
                uVar16 = 2 - iVar37;
                if (uVar14 != 0) {
                  uVar16 = iVar37 - 2;
                }
                uVar16 = uVar16 % 0x9fe;
                if (0x4ff < uVar16) {
                  uVar16 = 0x9fe - uVar16;
                }
                uVar21 = uVar30;
LAB_00a47e38:
                uVar30 = -uVar21;
                if (uVar14 != 0) {
                  uVar30 = uVar21;
                }
                uVar30 = (int)uVar30 % 0x9fe;
                if (0x4ff < (int)uVar30) {
                  uVar30 = 0x9fe - uVar30;
                }
              }
              else {
                uVar30 = iVar37 - 1;
                iVar26 = iVar37 + -4;
                uVar32 = uVar14 - 3;
                uVar31 = (uint)uVar32;
                if (0x501 < uVar30) goto LAB_00a47de8;
                uVar16 = iVar37 - 2;
                uVar21 = 0x500;
                if (0x4ff < uVar30) goto LAB_00a47e38;
              }
              uVar32 = uVar14 + 8;
              if (uVar14 < 0x4f8) {
                uVar17 = iVar37 + 10;
                uVar21 = iVar37 + 9;
                uVar15 = uVar32;
                if (0x4f5 < uVar14) goto LAB_00a47ef0;
                uVar19 = iVar37 + 0xb;
              }
              else {
                uVar21 = ((uint)uVar32 & 0xffff) + (((uint)uVar32 >> 1 & 0x7fff) / 0x4ff) * -0x9fe;
                if (0x4ff < uVar21) {
                  uVar21 = 0x9fe - uVar21;
                }
                uVar15 = (ulong)uVar21;
                uVar21 = (iVar37 + 9U & 0xffff) + ((iVar37 + 9U >> 1 & 0x7fff) / 0x4ff) * -0x9fe;
                if (0x4ff < uVar21) {
                  uVar21 = 0x9fe - uVar21;
                }
LAB_00a47ef0:
                uVar17 = (iVar37 + 10U & 0xffff) + ((iVar37 + 10U >> 1 & 0x7fff) / 0x4ff) * -0x9fe;
                if (0x4ff < uVar17) {
                  uVar17 = 0x9fe - uVar17;
                }
                uVar19 = (iVar37 + 0xbU & 0xffff) + ((iVar37 + 0xbU >> 1 & 0x7fff) / 0x4ff) * -0x9fe
                ;
                if (0x4ff < uVar19) {
                  uVar19 = 0x9fe - uVar19;
                }
              }
              ppuVar24 = param_2[0x10];
              fVar45 = fVar12;
              fVar47 = fVar12;
              fVar48 = fVar12;
              fVar50 = fVar12;
              fVar40 = fVar12;
              fVar42 = fVar12;
              fVar43 = fVar12;
              fVar44 = fVar12;
              if ((int)((ulong)((long)param_2[3] - (long)param_2[2]) >> 2) < 2) {
                fVar52 = *(float *)((long)ppuVar24 + (long)(int)uVar31 * 4);
                lVar39 = 0;
                fVar53 = *(float *)((long)ppuVar24 + (long)(int)uVar16 * 4);
                fVar54 = *(float *)((long)ppuVar24 + (long)(int)uVar30 * 4);
                fVar55 = *(float *)((long)ppuVar24 + uVar14 * 4);
                fVar56 = *(float *)((long)ppuVar24 + (uVar14 | 1) * 4);
                fVar58 = *(float *)((long)ppuVar24 + (uVar14 | 2) * 4);
                fVar59 = *(float *)((long)ppuVar24 + (uVar14 | 3) * 4);
                fVar57 = *(float *)((long)ppuVar24 + (uVar14 | 4) * 4);
                fVar60 = *(float *)((long)ppuVar24 + (uVar14 | 5) * 4);
                fVar62 = *(float *)((long)ppuVar24 + (uVar14 | 6) * 4);
                fVar63 = *(float *)((long)ppuVar24 + (uVar14 | 7) * 4);
                fVar61 = *(float *)((long)ppuVar24 + (long)(int)uVar15 * 4);
                fVar41 = *(float *)((long)ppuVar24 + (ulong)uVar21 * 4);
                fVar51 = *(float *)((long)ppuVar24 + (ulong)uVar17 * 4);
                do {
                  pfVar20 = (float *)((long)pfVar2 + lVar39);
                  lVar39 = lVar39 + 0x24;
                  fVar64 = *pfVar20;
                  fVar65 = pfVar20[1];
                  fVar66 = pfVar20[2];
                  fVar70 = pfVar20[3];
                  fVar67 = pfVar20[4];
                  fVar71 = pfVar20[5];
                  fVar68 = pfVar20[6];
                  fVar72 = pfVar20[7];
                  fVar69 = pfVar20[8];
                  fVar45 = fVar45 + fVar64 * *(float *)((long)ppuVar24 + (long)iVar26 * 4) +
                           fVar52 * fVar65 + fVar53 * fVar66 + fVar54 * fVar70 + fVar55 * fVar67 +
                           fVar56 * fVar71 + fVar58 * fVar68 + fVar59 * fVar72 + fVar57 * fVar69;
                  fVar47 = fVar47 + fVar64 * fVar52 + fVar53 * fVar65 + fVar54 * fVar66 +
                           fVar55 * fVar70 + fVar56 * fVar67 + fVar58 * fVar71 + fVar59 * fVar68 +
                           fVar57 * fVar72 + fVar60 * fVar69;
                  fVar48 = fVar48 + fVar64 * fVar53 + fVar54 * fVar65 + fVar55 * fVar66 +
                           fVar56 * fVar70 + fVar58 * fVar67 + fVar59 * fVar71 + fVar57 * fVar68 +
                           fVar60 * fVar72 + fVar62 * fVar69;
                  fVar50 = fVar50 + fVar64 * fVar54 + fVar55 * fVar65 + fVar56 * fVar66 +
                           fVar58 * fVar70 + fVar59 * fVar67 + fVar57 * fVar71 + fVar60 * fVar68 +
                           fVar62 * fVar72 + fVar63 * fVar69;
                  fVar40 = fVar40 + fVar64 * fVar55 + fVar56 * fVar65 + fVar58 * fVar66 +
                           fVar59 * fVar70 + fVar57 * fVar67 + fVar60 * fVar71 + fVar62 * fVar68 +
                           fVar63 * fVar72 + fVar61 * fVar69;
                  fVar42 = fVar42 + fVar64 * fVar56 + fVar58 * fVar65 + fVar59 * fVar66 +
                           fVar57 * fVar70 + fVar60 * fVar67 + fVar62 * fVar71 + fVar63 * fVar68 +
                           fVar61 * fVar72 + fVar41 * fVar69;
                  fVar43 = fVar43 + fVar64 * fVar58 + fVar59 * fVar65 + fVar57 * fVar66 +
                           fVar60 * fVar70 + fVar62 * fVar67 + fVar63 * fVar71 + fVar61 * fVar68 +
                           fVar41 * fVar72 + fVar51 * fVar69;
                  fVar44 = fVar44 + fVar64 * fVar59 + fVar57 * fVar65 + fVar60 * fVar66 +
                           fVar62 * fVar70 + fVar63 * fVar67 + fVar61 * fVar71 + fVar41 * fVar68 +
                           fVar51 * fVar72 + *(float *)((long)ppuVar24 + (ulong)uVar19 * 4) * fVar69
                  ;
                } while ((int)lVar39 != 0x144);
              }
              else {
                iVar37 = -4;
                pfVar20 = pfVar2;
                uVar34 = local_11c;
                do {
                  uVar38 = iVar18 + iVar37;
                  if (0x2bf < uVar38) {
                    uVar3 = uVar34;
                    if (-1 < (int)uVar38) {
                      uVar3 = uVar38;
                    }
                    uVar38 = uVar3 % 0x57e;
                    if (0x2bf < uVar38) {
                      uVar38 = 0x57e - uVar38;
                    }
                  }
                  iVar5 = *(int *)param_2[9] * iVar1 + uVar38 * *(int *)((long)param_2[9] + 4);
                  iVar37 = iVar37 + 1;
                  fVar41 = *pfVar20;
                  uVar34 = uVar34 - 1;
                  fVar54 = *(float *)((long)ppuVar24 + (long)(int)uVar31 * 4 + (long)iVar5 * 4);
                  fVar57 = *(float *)((long)ppuVar24 + (long)(int)uVar16 * 4 + (long)iVar5 * 4);
                  fVar51 = *(float *)((long)ppuVar24 + (long)(int)uVar30 * 4 + (long)iVar5 * 4);
                  fVar65 = *(float *)((long)ppuVar24 + uVar14 * 4 + (long)iVar5 * 4);
                  fVar67 = *(float *)((long)ppuVar24 + (uVar14 | 1) * 4 + (long)iVar5 * 4);
                  fVar69 = *(float *)((long)ppuVar24 + (uVar14 | 2) * 4 + (long)iVar5 * 4);
                  fVar61 = pfVar20[1];
                  fVar66 = *(float *)((long)ppuVar24 + (uVar14 | 3) * 4 + (long)iVar5 * 4);
                  fVar55 = *(float *)((long)ppuVar24 + (uVar14 | 5) * 4 + (long)iVar5 * 4);
                  fVar60 = *(float *)((long)ppuVar24 + (uVar14 | 4) * 4 + (long)iVar5 * 4);
                  fVar62 = pfVar20[2];
                  fVar71 = pfVar20[3];
                  fVar58 = *(float *)((long)ppuVar24 + (uVar14 | 6) * 4 + (long)iVar5 * 4);
                  fVar52 = *(float *)((long)ppuVar24 + (uVar14 | 7) * 4 + (long)iVar5 * 4);
                  fVar63 = pfVar20[4];
                  fVar72 = pfVar20[5];
                  fVar64 = *(float *)((long)ppuVar24 + (long)(int)uVar15 * 4 + (long)iVar5 * 4);
                  fVar68 = pfVar20[6];
                  fVar70 = pfVar20[7];
                  fVar56 = *(float *)((long)ppuVar24 + (ulong)uVar21 * 4 + (long)iVar5 * 4);
                  fVar59 = *(float *)((long)ppuVar24 + (ulong)uVar17 * 4 + (long)iVar5 * 4);
                  fVar53 = pfVar20[8];
                  pfVar20 = pfVar20 + 9;
                  fVar45 = fVar45 + fVar41 * *(float *)((long)ppuVar24 +
                                                       (long)iVar26 * 4 + (long)iVar5 * 4) +
                           fVar54 * fVar61 + fVar57 * fVar62 + fVar51 * fVar71 + fVar65 * fVar63 +
                           fVar67 * fVar72 + fVar69 * fVar68 + fVar66 * fVar70 + fVar60 * fVar53;
                  fVar47 = fVar47 + fVar41 * fVar54 + fVar57 * fVar61 + fVar51 * fVar62 +
                           fVar65 * fVar71 + fVar67 * fVar63 + fVar69 * fVar72 + fVar66 * fVar68 +
                           fVar60 * fVar70 + fVar55 * fVar53;
                  fVar48 = fVar48 + fVar41 * fVar57 + fVar51 * fVar61 + fVar65 * fVar62 +
                           fVar67 * fVar71 + fVar69 * fVar63 + fVar66 * fVar72 + fVar60 * fVar68 +
                           fVar55 * fVar70 + fVar58 * fVar53;
                  fVar50 = fVar50 + fVar41 * fVar51 + fVar65 * fVar61 + fVar67 * fVar62 +
                           fVar69 * fVar71 + fVar66 * fVar63 + fVar60 * fVar72 + fVar55 * fVar68 +
                           fVar58 * fVar70 + fVar52 * fVar53;
                  fVar40 = fVar40 + fVar41 * fVar65 + fVar67 * fVar61 + fVar69 * fVar62 +
                           fVar66 * fVar71 + fVar60 * fVar63 + fVar55 * fVar72 + fVar58 * fVar68 +
                           fVar52 * fVar70 + fVar64 * fVar53;
                  fVar42 = fVar42 + fVar41 * fVar67 + fVar69 * fVar61 + fVar66 * fVar62 +
                           fVar60 * fVar71 + fVar55 * fVar63 + fVar58 * fVar72 + fVar52 * fVar68 +
                           fVar64 * fVar70 + fVar56 * fVar53;
                  fVar43 = fVar43 + fVar41 * fVar69 + fVar66 * fVar61 + fVar60 * fVar62 +
                           fVar55 * fVar71 + fVar58 * fVar63 + fVar52 * fVar72 + fVar64 * fVar68 +
                           fVar56 * fVar70 + fVar59 * fVar53;
                  fVar44 = fVar44 + fVar41 * fVar66 + fVar60 * fVar61 + fVar55 * fVar62 +
                           fVar58 * fVar71 + fVar52 * fVar63 + fVar64 * fVar72 + fVar56 * fVar68 +
                           fVar59 * fVar70 +
                           *(float *)((long)ppuVar24 + (ulong)uVar19 * 4 + (long)iVar5 * 4) * fVar53
                  ;
                } while (iVar37 != 5);
              }
              if (iVar1 == 0) {
                ppuVar33[1] = (undefined *)CONCAT44(fVar6 + fVar9 * fVar50,fVar6 + fVar9 * fVar48);
                *ppuVar33 = (undefined *)CONCAT44(fVar6 + fVar9 * fVar47,fVar6 + fVar9 * fVar45);
                ppuVar25[1] = (undefined *)CONCAT44(fVar8 + fVar10 * fVar50,fVar8 + fVar10 * fVar48)
                ;
                *ppuVar25 = (undefined *)CONCAT44(fVar8 + fVar10 * fVar47,fVar8 + fVar10 * fVar45);
                puVar36[1] = CONCAT44(fVar7 + fVar11 * fVar50,fVar7 + fVar11 * fVar48);
                *puVar36 = CONCAT44(fVar7 + fVar11 * fVar47,fVar7 + fVar11 * fVar45);
                ppuVar33[3] = (undefined *)CONCAT44(fVar6 + fVar9 * fVar44,fVar6 + fVar9 * fVar43);
                ppuVar33[2] = (undefined *)CONCAT44(fVar6 + fVar9 * fVar42,fVar6 + fVar9 * fVar40);
                uVar46 = CONCAT44(fVar7 + fVar11 * fVar42,fVar7 + fVar11 * fVar40);
                uVar49 = CONCAT44(fVar7 + fVar11 * fVar44,fVar7 + fVar11 * fVar43);
                ppuVar25[3] = (undefined *)CONCAT44(fVar8 + fVar10 * fVar44,fVar8 + fVar10 * fVar43)
                ;
                ppuVar25[2] = (undefined *)CONCAT44(fVar8 + fVar10 * fVar42,fVar8 + fVar10 * fVar40)
                ;
              }
              else {
                ppuVar33[1] = (undefined *)
                              CONCAT44((float)((ulong)ppuVar33[1] >> 0x20) + fVar9 * fVar50,
                                       SUB84(ppuVar33[1],0) + fVar9 * fVar48);
                *ppuVar33 = (undefined *)
                            CONCAT44((float)((ulong)*ppuVar33 >> 0x20) + fVar9 * fVar47,
                                     SUB84(*ppuVar33,0) + fVar9 * fVar45);
                ppuVar25[1] = (undefined *)
                              CONCAT44((float)((ulong)ppuVar25[1] >> 0x20) + fVar10 * fVar50,
                                       SUB84(ppuVar25[1],0) + fVar10 * fVar48);
                *ppuVar25 = (undefined *)
                            CONCAT44((float)((ulong)*ppuVar25 >> 0x20) + fVar10 * fVar47,
                                     SUB84(*ppuVar25,0) + fVar10 * fVar45);
                puVar36[1] = CONCAT44((float)((ulong)puVar36[1] >> 0x20) + fVar11 * fVar50,
                                      (float)puVar36[1] + fVar11 * fVar48);
                *puVar36 = CONCAT44((float)((ulong)*puVar36 >> 0x20) + fVar11 * fVar47,
                                    (float)*puVar36 + fVar11 * fVar45);
                ppuVar33[3] = (undefined *)
                              CONCAT44((float)((ulong)ppuVar33[3] >> 0x20) + fVar9 * fVar44,
                                       SUB84(ppuVar33[3],0) + fVar9 * fVar43);
                ppuVar33[2] = (undefined *)
                              CONCAT44((float)((ulong)ppuVar33[2] >> 0x20) + fVar9 * fVar42,
                                       SUB84(ppuVar33[2],0) + fVar9 * fVar40);
                ppuVar25[3] = (undefined *)
                              CONCAT44((float)((ulong)ppuVar25[3] >> 0x20) + fVar10 * fVar44,
                                       SUB84(ppuVar25[3],0) + fVar10 * fVar43);
                ppuVar25[2] = (undefined *)
                              CONCAT44((float)((ulong)ppuVar25[2] >> 0x20) + fVar10 * fVar42,
                                       SUB84(ppuVar25[2],0) + fVar10 * fVar40);
                uVar46 = CONCAT44((float)((ulong)puVar36[2] >> 0x20) + fVar11 * fVar42,
                                  (float)puVar36[2] + fVar11 * fVar40);
                uVar49 = CONCAT44((float)((ulong)puVar36[3] >> 0x20) + fVar11 * fVar44,
                                  (float)puVar36[3] + fVar11 * fVar43);
              }
              puVar36[3] = uVar49;
              puVar36[2] = uVar46;
              ppuVar33 = ppuVar33 + 4;
              ppuVar25 = ppuVar25 + 4;
              puVar36 = puVar36 + 4;
              bVar13 = uVar14 < 0x4f8;
              uVar14 = uVar32;
            } while (bVar13);
            iVar18 = iVar18 + 1;
            local_11c = local_11c - 1;
          } while (iVar18 != 0x2c0);
          iVar1 = iVar1 + 1;
        } while (iVar1 != local_144);
      }
    }
  }
  return;
}


