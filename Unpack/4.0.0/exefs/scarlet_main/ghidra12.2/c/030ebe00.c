/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030ebe00; name: FUN_030ebe00
 */


void FUN_030ebe00(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                 undefined8 *param_5,undefined8 *param_6,int *param_7,int *param_8,
                 undefined8 param_9,int *param_10,int *param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16)

{
  long *plVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  byte bVar16;
  ulong uVar17;
  long lVar18;
  undefined4 *puVar19;
  long lVar20;
  undefined4 *puVar21;
  int *piVar22;
  undefined4 *puVar23;
  undefined8 uVar24;
  undefined4 *puVar25;
  long *plVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  long *plVar30;
  int iVar31;
  int iVar32;
  long lVar33;
  int iVar34;
  int iVar35;
  ulong uVar36;
  float *pfVar37;
  int *piVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  uint uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar50;
  float fVar49;
  float fVar51;
  float fVar52;
  undefined8 uVar53;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  long local_1b8;
  long local_1a0;
  long local_190;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  int local_68;
  int local_64;
  
  plVar26 = (long *)(param_3 + 0x20);
  if (*(char *)(param_3 + 0x30) == '\x01') {
    lVar10 = *plVar26;
  }
  else {
    lVar10 = FUN_0307d71c();
  }
  plVar1 = (long *)(param_4 + 0x20);
  if (*(char *)(param_4 + 0x30) == '\x01') {
    local_190 = *plVar1;
  }
  else {
    local_190 = FUN_0307d71c();
  }
  local_a0 = 0;
  local_98 = 0x8000000000000000;
  local_b0 = 0;
  local_a8 = 0x8000000000000000;
  FUN_030ea1d0(param_1,param_12,param_13,param_14,param_15,&local_a0,&local_b0,param_16);
  iVar9 = (int)local_98;
  uVar17 = local_98 & 0xffffffff;
  local_c0 = 0;
  local_b8 = -0x8000000000000000;
  local_d0 = 0;
  local_c8 = -0x8000000000000000;
  if ((int)local_98 < 1) {
    iVar43 = 0;
  }
  else {
    FUN_030edb34(&local_c0,uVar17);
    iVar43 = (int)local_b8;
  }
  if (iVar43 != iVar9) {
    local_b8 = CONCAT44(local_b8._4_4_,iVar9);
  }
  iVar43 = (int)local_a8;
  uVar36 = local_a8 & 0xffffffff;
  if ((int)local_a8 < 1) {
    iVar42 = 0;
  }
  else {
    FUN_030edb34(&local_d0,uVar36);
    iVar42 = (int)local_c8;
  }
  lVar39 = local_a0;
  if (iVar42 != iVar43) {
    local_c8 = CONCAT44(local_c8._4_4_,iVar43);
  }
  uVar53 = param_5[1];
  uVar24 = *param_5;
  uVar57 = param_5[3];
  uVar56 = param_5[2];
  if (*(char *)(param_3 + 0x30) == '\x01') {
    local_1b8 = *plVar26;
  }
  else {
    local_1b8 = FUN_0307d71c(plVar26);
  }
  if (param_7 != param_8) {
    uVar36 = 0;
    fVar48 = (float)uVar24;
    fVar50 = (float)((ulong)uVar24 >> 0x20);
    fVar46 = (float)uVar56 - fVar48;
    fVar49 = (float)((ulong)uVar56 >> 0x20) - fVar50;
    fVar52 = (float)uVar53;
    fVar55 = (float)((ulong)uVar53 >> 0x20);
    fVar51 = (float)uVar57 - fVar52;
    fVar54 = (float)((ulong)uVar57 >> 0x20) - fVar55;
    iVar43 = 0;
LAB_030ebfe8:
    lVar33 = local_c0;
    iVar42 = (int)uVar36;
    if (iVar42 < iVar9) {
      lVar13 = (long)iVar9 - (long)iVar42;
      piVar22 = (int *)(lVar39 + 8 + (long)iVar42 * 0x10);
      do {
        if (*piVar22 != iVar43) goto LAB_030ec024;
        uVar36 = (ulong)((int)uVar36 + 1);
        lVar13 = lVar13 + -1;
        piVar22 = piVar22 + 4;
      } while (lVar13 != 0);
      uVar36 = uVar17;
    }
LAB_030ec024:
    iVar35 = *param_7;
    uVar45 = param_7[1];
    uVar27 = (int)uVar36 - iVar42;
    if ((int)uVar27 < 2) {
      lVar33 = *(long *)(param_3 + 0x20);
      do {
        uVar27 = uVar45 - *(int *)(lVar33 + 0x30);
        if ((int)uVar45 < *(int *)(lVar33 + 0x30)) {
          uVar27 = uVar45;
          if (*(int *)(lVar33 + 0x78) != 0) {
            uVar27 = *(uint *)(*(long *)(lVar33 + 0x70) + (long)(int)uVar45 * 4);
          }
          lVar13 = *(long *)(lVar33 + 0x28);
          plVar30 = (long *)(lVar33 + 0xc0);
          uVar28 = uVar45;
          if (uVar27 != 0xffffffff) goto LAB_030ec0b0;
        }
        else {
          plVar30 = (long *)(lVar33 + 0xe0);
LAB_030ec0b0:
          lVar13 = *plVar30;
          uVar28 = uVar27;
        }
        if (-1 < *(char *)(lVar13 + (long)(int)uVar28 * 0x14 + 0x10)) goto LAB_030ec0d8;
        uVar45 = *(uint *)(lVar13 + (long)(int)uVar28 * 0x14 + 8) & 0x3fffff;
      } while( true );
    }
    lVar13 = (long)iVar35;
    if (*(char *)(param_3 + 0x30) == '\x01') {
      lVar14 = *plVar26;
      lVar41 = lVar14;
    }
    else {
      lVar41 = FUN_0307d71c();
      lVar14 = *(long *)(param_3 + 0x20);
    }
    lVar18 = (long)iVar42;
    do {
      uVar28 = uVar45 - *(int *)(lVar14 + 0x30);
      if ((int)uVar45 < *(int *)(lVar14 + 0x30)) {
        uVar28 = uVar45;
        if (*(int *)(lVar14 + 0x78) != 0) {
          uVar28 = *(uint *)(*(long *)(lVar14 + 0x70) + (long)(int)uVar45 * 4);
        }
        lVar40 = *(long *)(lVar14 + 0x28);
        plVar30 = (long *)(lVar14 + 0xc0);
        uVar29 = uVar45;
        if (uVar28 != 0xffffffff) goto LAB_030ec17c;
      }
      else {
        plVar30 = (long *)(lVar14 + 0xe0);
LAB_030ec17c:
        lVar40 = *plVar30;
        uVar29 = uVar28;
      }
      if (-1 < *(char *)(lVar40 + (long)(int)uVar29 * 0x14 + 0x10)) goto LAB_030ec1a4;
      uVar45 = *(uint *)(lVar40 + (long)(int)uVar29 * 0x14 + 8) & 0x3fffff;
    } while( true );
  }
LAB_030ec854:
  lVar39 = local_b0;
  uVar53 = param_6[1];
  uVar24 = *param_6;
  uVar57 = param_6[3];
  uVar56 = param_6[2];
  if (*(char *)(param_4 + 0x30) == '\x01') {
    local_1a0 = *plVar1;
  }
  else {
    local_1a0 = FUN_0307d71c(plVar1);
  }
  if (param_10 != param_11) {
    uVar17 = 0;
    fVar46 = (float)uVar24;
    fVar50 = (float)((ulong)uVar24 >> 0x20);
    fVar48 = (float)uVar56 - fVar46;
    fVar49 = (float)((ulong)uVar56 >> 0x20) - fVar50;
    fVar51 = (float)uVar53;
    fVar54 = (float)((ulong)uVar53 >> 0x20);
    fVar52 = (float)uVar57 - fVar51;
    fVar55 = (float)((ulong)uVar57 >> 0x20) - fVar54;
    iVar9 = 0;
LAB_030ec8e4:
    lVar33 = local_d0;
    iVar43 = (int)uVar17;
    if (iVar43 < (int)uVar36) {
      lVar13 = (long)(int)uVar36 - (long)iVar43;
      piVar22 = (int *)(lVar39 + 8 + (long)iVar43 * 0x10);
      do {
        if (*piVar22 != iVar9) goto LAB_030ec920;
        uVar17 = (ulong)((int)uVar17 + 1);
        lVar13 = lVar13 + -1;
        piVar22 = piVar22 + 4;
      } while (lVar13 != 0);
      uVar17 = uVar36;
    }
LAB_030ec920:
    iVar42 = *param_10;
    uVar45 = param_10[1];
    uVar27 = (int)uVar17 - iVar43;
    if ((int)uVar27 < 2) {
      lVar33 = *(long *)(param_4 + 0x20);
      do {
        uVar27 = uVar45 - *(int *)(lVar33 + 0x30);
        if ((int)uVar45 < *(int *)(lVar33 + 0x30)) {
          uVar27 = uVar45;
          if (*(int *)(lVar33 + 0x78) != 0) {
            uVar27 = *(uint *)(*(long *)(lVar33 + 0x70) + (long)(int)uVar45 * 4);
          }
          lVar13 = *(long *)(lVar33 + 0x28);
          plVar26 = (long *)(lVar33 + 0xc0);
          uVar28 = uVar45;
          if (uVar27 != 0xffffffff) goto LAB_030ec9b8;
        }
        else {
          plVar26 = (long *)(lVar33 + 0xe0);
LAB_030ec9b8:
          lVar13 = *plVar26;
          uVar28 = uVar27;
        }
        if (-1 < *(char *)(lVar13 + (long)(int)uVar28 * 0x14 + 0x10)) goto LAB_030ec9e0;
        uVar45 = *(uint *)(lVar13 + (long)(int)uVar28 * 0x14 + 8) & 0x3fffff;
      } while( true );
    }
    lVar13 = (long)iVar42;
    if (*(char *)(param_4 + 0x30) == '\x01') {
      lVar14 = *plVar1;
      lVar41 = lVar14;
    }
    else {
      lVar41 = FUN_0307d71c(plVar1);
      lVar14 = *(long *)(param_4 + 0x20);
    }
    lVar18 = (long)iVar43;
    do {
      uVar28 = uVar45 - *(int *)(lVar14 + 0x30);
      if ((int)uVar45 < *(int *)(lVar14 + 0x30)) {
        uVar28 = uVar45;
        if (*(int *)(lVar14 + 0x78) != 0) {
          uVar28 = *(uint *)(*(long *)(lVar14 + 0x70) + (long)(int)uVar45 * 4);
        }
        lVar40 = *(long *)(lVar14 + 0x28);
        plVar26 = (long *)(lVar14 + 0xc0);
        uVar29 = uVar45;
        if (uVar28 != 0xffffffff) goto LAB_030eca80;
      }
      else {
        plVar26 = (long *)(lVar14 + 0xe0);
LAB_030eca80:
        lVar40 = *plVar26;
        uVar29 = uVar28;
      }
      if (-1 < *(char *)(lVar40 + (long)(int)uVar29 * 0x14 + 0x10)) goto LAB_030ecaa8;
      uVar45 = *(uint *)(lVar40 + (long)(int)uVar29 * 0x14 + 8) & 0x3fffff;
    } while( true );
  }
LAB_030ed148:
  if ((int)local_b8 != 0) {
    lVar39 = local_c0;
LAB_030ed15c:
    uVar45 = *(uint *)(lVar39 + 4);
    do {
      lVar33 = *(long *)(param_3 + 0x20);
      if ((int)uVar45 < *(int *)(lVar33 + 0x30)) {
        lVar13 = *(long *)(lVar33 + 0x28);
        uVar27 = uVar45;
        if (*(int *)(lVar33 + 0x78) != 0) {
          uVar27 = *(uint *)(*(long *)(lVar33 + 0x70) + (long)(int)uVar45 * 4);
        }
        if (uVar27 != 0xffffffff) {
          plVar26 = (long *)(lVar33 + 0xc0);
          uVar45 = uVar27;
          goto LAB_030ed19c;
        }
      }
      else {
        plVar26 = (long *)(lVar33 + 0xe0);
        uVar45 = uVar45 - *(int *)(lVar33 + 0x30);
LAB_030ed19c:
        lVar13 = *plVar26;
      }
      if (-1 < *(char *)(lVar13 + (long)(int)uVar45 * 0x14 + 0x10)) goto LAB_030ed1c8;
      uVar45 = *(uint *)(lVar13 + (long)(int)uVar45 * 0x14 + 8) & 0x3fffff;
      *(uint *)(lVar39 + 4) = uVar45;
    } while( true );
  }
LAB_030ed1d4:
  if ((int)local_c8 != 0) {
    lVar39 = local_d0;
LAB_030ed1e8:
    uVar45 = *(uint *)(lVar39 + 4);
    do {
      lVar33 = *(long *)(param_4 + 0x20);
      if ((int)uVar45 < *(int *)(lVar33 + 0x30)) {
        lVar13 = *(long *)(lVar33 + 0x28);
        uVar27 = uVar45;
        if (*(int *)(lVar33 + 0x78) != 0) {
          uVar27 = *(uint *)(*(long *)(lVar33 + 0x70) + (long)(int)uVar45 * 4);
        }
        if (uVar27 != 0xffffffff) {
          plVar26 = (long *)(lVar33 + 0xc0);
          uVar45 = uVar27;
          goto LAB_030ed228;
        }
      }
      else {
        plVar26 = (long *)(lVar33 + 0xe0);
        uVar45 = uVar45 - *(int *)(lVar33 + 0x30);
LAB_030ed228:
        lVar13 = *plVar26;
      }
      if (-1 < *(char *)(lVar13 + (long)(int)uVar45 * 0x14 + 0x10)) goto LAB_030ed254;
      uVar45 = *(uint *)(lVar13 + (long)(int)uVar45 * 0x14 + 8) & 0x3fffff;
      *(uint *)(lVar39 + 4) = uVar45;
    } while( true );
  }
  lVar33 = *(long *)(param_4 + 0x20);
LAB_030ed268:
  iVar9 = *(int *)(*(long *)(param_3 + 0x20) + 0x17c);
  iVar43 = *(int *)(lVar33 + 0x17c);
  if (0 < (int)local_98) {
    lVar39 = 0;
    plVar26 = (long *)(lVar10 + 0xc0);
    lVar33 = local_a0;
    do {
      if (*(int *)(lVar33 + lVar39 * 0x10 + 0xc) != -1) {
        iVar42 = *(int *)(local_c0 + lVar39 * 8 + 4);
        iVar35 = iVar42 - *(int *)(lVar10 + 0x30);
        if (iVar42 < *(int *)(lVar10 + 0x30)) {
          lVar14 = *(long *)(lVar10 + 0x28);
          lVar41 = (long)iVar42;
          lVar13 = *(long *)(lVar10 + 0x58);
          uVar45 = *(uint *)(lVar10 + 0x60);
          iVar35 = iVar42;
          if (*(int *)(lVar10 + 0x78) != 0) {
            iVar35 = *(int *)(*(long *)(lVar10 + 0x70) + lVar41 * 4);
          }
          if (iVar35 != -1) {
            lVar13 = *plVar26;
            goto LAB_030ed308;
          }
          iVar35 = *(int *)(*(long *)(lVar10 + 0x70) + lVar41 * 4);
          if (iVar35 == -1) {
            iVar35 = *(int *)(lVar10 + 200);
            iVar12 = iVar35;
            if ((int)(*(uint *)(lVar10 + 0xcc) & 0x7fffffff) <= iVar35) {
              FUN_0309515c(plVar26,PTR_PTR_047d1a50,(long)iVar35 + 1);
              iVar12 = *(int *)(lVar10 + 200);
            }
            puVar15 = (undefined4 *)(*(long *)(lVar10 + 0xc0) + (long)iVar12 * 0x14);
            *(int *)(lVar10 + 200) = (int)((long)iVar35 + 1);
            *(undefined8 *)(puVar15 + 2) = 0xffffffffffffffff;
            puVar15[4] = 4;
            puVar19 = (undefined4 *)(lVar14 + lVar41 * 0x14);
            *puVar15 = *puVar19;
            puVar15[1] = puVar19[1];
            uVar24 = *(undefined8 *)(puVar19 + 2);
            *(undefined2 *)(puVar15 + 4) = *(undefined2 *)(puVar19 + 4);
            *(undefined8 *)(puVar15 + 2) = uVar24;
            *(undefined2 *)((long)puVar15 + 0x12) = *(undefined2 *)((long)puVar19 + 0x12);
            iVar12 = *(int *)(lVar10 + 0x138);
            lVar33 = (long)iVar12 + (long)(int)uVar45;
            iVar44 = (int)lVar33;
            if ((int)(*(uint *)(lVar10 + 0x13c) & 0x7fffffff) < iVar44) {
              FUN_02e9b320((long *)(lVar10 + 0x130),PTR_PTR_047d1a50,lVar33);
            }
            if (0 < (int)uVar45) {
              puVar19 = (undefined4 *)(lVar13 + (long)(int)(uVar45 * iVar42) * 4);
              puVar21 = (undefined4 *)(*(long *)(lVar10 + 0x130) + (long)iVar12 * 4);
              uVar27 = uVar45 & 7;
              if (6 < uVar45 - 1) {
                iVar12 = -(uVar45 & 0xfffffff8);
                puVar23 = puVar19;
                puVar25 = puVar21;
                do {
                  *puVar25 = *puVar23;
                  puVar25[1] = puVar23[1];
                  puVar25[2] = puVar23[2];
                  puVar25[3] = puVar23[3];
                  puVar25[4] = puVar23[4];
                  puVar25[5] = puVar23[5];
                  puVar25[6] = puVar23[6];
                  puVar19 = puVar23 + 8;
                  puVar21 = puVar25 + 8;
                  iVar12 = iVar12 + 8;
                  puVar25[7] = puVar23[7];
                  puVar23 = puVar19;
                  puVar25 = puVar21;
                } while (iVar12 != 0);
              }
              for (; uVar27 != 0; uVar27 = uVar27 - 1) {
                *puVar21 = *puVar19;
                puVar21 = puVar21 + 1;
                puVar19 = puVar19 + 1;
              }
            }
            *(int *)(lVar10 + 0x138) = iVar44;
            *(int *)(*(long *)(lVar10 + 0x70) + lVar41 * 4) = iVar35;
            iVar35 = *(int *)(lVar10 + 0x88);
            lVar33 = (long)iVar35;
            if ((int)(*(uint *)(lVar10 + 0x8c) & 0x7fffffff) <= iVar35) {
              FUN_0133bb88(lVar10 + 0x80,PTR_PTR_047d1a50,lVar33 + 1);
              iVar35 = *(int *)(lVar10 + 0x88);
            }
            *(int *)(*(long *)(lVar10 + 0x80) + (long)iVar35 * 4) = iVar42;
            *(int *)(lVar10 + 0x88) = (int)(lVar33 + 1);
            lVar33 = local_a0;
          }
          else {
            puVar15 = (undefined4 *)(*plVar26 + (long)iVar35 * 0x14);
          }
        }
        else {
          lVar13 = *(long *)(lVar10 + 0xe0);
LAB_030ed308:
          puVar15 = (undefined4 *)(lVar13 + (long)iVar35 * 0x14);
        }
        piVar22 = (int *)(lVar33 + lVar39 * 0x10 + 0xc);
        uVar45 = *(uint *)(local_d0 + (long)*piVar22 * 8);
        if (iVar9 == iVar43) {
          puVar15[3] = uVar45;
          puVar15[2] = *(undefined4 *)(local_d0 + (long)*piVar22 * 8 + 4);
          bVar16 = *(byte *)(puVar15 + 4) & 0xbf;
        }
        else {
          puVar15[3] = uVar45 | iVar43 << 0x16;
          puVar15[2] = *(uint *)(local_d0 + (long)*piVar22 * 8 + 4) | iVar43 << 0x16;
          bVar16 = *(byte *)(puVar15 + 4) | 0x40;
        }
        *(byte *)(puVar15 + 4) = bVar16;
      }
      lVar39 = lVar39 + 1;
    } while (lVar39 < (int)local_98);
  }
  if (0 < (int)local_a8) {
    lVar10 = 0;
    plVar26 = (long *)(local_190 + 0xc0);
    lVar39 = local_b0;
    do {
      if (*(int *)(lVar39 + lVar10 * 0x10 + 0xc) != -1) {
        iVar42 = *(int *)(local_d0 + lVar10 * 8 + 4);
        iVar35 = iVar42 - *(int *)(local_190 + 0x30);
        if (iVar42 < *(int *)(local_190 + 0x30)) {
          lVar41 = *(long *)(local_190 + 0x28);
          lVar13 = (long)iVar42;
          lVar33 = *(long *)(local_190 + 0x58);
          uVar45 = *(uint *)(local_190 + 0x60);
          iVar35 = iVar42;
          if (*(int *)(local_190 + 0x78) != 0) {
            iVar35 = *(int *)(*(long *)(local_190 + 0x70) + lVar13 * 4);
          }
          if (iVar35 != -1) {
            lVar33 = *plVar26;
            goto LAB_030ed604;
          }
          iVar35 = *(int *)(*(long *)(local_190 + 0x70) + lVar13 * 4);
          if (iVar35 == -1) {
            iVar35 = *(int *)(local_190 + 200);
            iVar12 = iVar35;
            if ((int)(*(uint *)(local_190 + 0xcc) & 0x7fffffff) <= iVar35) {
              FUN_0309515c(plVar26,PTR_PTR_047d1a50,(long)iVar35 + 1);
              iVar12 = *(int *)(local_190 + 200);
            }
            puVar15 = (undefined4 *)(*(long *)(local_190 + 0xc0) + (long)iVar12 * 0x14);
            *(int *)(local_190 + 200) = (int)((long)iVar35 + 1);
            *(undefined8 *)(puVar15 + 2) = 0xffffffffffffffff;
            puVar15[4] = 4;
            puVar19 = (undefined4 *)(lVar41 + lVar13 * 0x14);
            *puVar15 = *puVar19;
            puVar15[1] = puVar19[1];
            uVar24 = *(undefined8 *)(puVar19 + 2);
            *(undefined2 *)(puVar15 + 4) = *(undefined2 *)(puVar19 + 4);
            *(undefined8 *)(puVar15 + 2) = uVar24;
            *(undefined2 *)((long)puVar15 + 0x12) = *(undefined2 *)((long)puVar19 + 0x12);
            iVar12 = *(int *)(local_190 + 0x138);
            lVar39 = (long)iVar12 + (long)(int)uVar45;
            iVar44 = (int)lVar39;
            if ((int)(*(uint *)(local_190 + 0x13c) & 0x7fffffff) < iVar44) {
              FUN_02e9b320((long *)(local_190 + 0x130),PTR_PTR_047d1a50,lVar39);
            }
            if (0 < (int)uVar45) {
              puVar19 = (undefined4 *)(lVar33 + (long)(int)(uVar45 * iVar42) * 4);
              puVar21 = (undefined4 *)(*(long *)(local_190 + 0x130) + (long)iVar12 * 4);
              uVar27 = uVar45 & 7;
              if (6 < uVar45 - 1) {
                iVar12 = -(uVar45 & 0xfffffff8);
                puVar23 = puVar19;
                puVar25 = puVar21;
                do {
                  *puVar25 = *puVar23;
                  puVar25[1] = puVar23[1];
                  puVar25[2] = puVar23[2];
                  puVar25[3] = puVar23[3];
                  puVar25[4] = puVar23[4];
                  puVar25[5] = puVar23[5];
                  puVar25[6] = puVar23[6];
                  puVar19 = puVar23 + 8;
                  puVar21 = puVar25 + 8;
                  iVar12 = iVar12 + 8;
                  puVar25[7] = puVar23[7];
                  puVar23 = puVar19;
                  puVar25 = puVar21;
                } while (iVar12 != 0);
              }
              for (; uVar27 != 0; uVar27 = uVar27 - 1) {
                *puVar21 = *puVar19;
                puVar21 = puVar21 + 1;
                puVar19 = puVar19 + 1;
              }
            }
            *(int *)(local_190 + 0x138) = iVar44;
            *(int *)(*(long *)(local_190 + 0x70) + lVar13 * 4) = iVar35;
            iVar35 = *(int *)(local_190 + 0x88);
            lVar39 = (long)iVar35;
            if ((int)(*(uint *)(local_190 + 0x8c) & 0x7fffffff) <= iVar35) {
              FUN_0133bb88(local_190 + 0x80,PTR_PTR_047d1a50,lVar39 + 1);
              iVar35 = *(int *)(local_190 + 0x88);
            }
            *(int *)(*(long *)(local_190 + 0x80) + (long)iVar35 * 4) = iVar42;
            *(int *)(local_190 + 0x88) = (int)(lVar39 + 1);
            lVar39 = local_b0;
          }
          else {
            puVar15 = (undefined4 *)(*plVar26 + (long)iVar35 * 0x14);
          }
        }
        else {
          lVar33 = *(long *)(local_190 + 0xe0);
LAB_030ed604:
          puVar15 = (undefined4 *)(lVar33 + (long)iVar35 * 0x14);
        }
        piVar22 = (int *)(lVar39 + lVar10 * 0x10 + 0xc);
        uVar45 = *(uint *)(local_c0 + (long)*piVar22 * 8);
        if (iVar9 == iVar43) {
          puVar15[3] = uVar45;
          puVar15[2] = *(undefined4 *)(local_c0 + (long)*piVar22 * 8 + 4);
          bVar16 = *(byte *)(puVar15 + 4) & 0xbf;
        }
        else {
          puVar15[3] = uVar45 | iVar9 << 0x16;
          puVar15[2] = *(uint *)(local_c0 + (long)*piVar22 * 8 + 4) | iVar9 << 0x16;
          bVar16 = *(byte *)(puVar15 + 4) | 0x40;
        }
        *(byte *)(puVar15 + 4) = bVar16;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)local_a8);
  }
  lVar10 = local_c8;
  puVar8 = PTR_PTR_047d1a50;
  uVar17 = (ulong)local_c8._4_4_;
  local_c8 = (ulong)local_c8._4_4_ << 0x20;
  if ((-1 < lVar10) && (local_d0 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_d0,uVar17 << 3);
  }
  lVar10 = local_b8;
  uVar17 = (ulong)local_b8._4_4_;
  local_b8 = (ulong)local_b8._4_4_ << 0x20;
  if ((-1 < lVar10) && (local_c0 != 0)) {
    (**(code **)(*(long *)(puVar8 + 0x20) + 0x20))(puVar8 + 0x20,local_c0,uVar17 << 3);
  }
  uVar17 = local_a8;
  uVar36 = (ulong)local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < (long)uVar17) && (local_b0 != 0)) {
    (**(code **)(*(long *)(puVar8 + 0x20) + 0x20))(puVar8 + 0x20,local_b0,uVar36 << 4);
  }
  uVar17 = local_98;
  uVar36 = (ulong)local_98._4_4_;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  if ((-1 < (long)uVar17) && (local_a0 != 0)) {
    (**(code **)(*(long *)(puVar8 + 0x20) + 0x20))(puVar8 + 0x20,local_a0,uVar36 << 4);
  }
  return;
