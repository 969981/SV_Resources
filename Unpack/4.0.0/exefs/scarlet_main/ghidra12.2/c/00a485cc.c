/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a485cc; name: FUN_00a485cc
 */


void FUN_00a485cc(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  float *pfVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  float *pfVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  float *pfVar21;
  int iVar22;
  float *pfVar23;
  undefined8 *puVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  long lVar28;
  int iVar29;
  uint uVar30;
  long lVar31;
  float *pfVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  int iVar35;
  long lVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  long lVar39;
  float *pfVar40;
  float *pfVar41;
  float *pfVar42;
  int iVar43;
  undefined8 *puVar44;
  int iVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
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
  int local_174;
  int local_168;
  int local_164;
  int iStack_160;
  int local_15c;
  long local_158;
  long local_150;
  long local_148;
  long *plStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined **local_120;
  char local_118;
  long local_110;
  long lStack_108;
  undefined8 local_100;
  long *plStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  int *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long *plStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  float *local_a0;
  
  if (((((*(char *)(param_1 + 8) == '\0') || (*(char *)(param_2 + 8) == '\0')) ||
       (*(char *)(param_3 + 8) == '\0')) ||
      ((*(char *)(param_4 + 8) == '\0' || (*(char *)(param_5 + 8) == '\0')))) ||
     (*(char *)(param_6 + 8) == '\0')) {
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  piVar5 = *(int **)(param_2 + 0x10);
  iVar27 = (int)((ulong)(*(long *)(param_2 + 0x18) - (long)piVar5) >> 2);
  if (iVar27 < 1) {
    iVar45 = 0;
    local_168 = 0;
  }
  else {
    local_168 = *piVar5;
    if (iVar27 == 1) {
      iVar45 = 0;
    }
    else {
      iVar45 = piVar5[1];
      if (2 < iVar27) {
        iVar27 = piVar5[2];
        goto LAB_00a486c0;
      }
    }
  }
  iVar27 = 0;
LAB_00a486c0:
  if ((int)((ulong)(*(long *)(param_5 + 0x18) - (long)*(int **)(param_5 + 0x10)) >> 2) < 1) {
    local_174 = 0;
  }
  else {
    local_174 = **(int **)(param_5 + 0x10);
  }
  local_e0 = 0;
  local_120 = &PTR_FUN_04540ef8;
  local_118 = '\x01';
  local_110 = 0;
  lStack_108 = 0;
  local_128 = 0;
  local_100 = 0;
  plStack_f8 = DAT_04836488;
  local_f0 = 0x3fffffffffffffff;
  uStack_e8 = 0;
  local_c8 = 0;
  plStack_c0 = DAT_04836488;
  local_148 = 0;
  plStack_140 = DAT_04836488;
  local_164 = local_168;
  local_d8 = (int *)0x0;
  uStack_d0 = 0;
  local_b8 = 0x3fffffffffffffff;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = (float *)0x0;
  local_158 = 0;
  local_150 = 0;
  local_138 = 0x3fffffffffffffff;
  uStack_130 = 0;
  iStack_160 = iVar45;
  local_15c = iVar27;
  FUN_00a416f8(&local_158,0,&local_164,&local_158);
  FUN_00a42c28(&local_120,&local_158,0);
  plVar11 = plStack_140;
  lVar28 = local_158;
  if (local_118 == '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
    if (local_158 != 0) {
      local_150 = local_158;
      lVar39 = local_148 - local_158;
      uVar12 = (**(code **)(*plStack_140 + 0xf8))(plStack_140);
      if (((uVar12 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,lVar28,lVar39,4);
      }
      else {
        FUN_00c48fe8(plVar11,lVar28,lVar39,4);
      }
    }
  }
  else {
    if (local_158 != 0) {
      local_150 = local_158;
      lVar39 = local_148 - local_158;
      uVar12 = (**(code **)(*plStack_140 + 0xf8))(plStack_140);
      if (((uVar12 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,lVar28,lVar39,4);
      }
      else {
        FUN_00c48fe8(plVar11,lVar28,lVar39,4);
      }
    }
    if (0 < local_168) {
      iVar25 = 0;
      iVar43 = iVar45 * 2 + -2;
      iVar10 = iVar27 * 2 + -2;
      lVar28 = (long)iVar27;
      pfVar13 = local_a0;
      pfVar32 = *(float **)(param_4 + 0x80);
      do {
        fVar46 = *pfVar32;
        if ((int)((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10)) >> 2) < 1) {
          lVar39 = 0;
        }
        else {
          lVar39 = (long)**(int **)(param_3 + 0x48) * (long)iVar25;
        }
        if (0 < iVar45) {
          pfVar21 = (float *)(*(long *)(param_3 + 0x80) + lVar39 * 4);
          fVar47 = *pfVar21;
          fVar48 = pfVar21[1];
          fVar49 = pfVar21[2];
          fVar50 = pfVar21[3];
          fVar57 = pfVar21[8];
          fVar51 = pfVar21[4];
          fVar52 = pfVar21[5];
          fVar53 = pfVar21[6];
          fVar56 = pfVar21[7];
          iVar29 = 0;
          do {
            iVar19 = iVar29 + -1;
            if (iVar29 == 0) {
              iVar19 = 0;
              if (iVar43 != 0) {
                iVar19 = -1 / iVar43;
              }
              iVar8 = -1 - iVar19 * iVar43;
              iVar19 = iVar8 + iVar43;
              if (-iVar8 < iVar45) {
                iVar19 = -iVar8;
              }
            }
            iVar8 = iVar29 + 1;
            iVar35 = iVar8;
            if (iVar45 <= iVar8) {
              iVar35 = 0;
              if (iVar43 != 0) {
                iVar35 = iVar8 / iVar43;
              }
              iVar35 = iVar8 - iVar35 * iVar43;
              if (iVar45 <= iVar35) {
                iVar35 = iVar43 - iVar35;
              }
            }
            lVar39 = *(long *)(param_2 + 0x80);
            if ((int)((ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) >> 2) < 2) {
              lVar36 = 0;
              lVar16 = lVar39;
              lVar31 = lVar39;
            }
            else {
              iVar22 = (*(int **)(param_2 + 0x48))[1];
              iVar20 = **(int **)(param_2 + 0x48) * iVar25;
              lVar36 = (long)(iVar20 + iVar22 * iVar35);
              lVar16 = lVar39 + (long)(iVar20 + iVar22 * iVar19) * 4;
              lVar31 = lVar39 + (long)(iVar20 + iVar22 * iVar29) * 4;
            }
            if (0 < iVar27) {
              lVar39 = lVar39 + lVar36 * 4;
              pfVar21 = pfVar13;
              lVar36 = 0;
              do {
                pfVar23 = pfVar21;
                iVar29 = (int)lVar36;
                iVar19 = iVar29 + -1;
                if (lVar36 == 0) {
                  iVar19 = 0;
                  if (iVar10 != 0) {
                    iVar19 = -1 / iVar10;
                  }
                  iVar35 = -1 - iVar19 * iVar10;
                  iVar19 = iVar35 + iVar10;
                  if (-iVar35 < iVar27) {
                    iVar19 = -iVar35;
                  }
                }
                iVar35 = (int)(lVar36 + 1);
                if (lVar28 <= lVar36 + 1) {
                  iVar22 = 0;
                  if (iVar10 != 0) {
                    iVar22 = iVar35 / iVar10;
                  }
                  iVar35 = iVar35 - iVar22 * iVar10;
                  if (iVar27 <= iVar35) {
                    iVar35 = iVar10 - iVar35;
                  }
                }
                iVar22 = iVar29 + 2;
                if (lVar28 <= lVar36 + 2) {
                  iVar20 = 0;
                  if (iVar10 != 0) {
                    iVar20 = iVar22 / iVar10;
                  }
                  iVar22 = iVar22 - iVar20 * iVar10;
                  if (iVar27 <= iVar22) {
                    iVar22 = iVar10 - iVar22;
                  }
                }
                pfVar21 = pfVar13 + lVar36;
                iVar29 = iVar29 + 3;
                if (lVar28 <= lVar36 + 3) {
                  iVar20 = 0;
                  if (iVar10 != 0) {
                    iVar20 = iVar29 / iVar10;
                  }
                  iVar29 = iVar29 - iVar20 * iVar10;
                  if (iVar27 <= iVar29) {
                    iVar29 = iVar10 - iVar29;
                  }
                }
                lVar2 = lVar36 + 4;
                iVar20 = (int)lVar2;
                if (lVar28 <= lVar36 + 4) {
                  iVar9 = 0;
                  if (iVar10 != 0) {
                    iVar9 = iVar20 / iVar10;
                  }
                  iVar20 = iVar20 - iVar9 * iVar10;
                  if (iVar27 <= iVar20) {
                    iVar20 = iVar10 - iVar20;
                  }
                }
                fVar68 = *(float *)(lVar16 + lVar36 * 4);
                fVar66 = *(float *)(lVar16 + (long)iVar35 * 4);
                fVar67 = *(float *)(lVar16 + (long)iVar22 * 4);
                fVar70 = *(float *)(lVar16 + (long)iVar29 * 4);
                fVar54 = *(float *)(lVar16 + (long)iVar20 * 4);
                fVar64 = *(float *)(lVar31 + lVar36 * 4);
                fVar62 = *(float *)(lVar31 + (long)iVar35 * 4);
                fVar63 = *(float *)(lVar31 + (long)iVar22 * 4);
                fVar65 = *(float *)(lVar31 + (long)iVar29 * 4);
                fVar55 = *(float *)(lVar31 + (long)iVar20 * 4);
                fVar61 = *(float *)(lVar39 + lVar36 * 4);
                fVar59 = *(float *)(lVar39 + (long)iVar35 * 4);
                fVar58 = *(float *)(lVar39 + (long)iVar22 * 4);
                fVar60 = *(float *)(lVar39 + (long)iVar29 * 4);
                fVar69 = *(float *)(lVar39 + (long)iVar20 * 4);
                *pfVar21 = fVar46 + fVar47 * *(float *)(lVar16 + (long)iVar19 * 4) + fVar48 * fVar68
                           + fVar49 * fVar66 + fVar50 * *(float *)(lVar31 + (long)iVar19 * 4) +
                           fVar51 * fVar64 + fVar52 * fVar62 +
                           fVar53 * *(float *)(lVar39 + (long)iVar19 * 4) + fVar56 * fVar61 +
                           fVar57 * fVar59;
                pfVar21[1] = fVar57 * fVar58 +
                             fVar56 * fVar59 +
                             fVar53 * fVar61 +
                             fVar52 * fVar63 +
                             fVar51 * fVar62 +
                             fVar50 * fVar64 +
                             fVar46 + fVar47 * fVar68 + fVar48 * fVar66 + fVar49 * fVar67;
                pfVar21[2] = fVar57 * fVar60 +
                             fVar56 * fVar58 +
                             fVar53 * fVar59 +
                             fVar52 * fVar65 +
                             fVar51 * fVar63 +
                             fVar50 * fVar62 +
                             fVar46 + fVar47 * fVar66 + fVar48 * fVar67 + fVar49 * fVar70;
                pfVar21[3] = fVar57 * fVar69 +
                             fVar56 * fVar60 +
                             fVar53 * fVar58 +
                             fVar52 * fVar55 +
                             fVar51 * fVar65 +
                             fVar50 * fVar63 +
                             fVar46 + fVar47 * fVar67 + fVar48 * fVar70 + fVar49 * fVar54;
                pfVar21 = pfVar21 + 4;
                lVar36 = lVar36 + 4;
              } while (lVar2 < lVar28);
              pfVar13 = pfVar23 + 4;
            }
            iVar29 = iVar8;
          } while (iVar8 != iVar45);
        }
        iVar25 = iVar25 + 1;
        pfVar32 = pfVar32 + 1;
      } while (iVar25 != local_168);
    }
    local_148 = 0;
    plStack_140 = DAT_04836488;
    local_164 = local_174;
    local_138 = 0x3fffffffffffffff;
    uStack_130 = 0;
    local_158 = 0;
    local_150 = 0;
    local_128 = 0;
    iStack_160 = iVar45;
    local_15c = iVar27;
    FUN_00a416f8(&local_158,0,&local_164,&local_158);
    FUN_00a42c28(param_1,&local_158,0);
    plVar11 = plStack_140;
    lVar28 = local_158;
    cVar6 = *(char *)(param_1 + 8);
    if (local_158 != 0) {
      local_150 = local_158;
      lVar39 = local_148 - local_158;
      uVar12 = (**(code **)(*plStack_140 + 0xf8))(plStack_140);
      if (((uVar12 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,lVar28,lVar39,4);
      }
      else {
        FUN_00c48fe8(plVar11,lVar28,lVar39,4);
      }
    }
    if ((0 < local_174) && (cVar6 != '\0')) {
      pfVar13 = *(float **)(param_6 + 0x80);
      uVar7 = iVar27 - 1U >> 2;
      uVar1 = uVar7 + 1;
      uVar26 = 0;
      do {
        fVar46 = *pfVar13;
        fVar47 = pfVar13[1];
        pfVar32 = *(float **)(param_5 + 0x80);
        fVar48 = pfVar13[2];
        fVar49 = pfVar13[3];
        if ((int)((ulong)(*(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10)) >> 2) < 1) {
          lVar28 = 0;
          pfVar21 = pfVar32;
          pfVar23 = pfVar32;
          pfVar40 = pfVar32;
        }
        else {
          iVar25 = **(int **)(param_5 + 0x48);
          lVar28 = (long)(int)(iVar25 * (uVar26 | 3));
          pfVar21 = pfVar32 + (int)(iVar25 * (uVar26 | 2));
          pfVar23 = pfVar32 + (int)(iVar25 * (uVar26 | 1));
          pfVar40 = pfVar32 + (int)(iVar25 * uVar26);
        }
        pfVar13 = pfVar13 + 4;
        if (0 < local_168) {
          uVar30 = 0;
          pfVar32 = pfVar32 + lVar28;
          do {
            puVar44 = *(undefined8 **)(param_1 + 0x80);
            if ((int)((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) >> 2) < 1) {
              lVar28 = 0;
              puVar14 = puVar44;
              puVar33 = puVar44;
              puVar37 = puVar44;
            }
            else {
              iVar25 = **(int **)(param_1 + 0x48);
              lVar28 = (long)(int)(iVar25 * (uVar26 | 3));
              puVar14 = (undefined8 *)((long)puVar44 + (long)(int)(iVar25 * (uVar26 | 2)) * 4);
              puVar33 = (undefined8 *)((long)puVar44 + (long)(int)(iVar25 * uVar26) * 4);
              puVar37 = (undefined8 *)((long)puVar44 + (long)(int)(iVar25 * (uVar26 | 1)) * 4);
            }
            if ((int)((ulong)(lStack_108 - local_110) >> 2) < 1) {
              lVar39 = 0;
              pfVar17 = local_a0;
            }
            else {
              lVar39 = (long)(int)(*local_d8 * (uVar30 | 1));
              pfVar17 = local_a0 + (int)(*local_d8 * uVar30);
            }
            fVar50 = *pfVar40;
            fVar51 = pfVar40[1];
            fVar52 = *pfVar23;
            fVar53 = pfVar23[1];
            fVar56 = *pfVar21;
            fVar57 = pfVar21[1];
            fVar54 = *pfVar32;
            if ((0 < iVar45) && (0 < iVar27)) {
              fVar55 = pfVar32[1];
              iVar25 = 0;
              puVar44 = (undefined8 *)((long)puVar44 + lVar28 * 4);
              pfVar41 = local_a0 + lVar39;
              do {
                if (uVar30 == 0) {
                  if (uVar7 != 0) {
                    lVar28 = 0;
                    iVar43 = -(uVar1 & 0x7ffffffe);
                    do {
                      puVar15 = (undefined8 *)((long)pfVar17 + lVar28);
                      puVar24 = (undefined8 *)((long)pfVar41 + lVar28);
                      puVar34 = (undefined8 *)((long)puVar14 + lVar28);
                      fVar58 = (float)*puVar15;
                      fVar59 = (float)((ulong)*puVar15 >> 0x20);
                      fVar60 = (float)puVar15[1];
                      fVar61 = (float)((ulong)puVar15[1] >> 0x20);
                      fVar62 = (float)*puVar24;
                      fVar63 = (float)((ulong)*puVar24 >> 0x20);
                      fVar64 = (float)puVar24[1];
                      fVar65 = (float)((ulong)puVar24[1] >> 0x20);
                      puVar38 = (undefined8 *)((long)puVar33 + lVar28);
                      puVar3 = (undefined8 *)((long)puVar37 + lVar28);
                      puVar4 = (undefined8 *)((long)puVar44 + lVar28);
                      lVar28 = lVar28 + 0x20;
                      puVar38[1] = CONCAT44(fVar46 + fVar50 * fVar61 + fVar51 * fVar65,
                                            fVar46 + fVar50 * fVar60 + fVar51 * fVar64);
                      *puVar38 = CONCAT44(fVar46 + fVar50 * fVar59 + fVar51 * fVar63,
                                          fVar46 + fVar50 * fVar58 + fVar51 * fVar62);
                      puVar3[1] = CONCAT44(fVar47 + fVar52 * fVar61 + fVar53 * fVar65,
                                           fVar47 + fVar52 * fVar60 + fVar53 * fVar64);
                      *puVar3 = CONCAT44(fVar47 + fVar52 * fVar59 + fVar53 * fVar63,
                                         fVar47 + fVar52 * fVar58 + fVar53 * fVar62);
                      puVar34[1] = CONCAT44(fVar48 + fVar56 * fVar61 + fVar57 * fVar65,
                                            fVar48 + fVar56 * fVar60 + fVar57 * fVar64);
                      *puVar34 = CONCAT44(fVar48 + fVar56 * fVar59 + fVar57 * fVar63,
                                          fVar48 + fVar56 * fVar58 + fVar57 * fVar62);
                      puVar4[1] = CONCAT44(fVar49 + fVar54 * fVar61 + fVar55 * fVar65,
                                           fVar49 + fVar54 * fVar60 + fVar55 * fVar64);
                      *puVar4 = CONCAT44(fVar49 + fVar54 * fVar59 + fVar55 * fVar63,
                                         fVar49 + fVar54 * fVar58 + fVar55 * fVar62);
                      fVar58 = (float)puVar15[2];
                      fVar59 = (float)((ulong)puVar15[2] >> 0x20);
                      fVar60 = (float)puVar15[3];
                      fVar61 = (float)((ulong)puVar15[3] >> 0x20);
                      fVar62 = (float)puVar24[2];
                      fVar63 = (float)((ulong)puVar24[2] >> 0x20);
                      fVar64 = (float)puVar24[3];
                      fVar65 = (float)((ulong)puVar24[3] >> 0x20);
                      iVar43 = iVar43 + 2;
                      puVar38[3] = CONCAT44(fVar46 + fVar50 * fVar61 + fVar51 * fVar65,
                                            fVar46 + fVar50 * fVar60 + fVar51 * fVar64);
                      puVar38[2] = CONCAT44(fVar46 + fVar50 * fVar59 + fVar51 * fVar63,
                                            fVar46 + fVar50 * fVar58 + fVar51 * fVar62);
                      puVar3[3] = CONCAT44(fVar47 + fVar52 * fVar61 + fVar53 * fVar65,
                                           fVar47 + fVar52 * fVar60 + fVar53 * fVar64);
                      puVar3[2] = CONCAT44(fVar47 + fVar52 * fVar59 + fVar53 * fVar63,
                                           fVar47 + fVar52 * fVar58 + fVar53 * fVar62);
                      puVar34[3] = CONCAT44(fVar48 + fVar56 * fVar61 + fVar57 * fVar65,
                                            fVar48 + fVar56 * fVar60 + fVar57 * fVar64);
                      puVar34[2] = CONCAT44(fVar48 + fVar56 * fVar59 + fVar57 * fVar63,
                                            fVar48 + fVar56 * fVar58 + fVar57 * fVar62);
                      puVar4[3] = CONCAT44(fVar49 + fVar54 * fVar61 + fVar55 * fVar65,
                                           fVar49 + fVar54 * fVar60 + fVar55 * fVar64);
                      puVar4[2] = CONCAT44(fVar49 + fVar54 * fVar59 + fVar55 * fVar63,
                                           fVar49 + fVar54 * fVar58 + fVar55 * fVar62);
                    } while (iVar43 != 0);
                    puVar33 = (undefined8 *)((long)puVar33 + lVar28);
                    puVar37 = (undefined8 *)((long)puVar37 + lVar28);
                    puVar14 = (undefined8 *)((long)puVar14 + lVar28);
                    puVar44 = (undefined8 *)((long)puVar44 + lVar28);
                    pfVar17 = (float *)((long)pfVar17 + lVar28);
                    pfVar41 = (float *)((long)pfVar41 + lVar28);
                  }
                  puVar15 = puVar14;
                  pfVar18 = pfVar17;
                  puVar24 = puVar44;
                  puVar34 = puVar33;
                  puVar38 = puVar37;
                  pfVar42 = pfVar41;
                  if ((uVar1 & 1) != 0) {
                    pfVar18 = pfVar17 + 4;
                    pfVar42 = pfVar41 + 4;
                    fVar58 = (float)*(undefined8 *)pfVar17;
                    fVar59 = (float)((ulong)*(undefined8 *)pfVar17 >> 0x20);
                    fVar60 = (float)*(undefined8 *)(pfVar17 + 2);
                    fVar61 = (float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20);
                    fVar62 = (float)*(undefined8 *)pfVar41;
                    fVar63 = (float)((ulong)*(undefined8 *)pfVar41 >> 0x20);
                    fVar64 = (float)*(undefined8 *)(pfVar41 + 2);
                    fVar65 = (float)((ulong)*(undefined8 *)(pfVar41 + 2) >> 0x20);
                    puVar34 = puVar33 + 2;
                    puVar33[1] = CONCAT44(fVar46 + fVar50 * fVar61 + fVar51 * fVar65,
                                          fVar46 + fVar50 * fVar60 + fVar51 * fVar64);
                    *puVar33 = CONCAT44(fVar46 + fVar50 * fVar59 + fVar51 * fVar63,
                                        fVar46 + fVar50 * fVar58 + fVar51 * fVar62);
                    puVar38 = puVar37 + 2;
                    puVar37[1] = CONCAT44(fVar47 + fVar52 * fVar61 + fVar53 * fVar65,
                                          fVar47 + fVar52 * fVar60 + fVar53 * fVar64);
                    *puVar37 = CONCAT44(fVar47 + fVar52 * fVar59 + fVar53 * fVar63,
                                        fVar47 + fVar52 * fVar58 + fVar53 * fVar62);
                    puVar15 = puVar14 + 2;
                    puVar14[1] = CONCAT44(fVar48 + fVar56 * fVar61 + fVar57 * fVar65,
                                          fVar48 + fVar56 * fVar60 + fVar57 * fVar64);
                    *puVar14 = CONCAT44(fVar48 + fVar56 * fVar59 + fVar57 * fVar63,
                                        fVar48 + fVar56 * fVar58 + fVar57 * fVar62);
                    puVar24 = puVar44 + 2;
                    puVar44[1] = CONCAT44(fVar49 + fVar54 * fVar61 + fVar55 * fVar65,
                                          fVar49 + fVar54 * fVar60 + fVar55 * fVar64);
                    *puVar44 = CONCAT44(fVar49 + fVar54 * fVar59 + fVar55 * fVar63,
                                        fVar49 + fVar54 * fVar58 + fVar55 * fVar62);
                  }
                }
                else {
                  iVar43 = 0;
                  do {
                    pfVar18 = pfVar17 + 4;
                    iVar43 = iVar43 + 4;
                    pfVar42 = pfVar41 + 4;
                    fVar58 = (float)*(undefined8 *)pfVar17;
                    fVar59 = (float)((ulong)*(undefined8 *)pfVar17 >> 0x20);
                    fVar60 = (float)*(undefined8 *)(pfVar17 + 2);
                    fVar61 = (float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20);
                    fVar62 = (float)*(undefined8 *)pfVar41;
                    fVar63 = (float)((ulong)*(undefined8 *)pfVar41 >> 0x20);
                    fVar64 = (float)*(undefined8 *)(pfVar41 + 2);
                    fVar65 = (float)((ulong)*(undefined8 *)(pfVar41 + 2) >> 0x20);
                    puVar34 = puVar33 + 2;
                    puVar33[1] = CONCAT44((float)((ulong)puVar33[1] >> 0x20) + fVar50 * fVar61 +
                                          fVar51 * fVar65,
                                          (float)puVar33[1] + fVar50 * fVar60 + fVar51 * fVar64);
                    *puVar33 = CONCAT44((float)((ulong)*puVar33 >> 0x20) + fVar50 * fVar59 +
                                        fVar51 * fVar63,
                                        (float)*puVar33 + fVar50 * fVar58 + fVar51 * fVar62);
                    puVar38 = puVar37 + 2;
                    puVar37[1] = CONCAT44((float)((ulong)puVar37[1] >> 0x20) + fVar52 * fVar61 +
                                          fVar53 * fVar65,
                                          (float)puVar37[1] + fVar52 * fVar60 + fVar53 * fVar64);
                    *puVar37 = CONCAT44((float)((ulong)*puVar37 >> 0x20) + fVar52 * fVar59 +
                                        fVar53 * fVar63,
                                        (float)*puVar37 + fVar52 * fVar58 + fVar53 * fVar62);
                    puVar15 = puVar14 + 2;
                    puVar14[1] = CONCAT44((float)((ulong)puVar14[1] >> 0x20) + fVar56 * fVar61 +
                                          fVar57 * fVar65,
                                          (float)puVar14[1] + fVar56 * fVar60 + fVar57 * fVar64);
                    *puVar14 = CONCAT44((float)((ulong)*puVar14 >> 0x20) + fVar56 * fVar59 +
                                        fVar57 * fVar63,
                                        (float)*puVar14 + fVar56 * fVar58 + fVar57 * fVar62);
                    puVar24 = puVar44 + 2;
                    puVar44[1] = CONCAT44((float)((ulong)puVar44[1] >> 0x20) + fVar54 * fVar61 +
                                          fVar55 * fVar65,
                                          (float)puVar44[1] + fVar54 * fVar60 + fVar55 * fVar64);
                    *puVar44 = CONCAT44((float)((ulong)*puVar44 >> 0x20) + fVar54 * fVar59 +
                                        fVar55 * fVar63,
                                        (float)*puVar44 + fVar54 * fVar58 + fVar55 * fVar62);
                    puVar14 = puVar15;
                    pfVar17 = pfVar18;
                    puVar44 = puVar24;
                    puVar33 = puVar34;
                    puVar37 = puVar38;
                    pfVar41 = pfVar42;
                  } while (iVar43 < iVar27);
                }
                iVar25 = iVar25 + 1;
                puVar14 = puVar15;
                pfVar17 = pfVar18;
                puVar44 = puVar24;
                puVar33 = puVar34;
                puVar37 = puVar38;
                pfVar41 = pfVar42;
              } while (iVar25 != iVar45);
            }
            uVar30 = uVar30 + 2;
            pfVar21 = pfVar21 + 2;
            pfVar23 = pfVar23 + 2;
            pfVar40 = pfVar40 + 2;
            pfVar32 = pfVar32 + 2;
          } while ((int)uVar30 < local_168);
        }
        uVar26 = uVar26 + 4;
      } while ((int)uVar26 < local_174);
    }
  }
  FUN_00a43810(&local_120);
  return;
}


