/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030bc790; name: FUN_030bc790
 */


/* WARNING: Removing unreachable block (ram,0x030bcfb8) */

int FUN_030bc790(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  byte bVar12;
  uint uVar13;
  long *plVar14;
  undefined2 uVar15;
  int iVar16;
  uint *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  undefined8 *puVar22;
  byte bVar23;
  uint uVar24;
  undefined4 *puVar25;
  uint uVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  uint uVar30;
  ulong uVar31;
  int *piVar32;
  ulong uVar33;
  long lVar34;
  float *pfVar35;
  long *plVar36;
  ulong uVar37;
  float fVar38;
  int6 iVar39;
  float fVar40;
  float fVar41;
  byte bVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  float fVar49;
  long lVar48;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  byte bVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  long lVar59;
  long lVar60;
  float fVar61;
  float fVar63;
  undefined1 auVar62 [16];
  float fVar64;
  float fVar65;
  float fVar69;
  float fVar70;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar71;
  float fVar76;
  undefined8 uVar72;
  float fVar77;
  float fVar78;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar84;
  float fVar85;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar90;
  int iVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined1 auVar89 [16];
  float fVar95;
  float fVar98;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined4 uVar99;
  ulong uVar100;
  ulong uVar101;
  float fVar102;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  int iVar105;
  int iVar108;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  long **local_110;
  long local_108;
  uint *local_e8;
  long **local_e0;
  undefined8 local_d8;
  long *local_d0;
  int local_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  long **local_b0;
  uint local_a8;
  uint local_a4;
  int local_a0;
  
  if (*(int *)(param_1 + 0xf) == 0) {
    return 2;
  }
  puVar17 = (uint *)param_1[0xe];
  iVar21 = *(int *)(param_1 + 0xf) + -1;
  plVar36 = (long *)*param_1;
  uVar2 = *puVar17;
  *(int *)(param_1 + 0xf) = iVar21;
  *(undefined8 *)puVar17 = *(undefined8 *)(puVar17 + (long)iVar21 * 2);
  iVar21 = *(int *)(param_1 + 0xf);
  uVar18 = 1;
  if (2 < iVar21) {
    uVar13 = 1;
    if (*(int *)(param_1[0xe] + 0x14) < *(int *)(param_1[0xe] + 0xc)) {
      uVar13 = 2;
    }
    uVar18 = (ulong)uVar13;
  }
  if ((int)uVar18 < iVar21) {
    iVar16 = 0;
    do {
      lVar19 = param_1[0xe];
      iVar91 = (int)uVar18;
      if (*(int *)(lVar19 + (long)iVar16 * 8 + 4) <= *(int *)(lVar19 + (long)iVar91 * 8 + 4)) break;
      lVar29 = (long)iVar91;
      uVar27 = *(undefined8 *)(lVar19 + (long)iVar16 * 8);
      *(undefined8 *)(lVar19 + (long)iVar16 * 8) = *(undefined8 *)(lVar19 + lVar29 * 8);
      *(undefined8 *)(lVar19 + lVar29 * 8) = uVar27;
      uVar18 = lVar29 << 1 | 1;
      lVar19 = (long)(int)(lVar29 << 1) + 2;
      if ((int)lVar19 < *(int *)(param_1 + 0xf)) {
        uVar13 = (uint)uVar18;
        if (*(int *)(param_1[0xe] + lVar19 * 8 + 4) < *(int *)(param_1[0xe] + uVar18 * 8 + 4)) {
          uVar13 = uVar13 + 1;
        }
        uVar18 = (ulong)uVar13;
      }
      iVar16 = iVar91;
    } while ((int)uVar18 < iVar21);
  }
  uVar18 = (ulong)uVar2 & 0xffc00000;
  if (uVar18 == 0xff400000) {
    uVar33 = (ulong)(uVar2 * -0x61c8864f >> 0x18);
    goto LAB_030bdee0;
  }
  plVar14 = (long *)plVar36[0x3d];
  uVar33 = (ulong)(uVar2 * -0x61c8864f >> 0x18);
  lVar19 = *plVar14;
  for (uVar5 = *(ushort *)(plVar14[2] + uVar33 * 2); -1 < (short)uVar5;
      uVar5 = *(ushort *)(plVar14[1] + (ulong)uVar5 * 2)) {
    if (*(uint *)(lVar19 + (ulong)uVar5 * 0x10 + 8) == uVar2) {
      puVar22 = (undefined8 *)(lVar19 + (ulong)uVar5 * 0x10);
      goto LAB_030bc948;
    }
  }
  iVar21 = *(int *)((long)plVar14 + 0x1c);
  puVar22 = (undefined8 *)(lVar19 + (long)iVar21 * 0x10);
  *(int *)((long)plVar14 + 0x1c) = iVar21 + 1;
  *puVar22 = 0x7f7fffee7f7fffee;
  *(uint *)(puVar22 + 1) = uVar2;
  *(undefined4 *)((long)puVar22 + 0xc) = 0xffff;
  *(undefined2 *)(plVar14[1] + (long)(short)iVar21 * 2) = *(undefined2 *)(plVar14[2] + uVar33 * 2);
  *(short *)(plVar14[2] + uVar33 * 2) = (short)iVar21;
  lVar19 = *plVar14;
LAB_030bc948:
  *(int *)(plVar14 + 8) = ((int)puVar22 - (int)lVar19) * 0x1000 >> 0x10;
  plVar14[9] = (long)puVar22;
  plVar14[10] = (long)puVar22;
  uVar13 = *(uint *)(plVar36 + 0x26);
  uVar30 = uVar13 >> 0x16;
  uVar26 = uVar30;
  if (uVar2 >> 0x16 != 0x3fe) {
    uVar26 = uVar2 >> 0x16;
  }
  if (*(uint *)((long)plVar36 + 0x284) != uVar26) {
    lVar19 = *(long *)(*(long *)(*plVar36 + 0x38) + (ulong)uVar26 * 0x100);
    plVar36[0x3e] = *(long *)(lVar19 + 0x20);
    lVar29 = *(long *)(lVar19 + 0x60);
    plVar36[0x41] = *(long *)(lVar19 + 0x68);
    plVar36[0x40] = lVar29;
    lVar29 = *(long *)(lVar19 + 0x70);
    plVar36[0x43] = *(long *)(lVar19 + 0x78);
    plVar36[0x42] = lVar29;
    lVar29 = *(long *)(lVar19 + 0x80);
    plVar36[0x45] = *(long *)(lVar19 + 0x88);
    plVar36[0x44] = lVar29;
    lVar29 = *(long *)(lVar19 + 0x98);
    lVar19 = *(long *)(lVar19 + 0x90);
    *(uint *)((long)plVar36 + 0x284) = uVar26;
    plVar36[0x47] = lVar29;
    plVar36[0x46] = lVar19;
  }
  if (uVar18 == 0xff800000) {
    lVar29 = plVar36[0x25];
    lVar19 = plVar36[0x24];
    *(uint *)(plVar36 + 0x55) = uVar2;
    plVar36[9] = -1;
    bVar23 = 0;
    *(undefined4 *)(plVar36 + 10) = 4;
    uVar26 = 0xffffffff;
    *(undefined4 *)(plVar36 + 0x2c) = 0xffffffff;
    plVar36[0x2f] = 0;
    plVar36[0x2d] = 0;
    plVar36[0x2e] = 0;
    plVar36[0x13] = lVar29;
    plVar36[0x12] = lVar19;
    plVar36[0x31] = lVar29;
    plVar36[0x30] = lVar19;
    plVar36[0xf] = lVar29;
    plVar36[0xe] = lVar19;
    plVar36[0x11] = lVar29;
    plVar36[0x10] = lVar19;
  }
  else {
    lVar29 = plVar36[0x3e];
    uVar20 = (ulong)uVar2 & 0x3fffff;
    iVar16 = *(int *)(lVar29 + 0x60);
    lVar19 = (long)iVar16;
    iVar91 = (int)uVar20;
    iVar21 = iVar91 - *(int *)(lVar29 + 0x30);
    if (iVar91 < *(int *)(lVar29 + 0x30)) {
      if (*(int *)(lVar29 + 0x78) == 0) {
        iVar21 = iVar91;
LAB_030bc9f0:
        lVar34 = *(long *)(lVar29 + 0x130) + (long)(iVar21 * iVar16) * 4;
        lVar19 = lVar34 + lVar19 * 4;
        lVar28 = *(long *)(lVar29 + 0xc0);
        goto LAB_030bca04;
      }
      iVar21 = *(int *)(*(long *)(lVar29 + 0x70) + uVar20 * 4);
      if (iVar21 != -1) goto LAB_030bc9f0;
      lVar34 = *(long *)(lVar29 + 0x58) + (long)(iVar16 * iVar91) * 4;
      lVar19 = lVar34 + lVar19 * 4;
      piVar32 = (int *)(*(long *)(lVar29 + 0x28) + uVar20 * 0x14);
    }
    else {
      lVar34 = *(long *)(lVar29 + 0x150) + (long)(iVar16 * iVar21) * 4;
      lVar19 = lVar34 + lVar19 * 4;
      lVar28 = *(long *)(lVar29 + 0xe0);
LAB_030bca04:
      piVar32 = (int *)(lVar28 + (long)iVar21 * 0x14);
    }
    iVar21 = *piVar32;
    iVar16 = piVar32[1];
    bVar23 = *(byte *)(piVar32 + 4);
    uVar26 = piVar32[2];
    uVar13 = piVar32[3];
    uVar50 = *(undefined1 *)((long)piVar32 + 0x11);
    uVar15 = *(undefined2 *)((long)piVar32 + 0x12);
    plVar36[0xb] = lVar34;
    plVar36[0xc] = lVar19;
    if ((bVar23 >> 6 & 1) == 0) {
      bVar9 = uVar13 == 0xffffffff;
      uVar13 = uVar13 & 0x3fffff | *(int *)(lVar29 + 0x17c) << 0x16;
      if (bVar9) {
        uVar13 = 0xffffffff;
      }
      if (uVar26 != 0xffffffff) {
        uVar26 = *(int *)(lVar29 + 0x17c) << 0x16 | uVar26 & 0x3fffff;
      }
    }
    *(int *)(plVar36 + 8) = iVar21;
    *(int *)((long)plVar36 + 0x44) = iVar16;
    *(uint *)(plVar36 + 9) = uVar26;
    *(uint *)((long)plVar36 + 0x4c) = uVar13;
    *(byte *)(plVar36 + 10) = bVar23;
    fVar46 = (float)plVar36[0x41];
    fVar49 = (float)((ulong)plVar36[0x41] >> 0x20);
    *(undefined1 *)((long)plVar36 + 0x51) = uVar50;
    *(undefined2 *)((long)plVar36 + 0x52) = uVar15;
    *(uint *)(plVar36 + 0x55) = uVar2;
    iVar91 = *(int *)(lVar29 + 0x40);
    lVar28 = 0x38;
    if (iVar91 <= iVar21) {
      lVar28 = 0xf0;
    }
    iVar105 = 0;
    if (iVar91 <= iVar21) {
      iVar105 = iVar91;
    }
    puVar22 = (undefined8 *)(*(long *)(lVar29 + lVar28) + (long)(iVar21 - iVar105) * 0x10);
    uVar72 = puVar22[1];
    uVar27 = *puVar22;
    lVar28 = 0x38;
    if (iVar91 <= iVar16) {
      lVar28 = 0xf0;
    }
    iVar21 = 0;
    if (iVar91 <= iVar16) {
      iVar21 = iVar91;
    }
    fVar38 = (float)uVar27;
    fVar43 = (float)plVar36[0x40];
    fVar44 = (float)((ulong)plVar36[0x40] >> 0x20);
    fVar45 = (float)((ulong)uVar27 >> 0x20);
    fVar65 = (float)plVar36[0x42];
    fVar41 = (float)((ulong)plVar36[0x42] >> 0x20);
    fVar64 = (float)plVar36[0x43];
    fVar69 = (float)((ulong)plVar36[0x43] >> 0x20);
    puVar22 = (undefined8 *)(*(long *)(lVar29 + lVar28) + (long)(iVar16 - iVar21) * 0x10);
    uVar47 = puVar22[1];
    uVar27 = *puVar22;
    *(uint *)(plVar36 + 0x2c) = uVar2;
    auVar111 = *(undefined1 (*) [16])(plVar36 + 0x44);
    auVar68 = *(undefined1 (*) [16])(plVar36 + 0x46);
    fVar40 = (float)uVar72;
    plVar36[0x2f] = lVar19;
    plVar36[0x2d] = (long)(plVar36 + 8);
    plVar36[0x2e] = lVar34;
    fVar61 = auVar68._0_4_ + auVar111._0_4_ * fVar40 + fVar43 * fVar38 + fVar65 * fVar45;
    fVar63 = auVar68._4_4_ + auVar111._4_4_ * fVar40 + fVar44 * fVar38 + fVar41 * fVar45;
    auVar66._0_8_ = CONCAT44(fVar63,fVar61);
    auVar66._8_4_ = auVar68._8_4_ + auVar111._8_4_ * fVar40 + fVar46 * fVar38 + fVar64 * fVar45;
    auVar66._12_4_ = auVar68._12_4_ + auVar111._12_4_ * fVar40 + fVar49 * fVar38 + fVar69 * fVar45;
    fVar38 = (float)uVar27;
    fVar45 = (float)((ulong)uVar27 >> 0x20);
    fVar40 = (float)uVar47;
    fVar43 = auVar68._0_4_ + auVar111._0_4_ * fVar40 + fVar43 * fVar38 + fVar65 * fVar45;
    fVar44 = auVar68._4_4_ + auVar111._4_4_ * fVar40 + fVar44 * fVar38 + fVar41 * fVar45;
    fVar46 = auVar68._8_4_ + auVar111._8_4_ * fVar40 + fVar46 * fVar38 + fVar64 * fVar45;
    fVar49 = auVar68._12_4_ + auVar111._12_4_ * fVar40 + fVar49 * fVar38 + fVar69 * fVar45;
    plVar36[0xf] = auVar66._8_8_;
    plVar36[0xe] = auVar66._0_8_;
    plVar36[0x11] = CONCAT44(fVar49,fVar46);
    plVar36[0x10] = CONCAT44(fVar44,fVar43);
    fVar61 = fVar61 + (fVar43 - fVar61) * 0.5;
    fVar63 = fVar63 + (fVar44 - fVar63) * 0.5;
    uVar50 = (undefined1)((uint)fVar63 >> 8);
    uVar51 = (undefined1)((uint)fVar63 >> 0x10);
    uVar52 = (undefined1)((uint)fVar63 >> 0x18);
    fVar46 = auVar66._8_4_ + (fVar46 - auVar66._8_4_) * 0.5;
    fVar49 = auVar66._12_4_ + (fVar49 - auVar66._12_4_) * 0.5;
    plVar36[0x13] = CONCAT44(fVar49,fVar46);
    plVar36[0x12] =
         CONCAT17(uVar52,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(SUB41(fVar63,0),fVar61))));
    plVar36[0x31] = CONCAT44(fVar49,fVar46);
    plVar36[0x30] =
         CONCAT17(uVar52,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(SUB41(fVar63,0),fVar61))));
    lVar19 = (long)*(short *)(((long *)plVar36[0x3d])[10] + 0xc);
    if (lVar19 == -1) {
      puVar25 = (undefined4 *)0x0;
    }
    else {
      puVar25 = (undefined4 *)(*(long *)plVar36[0x3d] + lVar19 * 0x10);
    }
    if ((*(byte *)((long)puVar25 + 0xe) >> 2 & 1) == 0) {
      uVar30 = (uint)puVar25[2] >> 0x16;
      uVar20 = (ulong)(uint)puVar25[2] & 0x3fffff;
      if (uVar30 == 0x3fd) {
        uVar30 = *(uint *)(plVar36[0x28] + uVar20 * 4) >> 0x16;
      }
      if (*(uint *)(plVar36 + 0x51) == uVar30) {
        lVar19 = plVar36[0x3f];
      }
      else {
        lVar29 = *(long *)(*(long *)(*plVar36 + 0x38) + (ulong)uVar30 * 0x100);
        lVar19 = *(long *)(lVar29 + 0x20);
        plVar36[0x3f] = lVar19;
        lVar34 = *(long *)(lVar29 + 0x60);
        plVar36[0x49] = *(long *)(lVar29 + 0x68);
        plVar36[0x48] = lVar34;
        lVar34 = *(long *)(lVar29 + 0x70);
        plVar36[0x4b] = *(long *)(lVar29 + 0x78);
        plVar36[0x4a] = lVar34;
        lVar34 = *(long *)(lVar29 + 0x80);
        plVar36[0x4d] = *(long *)(lVar29 + 0x88);
        plVar36[0x4c] = lVar34;
        lVar34 = *(long *)(lVar29 + 0x98);
        lVar29 = *(long *)(lVar29 + 0x90);
        *(uint *)(plVar36 + 0x51) = uVar30;
        plVar36[0x4f] = lVar34;
        plVar36[0x4e] = lVar29;
      }
      iVar16 = (int)uVar20;
      iVar21 = iVar16 - *(int *)(lVar19 + 0x30);
      if (iVar16 < *(int *)(lVar19 + 0x30)) {
        if (*(int *)(lVar19 + 0x78) == 0) {
          iVar21 = iVar16;
LAB_030bcbb4:
          lVar29 = *(long *)(lVar19 + 0xc0);
          goto LAB_030bcbb8;
        }
        iVar21 = *(int *)(*(long *)(lVar19 + 0x70) + uVar20 * 4);
        if (iVar21 != -1) goto LAB_030bcbb4;
        piVar32 = (int *)(*(long *)(lVar19 + 0x28) + uVar20 * 0x14);
      }
      else {
        lVar29 = *(long *)(lVar19 + 0xe0);
LAB_030bcbb8:
        piVar32 = (int *)(lVar29 + (long)iVar21 * 0x14);
      }
      iVar91 = *(int *)(lVar19 + 0x40);
      iVar21 = *piVar32;
      iVar16 = piVar32[1];
      auVar111 = *(undefined1 (*) [16])(plVar36 + 0x4e);
      lVar29 = 0x38;
      if (iVar91 <= iVar21) {
        lVar29 = 0xf0;
      }
      iVar105 = 0;
      if (iVar91 <= iVar21) {
        iVar105 = iVar91;
      }
      puVar22 = (undefined8 *)(*(long *)(lVar19 + lVar29) + (long)(iVar21 - iVar105) * 0x10);
      uVar27 = *puVar22;
      lVar29 = 0x38;
      if (iVar91 <= iVar16) {
        lVar29 = 0xf0;
      }
      iVar21 = 0;
      if (iVar91 <= iVar16) {
        iVar21 = iVar91;
      }
      puVar6 = (undefined8 *)(*(long *)(lVar19 + lVar29) + (long)(iVar16 - iVar21) * 0x10);
      uVar72 = *puVar6;
      fVar46 = (float)uVar27;
      fVar49 = (float)((ulong)uVar27 >> 0x20);
      fVar43 = (float)puVar22[1];
      fVar46 = fVar46 + ((float)uVar72 - fVar46) * 0.5;
      fVar49 = fVar49 + ((float)((ulong)uVar72 >> 0x20) - fVar49) * 0.5;
      fVar43 = fVar43 + ((float)puVar6[1] - fVar43) * 0.5;
      plVar36[0x1f] =
           CONCAT44(auVar111._12_4_ +
                    (float)((ulong)plVar36[0x4d] >> 0x20) * fVar43 +
                    (float)((ulong)plVar36[0x49] >> 0x20) * fVar46 +
                    (float)((ulong)plVar36[0x4b] >> 0x20) * fVar49,
                    auVar111._8_4_ +
                    (float)plVar36[0x4d] * fVar43 +
                    (float)plVar36[0x49] * fVar46 + (float)plVar36[0x4b] * fVar49);
      plVar36[0x1e] =
           CONCAT44(auVar111._4_4_ +
                    (float)((ulong)plVar36[0x4c] >> 0x20) * fVar43 +
                    (float)((ulong)plVar36[0x48] >> 0x20) * fVar46 +
                    (float)((ulong)plVar36[0x4a] >> 0x20) * fVar49,
                    auVar111._0_4_ +
                    (float)plVar36[0x4c] * fVar43 +
                    (float)plVar36[0x48] * fVar46 + (float)plVar36[0x4a] * fVar49);
      lVar19 = CONCAT44(*puVar25,*puVar25);
    }
    else {
      plVar36[0x1f] = plVar36[0x25];
      plVar36[0x1e] = plVar36[0x24];
      lVar19 = 0;
    }
    bVar23 = bVar23 & 0x10;
    uVar30 = uVar13 >> 0x16;
    plVar36[0x20] = lVar19;
  }
  if (*(uint *)(plVar36 + 0x51) == uVar30) {
    lVar19 = plVar36[0x3f];
  }
  else {
    lVar29 = *(long *)(*(long *)(*plVar36 + 0x38) + (ulong)uVar30 * 0x100);
    lVar19 = *(long *)(lVar29 + 0x20);
    plVar36[0x3f] = lVar19;
    lVar34 = *(long *)(lVar29 + 0x60);
    plVar36[0x49] = *(long *)(lVar29 + 0x68);
    plVar36[0x48] = lVar34;
    lVar34 = *(long *)(lVar29 + 0x70);
    plVar36[0x4b] = *(long *)(lVar29 + 0x78);
    plVar36[0x4a] = lVar34;
    lVar34 = *(long *)(lVar29 + 0x80);
    plVar36[0x4d] = *(long *)(lVar29 + 0x88);
    plVar36[0x4c] = lVar34;
    lVar34 = *(long *)(lVar29 + 0x98);
    lVar29 = *(long *)(lVar29 + 0x90);
    *(uint *)(plVar36 + 0x51) = uVar30;
    plVar36[0x4f] = lVar34;
    plVar36[0x4e] = lVar29;
  }
  uVar30 = uVar13 & 0x3fffff;
  uVar24 = uVar30 - *(int *)(lVar19 + 0x20);
  iVar21 = *(int *)(lVar19 + 0x50);
  lVar29 = (long)iVar21;
  if ((int)uVar30 < *(int *)(lVar19 + 0x20)) {
    if (*(int *)(lVar19 + 0x98) == 0) {
      uVar24 = uVar30;
LAB_030bccb4:
      lVar34 = *(long *)(lVar19 + 0x120) + (long)(int)(uVar24 * iVar21) * 4;
      lVar29 = lVar34 + lVar29 * 4;
      lVar28 = *(long *)(lVar19 + 0xb0);
      goto LAB_030bccc8;
    }
    uVar24 = *(uint *)(*(long *)(lVar19 + 0x90) + (ulong)uVar30 * 4);
    if (uVar24 != 0xffffffff) goto LAB_030bccb4;
    lVar34 = *(long *)(lVar19 + 0x48) + (long)(int)(iVar21 * uVar30) * 4;
    lVar29 = lVar34 + lVar29 * 4;
    puVar25 = (undefined4 *)(*(long *)(lVar19 + 0x18) + (ulong)uVar30 * 0x10);
  }
  else {
    lVar34 = *(long *)(lVar19 + 0x140) + (long)(int)(iVar21 * uVar24) * 4;
    lVar29 = lVar34 + lVar29 * 4;
    lVar28 = *(long *)(lVar19 + 0xd0);
LAB_030bccc8:
    puVar25 = (undefined4 *)(lVar28 + (long)(int)uVar24 * 0x10);
  }
  *(uint *)(plVar36 + 0x50) = uVar13;
  plVar14 = plVar36 + 4;
  *(undefined4 *)plVar14 = *puVar25;
  *(undefined4 *)((long)plVar36 + 0x24) = puVar25[1];
  lVar28 = *(long *)(puVar25 + 2);
  plVar36[6] = lVar34;
  plVar36[7] = lVar29;
  *(uint *)(plVar36 + 0x38) = uVar13;
  plVar36[0x39] = (long)plVar14;
  plVar36[0x3a] = lVar34;
  plVar36[5] = lVar28;
  plVar36[0x3b] = lVar29;
  if (bVar23 != 0) {
    uVar26 = uVar26 & 0x3fffff;
    uVar13 = uVar26 - *(int *)(lVar19 + 0x30);
    if ((int)uVar26 < *(int *)(lVar19 + 0x30)) {
      if (*(int *)(lVar19 + 0x78) == 0) {
        uVar13 = uVar26;
LAB_030bcd48:
        lVar29 = *(long *)(lVar19 + 0xc0);
        goto LAB_030bcd4c;
      }
      uVar13 = *(uint *)(*(long *)(lVar19 + 0x70) + (ulong)uVar26 * 4);
      if (uVar13 != 0xffffffff) goto LAB_030bcd48;
      piVar32 = (int *)(*(long *)(lVar19 + 0x28) + (ulong)uVar26 * 0x14);
    }
    else {
      lVar29 = *(long *)(lVar19 + 0xe0);
LAB_030bcd4c:
      piVar32 = (int *)(lVar29 + (long)(int)uVar13 * 0x14);
    }
    iVar91 = *(int *)(lVar19 + 0x40);
    iVar21 = *piVar32;
    iVar16 = piVar32[1];
    auVar111 = *(undefined1 (*) [16])(plVar36 + 0x4e);
    lVar29 = 0x38;
    if (iVar91 <= iVar21) {
      lVar29 = 0xf0;
    }
    iVar105 = 0;
    if (iVar91 <= iVar21) {
      iVar105 = iVar91;
    }
    lVar34 = 0x38;
    if (iVar91 <= iVar16) {
      lVar34 = 0xf0;
    }
    iVar108 = 0;
    if (iVar91 <= iVar16) {
      iVar108 = iVar91;
    }
    puVar22 = (undefined8 *)(*(long *)(lVar19 + lVar29) + (long)(iVar21 - iVar105) * 0x10);
    uVar27 = *puVar22;
    puVar6 = (undefined8 *)(*(long *)(lVar19 + lVar34) + (long)(iVar16 - iVar108) * 0x10);
    uVar72 = *puVar6;
    fVar46 = (float)uVar27;
    fVar49 = (float)((ulong)uVar27 >> 0x20);
    fVar43 = (float)puVar22[1];
    fVar46 = fVar46 + ((float)uVar72 - fVar46) * 0.5;
    fVar49 = fVar49 + ((float)((ulong)uVar72 >> 0x20) - fVar49) * 0.5;
    fVar43 = fVar43 + ((float)puVar6[1] - fVar43) * 0.5;
    lVar19 = CONCAT44(auVar111._4_4_ +
                      (float)((ulong)plVar36[0x4c] >> 0x20) * fVar43 +
                      (float)((ulong)plVar36[0x48] >> 0x20) * fVar46 +
                      (float)((ulong)plVar36[0x4a] >> 0x20) * fVar49,
                      auVar111._0_4_ +
                      (float)plVar36[0x4c] * fVar43 +
                      (float)plVar36[0x48] * fVar46 + (float)plVar36[0x4a] * fVar49);
    lVar29 = CONCAT44(auVar111._12_4_ +
                      (float)((ulong)plVar36[0x4d] >> 0x20) * fVar43 +
                      (float)((ulong)plVar36[0x49] >> 0x20) * fVar46 +
                      (float)((ulong)plVar36[0x4b] >> 0x20) * fVar49,
                      auVar111._8_4_ +
                      (float)plVar36[0x4d] * fVar43 +
                      (float)plVar36[0x49] * fVar46 + (float)plVar36[0x4b] * fVar49);
    plVar36[0x13] = lVar29;
    plVar36[0x12] = lVar19;
    plVar36[0x31] = lVar29;
    plVar36[0x30] = lVar19;
  }
  iVar21 = *(int *)((long)plVar36 + 0x134);
  fVar46 = *(float *)param_1[0xb];
  lVar19 = tpidr_el0;
  lVar29 = *(long *)(lVar19 + 0x1000b8);
  if (lVar29 == 0) {
    lVar29 = FUN_00e5d3b4();
    *(long *)(lVar19 + 0x1000b8) = lVar29;
  }
  uVar13 = ((int)lVar28 >> 0x10) + (int)(short)lVar28 + iVar21;
  local_108 = *(long *)(*(long *)(lVar29 + 0x3d0) + 0x10);
  if (*(long *)(local_108 + 8) == 0) {
    local_110 = (long **)(-(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar13 << 2);
    local_b0 = local_110;
    if (local_108 == 0) goto LAB_030bcf58;
    local_e0 = (long **)((long)local_110 + 0x3fU & 0xffffffffffffffc0);
    if (*(long ***)(local_108 + 0x28) < local_e0) {
LAB_030bce54:
      local_e8 = (uint *)FUN_031cf3b4(local_108,&local_e0);
    }
    else {
      local_e8 = *(uint **)(local_108 + 0x38);
      if (*(ulong *)(local_108 + 0x40) < (ulong)((long)local_e0 + (long)local_e8))
      goto LAB_030bce54;
      *(long *)(local_108 + 0x38) = (long)local_e0 + (long)local_e8;
    }
  }
  else {
    local_b0 = (long **)(-(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar13 << 2);
LAB_030bcf58:
    local_110 = local_b0;
    local_e8 = (uint *)(**(code **)PTR_DAT_047d1a08)(1,&local_b0,0x40);
    local_108 = 0;
  }
  local_e0 = &local_d0;
  local_d8 = (long *)0x8000000200000002;
  local_c8 = 0x40;
  memset(local_e0,0,8);
  lVar19 = plVar36[1];
  if (uVar18 == 0xff800000) {
    iVar21 = (int)*(short *)((long)plVar36 + 0x2a) + (int)(short)plVar36[5];
    lVar28 = plVar36[0x50];
    lVar29 = plVar36[6];
    lVar34 = plVar36[7];
    uVar13 = iVar21 + 0x1f >> 5;
    local_c8 = iVar21;
    if ((int)(local_d8._4_4_ & 0x7fffffff) < (int)uVar13) {
      FUN_02eb1f88(&local_e0,PTR_PTR_047d1a50,(long)(int)uVar13);
    }
    if ((uint)local_d8 != uVar13) {
      local_d8 = (long *)CONCAT44(local_d8._4_4_,uVar13);
    }
    local_b0 = local_e0;
    local_a4 = uVar13 | 0x80000000;
    local_a8 = uVar13;
    local_a0 = iVar21;
    FUN_03062ffc(lVar19,plVar36 + 0x24,(int)lVar28,plVar14,lVar29,lVar34,&local_b0);
    local_a8 = 0;
    if ((-1 < (int)local_a4) && (local_b0 != (long **)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,local_b0,(ulong)local_a4 << 2);
    }
  }
  else {
    iVar21 = (int)*(short *)((long)plVar36 + 0x2a) + (int)(short)plVar36[5];
    lVar59 = plVar36[0x55];
    lVar29 = plVar36[0xb];
    lVar28 = plVar36[0xc];
    lVar60 = plVar36[0x50];
    uVar13 = iVar21 + 0x1f >> 5;
    lVar34 = plVar36[6];
    lVar48 = plVar36[7];
    local_c8 = iVar21;
    if ((int)(local_d8._4_4_ & 0x7fffffff) < (int)uVar13) {
      FUN_02eb1f88(&local_e0,PTR_PTR_047d1a50,(long)(int)uVar13);
    }
    if ((uint)local_d8 != uVar13) {
      local_d8 = (long *)CONCAT44(local_d8._4_4_,uVar13);
    }
    local_b0 = local_e0;
    local_a4 = uVar13 | 0x80000000;
    local_a8 = uVar13;
    local_a0 = iVar21;
    FUN_03063f9c(lVar19,(int)lVar59,plVar36 + 8,lVar29,lVar28,plVar36 + 0x12,(int)lVar60,plVar14,
                 lVar34,lVar48,&local_b0);
    local_a8 = 0;
    if ((-1 < (int)local_a4) && (local_b0 != (long **)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,local_b0,(ulong)local_a4 << 2);
    }
  }
  sVar3 = (short)plVar36[5];
  uVar13 = (uint)sVar3;
  sVar4 = *(short *)((long)plVar36 + 0x2a);
  iVar16 = (int)sVar4;
  uVar26 = *(uint *)((long)plVar36 + 0x134);
  uVar30 = (int)plVar36[0x51] << 0x16;
  iVar21 = 0;
  if (0 < sVar3) {
    lVar19 = plVar36[4];
    uVar20 = 0;
    do {
      uVar24 = (uint)uVar20;
      if ((*(uint *)((long)local_e0 + (uVar20 >> 5) * 4) >> (ulong)(uVar24 & 0x1f) & 1) != 0) {
        local_e8[iVar21] = (int)lVar19 + uVar24 | uVar30;
        iVar21 = iVar21 + 1;
      }
      uVar20 = (ulong)(uVar24 + 1);
    } while ((int)sVar3 != uVar24 + 1);
  }
  if (0 < sVar4) {
    uVar24 = *(uint *)((long)plVar36 + 0x24);
    do {
      if ((*(uint *)((long)local_e0 + (long)((int)uVar13 >> 5) * 4) >> (ulong)(uVar13 & 0x1f) & 1)
          != 0) {
        local_e8[iVar21] = uVar24 | uVar30;
        iVar21 = iVar21 + 1;
      }
      uVar24 = uVar24 + 1;
      uVar13 = uVar13 + 1;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  if (0 < (int)uVar26) {
    lVar19 = plVar36[0x50];
    lVar29 = plVar36[0x28];
    if (uVar18 == 0xff800000) {
      lVar34 = 0;
      uVar20 = 0;
      do {
        if ((*(int *)(lVar29 + uVar20 * 4) == (int)lVar19) &&
           (uVar11 = FUN_03061468(plVar36[1],plVar36 + 0x24,(int)plVar36[0x50],plVar14,plVar36[6],
                                  plVar36[7],plVar36[0x27] + lVar34), (uVar11 & 1) != 0)) {
          local_e8[iVar21] = (uint)uVar20 | 0xff400000;
          iVar21 = iVar21 + 1;
        }
        uVar20 = uVar20 + 1;
        lVar34 = lVar34 + 0x10;
      } while (uVar26 != uVar20);
    }
    else {
      lVar34 = 0;
      uVar20 = 0;
      do {
        if ((*(int *)(lVar29 + uVar20 * 4) == (int)lVar19) &&
           (uVar11 = FUN_030615f8(plVar36[1],(int)plVar36[0x55],plVar36 + 8,plVar36[0xb],
                                  plVar36[0xc],plVar36 + 0x12,(int)plVar36[0x50],plVar14,plVar36[6],
                                  plVar36[7],plVar36[0x27] + lVar34), (uVar11 & 1) != 0)) {
          local_e8[iVar21] = (uint)uVar20 | 0xff400000;
          iVar21 = iVar21 + 1;
        }
        uVar20 = uVar20 + 1;
        lVar34 = lVar34 + 0x10;
      } while (uVar26 != uVar20);
    }
  }
  lVar19 = (long)local_d8;
  uVar20 = (ulong)local_d8._4_4_;
  local_d8 = (long *)((ulong)local_d8._4_4_ << 0x20);
  if ((-1 < lVar19) && (local_e0 != (long **)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_e0,uVar20 << 2);
  }
  if (local_e8 < local_e8 + iVar21) {
    uVar20 = CONCAT44(fVar46,fVar46);
    bVar9 = uVar18 == 0xff800000;
    bVar23 = 0x51;
    if (!bVar9) {
      bVar23 = 0x41;
    }
    uVar27 = NEON_fmov(0x3f800000,4);
    auVar111 = NEON_fmov(0x3f800000,4);
    bVar12 = 0x11;
    if (!bVar9) {
      bVar12 = 1;
    }
    puVar17 = local_e8;
LAB_030bd3e4:
    if (*(int *)(param_1 + 5) <= *(int *)((long)param_1 + 0x2c)) goto LAB_030bddfc;
    uVar13 = *puVar17;
    uVar37 = (ulong)uVar13;
    uVar11 = uVar37 & 0xffc00000;
    uVar31 = uVar37 & 0x3fffff;
    if (uVar11 != 0xff400000) {
      lVar29 = plVar36[0x3f];
      iVar91 = *(int *)(lVar29 + 0x60);
      lVar19 = (long)iVar91;
      iVar105 = (int)uVar31;
      iVar16 = iVar105 - *(int *)(lVar29 + 0x30);
      if (iVar105 < *(int *)(lVar29 + 0x30)) {
        if (*(int *)(lVar29 + 0x78) == 0) {
          iVar16 = iVar105;
LAB_030bd468:
          lVar34 = *(long *)(lVar29 + 0x130) + (long)(iVar16 * iVar91) * 4;
          lVar19 = lVar34 + lVar19 * 4;
          lVar28 = *(long *)(lVar29 + 0xc0);
          goto LAB_030bd47c;
        }
        iVar16 = *(int *)(*(long *)(lVar29 + 0x70) + uVar31 * 4);
        if (iVar16 != -1) goto LAB_030bd468;
        lVar34 = *(long *)(lVar29 + 0x58) + (long)(iVar91 * iVar105) * 4;
        lVar19 = lVar34 + lVar19 * 4;
        piVar32 = (int *)(*(long *)(lVar29 + 0x28) + uVar31 * 0x14);
      }
      else {
        lVar34 = *(long *)(lVar29 + 0x150) + (long)(iVar91 * iVar16) * 4;
        lVar19 = lVar34 + lVar19 * 4;
        lVar28 = *(long *)(lVar29 + 0xe0);
LAB_030bd47c:
        piVar32 = (int *)(lVar28 + (long)iVar16 * 0x14);
      }
      uVar30 = piVar32[2];
      uVar26 = piVar32[3];
      iVar16 = *piVar32;
      iVar91 = piVar32[1];
      bVar42 = *(byte *)(piVar32 + 4);
      uVar50 = *(undefined1 *)((long)piVar32 + 0x11);
      uVar15 = *(undefined2 *)((long)piVar32 + 0x12);
      if (uVar30 == 0xffffffff) {
        uVar30 = 0xffffffff;
      }
      else if ((bVar42 >> 5 & 1) == 0) {
        if ((bVar42 >> 6 & 1) == 0) {
          bVar10 = uVar26 == 0xffffffff;
          uVar26 = uVar26 & 0x3fffff | *(int *)(lVar29 + 0x17c) << 0x16;
          uVar30 = uVar30 & 0x3fffff | *(int *)(lVar29 + 0x17c) << 0x16;
          if (bVar10) {
            uVar26 = 0xffffffff;
          }
        }
        iVar105 = *(int *)(lVar29 + 0x40);
        lVar28 = 0x38;
        if (iVar105 <= iVar16) {
          lVar28 = 0xf0;
        }
        fVar49 = (float)plVar36[0x49];
        fVar43 = (float)((ulong)plVar36[0x49] >> 0x20);
        iVar108 = 0;
        if (iVar105 <= iVar16) {
          iVar108 = iVar105;
        }
        puVar22 = (undefined8 *)(*(long *)(lVar29 + lVar28) + (long)(iVar16 - iVar108) * 0x10);
        uVar72 = *puVar22;
        lVar28 = 0x38;
        if (iVar105 <= iVar91) {
          lVar28 = 0xf0;
        }
        iVar108 = 0;
        if (iVar105 <= iVar91) {
          iVar108 = iVar105;
        }
        puVar6 = (undefined8 *)(*(long *)(lVar29 + lVar28) + (long)(iVar91 - iVar108) * 0x10);
        uVar47 = *puVar6;
        fVar63 = (float)uVar72;
        fVar44 = (float)plVar36[0x48];
        fVar61 = (float)((ulong)plVar36[0x48] >> 0x20);
        fVar45 = (float)((ulong)uVar72 >> 0x20);
        fVar71 = (float)plVar36[0x4a];
        fVar76 = (float)((ulong)plVar36[0x4a] >> 0x20);
        fVar77 = (float)plVar36[0x4b];
        fVar78 = (float)((ulong)plVar36[0x4b] >> 0x20);
        auVar68 = *(undefined1 (*) [16])(plVar36 + 0x4c);
        auVar66 = *(undefined1 (*) [16])(plVar36 + 0x4e);
        fVar64 = (float)uVar47;
        fVar69 = (float)((ulong)uVar47 >> 0x20);
        fVar65 = (float)puVar22[1];
        fVar70 = (float)puVar6[1];
        fVar38 = auVar66._0_4_ + auVar68._0_4_ * fVar65 + fVar44 * fVar63 + fVar71 * fVar45;
        fVar40 = auVar66._4_4_ + auVar68._4_4_ * fVar65 + fVar61 * fVar63 + fVar76 * fVar45;
        fVar41 = auVar66._8_4_ + auVar68._8_4_ * fVar65 + fVar49 * fVar63 + fVar77 * fVar45;
        fVar63 = auVar66._12_4_ + auVar68._12_4_ * fVar65 + fVar43 * fVar63 + fVar78 * fVar45;
        fVar44 = auVar66._0_4_ + auVar68._0_4_ * fVar70 + fVar44 * fVar64 + fVar71 * fVar69;
        fVar61 = auVar66._4_4_ + auVar68._4_4_ * fVar70 + fVar61 * fVar64 + fVar76 * fVar69;
        fVar49 = auVar66._8_4_ + auVar68._8_4_ * fVar70 + fVar49 * fVar64 + fVar77 * fVar69;
        fVar43 = auVar66._12_4_ + auVar68._12_4_ * fVar70 + fVar43 * fVar64 + fVar78 * fVar69;
        plVar36[0x19] = CONCAT44(fVar63,fVar41);
        plVar36[0x18] = CONCAT44(fVar40,fVar38);
        plVar36[0x1b] = CONCAT44(fVar43,fVar49);
        plVar36[0x1a] = CONCAT44(fVar61,fVar44);
        plVar36[0x1d] = CONCAT44(fVar63 + (fVar43 - fVar63) * 0.5,fVar41 + (fVar49 - fVar41) * 0.5);
        plVar36[0x1c] = CONCAT44(fVar40 + (fVar61 - fVar40) * 0.5,fVar38 + (fVar44 - fVar38) * 0.5);
      }
      lVar28 = plVar36[0x1d];
      lVar29 = plVar36[0x1c];
      *(uint *)((long)plVar36 + 0x2ac) = uVar13;
      *(int *)(plVar36 + 0x14) = iVar16;
      *(int *)((long)plVar36 + 0xa4) = iVar91;
      *(uint *)(plVar36 + 0x15) = uVar30;
      *(uint *)((long)plVar36 + 0xac) = uVar26;
      *(byte *)(plVar36 + 0x16) = bVar42;
      *(undefined1 *)((long)plVar36 + 0xb1) = uVar50;
      *(undefined2 *)((long)plVar36 + 0xb2) = uVar15;
      *(uint *)(plVar36 + 0x32) = uVar13;
      plVar36[0x35] = lVar19;
      plVar36[0x33] = (long)(plVar36 + 0x14);
      plVar36[0x34] = lVar34;
      plVar36[0x37] = lVar28;
      plVar36[0x36] = lVar29;
      if (((bVar42 >> 5 & 1) == 0) && (uVar30 != 0xffffffff)) goto LAB_030bd578;
      goto LAB_030bdda4;
    }
    plVar36[0x15] = -1;
    *(uint *)((long)plVar36 + 0x2ac) = uVar13;
    uVar15 = 0;
    bVar42 = 0;
    *(undefined4 *)(plVar36 + 0x16) = 4;
    plVar14 = (long *)(plVar36[0x27] + uVar31 * 0x10);
    lVar28 = plVar14[1];
    lVar29 = *plVar14;
    *(undefined4 *)(plVar36 + 0x32) = 0xffffffff;
    plVar36[0x19] = lVar28;
    plVar36[0x18] = lVar29;
    plVar36[0x1b] = lVar28;
    plVar36[0x1a] = lVar29;
    plVar36[0x1d] = lVar28;
    plVar36[0x1c] = lVar29;
    plVar36[0x34] = 0;
    plVar36[0x35] = 0;
    plVar36[0x33] = 0;
    plVar36[0x37] = lVar28;
    plVar36[0x36] = lVar29;
LAB_030bd578:
    if ((uVar2 != uVar13) && (*(uint *)(plVar36 + 9) != uVar13)) {
      uVar26 = *(uint *)((long)plVar36 + 0x28c);
      fVar49 = (float)((ulong)uVar27 >> 0x20);
      if ((uVar26 & 3) != 0) {
        lVar60 = plVar36[0xf];
        lVar59 = plVar36[0xe];
        fVar43 = (float)plVar36[0x11];
        fVar44 = (float)((ulong)plVar36[0x11] >> 0x20);
        lVar19 = plVar36[0x10];
        uVar50 = (undefined1)lVar19;
        uVar51 = (undefined1)((ulong)lVar19 >> 8);
        uVar52 = (undefined1)((ulong)lVar19 >> 0x10);
        uVar53 = (undefined1)((ulong)lVar19 >> 0x18);
        uVar55 = (undefined1)((ulong)lVar19 >> 0x20);
        uVar56 = (undefined1)((ulong)lVar19 >> 0x28);
        uVar57 = (undefined1)((ulong)lVar19 >> 0x30);
        uVar58 = (undefined1)((ulong)lVar19 >> 0x38);
        lVar48 = plVar36[0x25];
        lVar34 = plVar36[0x24];
        if ((uVar26 >> 4 & 1) != 0) {
          fVar63 = *(float *)(plVar36 + 0x22);
          fVar38 = *(float *)((long)plVar36 + 0x114);
          fVar45 = *(float *)(plVar36 + 0x23);
          fVar40 = *(float *)((long)plVar36 + 0x11c);
          fVar41 = (float)lVar34 * fVar63;
          fVar61 = (float)((ulong)lVar34 >> 0x20);
          fVar69 = fVar61 * fVar38;
          fVar70 = (float)lVar48 * fVar45;
          fVar71 = (float)lVar59 * fVar63;
          fVar65 = (float)((ulong)lVar59 >> 0x20);
          fVar76 = fVar65 * fVar38;
          fVar77 = (float)lVar60 * fVar45;
          fVar64 = fVar41 + fVar69 + fVar70;
          fVar70 = fVar41 + fVar69 + fVar70;
          fVar69 = fVar71 + fVar76 + fVar77;
          fVar77 = fVar71 + fVar76 + fVar77;
          lVar34 = CONCAT44(fVar61 - fVar38 * fVar70,(float)lVar34 - fVar63 * fVar64);
          lVar48 = CONCAT44((float)((ulong)lVar48 >> 0x20) - fVar40 * fVar70,
                            (float)lVar48 - fVar45 * fVar64);
          fVar41 = (float)lVar19 * fVar63;
          fVar61 = (float)((ulong)lVar19 >> 0x20);
          fVar64 = fVar61 * fVar38;
          lVar59 = CONCAT44(fVar65 - fVar38 * fVar77,(float)lVar59 - fVar63 * fVar69);
          lVar60 = CONCAT44((float)((ulong)lVar60 >> 0x20) - fVar40 * fVar77,
                            (float)lVar60 - fVar45 * fVar69);
          fVar65 = fVar43 * fVar45 + fVar41 + fVar64;
          fVar41 = fVar43 * fVar45 + fVar41 + fVar64;
          fVar63 = (float)lVar19 - fVar63 * fVar65;
          uVar50 = SUB41(fVar63,0);
          uVar51 = (undefined1)((uint)fVar63 >> 8);
          uVar52 = (undefined1)((uint)fVar63 >> 0x10);
          uVar53 = (undefined1)((uint)fVar63 >> 0x18);
          fVar61 = fVar61 - fVar38 * fVar41;
          uVar55 = SUB41(fVar61,0);
          uVar56 = (undefined1)((uint)fVar61 >> 8);
          uVar57 = (undefined1)((uint)fVar61 >> 0x10);
          uVar58 = (undefined1)((uint)fVar61 >> 0x18);
          fVar43 = fVar43 - fVar45 * fVar65;
          fVar44 = fVar44 - fVar40 * fVar41;
        }
        fVar40 = (float)lVar59;
        fVar65 = (float)((ulong)lVar59 >> 0x20);
        fVar41 = (float)lVar60;
        fVar64 = (float)((ulong)lVar60 >> 0x20);
        fVar61 = (float)lVar34;
        fVar63 = (float)((ulong)lVar34 >> 0x20);
        fVar38 = (float)lVar48;
        fVar45 = (float)((ulong)lVar48 >> 0x20);
        if ((uVar26 & 1) != 0) {
          fVar69 = fVar40 - (float)CONCAT13(uVar53,CONCAT12(uVar52,CONCAT11(uVar51,uVar50)));
          fVar70 = fVar65 - (float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55)));
          fVar71 = fVar41 - fVar43;
          fVar76 = fVar69 * (fVar40 - fVar61);
          fVar77 = fVar70 * (fVar65 - fVar63);
          fVar78 = fVar71 * (fVar41 - fVar38);
          uVar72 = NEON_fminnm(CONCAT44((fVar78 + fVar76 + fVar77) /
                                        (fVar71 * fVar71 + fVar69 * fVar69 + fVar70 * fVar70),
                                        (fVar78 + fVar76 + fVar77) /
                                        (fVar71 * fVar71 + fVar69 * fVar69 + fVar70 * fVar70)),
                               uVar27,4);
          uVar72 = NEON_fmax(uVar72,0,4);
          fVar76 = (float)((ulong)uVar72 >> 0x20);
          fVar69 = (fVar40 - fVar61) - fVar69 * (float)uVar72;
          fVar70 = (fVar65 - fVar63) - fVar70 * fVar76;
          fVar71 = (fVar41 - fVar38) - fVar71 * (float)uVar72;
          fVar76 = (fVar64 - fVar45) - (fVar64 - fVar44) * fVar76;
          auVar68._0_4_ = fVar69 * fVar69;
          auVar68._4_4_ = fVar70 * fVar70;
          auVar68._8_4_ = fVar71 * fVar71;
          auVar68._12_4_ = fVar76 * fVar76;
          auVar66 = NEON_ext(auVar68,auVar68,8,1);
          if (!(bool)(~((float)plVar36[0x29] * (float)plVar36[0x29] <
                       auVar68._0_4_ + auVar68._4_4_ + auVar66._0_4_) & 1)) goto LAB_030bdda4;
        }
        if ((uVar26 >> 1 & 1) != 0) {
          uVar30 = *(uint *)((long)plVar36 + 0x134);
          if ((int)uVar30 < 1) {
            uVar31 = 0;
LAB_030bd844:
            if ((uint)uVar31 != uVar30) goto LAB_030bd84c;
          }
          else {
            fVar69 = (float)CONCAT13(uVar53,CONCAT12(uVar52,CONCAT11(uVar51,uVar50))) - fVar40;
            fVar70 = (float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) - fVar65;
            uVar50 = SUB41(fVar70,0);
            uVar51 = (undefined1)((uint)fVar70 >> 8);
            uVar52 = (undefined1)((uint)fVar70 >> 0x10);
            uVar53 = (undefined1)((uint)fVar70 >> 0x18);
            fVar43 = fVar43 - fVar41;
            fVar44 = fVar44 - fVar64;
            fVar40 = fVar40 - fVar61;
            fVar65 = fVar65 - fVar63;
            fVar41 = fVar41 - fVar38;
            fVar64 = fVar64 - fVar45;
            uVar31 = 0;
            auVar67._0_4_ = fVar69 * fVar69;
            auVar67._4_4_ = fVar70 * fVar70;
            auVar67._8_4_ = fVar43 * fVar43;
            auVar67._12_4_ = fVar44 * fVar44;
            auVar74[4] = uVar50;
            auVar74._0_4_ = fVar69;
            auVar74[5] = uVar51;
            auVar74[6] = uVar52;
            auVar74[7] = uVar53;
            auVar74._8_4_ = fVar43;
            auVar74._12_4_ = fVar44;
            auVar107[4] = uVar50;
            auVar107._0_4_ = fVar69;
            auVar107[5] = uVar51;
            auVar107[6] = uVar52;
            auVar107[7] = uVar53;
            auVar107._8_4_ = fVar43;
            auVar107._12_4_ = fVar44;
            auVar66 = NEON_ext(auVar74,auVar107,4,1);
            auVar73._0_4_ = fVar69 * fVar40;
            auVar73._4_4_ = fVar70 * fVar65;
            auVar73._8_4_ = fVar43 * fVar41;
            auVar73._12_4_ = fVar44 * fVar64;
            auVar68 = NEON_ext(auVar67,auVar67,8,1);
            auVar74 = NEON_ext(auVar73,auVar73,8,1);
            fVar71 = auVar68._0_4_ + auVar67._0_4_ + auVar67._4_4_;
            fVar76 = auVar74._0_4_ + auVar73._0_4_ + auVar73._4_4_;
            auVar68 = *(undefined1 (*) [16])(plVar36 + 0x22);
            do {
              pfVar35 = (float *)(plVar36[0x27] + uVar31 * 0x10);
              fVar77 = *pfVar35;
              fVar78 = pfVar35[1];
              fVar84 = pfVar35[2];
              fVar85 = pfVar35[3];
              if ((uVar26 >> 4 & 1) != 0) {
                fVar86 = auVar68._0_4_ * fVar77;
                fVar90 = auVar68._4_4_ * fVar78;
                fVar93 = auVar68._8_4_ * fVar84;
                fVar87 = fVar93 + fVar86 + fVar90;
                fVar93 = fVar93 + fVar86 + fVar90;
                fVar77 = fVar77 - auVar68._0_4_ * fVar87;
                fVar78 = fVar78 - auVar68._4_4_ * fVar93;
                fVar84 = fVar84 - auVar68._8_4_ * fVar87;
                fVar85 = fVar85 - auVar68._12_4_ * fVar93;
              }
              auVar81._0_4_ = fVar77 - fVar61;
              auVar81._4_4_ = fVar78 - fVar63;
              auVar81._8_4_ = fVar84 - fVar38;
              auVar81._12_4_ = fVar85 - fVar45;
              auVar74 = NEON_ext(auVar81,auVar81,4,1);
              fVar77 = (float)(CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar51,CONCAT14(uVar50,
                                                  fVar69)))) >> 0x20);
              fVar78 = fVar69 * auVar74._0_4_ - auVar66._0_4_ * auVar81._0_4_;
              auVar89._0_8_ =
                   CONCAT44(fVar70 * auVar74._4_4_ - auVar66._4_4_ * auVar81._4_4_,fVar78);
              auVar89._8_4_ = fVar43 * auVar81._0_4_ - fVar69 * auVar81._8_4_;
              auVar89._12_4_ = fVar44 * auVar81._4_4_ - fVar77 * auVar81._12_4_;
              auVar74 = NEON_ext(auVar89,auVar89,4,1);
              uVar72 = NEON_ext(auVar74._0_8_,auVar89._0_8_,4,1);
              fVar86 = auVar74._0_4_;
              fVar87 = auVar74._4_4_;
              fVar84 = fVar86 * fVar86 + fVar87 * fVar87 + fVar78 * fVar78;
              fVar85 = fVar86 * fVar86 + fVar87 * fVar87 + fVar78 * fVar78;
              auVar96._0_4_ = auVar66._0_4_ * fVar86 - fVar69 * (float)uVar72;
              auVar96._4_4_ = auVar66._4_4_ * fVar87 - fVar70 * (float)((ulong)uVar72 >> 0x20);
              auVar96._8_4_ = fVar69 * fVar78 - fVar43 * fVar86;
              auVar96._12_4_ = fVar77 * 0.0 - fVar44 * fVar87;
              auVar74 = NEON_ext(auVar96,auVar96,4,1);
              iVar16 = -(uint)(fVar84 == 0.0);
              fVar77 = fVar40 * auVar74._0_4_;
              fVar78 = fVar65 * auVar74._4_4_;
              uVar99 = CONCAT13(~(byte)((uint)iVar16 >> 0x18),
                                CONCAT12(~(byte)((uint)iVar16 >> 0x10),
                                         CONCAT11(~(byte)((uint)iVar16 >> 8),~(byte)iVar16)));
              uVar100 = CONCAT44(fVar49 / fVar85,(float)uVar27 / fVar84) & CONCAT44(uVar99,uVar99);
              iVar16 = -(uint)(fVar84 == 0.0);
              iVar91 = -(uint)(fVar85 == 0.0);
              auVar106._0_4_ = fVar40 * auVar81._0_4_;
              auVar106._4_4_ = fVar65 * auVar81._4_4_;
              auVar106._8_4_ = fVar41 * auVar81._8_4_;
              auVar106._12_4_ = fVar64 * auVar81._12_4_;
              auVar103._0_4_ = auVar81._0_4_ * auVar81._0_4_;
              auVar103._4_4_ = auVar81._4_4_ * auVar81._4_4_;
              auVar103._8_4_ = auVar81._8_4_ * auVar81._8_4_;
              auVar103._12_4_ = auVar81._12_4_ * auVar81._12_4_;
              auVar74 = NEON_ext(auVar103,auVar103,8,1);
              auVar107 = NEON_ext(auVar106,auVar106,8,1);
              fVar86 = auVar74._0_4_ + auVar103._0_4_ + auVar103._4_4_;
              fVar87 = auVar107._0_4_ + auVar106._0_4_ + auVar106._4_4_;
              fVar84 = fVar43 * auVar81._8_4_ + fVar69 * auVar81._0_4_ + fVar70 * auVar81._4_4_;
              fVar85 = fVar43 * auVar81._8_4_ + fVar69 * auVar81._0_4_ + fVar70 * auVar81._4_4_;
              uVar72 = NEON_fminnm(CONCAT44((float)(uVar100 >> 0x20) *
                                            (fVar77 + fVar78 + fVar41 * auVar96._0_4_),
                                            (float)uVar100 *
                                            (fVar77 + fVar78 + fVar41 * auVar96._0_4_)),uVar27,4);
              iVar105 = -(uint)(fVar86 == 0.0);
              iVar108 = -(uint)(fVar71 == 0.0);
              uVar100 = NEON_fmax(uVar72,0,4);
              fVar86 = auVar111._0_4_ / fVar86;
              fVar77 = auVar111._8_4_ / fVar71;
              fVar78 = (float)CONCAT13((byte)((uint)fVar86 >> 0x18) & ~(byte)((uint)iVar105 >> 0x18)
                                       ,CONCAT12((byte)((uint)fVar86 >> 0x10) &
                                                 ~(byte)((uint)iVar105 >> 0x10),
                                                 CONCAT11((byte)((uint)fVar86 >> 8) &
                                                          ~(byte)((uint)iVar105 >> 8),
                                                          SUB41(fVar86,0) & ~(byte)iVar105)));
              fVar77 = (float)CONCAT13((byte)((uint)fVar77 >> 0x18) & ~(byte)((uint)iVar108 >> 0x18)
                                       ,CONCAT12((byte)((uint)fVar77 >> 0x10) &
                                                 ~(byte)((uint)iVar108 >> 0x10),
                                                 CONCAT11((byte)((uint)fVar77 >> 8) &
                                                          ~(byte)((uint)iVar108 >> 8),
                                                          SUB41(fVar77,0) & ~(byte)iVar108)));
              fVar86 = ((float)uVar100 * fVar84 - fVar76) * fVar77;
              fVar77 = ((float)(uVar100 >> 0x20) * fVar85 - fVar76) * fVar77;
              uVar72 = NEON_fminnm(CONCAT44(fVar77,fVar86),uVar27,4);
              uVar72 = NEON_fmax(uVar72,0,4);
              fVar90 = (float)uVar72;
              fVar93 = (float)((ulong)uVar72 >> 0x20);
              iVar105 = -(uint)(fVar90 == fVar86);
              iVar108 = -(uint)(fVar93 == fVar77);
              uVar72 = NEON_fminnm(CONCAT44((fVar93 * fVar85 + fVar87) * fVar78,
                                            (fVar90 * fVar84 + fVar87) * fVar78),uVar27,4);
              uVar101 = NEON_fmax(uVar72,0,4);
              uVar100 = uVar100 ^ (uVar100 ^ uVar101) &
                                  CONCAT17(~(byte)((uint)iVar108 >> 0x18) |
                                           (byte)((uint)iVar91 >> 0x18),
                                           CONCAT16(~(byte)((uint)iVar108 >> 0x10) |
                                                    (byte)((uint)iVar91 >> 0x10),
                                                    CONCAT15(~(byte)((uint)iVar108 >> 8) |
                                                             (byte)((uint)iVar91 >> 8),
                                                             CONCAT14(~(byte)iVar108 | (byte)iVar91,
                                                                      CONCAT13(~(byte)((uint)iVar105
                                                                                      >> 0x18) |
                                                                               (byte)((uint)iVar16
                                                                                     >> 0x18),
                                                                               CONCAT12(~(byte)((
                                                  uint)iVar105 >> 0x10) |
                                                  (byte)((uint)iVar16 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar105 >> 8) |
                                                           (byte)((uint)iVar16 >> 8),
                                                           ~(byte)iVar105 | (byte)iVar16)))))));
              fVar84 = (float)uVar100;
              fVar85 = (float)(uVar100 >> 0x20);
              fVar77 = fVar69 * fVar90 + (fVar40 - auVar81._0_4_ * fVar84);
              fVar78 = fVar70 * fVar93 + (fVar65 - auVar81._4_4_ * fVar85);
              fVar84 = fVar43 * fVar90 + (fVar41 - auVar81._8_4_ * fVar84);
              fVar85 = fVar44 * fVar93 + (fVar64 - auVar81._12_4_ * fVar85);
              auVar82._0_4_ = fVar77 * fVar77;
              auVar82._4_4_ = fVar78 * fVar78;
              auVar82._8_4_ = fVar84 * fVar84;
              auVar82._12_4_ = fVar85 * fVar85;
              auVar74 = NEON_ext(auVar82,auVar82,8,1);
              if (!(bool)(~(auVar82._0_4_ + auVar82._4_4_ + auVar74._0_4_ <=
                           (float)plVar36[0x2a] * (float)plVar36[0x2a]) & 1)) goto LAB_030bd844;
              uVar31 = uVar31 + 1;
            } while (uVar30 != uVar31);
          }
          goto LAB_030bdda4;
        }
      }