LAB_030ec0d8:
  piVar22 = (int *)(local_c0 + (long)iVar42 * 8);
  *piVar22 = iVar35;
  piVar22[1] = uVar45;
  lVar33 = *(long *)(local_1b8 + 0xe0) + (long)(int)(uVar45 - *(int *)(local_1b8 + 0x30)) * 0x14;
  *(undefined8 *)(lVar33 + 8) = 0xffffffffffffffff;
  *(byte *)(lVar33 + 0x10) = *(byte *)(lVar33 + 0x10) & 0xbf;
  goto LAB_030ec66c;
LAB_030ec1a4:
  iVar12 = iVar35 - *(int *)(lVar41 + 0x20);
  if (iVar35 < *(int *)(lVar41 + 0x20)) {
    lVar40 = *(long *)(lVar41 + 0x18);
    lVar14 = *(long *)(lVar41 + 0x48);
    uVar28 = *(uint *)(lVar41 + 0x50);
    iVar12 = iVar35;
    if (*(int *)(lVar41 + 0x98) != 0) {
      iVar12 = *(int *)(*(long *)(lVar41 + 0x90) + lVar13 * 4);
    }
    plVar30 = (long *)(lVar41 + 0xb0);
    if (iVar12 != -1) {
      lVar13 = *plVar30;
      goto LAB_030ec1f8;
    }
    iVar12 = *(int *)(*(long *)(lVar41 + 0x90) + lVar13 * 4);
    if (iVar12 == -1) {
      iVar12 = *(int *)(lVar41 + 0xb8);
      iVar44 = iVar12;
      if ((int)(*(uint *)(lVar41 + 0xbc) & 0x7fffffff) <= iVar12) {
        FUN_03095540(plVar30,PTR_PTR_047d1a50,(long)iVar12 + 1);
        iVar44 = *(int *)(lVar41 + 0xb8);
      }
      piVar22 = (int *)(*(long *)(lVar41 + 0xb0) + (long)iVar44 * 0x10);
      piVar38 = (int *)(lVar40 + lVar13 * 0x10);
      *(int *)(lVar41 + 0xb8) = (int)((long)iVar12 + 1);
      *piVar22 = *piVar38;
      piVar22[1] = piVar38[1];
      *(undefined8 *)(piVar22 + 2) = *(undefined8 *)(piVar38 + 2);
      iVar44 = *(int *)(lVar41 + 0x128);
      iVar11 = iVar44 + uVar28;
      if ((int)(*(uint *)(lVar41 + 300) & 0x7fffffff) < iVar11) {
        FUN_02e9b320((long *)(lVar41 + 0x120),PTR_PTR_047d1a50);
      }
      if (0 < (int)uVar28) {
        puVar15 = (undefined4 *)(lVar14 + (long)(int)(uVar28 * iVar35) * 4);
        puVar19 = (undefined4 *)(*(long *)(lVar41 + 0x120) + (long)iVar44 * 4);
        uVar29 = uVar28 & 7;
        if (6 < uVar28 - 1) {
          iVar44 = -(uVar28 & 0xfffffff8);
          puVar21 = puVar15;
          puVar23 = puVar19;
          do {
            *puVar23 = *puVar21;
            puVar23[1] = puVar21[1];
            puVar23[2] = puVar21[2];
            puVar23[3] = puVar21[3];
            puVar23[4] = puVar21[4];
            puVar23[5] = puVar21[5];
            puVar23[6] = puVar21[6];
            puVar15 = puVar21 + 8;
            puVar19 = puVar23 + 8;
            iVar44 = iVar44 + 8;
            puVar23[7] = puVar21[7];
            puVar21 = puVar15;
            puVar23 = puVar19;
          } while (iVar44 != 0);
        }
        for (; uVar29 != 0; uVar29 = uVar29 - 1) {
          *puVar19 = *puVar15;
          puVar19 = puVar19 + 1;
          puVar15 = puVar15 + 1;
        }
      }
      *(int *)(lVar41 + 0x128) = iVar11;
      *(int *)(*(long *)(lVar41 + 0x90) + lVar13 * 4) = iVar12;
      iVar12 = *(int *)(lVar41 + 0xa8);
      lVar13 = (long)iVar12;
      if ((int)(*(uint *)(lVar41 + 0xac) & 0x7fffffff) <= iVar12) {
        FUN_0133bb88(lVar41 + 0xa0,PTR_PTR_047d1a50,lVar13 + 1);
        iVar12 = *(int *)(lVar41 + 0xa8);
      }
      *(int *)(*(long *)(lVar41 + 0xa0) + (long)iVar12 * 4) = iVar35;
      *(int *)(lVar41 + 0xa8) = (int)(lVar13 + 1);
    }
    else {
      piVar22 = (int *)(*plVar30 + (long)iVar12 * 0x10);
    }
  }
  else {
    lVar13 = *(long *)(lVar41 + 0xd0);
LAB_030ec1f8:
    piVar22 = (int *)(lVar13 + (long)iVar12 * 0x10);
  }
  local_64 = piVar22[1];
  if ((int)uVar45 < local_64) {
LAB_030ec244:
    local_64 = *piVar22;
    iVar12 = (int)(short)piVar22[2];
    if (local_64 < *(int *)(*(long *)(param_3 + 0x20) + 0x30)) {
      bVar7 = false;
    }
    else {
      bVar7 = false;
      *(int *)(lVar41 + 0x164) = *(int *)(lVar41 + 0x164) + (int)(short)piVar22[2];
    }
  }
  else {
    sVar3 = *(short *)((long)piVar22 + 10);
    iVar12 = (int)sVar3;
    if (local_64 + sVar3 <= (int)uVar45) goto LAB_030ec244;
    if (*(int *)(*(long *)(param_3 + 0x20) + 0x30) <= local_64) {
      *(int *)(lVar41 + 0x164) = *(int *)(lVar41 + 0x164) + (int)sVar3;
    }
    bVar7 = true;
  }
  uVar29 = uVar27 - 1;
  sVar3 = (short)iVar12 + (short)uVar29;
  uVar28 = *(uint *)(*(long *)(param_3 + 0x20) + 0x30);
  iVar44 = *(int *)(*(long *)(param_3 + 0x20) + 0xe8);
  uVar5 = uVar45 - local_64;
  FUN_0308fb68(param_3);
  if (0 < (int)uVar5) {
    iVar11 = uVar5 + 1;
    iVar34 = ~uVar28 + uVar45;
    do {
      local_90 = CONCAT44(local_90._4_4_,iVar44 + iVar11 + -2);
      local_68 = iVar34;
      FUN_030e9e20(param_2,param_3,&local_90,&local_68);
      iVar11 = iVar11 + -1;
      iVar34 = iVar34 + -1;
    } while (1 < iVar11);
  }
  lVar13 = (long)iVar44 + (long)(int)uVar5;
  iVar34 = *(int *)(*(long *)(param_3 + 0x20) + 0x40);
  iVar11 = *(int *)(*(long *)(param_3 + 0x20) + 0xf8);
  iVar6 = uVar45 - uVar28;
  lVar14 = (long)iVar6;
  if (iVar6 != (int)lVar13) {
    puVar19 = (undefined4 *)(*(long *)(lVar41 + 0xe0) + lVar14 * 0x14);
    puVar15 = (undefined4 *)(*(long *)(lVar41 + 0xe0) + lVar13 * 0x14);
    *puVar15 = *puVar19;
    puVar15[1] = puVar19[1];
    uVar24 = *(undefined8 *)(puVar19 + 2);
    *(undefined2 *)(puVar15 + 4) = *(undefined2 *)(puVar19 + 4);
    *(undefined8 *)(puVar15 + 2) = uVar24;
    *(undefined2 *)((long)puVar15 + 0x12) = *(undefined2 *)((long)puVar19 + 0x12);
    *(undefined2 *)(*(long *)(lVar41 + 0x110) + lVar13 * 2) =
         *(undefined2 *)(*(long *)(lVar41 + 0x110) + lVar14 * 2);
    iVar32 = *(int *)(lVar41 + 0x60);
    memcpy((void *)(*(long *)(lVar41 + 0x150) + lVar13 * iVar32 * 4),
           (void *)(*(long *)(lVar41 + 0x150) + (long)(iVar32 * iVar6) * 4),(long)iVar32 << 2);
  }
  lVar40 = *(long *)(lVar41 + 0xe0);
  lVar20 = lVar40 + lVar13 * 0x14;
  *(undefined8 *)(lVar20 + 8) = 0xffffffffffffffff;
  *(byte *)(lVar20 + 0x10) = *(byte *)(lVar20 + 0x10) & 0xbf;
  if (uVar29 != 0) {
    *(int *)(lVar40 + lVar13 * 0x14 + 4) = iVar34 + iVar11;
    fVar47 = *(float *)(lVar39 + lVar18 * 0x10 + 4);
    local_90 = CONCAT44(fVar50 + fVar49 * fVar47,fVar48 + fVar46 * fVar47);
    uStack_88 = CONCAT44(fVar55 + fVar54 * fVar47,fVar52 + fVar51 * fVar47);
    FUN_0308f544(param_3,&local_90,1);
  }
  *(int *)(lVar33 + (long)iVar42 * 8) = iVar35;
  lVar33 = lVar33 + lVar18 * 8;
  *(uint *)(lVar33 + 4) = uVar28 + (int)lVar13;
  if (uVar27 != 1) {
    lVar40 = lVar13 * 0x14;
    iVar11 = iVar11 + iVar34;
    iVar34 = ~(iVar44 + uVar28) + local_64;
    iVar32 = (iVar44 + uVar28) - local_64;
    piVar38 = (int *)(lVar33 + 0xc);
    pfVar37 = (float *)(lVar39 + 0x14 + lVar18 * 0x10);
    lVar33 = 0;
    do {
      lVar40 = lVar40 + 0x14;
      iVar31 = (int)lVar33;
      if (iVar34 != iVar31) {
        puVar19 = (undefined4 *)(*(long *)(lVar41 + 0xe0) + lVar14 * 0x14);
        puVar15 = (undefined4 *)(*(long *)(lVar41 + 0xe0) + lVar40);
        *puVar15 = *puVar19;
        puVar15[1] = puVar19[1];
        uVar24 = *(undefined8 *)(puVar19 + 2);
        *(undefined2 *)(puVar15 + 4) = *(undefined2 *)(puVar19 + 4);
        *(undefined8 *)(puVar15 + 2) = uVar24;
        *(undefined2 *)((long)puVar15 + 0x12) = *(undefined2 *)((long)puVar19 + 0x12);
        *(undefined2 *)(*(long *)(lVar41 + 0x110) + lVar13 * 2 + 2 + lVar33 * 2) =
             *(undefined2 *)(*(long *)(lVar41 + 0x110) + lVar14 * 2);
        iVar4 = *(int *)(lVar41 + 0x60);
        memcpy((void *)(*(long *)(lVar41 + 0x150) + (lVar13 + 1 + lVar33) * (long)iVar4 * 4),
               (void *)(*(long *)(lVar41 + 0x150) + (long)(iVar4 * iVar6) * 4),(long)iVar4 << 2);
      }
      piVar2 = (int *)(*(long *)(lVar41 + 0xe0) + lVar40);
      piVar2[2] = -1;
      piVar2[3] = -1;
      *(byte *)(piVar2 + 4) = *(byte *)(piVar2 + 4) & 0xbf;
      *piVar2 = iVar11 + iVar31;
      if ((ulong)uVar29 - 1 != lVar33) {
        piVar2[1] = iVar11 + iVar31 + 1;
        fVar47 = *pfVar37;
        local_90 = CONCAT44(fVar50 + fVar49 * fVar47,fVar48 + fVar46 * fVar47);
        uStack_88 = CONCAT44(fVar55 + fVar54 * fVar47,fVar52 + fVar51 * fVar47);
        FUN_0308f544(param_3,&local_90,1);
      }
      lVar33 = lVar33 + 1;
      piVar38[-1] = iVar35;
      *piVar38 = iVar32 + uVar45 + 1 + iVar31;
      pfVar37 = pfVar37 + 4;
      piVar38 = piVar38 + 2;
    } while ((ulong)uVar27 - 1 != lVar33);
  }
  if (0 < (int)(iVar12 + ~uVar5)) {
    iVar35 = ~uVar28 + iVar12 + local_64;
    iVar11 = (iVar12 + local_64) - uVar45;
    iVar42 = ((iVar12 + (int)uVar36 + iVar44) - iVar42) + -2;
    do {
      local_90 = CONCAT44(local_90._4_4_,iVar42);
      local_68 = iVar35;
      FUN_030e9e20(param_2,param_3,&local_90,&local_68);
      iVar11 = iVar11 + -1;
      iVar35 = iVar35 + -1;
      iVar42 = iVar42 + -1;
    } while (1 < iVar11);
  }
  if (bVar7) {
    piVar22[1] = iVar44 + uVar28;
    *(short *)((long)piVar22 + 10) = sVar3;
  }
  else {
    *piVar22 = iVar44 + uVar28;
    *(short *)(piVar22 + 2) = sVar3;
  }