LAB_030bd84c:
      bVar42 = -((bVar42 & 0x10) == 0);
      auVar68 = *(undefined1 (*) [16])(plVar36 + 0x12);
      bVar54 = (byte)((ushort)uVar15 >> 8);
      fVar43 = (float)lVar29;
      fVar63 = auVar68._0_4_ - fVar43;
      fVar44 = (float)((ulong)lVar29 >> 0x20);
      fVar45 = auVar68._4_4_ - fVar44;
      fVar61 = (float)lVar28;
      fVar40 = auVar68._8_4_ - fVar61;
      fVar63 = fVar63 * fVar63;
      fVar45 = fVar45 * fVar45;
      fVar40 = fVar40 * fVar40;
      fVar38 = SQRT(fVar63 + fVar45 + fVar40);
      fVar63 = SQRT(fVar63 + fVar45 + fVar40);
      uVar31 = CONCAT44(fVar63,fVar38);
      if (((uVar26 >> 5 & 1) == 0) || ((*(byte *)(plVar36 + 10) & 0x10) != 0 || bVar9)) {
        uVar100 = uVar20;
      }
      else {
        fVar45 = *(float *)(plVar36 + 0xe);
        fVar40 = *(float *)((long)plVar36 + 0x74);
        fVar65 = *(float *)(plVar36 + 0xf);
        fVar41 = *(float *)((long)plVar36 + 0x7c);
        fVar78 = *(float *)(plVar36 + 0x10) - fVar45;
        fVar84 = *(float *)((long)plVar36 + 0x84) - fVar40;
        fVar85 = *(float *)(plVar36 + 0x11) - fVar65;
        fVar86 = *(float *)((long)plVar36 + 0x8c) - fVar41;
        fVar64 = *(float *)(plVar36 + 0x1e);
        fVar69 = *(float *)((long)plVar36 + 0xf4);
        fVar70 = *(float *)(plVar36 + 0x1f);
        auVar79._0_4_ = fVar43 - fVar64;
        auVar79._4_4_ = fVar44 - fVar69;
        auVar79._8_4_ = fVar61 - fVar70;
        auVar79._12_4_ = (float)((ulong)lVar28 >> 0x20) - *(float *)((long)plVar36 + 0xfc);
        auVar74 = NEON_ext(auVar79,auVar79,4,1);
        auVar7._4_4_ = fVar84;
        auVar7._0_4_ = fVar78;
        auVar7._8_4_ = fVar85;
        auVar7._12_4_ = fVar86;
        auVar8._4_4_ = fVar84;
        auVar8._0_4_ = fVar78;
        auVar8._8_4_ = fVar85;
        auVar8._12_4_ = fVar86;
        auVar66 = NEON_ext(auVar7,auVar8,4,1);
        fVar88 = fVar64 - fVar45;
        fVar92 = fVar69 - fVar40;
        fVar94 = fVar70 - fVar65;
        fVar95 = *(float *)((long)plVar36 + 0xfc) - fVar41;
        auVar110._0_4_ = auVar79._0_4_ * auVar79._0_4_;
        auVar110._4_4_ = auVar79._4_4_ * auVar79._4_4_;
        auVar110._8_4_ = auVar79._8_4_ * auVar79._8_4_;
        auVar110._12_4_ = auVar79._12_4_ * auVar79._12_4_;
        fVar71 = auVar68._0_4_ - fVar64;
        fVar76 = auVar68._4_4_ - fVar69;
        fVar77 = auVar68._8_4_ - fVar70;
        fVar71 = fVar71 * fVar71;
        fVar76 = fVar76 * fVar76;
        fVar77 = fVar77 * fVar77;
        fVar87 = auVar79._0_4_ * auVar66._0_4_ - fVar78 * auVar74._0_4_;
        auVar83._0_8_ = CONCAT44(auVar79._4_4_ * auVar66._4_4_ - fVar84 * auVar74._4_4_,fVar87);
        auVar83._8_4_ = auVar79._8_4_ * fVar78 - fVar85 * auVar79._0_4_;
        auVar83._12_4_ = auVar79._12_4_ * fVar84 - fVar86 * auVar79._4_4_;
        auVar68 = NEON_ext(auVar83,auVar83,4,1);
        uVar72 = NEON_ext(auVar68._0_8_,auVar83._0_8_,4,1);
        fVar98 = auVar68._0_4_;
        fVar102 = auVar68._4_4_;
        auVar109._0_4_ = fVar78 * fVar88;
        auVar109._4_4_ = fVar84 * fVar92;
        auVar109._8_4_ = fVar85 * fVar94;
        auVar109._12_4_ = fVar86 * fVar95;
        fVar90 = fVar98 * fVar98 + fVar102 * fVar102 + fVar87 * fVar87;
        fVar93 = fVar98 * fVar98 + fVar102 * fVar102 + fVar87 * fVar87;
        iVar16 = -(uint)(fVar90 == 0.0);
        uVar99 = CONCAT13(~(byte)((uint)iVar16 >> 0x18),
                          CONCAT12(~(byte)((uint)iVar16 >> 0x10),
                                   CONCAT11(~(byte)((uint)iVar16 >> 8),~(byte)iVar16)));
        auVar97._0_4_ = auVar74._0_4_ * fVar98 - auVar79._0_4_ * (float)uVar72;
        auVar97._4_4_ = auVar74._4_4_ * fVar102 - auVar79._4_4_ * (float)((ulong)uVar72 >> 0x20);
        auVar97._8_4_ = auVar79._0_4_ * fVar87 - auVar79._8_4_ * fVar98;
        auVar97._12_4_ = auVar79._4_4_ * 0.0 - auVar79._12_4_ * fVar102;
        auVar68 = NEON_ext(auVar97,auVar97,4,1);
        iVar105 = -(uint)(fVar90 == 0.0);
        iVar108 = -(uint)(fVar93 == 0.0);
        uVar100 = CONCAT44(fVar49 / fVar93,(float)uVar27 / fVar90) & CONCAT44(uVar99,uVar99);
        fVar93 = fVar88 * auVar68._0_4_;
        fVar98 = fVar92 * auVar68._4_4_;
        auVar104._0_4_ = fVar78 * fVar78;
        auVar104._4_4_ = fVar84 * fVar84;
        auVar104._8_4_ = fVar85 * fVar85;
        auVar104._12_4_ = fVar86 * fVar86;
        auVar80._0_4_ = auVar79._0_4_ * fVar88;
        auVar80._4_4_ = auVar79._4_4_ * fVar92;
        auVar80._8_4_ = auVar79._8_4_ * fVar94;
        auVar80._12_4_ = auVar79._12_4_ * fVar95;
        fVar92 = fVar85 * auVar79._8_4_ + fVar78 * auVar79._0_4_ + fVar84 * auVar79._4_4_;
        fVar95 = fVar85 * auVar79._8_4_ + fVar78 * auVar79._0_4_ + fVar84 * auVar79._4_4_;
        auVar66 = NEON_ext(auVar104,auVar104,8,1);
        auVar74 = NEON_ext(auVar109,auVar109,8,1);
        auVar107 = NEON_ext(auVar110,auVar110,8,1);
        auVar68 = NEON_ext(auVar80,auVar80,8,1);
        fVar87 = auVar66._0_4_ + auVar104._0_4_ + auVar104._4_4_;
        fVar88 = auVar74._0_4_ + auVar109._0_4_ + auVar109._4_4_;
        fVar49 = auVar107._0_4_ + auVar110._0_4_ + auVar110._4_4_;
        fVar90 = auVar68._0_4_ + auVar80._0_4_ + auVar80._4_4_;
        uVar72 = NEON_fminnm(CONCAT44((float)(uVar100 >> 0x20) *
                                      (fVar93 + fVar98 + fVar94 * auVar97._0_4_),
                                      (float)uVar100 * (fVar93 + fVar98 + fVar94 * auVar97._0_4_)),
                             uVar27,4);
        iVar16 = -(uint)(fVar87 == 0.0);
        iVar91 = -(uint)(fVar49 == 0.0);
        uVar100 = NEON_fmax(uVar72,0,4);
        fVar87 = auVar111._0_4_ / fVar87;
        fVar49 = auVar111._8_4_ / fVar49;
        fVar93 = (float)CONCAT13((byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                                 CONCAT12((byte)((uint)fVar87 >> 0x10) &
                                          ~(byte)((uint)iVar16 >> 0x10),
                                          CONCAT11((byte)((uint)fVar87 >> 8) &
                                                   ~(byte)((uint)iVar16 >> 8),
                                                   SUB41(fVar87,0) & ~(byte)iVar16)));
        fVar49 = (float)CONCAT13((byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar91 >> 0x18),
                                 CONCAT12((byte)((uint)fVar49 >> 0x10) &
                                          ~(byte)((uint)iVar91 >> 0x10),
                                          CONCAT11((byte)((uint)fVar49 >> 8) &
                                                   ~(byte)((uint)iVar91 >> 8),
                                                   SUB41(fVar49,0) & ~(byte)iVar91)));
        fVar87 = ((float)uVar100 * fVar92 - fVar90) * fVar49;
        fVar49 = ((float)(uVar100 >> 0x20) * fVar95 - fVar90) * fVar49;
        uVar72 = NEON_fminnm(CONCAT44(fVar49,fVar87),uVar27,4);
        uVar72 = NEON_fmax(uVar72,0,4);
        fVar90 = (float)((ulong)uVar72 >> 0x20);
        iVar16 = -(uint)((float)uVar72 == fVar87);
        iVar91 = -(uint)(fVar90 == fVar49);
        uVar72 = NEON_fminnm(CONCAT44((fVar90 * fVar95 + fVar88) * fVar93,
                                      ((float)uVar72 * fVar92 + fVar88) * fVar93),uVar27,4);
        uVar101 = NEON_fmax(uVar72,0,4);
        uVar100 = uVar100 ^ (uVar100 ^ uVar101) &
                            CONCAT17(~(byte)((uint)iVar91 >> 0x18) | (byte)((uint)iVar108 >> 0x18),
                                     CONCAT16(~(byte)((uint)iVar91 >> 0x10) |
                                              (byte)((uint)iVar108 >> 0x10),
                                              CONCAT15(~(byte)((uint)iVar91 >> 8) |
                                                       (byte)((uint)iVar108 >> 8),
                                                       CONCAT14(~(byte)iVar91 | (byte)iVar108,
                                                                CONCAT13(~(byte)((uint)iVar16 >>
                                                                                0x18) |
                                                                         (byte)((uint)iVar105 >>
                                                                               0x18),
                                                                         CONCAT12(~(byte)((uint)
                                                  iVar16 >> 0x10) | (byte)((uint)iVar105 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar16 >> 8) |
                                                           (byte)((uint)iVar105 >> 8),
                                                           ~(byte)iVar16 | (byte)iVar105)))))));
        fVar49 = (float)uVar100;
        fVar87 = (float)(uVar100 >> 0x20);
        auVar75._0_4_ = fVar45 + fVar78 * fVar49;
        auVar75._4_4_ = fVar40 + fVar84 * fVar87;
        auVar75._8_4_ = fVar65 + fVar85 * fVar49;
        auVar75._12_4_ = fVar41 + fVar86 * fVar87;
        fVar78 = (float)plVar36[0x20];
        fVar84 = (float)((ulong)plVar36[0x20] >> 0x20);
        fVar45 = (fVar64 - auVar75._0_4_) * (fVar64 - auVar75._0_4_);
        fVar65 = (fVar69 - auVar75._4_4_) * (fVar69 - auVar75._4_4_);
        fVar41 = (fVar70 - auVar75._8_4_) * (fVar70 - auVar75._8_4_);
        fVar49 = (auVar75._0_4_ - fVar43) * (auVar75._0_4_ - fVar43);
        fVar44 = (auVar75._4_4_ - fVar44) * (auVar75._4_4_ - fVar44);
        fVar61 = (auVar75._8_4_ - fVar61) * (auVar75._8_4_ - fVar61);
        uVar72 = NEON_fmax(CONCAT44((fVar46 - fVar84) / SQRT(fVar77 + fVar71 + fVar76),
                                    (fVar46 - fVar78) / SQRT(fVar77 + fVar71 + fVar76)),uVar27,4);
        fVar40 = (float)uVar72 * SQRT(fVar45 + fVar65 + fVar41);
        fVar45 = (float)((ulong)uVar72 >> 0x20) * SQRT(fVar45 + fVar65 + fVar41);
        fVar43 = SQRT(fVar49 + fVar44 + fVar61);
        fVar49 = SQRT(fVar49 + fVar44 + fVar61);
        uVar100 = CONCAT44(-(uint)(fVar84 + fVar49 + fVar45 < fVar46 + fVar63),
                           -(uint)(fVar78 + fVar43 + fVar40 < fVar46 + fVar38));
        iVar16 = (int)(uVar100 & 0x100000001);
        iVar91 = (int)((uVar100 & 0x100000001) >> 0x20);
        uVar31 = uVar31 ^ (uVar31 ^ CONCAT44(fVar49,fVar43)) & uVar100;
        auVar62._0_4_ = (iVar16 << 0x1f) >> 0x1f;
        auVar62._4_4_ = (iVar91 << 0x1f) >> 0x1f;
        auVar62._8_4_ = (iVar16 << 0x1f) >> 0x1f;
        auVar62._12_4_ = (iVar91 << 0x1f) >> 0x1f;
        auVar68 = *(undefined1 (*) [16])(plVar36 + 0x12) ^
                  (*(undefined1 (*) [16])(plVar36 + 0x12) ^ auVar75) & auVar62;
        uVar100 = uVar20 ^ (uVar20 ^ CONCAT44(fVar84 + fVar45,fVar78 + fVar40)) & uVar100;
      }
      plVar14 = (long *)plVar36[0x3c];
      iVar39 = (uint6)CONCAT11(bVar54 & ~bVar42,(byte)uVar15 & ~bVar42) << 0x10;
      fVar49 = (float)iVar39;
      fVar43 = (float)(CONCAT17(bVar54 & ~bVar42,CONCAT16((byte)uVar15 & ~bVar42,iVar39)) >> 0x20);
      fVar44 = (float)(uVar31 >> 0x20);
      fVar61 = (float)(uVar100 >> 0x20);
      if (plVar14 == (long *)0x0) {
        uVar72 = CONCAT44(fVar43 + fVar44 + fVar61,fVar49 + (float)uVar31 + (float)uVar100);
      }
      else {
        uStack_b8 = CONCAT44(fVar43 + fVar44,fVar49 + (float)uVar31);
        bVar42 = bVar23;
        if (uVar11 != 0xff400000) {
          bVar42 = bVar12;
        }
        plVar36[0x31] = auVar68._8_8_;
        plVar36[0x30] = auVar68._0_8_;
        if (uVar11 != 0xff400000 && uVar18 != 0xff800000) {
          bVar42 = bVar42 | 0x20;
        }
        local_e0 = (long **)*plVar36;
        local_c8 = CONCAT31(local_c8._1_3_,bVar42);
        local_d8 = plVar36 + 2;
        local_d0 = plVar36 + 0x2c;
        local_c0 = uVar100;
        uVar72 = (**(code **)(*plVar14 + 0x20))(plVar14,&local_e0);
        uVar72 = CONCAT44(fVar61 + (float)((ulong)uVar72 >> 0x20),(float)uVar100 + (float)uVar72);
      }
      uVar72 = NEON_fmax(uVar72,uVar20,4);
      fVar49 = (float)uVar72;
      if (fVar49 <= *(float *)(param_1 + 9)) {
        plVar14 = (long *)plVar36[0x3d];
        if (uVar13 == 0xffffffff) {
          puVar22 = (undefined8 *)0x0;
        }
        else {
          uVar11 = (ulong)(uVar13 * -0x61c8864f >> 0x18);
          lVar19 = *plVar14;
          for (uVar5 = *(ushort *)(plVar14[2] + uVar11 * 2); -1 < (short)uVar5;
              uVar5 = *(ushort *)(plVar14[1] + (ulong)uVar5 * 2)) {
            if (*(uint *)(lVar19 + (ulong)uVar5 * 0x10 + 8) == uVar13) {
              puVar22 = (undefined8 *)(lVar19 + (ulong)uVar5 * 0x10);
              goto LAB_030bdbc4;
            }
          }
          iVar16 = *(int *)((long)plVar14 + 0x1c);
          *(int *)((long)plVar14 + 0x1c) = iVar16 + 1;
          puVar22 = (undefined8 *)(lVar19 + (long)iVar16 * 0x10);
          *puVar22 = 0x7f7fffee7f7fffee;
          *(uint *)(puVar22 + 1) = uVar13;
          *(undefined4 *)((long)puVar22 + 0xc) = 0xffff;
          *(undefined2 *)(plVar14[1] + (long)(short)iVar16 * 2) =
               *(undefined2 *)(plVar14[2] + uVar11 * 2);
          *(short *)(plVar14[2] + uVar11 * 2) = (short)iVar16;
        }
LAB_030bdbc4:
        plVar14[9] = (long)puVar22;
        pfVar35 = (float *)param_1[0xb];
        bVar10 = true;
        if (((*(ushort *)((long)pfVar35 + 0xe) & 3) != 0) &&
           (bVar10 = false, !NAN(fVar49) && !NAN(*pfVar35))) {
          bVar10 = fVar49 < *pfVar35;
        }
        if (bVar10) {
          *pfVar35 = fVar49;
          if ((*(ushort *)((long)pfVar35 + 0xe) & 3) == 0) {
            fVar49 = (float)FUN_030be250(param_1 + 0x10,uVar37);
            pfVar35[1] = fVar49;
            if (fVar49 < *(float *)((long)param_1 + 0x44)) {
              *(float *)((long)param_1 + 0x44) = fVar49;
              *(uint *)(param_1 + 8) = uVar13;
            }
          }
          *(short *)(param_1[0xb] + 0xc) = (short)*(undefined4 *)(param_1 + 10);
          pfVar35 = (float *)param_1[0xb];
          fVar49 = *pfVar35 + *(float *)((long)param_1 + 0x4c) * pfVar35[1];
          if (fVar49 <= *(float *)(param_1 + 9)) {
            uVar5 = *(ushort *)((long)pfVar35 + 0xe);
            *(ushort *)((long)pfVar35 + 0xe) = uVar5 & 0xfffc | 1;
            uVar26 = *(uint *)(param_1 + 0xf);
            if ((uVar5 & 1) == 0) {
              if (*(int *)((long)param_1 + 0x7c) <= (int)uVar26) goto LAB_030bddfc;
              uVar31 = (ulong)(int)uVar26;
              puVar1 = (uint *)(param_1[0xe] + uVar31 * 8);
              *(uint *)(param_1 + 0xf) = uVar26 + 1;
              *puVar1 = uVar13;
              puVar1[1] = (uint)fVar49;
              lVar19 = param_1[0xe];
              puVar25 = (undefined4 *)(lVar19 + uVar31 * 8);
              uVar99 = *puVar25;
              iVar16 = puVar25[1];
              uVar11 = (ulong)uVar26;
              if (0 < (int)uVar26) {
                do {
                  iVar105 = (int)uVar11;
                  iVar91 = iVar105;
                  if (-1 < iVar105 + -1) {
                    iVar91 = iVar105 + -1;
                  }
                  uVar31 = (ulong)(uint)(iVar91 >> 1);
                  if (*(int *)(lVar19 + uVar31 * 8 + 4) <= iVar16) {
                    uVar31 = (ulong)iVar105;
                    break;
                  }
                  *(undefined8 *)(lVar19 + uVar11 * 8) = *(undefined8 *)(lVar19 + uVar31 * 8);
                  lVar19 = param_1[0xe];
                  uVar11 = uVar31;
                } while (2 < iVar105);
              }
              *(undefined4 *)(lVar19 + uVar31 * 8) = uVar99;
              *(int *)(param_1[0xe] + uVar31 * 8 + 4) = iVar16;
            }
            else if (0 < (int)uVar26) {
              uVar11 = 0;
              lVar19 = 4;
              do {
                if (*(uint *)(param_1[0xe] + lVar19 + -4) == uVar13) {
                  *(float *)(param_1[0xe] + lVar19) = fVar49;
                  lVar29 = param_1[0xe];
                  iVar16 = ((int *)(lVar29 + lVar19))[-1];
                  iVar91 = *(int *)(lVar29 + lVar19);
                  if ((int)uVar11 == 0) goto LAB_030bdd90;
                  uVar31 = uVar11 & 0xffffffff;
                  goto LAB_030bdd30;
                }
                uVar11 = uVar11 + 1;
                lVar19 = lVar19 + 8;
              } while (uVar26 != uVar11);
            }
          }
        }
      }
    }