LAB_030ec66c:
  param_7 = param_7 + 2;
  iVar43 = iVar43 + 1;
  if (param_7 == param_8) goto LAB_030ec850;
  goto LAB_030ebfe8;
LAB_030ec850:
  uVar36 = local_a8 & 0xffffffff;
  goto LAB_030ec854;
LAB_030ec9e0:
  piVar22 = (int *)(local_d0 + (long)iVar43 * 8);
  *piVar22 = iVar42;
  piVar22[1] = uVar45;
  lVar33 = *(long *)(local_1a0 + 0xe0) + (long)(int)(uVar45 - *(int *)(local_1a0 + 0x30)) * 0x14;
  *(undefined8 *)(lVar33 + 8) = 0xffffffffffffffff;
  *(byte *)(lVar33 + 0x10) = *(byte *)(lVar33 + 0x10) & 0xbf;
  goto LAB_030ecf6c;
LAB_030ecaa8:
  iVar35 = iVar42 - *(int *)(lVar41 + 0x20);
  if (iVar42 < *(int *)(lVar41 + 0x20)) {
    lVar40 = *(long *)(lVar41 + 0x18);
    lVar14 = *(long *)(lVar41 + 0x48);
    uVar28 = *(uint *)(lVar41 + 0x50);
    iVar35 = iVar42;
    if (*(int *)(lVar41 + 0x98) != 0) {
      iVar35 = *(int *)(*(long *)(lVar41 + 0x90) + lVar13 * 4);
    }
    plVar26 = (long *)(lVar41 + 0xb0);
    if (iVar35 != -1) {
      lVar13 = *plVar26;
      goto LAB_030ecafc;
    }
    iVar35 = *(int *)(*(long *)(lVar41 + 0x90) + lVar13 * 4);
    if (iVar35 == -1) {
      iVar35 = *(int *)(lVar41 + 0xb8);
      iVar12 = iVar35;
      if ((int)(*(uint *)(lVar41 + 0xbc) & 0x7fffffff) <= iVar35) {
        FUN_03095540(plVar26,PTR_PTR_047d1a50,(long)iVar35 + 1);
        iVar12 = *(int *)(lVar41 + 0xb8);
      }
      piVar22 = (int *)(*(long *)(lVar41 + 0xb0) + (long)iVar12 * 0x10);
      piVar38 = (int *)(lVar40 + lVar13 * 0x10);
      *(int *)(lVar41 + 0xb8) = (int)((long)iVar35 + 1);
      *piVar22 = *piVar38;
      piVar22[1] = piVar38[1];
      *(undefined8 *)(piVar22 + 2) = *(undefined8 *)(piVar38 + 2);
      iVar12 = *(int *)(lVar41 + 0x128);
      lVar40 = (long)iVar12 + (long)(int)uVar28;
      iVar44 = (int)lVar40;
      if ((int)(*(uint *)(lVar41 + 300) & 0x7fffffff) < iVar44) {
        FUN_02e9b320((long *)(lVar41 + 0x120),PTR_PTR_047d1a50,lVar40);
      }
      if (0 < (int)uVar28) {
        puVar15 = (undefined4 *)(lVar14 + (long)(int)(uVar28 * iVar42) * 4);
        puVar19 = (undefined4 *)(*(long *)(lVar41 + 0x120) + (long)iVar12 * 4);
        uVar29 = uVar28 & 7;
        if (6 < uVar28 - 1) {
          iVar12 = -(uVar28 & 0xfffffff8);
          puVar21 = puVar15;
          puVar23 = puVar19;
          do {
            *puVar23 = *puVar21;
            puVar23[1] = puVar21[1];
            puVar23[2] = puVar21[2];
            puVar23[3] = puVar21[3];
            puVar23[4] = puVar21[4];
            puVar23[5] = puVar21[5];
            puVar23[6] = puVar21[6];
            puVar15 = puVar21 + 8;
            puVar19 = puVar23 + 8;
            iVar12 = iVar12 + 8;
            puVar23[7] = puVar21[7];
            puVar21 = puVar15;
            puVar23 = puVar19;
          } while (iVar12 != 0);
        }
        for (; uVar29 != 0; uVar29 = uVar29 - 1) {
          *puVar19 = *puVar15;
          puVar19 = puVar19 + 1;
          puVar15 = puVar15 + 1;
        }
      }
      *(int *)(lVar41 + 0x128) = iVar44;
      *(int *)(*(long *)(lVar41 + 0x90) + lVar13 * 4) = iVar35;
      iVar35 = *(int *)(lVar41 + 0xa8);
      lVar13 = (long)iVar35;
      if ((int)(*(uint *)(lVar41 + 0xac) & 0x7fffffff) <= iVar35) {
        FUN_0133bb88(lVar41 + 0xa0,PTR_PTR_047d1a50,lVar13 + 1);
        iVar35 = *(int *)(lVar41 + 0xa8);
      }
      *(int *)(*(long *)(lVar41 + 0xa0) + (long)iVar35 * 4) = iVar42;
      *(int *)(lVar41 + 0xa8) = (int)(lVar13 + 1);
    }
    else {
      piVar22 = (int *)(*plVar26 + (long)iVar35 * 0x10);
    }
  }
  else {
    lVar13 = *(long *)(lVar41 + 0xd0);
LAB_030ecafc:
    piVar22 = (int *)(lVar13 + (long)iVar35 * 0x10);
  }
  local_64 = piVar22[1];
  if ((int)uVar45 < local_64) {
LAB_030ecb48:
    local_64 = *piVar22;
    iVar35 = (int)(short)piVar22[2];
    if (local_64 < *(int *)(*(long *)(param_4 + 0x20) + 0x30)) {
      bVar7 = false;
    }
    else {
      bVar7 = false;
      *(int *)(lVar41 + 0x164) = *(int *)(lVar41 + 0x164) + (int)(short)piVar22[2];
    }
  }
  else {
    sVar3 = *(short *)((long)piVar22 + 10);
    iVar35 = (int)sVar3;
    if (local_64 + sVar3 <= (int)uVar45) goto LAB_030ecb48;
    if (*(int *)(*(long *)(param_4 + 0x20) + 0x30) <= local_64) {
      *(int *)(lVar41 + 0x164) = *(int *)(lVar41 + 0x164) + (int)sVar3;
    }
    bVar7 = true;
  }
  uVar29 = uVar27 - 1;
  sVar3 = (short)iVar35 + (short)uVar29;
  uVar5 = uVar45 - local_64;
  uVar28 = *(uint *)(*(long *)(param_4 + 0x20) + 0x30);
  iVar12 = *(int *)(*(long *)(param_4 + 0x20) + 0xe8);
  FUN_0308fb68(param_4);
  if (0 < (int)uVar5) {
    iVar44 = uVar5 + 1;
    iVar11 = ~uVar28 + uVar45;
    do {
      local_90 = CONCAT44(local_90._4_4_,iVar12 + iVar44 + -2);
      local_68 = iVar11;
      FUN_030e9e20(param_2,param_4,&local_90,&local_68);
      iVar44 = iVar44 + -1;
      iVar11 = iVar11 + -1;
    } while (1 < iVar44);
  }
  lVar13 = (long)iVar12 + (long)(int)uVar5;
  iVar44 = *(int *)(*(long *)(param_4 + 0x20) + 0xf8);
  iVar11 = *(int *)(*(long *)(param_4 + 0x20) + 0x40);
  iVar34 = uVar45 - uVar28;
  lVar14 = (long)iVar34;
  if (iVar34 != (int)lVar13) {
    puVar19 = (undefined4 *)(*(long *)(lVar41 + 0xe0) + lVar14 * 0x14);
    puVar15 = (undefined4 *)(*(long *)(lVar41 + 0xe0) + lVar13 * 0x14);
    *puVar15 = *puVar19;
    puVar15[1] = puVar19[1];
    uVar24 = *(undefined8 *)(puVar19 + 2);
    *(undefined2 *)(puVar15 + 4) = *(undefined2 *)(puVar19 + 4);
    *(undefined8 *)(puVar15 + 2) = uVar24;
    *(undefined2 *)((long)puVar15 + 0x12) = *(undefined2 *)((long)puVar19 + 0x12);
    *(undefined2 *)(*(long *)(lVar41 + 0x110) + lVar13 * 2) =
         *(undefined2 *)(*(long *)(lVar41 + 0x110) + lVar14 * 2);
    iVar6 = *(int *)(lVar41 + 0x60);
    memcpy((void *)(*(long *)(lVar41 + 0x150) + lVar13 * iVar6 * 4),
           (void *)(*(long *)(lVar41 + 0x150) + (long)(iVar6 * iVar34) * 4),(long)iVar6 << 2);
  }
  lVar40 = *(long *)(lVar41 + 0xe0);
  lVar20 = lVar40 + lVar13 * 0x14;
  *(undefined8 *)(lVar20 + 8) = 0xffffffffffffffff;
  *(byte *)(lVar20 + 0x10) = *(byte *)(lVar20 + 0x10) & 0xbf;
  if (uVar29 != 0) {
    *(int *)(lVar40 + lVar13 * 0x14 + 4) = iVar11 + iVar44;
    fVar47 = *(float *)(lVar39 + lVar18 * 0x10 + 4);
    local_90 = CONCAT44(fVar50 + fVar49 * fVar47,fVar46 + fVar48 * fVar47);
    uStack_88 = CONCAT44(fVar54 + fVar55 * fVar47,fVar51 + fVar52 * fVar47);
    FUN_0308f544(param_4,&local_90,1);
  }
  *(int *)(lVar33 + (long)iVar43 * 8) = iVar42;
  lVar33 = lVar33 + lVar18 * 8;
  *(uint *)(lVar33 + 4) = uVar28 + (int)lVar13;
  if (uVar27 != 1) {
    lVar40 = lVar13 * 0x14;
    iVar44 = iVar44 + iVar11;
    iVar11 = ~(iVar12 + uVar28) + local_64;
    iVar6 = (iVar12 + uVar28) - local_64;
    pfVar37 = (float *)(lVar39 + 0x14 + lVar18 * 0x10);
    lVar18 = 0;
    piVar38 = (int *)(lVar33 + 0xc);
    do {
      lVar40 = lVar40 + 0x14;
      iVar32 = (int)lVar18;
      if (iVar11 != iVar32) {
        puVar19 = (undefined4 *)(*(long *)(lVar41 + 0xe0) + lVar14 * 0x14);
        puVar15 = (undefined4 *)(*(long *)(lVar41 + 0xe0) + lVar40);
        *puVar15 = *puVar19;
        puVar15[1] = puVar19[1];
        uVar24 = *(undefined8 *)(puVar19 + 2);
        *(undefined2 *)(puVar15 + 4) = *(undefined2 *)(puVar19 + 4);
        *(undefined8 *)(puVar15 + 2) = uVar24;
        *(undefined2 *)((long)puVar15 + 0x12) = *(undefined2 *)((long)puVar19 + 0x12);
        *(undefined2 *)(*(long *)(lVar41 + 0x110) + lVar13 * 2 + 2 + lVar18 * 2) =
             *(undefined2 *)(*(long *)(lVar41 + 0x110) + lVar14 * 2);
        iVar31 = *(int *)(lVar41 + 0x60);
        memcpy((void *)(*(long *)(lVar41 + 0x150) + (lVar13 + 1 + lVar18) * (long)iVar31 * 4),
               (void *)(*(long *)(lVar41 + 0x150) + (long)(iVar31 * iVar34) * 4),(long)iVar31 << 2);
      }
      piVar2 = (int *)(*(long *)(lVar41 + 0xe0) + lVar40);
      piVar2[2] = -1;
      piVar2[3] = -1;
      *(byte *)(piVar2 + 4) = *(byte *)(piVar2 + 4) & 0xbf;
      *piVar2 = iVar44 + iVar32;
      if ((ulong)uVar29 - 1 != lVar18) {
        piVar2[1] = iVar44 + iVar32 + 1;
        fVar47 = *pfVar37;
        local_90 = CONCAT44(fVar50 + fVar49 * fVar47,fVar46 + fVar48 * fVar47);
        uStack_88 = CONCAT44(fVar54 + fVar55 * fVar47,fVar51 + fVar52 * fVar47);
        FUN_0308f544(param_4,&local_90,1);
      }
      lVar18 = lVar18 + 1;
      piVar38[-1] = iVar42;
      *piVar38 = iVar6 + uVar45 + 1 + iVar32;
      pfVar37 = pfVar37 + 4;
      piVar38 = piVar38 + 2;
    } while ((ulong)uVar27 - 1 != lVar18);
  }
  if (0 < (int)(iVar35 + ~uVar5)) {
    iVar42 = ~uVar28 + iVar35 + local_64;
    iVar44 = (iVar35 + local_64) - uVar45;
    iVar43 = ((iVar35 + (int)uVar17 + iVar12) - iVar43) + -2;
    do {
      local_90 = CONCAT44(local_90._4_4_,iVar43);
      local_68 = iVar42;
      FUN_030e9e20(param_2,param_4,&local_90,&local_68);
      iVar44 = iVar44 + -1;
      iVar42 = iVar42 + -1;
      iVar43 = iVar43 + -1;
    } while (1 < iVar44);
  }
  if (bVar7) {
    piVar22[1] = iVar12 + uVar28;
    *(short *)((long)piVar22 + 10) = sVar3;
  }
  else {
    *piVar22 = iVar12 + uVar28;
    *(short *)(piVar22 + 2) = sVar3;
  }
LAB_030ecf6c:
  param_10 = param_10 + 2;
  iVar9 = iVar9 + 1;
  if (param_10 == param_11) goto LAB_030ed148;
  goto LAB_030ec8e4;
LAB_030ed1c8:
  lVar39 = lVar39 + 8;
  if (lVar39 == local_c0 + (long)(int)local_b8 * 8) goto LAB_030ed1d4;
  goto LAB_030ed15c;
LAB_030ed254:
  lVar39 = lVar39 + 8;
  if (lVar39 == local_d0 + (long)(int)local_c8 * 8) goto LAB_030ed268;
  goto LAB_030ed1e8;
}