LAB_030bdda4:
    puVar17 = puVar17 + 1;
    if (local_e8 + iVar21 <= puVar17) goto LAB_030bddfc;
    goto LAB_030bd3e4;
  }
LAB_030bddfc:
  *(ushort *)(param_1[0xc] + 0xe) = *(ushort *)(param_1[0xc] + 0xe) & 0xfffc | 2;
  if (local_108 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,local_e8,local_110);
    goto LAB_030bdee0;
  }
  uVar18 = (long)local_110 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_108 + 0x28) < uVar18) ||
     (*(long *)(local_108 + 0x38) != uVar18 + (long)local_e8)) {
    if (local_e8 == (uint *)0x0) goto LAB_030bdee0;
    if (*(ulong *)(local_108 + 0x28) < uVar18 + 0x40) {
      *(int *)(*(long *)(local_108 + 0x30) + 0x20) =
           *(int *)(*(long *)(local_108 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(local_108 + 0x10) + 0x18))
                (*(long **)(local_108 + 0x10),(long)local_e8 - (long)(int)local_e8[-1],uVar18 + 0x44
                );
      goto LAB_030bdee0;
    }
    if (*(long *)(local_108 + 0x38) != uVar18 + (long)local_e8) {
      FUN_031cf778();
      goto LAB_030bdee0;
    }
    *(uint **)(local_108 + 0x38) = local_e8;
  }
  else {
    *(uint **)(local_108 + 0x38) = local_e8;
    if (*(uint **)(local_108 + 0x48) != local_e8) goto LAB_030bdee0;
  }
  FUN_031cf578();
LAB_030bdee0:
  *(uint *)(param_1 + 0x58) = uVar2;
  uVar5 = *(ushort *)(param_1[4] + uVar33 * 2);
  if (-1 < (short)uVar5) {
    do {
      if (*(uint *)(param_1[2] + (ulong)uVar5 * 0x10 + 8) == uVar2) {
        puVar22 = (undefined8 *)(param_1[2] + (ulong)uVar5 * 0x10);
        goto LAB_030bdf20;
      }
      uVar5 = *(ushort *)(param_1[3] + (ulong)uVar5 * 2);
    } while (-1 < (short)uVar5);
  }
  puVar22 = param_1 + 6;
LAB_030bdf20:
  if ((*(byte *)((long)puVar22 + 0xe) >> 3 & 1) == 0) {
    if (*(int *)(param_1 + 0xf) < *(int *)((long)param_1 + 0x7c)) {
      iVar21 = 3;
      if (*(int *)((long)param_1 + 0x2c) < *(int *)(param_1 + 5)) {
        iVar21 = (uint)(*(int *)(param_1 + 0xf) == 0) << 1;
      }
    }
    else {
      iVar21 = 3;
    }
  }
  else {
    *(uint *)((long)param_1 + 0x2c4) = uVar2 & 0x3fffff;
    iVar21 = 1;
  }
  return iVar21;
  while( true ) {
    uVar11 = (long)((ulong)uVar13 << 0x20) >> 0x21;
    *(undefined8 *)(lVar29 + uVar31 * 8) = *(undefined8 *)(lVar29 + uVar11 * 8);
    lVar29 = param_1[0xe];
    uVar31 = (ulong)(uint)((int)uVar13 >> 1);
    if ((int)uVar26 < 3) break;
LAB_030bdd30:
    uVar26 = (uint)uVar31;
    uVar13 = uVar26;
    if (-1 < (int)(uVar26 - 1)) {
      uVar13 = uVar26 - 1;
    }
    if (*(int *)(lVar29 + (long)((int)uVar13 >> 1) * 8 + 4) <= iVar91) {
      uVar11 = (ulong)(int)uVar26;
      break;
    }
  }
LAB_030bdd90:
  *(int *)(lVar29 + uVar11 * 8) = iVar16;
  *(int *)(param_1[0xe] + uVar11 * 8 + 4) = iVar91;
  goto LAB_030bdda4;
}


