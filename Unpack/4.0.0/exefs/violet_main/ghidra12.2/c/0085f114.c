/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0085f114; name: FUN_0085f114
 */


/* WARNING: Removing unreachable block (ram,0x0085f894) */

undefined4 FUN_0085f114(char *param_1,float *param_2,ulong param_3,uint param_4,long param_5)

{
  float *pfVar1;
  int *piVar2;
  float *pfVar3;
  float *pfVar4;
  long *plVar5;
  char *pcVar6;
  undefined4 *puVar7;
  long lVar8;
  int *piVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  undefined *puVar25;
  int iVar26;
  int iVar27;
  bool bVar28;
  bool bVar29;
  undefined4 uVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  ulong uVar35;
  undefined8 uVar36;
  long lVar37;
  long lVar38;
  float *pfVar39;
  undefined8 *puVar40;
  int iVar41;
  int iVar42;
  undefined8 *puVar43;
  ulong uVar44;
  int iVar45;
  long lVar46;
  int *piVar47;
  long lVar48;
  undefined1 (*pauVar49) [16];
  long lVar50;
  undefined8 uVar51;
  long lVar52;
  ulong uVar53;
  ulong uVar54;
  uint uVar55;
  float fVar63;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar64;
  undefined8 uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar72;
  undefined1 auVar71 [16];
  int iVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar82;
  float fVar87;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar88;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar98;
  undefined8 uVar99;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  long local_88;
  undefined8 local_80;
  
  uVar53 = param_3 & 0xffffffff;
  uVar54 = param_3 & 0xffffffff;
  iVar31 = (int)param_3;
  if ((iVar31 == 0) || (((ulong)param_2 & 0xf) == 0)) {
    FUN_0085c61c(param_1 + 0x38);
    param_1[0x98] = '\0';
    param_1[0x99] = '\0';
    param_1[0x9a] = '\0';
    param_1[0x9b] = '\0';
    param_1[0x88] = '\0';
    puVar25 = PTR_DAT_047d19b0;
    param_1[0x89] = '\0';
    param_1[0x8a] = '\0';
    param_1[0x8b] = '\0';
    param_1[0x118] = '\0';
    param_1[0x119] = '\0';
    param_1[0x11a] = '\0';
    param_1[0x11b] = '\0';
    param_1[0x11c] = '\0';
    param_1[0x11d] = '\0';
    param_1[0x11e] = '\0';
    param_1[0x11f] = '\0';
    param_1[0x110] = '\0';
    param_1[0x111] = '\0';
    param_1[0x112] = '\0';
    param_1[0x113] = '\0';
    param_1[0x114] = '\0';
    param_1[0x115] = '\0';
    param_1[0x116] = '\0';
    param_1[0x117] = '\0';
    fVar64 = *(float *)(puVar25 + 0x240);
    fVar72 = *(float *)(puVar25 + 0x244);
    fVar63 = *(float *)(puVar25 + 0x248);
    fVar82 = *(float *)(puVar25 + 0x24c);
    auVar68._0_8_ = CONCAT44(-fVar72,-fVar64);
    auVar68._8_4_ = -fVar63;
    auVar68._12_4_ = -fVar82;
    param_1[0xa8] = '\0';
    param_1[0xa9] = '\0';
    param_1[0xaa] = '\0';
    param_1[0xab] = '\0';
    auVar11 = *(undefined1 (*) [16])(puVar25 + 0x200);
    auVar59 = *(undefined1 (*) [16])(puVar25 + 0x210);
    *(long *)(param_1 + 0x168) = auVar11._8_8_;
    *(long *)(param_1 + 0x160) = auVar11._0_8_;
    uVar51 = auVar59._8_8_;
    *(undefined8 *)(param_1 + 0x178) = uVar51;
    uVar36 = auVar59._0_8_;
    *(undefined8 *)(param_1 + 0x170) = uVar36;
    param_1[0x1fc] = '\0';
    param_1[0x1fd] = '\0';
    param_1[0x1a8] = '\0';
    param_1[0x1a9] = '\0';
    param_1[0x1aa] = '\0';
    param_1[0x1ab] = '\0';
    param_1[0x1ac] = '\0';
    param_1[0x1ad] = '\0';
    param_1[0x1ae] = '\0';
    param_1[0x1af] = '\0';
    param_1[0x1a0] = '\0';
    param_1[0x1a1] = '\0';
    param_1[0x1a2] = '\0';
    param_1[0x1a3] = '\0';
    param_1[0x1a4] = '\0';
    param_1[0x1a5] = '\0';
    param_1[0x1a6] = '\0';
    param_1[0x1a7] = '\0';
    *(long *)(param_1 + 0x1b8) = auVar11._8_8_;
    *(long *)(param_1 + 0x1b0) = auVar11._0_8_;
    param_1[0x1fe] = '\0';
    param_1[500] = '\0';
    param_1[0x1f5] = '\0';
    param_1[0x1f6] = '\0';
    param_1[0x1f7] = '\0';
    param_1[0x1f0] = -1;
    param_1[0x1f1] = -1;
    param_1[0x1f2] = -1;
    param_1[499] = -1;
    *(float *)(param_1 + 0xd8) = fVar63;
    *(float *)(param_1 + 0xdc) = fVar82;
    *(float *)(param_1 + 0xd0) = fVar64;
    *(float *)(param_1 + 0xd4) = fVar72;
    *(long *)(param_1 + 0xe8) = auVar68._8_8_;
    *(undefined8 *)(param_1 + 0xe0) = auVar68._0_8_;
    *(float *)(param_1 + 0xf8) = fVar63;
    *(float *)(param_1 + 0xfc) = fVar82;
    *(float *)(param_1 + 0xf0) = fVar64;
    *(float *)(param_1 + 0xf4) = fVar72;
    *(long *)(param_1 + 0x108) = auVar68._8_8_;
    *(undefined8 *)(param_1 + 0x100) = auVar68._0_8_;
    param_1[0xb8] = '\0';
    param_1[0xb9] = '\0';
    param_1[0xba] = '\0';
    param_1[0xbb] = '\0';
    *(float *)(param_1 + 0xbc) = fVar64;
    param_1[0xb0] = '\0';
    param_1[0xb1] = '\0';
    param_1[0xb2] = '\0';
    param_1[0xb3] = '\0';
    param_1[0xb4] = '\0';
    param_1[0xb5] = '\0';
    param_1[0xb6] = '\0';
    param_1[0xb7] = '\0';
    param_1[200] = '\0';
    param_1[0xc9] = '\0';
    param_1[0xca] = '\0';
    param_1[0xcb] = '\0';
    *(float *)(param_1 + 0xcc) = fVar64;
    param_1[0xc0] = '\0';
    param_1[0xc1] = '\0';
    param_1[0xc2] = '\0';
    param_1[0xc3] = '\0';
    param_1[0xc4] = '\0';
    param_1[0xc5] = '\0';
    param_1[0xc6] = '\0';
    param_1[199] = '\0';
    auVar59 = *(undefined1 (*) [16])(puVar25 + 0x220);
    auVar68 = *(undefined1 (*) [16])(puVar25 + 0x230);
    uVar65 = auVar59._8_8_;
    *(undefined8 *)(param_1 + 0x188) = uVar65;
    uVar99 = auVar59._0_8_;
    *(undefined8 *)(param_1 + 0x180) = uVar99;
    *(long *)(param_1 + 0x198) = auVar68._8_8_;
    *(long *)(param_1 + 400) = auVar68._0_8_;
    uStack_a8 = auVar11._8_4_;
    uStack_a4 = auVar11._12_4_;
    local_b0 = auVar11._0_4_;
    uStack_ac = auVar11._4_4_;
    param_1[0x1e0] = '\0';
    param_1[0x1e1] = '\0';
    param_1[0x1e2] = '\0';
    param_1[0x1e3] = '\0';
    param_1[0x1e4] = '\0';
    param_1[0x1e5] = '\0';
    param_1[0x1e6] = '\0';
    param_1[0x1e7] = '\0';
    param_1[0x1e8] = '\0';
    param_1[0x1e9] = '\0';
    param_1[0x1ea] = '\0';
    param_1[0x1eb] = '\0';
    param_1[0x1ec] = '\0';
    param_1[0x1ed] = '\0';
    param_1[0x1ee] = '\0';
    param_1[0x1ef] = '\0';
    param_1[0x130] = '\0';
    param_1[0x131] = '\0';
    param_1[0x132] = '\0';
    param_1[0x133] = '\0';
    param_1[0x134] = '\0';
    param_1[0x135] = '\0';
    param_1[0x136] = '\0';
    param_1[0x137] = '\0';
    param_1[0x138] = '\0';
    param_1[0x139] = '\0';
    param_1[0x13a] = '\0';
    param_1[0x13b] = '\0';
    param_1[0x13c] = '\0';
    param_1[0x13d] = '\0';
    param_1[0x13e] = '\0';
    param_1[0x13f] = '\0';
    param_1[0x140] = '\0';
    param_1[0x141] = '\0';
    param_1[0x142] = '\0';
    param_1[0x143] = '\0';
    param_1[0x144] = '\0';
    param_1[0x145] = '\0';
    param_1[0x146] = '\0';
    param_1[0x147] = '\0';
    param_1[0x148] = '\0';
    param_1[0x149] = '\0';
    param_1[0x14a] = '\0';
    param_1[0x14b] = '\0';
    param_1[0x14c] = '\0';
    param_1[0x14d] = '\0';
    param_1[0x14e] = '\0';
    param_1[0x14f] = '\0';
    param_1[0x150] = '\0';
    param_1[0x151] = '\0';
    param_1[0x152] = '\0';
    param_1[0x153] = '\0';
    param_1[0x154] = '\0';
    param_1[0x155] = '\0';
    param_1[0x156] = '\0';
    param_1[0x157] = '\0';
    param_1[0x158] = '\0';
    param_1[0x159] = '\0';
    param_1[0x15a] = '\0';
    param_1[0x15b] = '\0';
    param_1[0x15c] = '\0';
    param_1[0x15d] = '\0';
    param_1[0x15e] = '\0';
    param_1[0x15f] = '\0';
    *(undefined8 *)(param_1 + 0x1c8) = uVar51;
    *(undefined8 *)(param_1 + 0x1c0) = uVar36;
    *(undefined8 *)(param_1 + 0x1d8) = uVar65;
    *(undefined8 *)(param_1 + 0x1d0) = uVar99;
    if ((param_4 & 1) == 0) {
      param_1[0x120] = '\0';
      param_1[0x121] = '\0';
      param_1[0x122] = '\0';
      param_1[0x123] = '\0';
      param_1[0x124] = '\0';
      param_1[0x125] = '\0';
      param_1[0x126] = '\0';
      param_1[0x127] = '\0';
      param_1[0x128] = '\0';
      param_1[0x129] = '\0';
      param_1[0x12a] = '\0';
      param_1[299] = '\0';
      param_1[300] = '\0';
      param_1[0x12d] = '\0';
      param_1[0x12e] = '\0';
      param_1[0x12f] = '\0';
    }
    if (iVar31 < 1) {
switchD_0085f740_default:
      if (*(int *)(param_1 + 0x1f0) != -1) {
        if (param_1[9] != '\0') {
          FUN_0085cd70(param_1);
        }
        if (param_1[10] != '\0') {
          FUN_0085dd34(param_1);
        }
      }
LAB_00860730:
      return *(undefined4 *)(param_1 + 0x1f0);
    }
    if (param_5 == 0) {
      if (param_1[0xc] == '\0') {
        FUN_0085c92c(param_1,param_2,uVar53);
      }
      else {
        uVar34 = *(ulong *)(puVar25 + 0x60);
        param_1[0x130] = '\0';
        param_1[0x131] = '\0';
        param_1[0x132] = '\0';
        param_1[0x133] = '\0';
        param_1[0x134] = '\0';
        param_1[0x135] = '\0';
        param_1[0x136] = '\0';
        param_1[0x137] = '\0';
        param_1[0x138] = '\0';
        param_1[0x139] = '\0';
        param_1[0x13a] = '\0';
        param_1[0x13b] = '\0';
        param_1[0x13c] = '\0';
        param_1[0x13d] = '\0';
        param_1[0x13e] = '\0';
        param_1[0x13f] = '\0';
        *(ulong *)(param_1 + 0x148) = uVar34 & 0xffffffff;
        *(ulong *)(param_1 + 0x140) = uVar34;
        *(ulong *)(param_1 + 0x158) = uVar34 & 0xffffffff;
        *(ulong *)(param_1 + 0x150) = uVar34;
      }
    }
    else {
      uVar99 = *(undefined8 *)(param_5 + 0x130);
      *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_5 + 0x138);
      *(undefined8 *)(param_1 + 0x130) = uVar99;
      uVar99 = *(undefined8 *)(param_5 + 0x140);
      *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_5 + 0x148);
      *(undefined8 *)(param_1 + 0x140) = uVar99;
      auVar59 = *(undefined1 (*) [16])(param_5 + 0x150);
      *(long *)(param_1 + 0x158) = auVar59._8_8_;
      *(long *)(param_1 + 0x150) = auVar59._0_8_;
    }
    fVar63 = 0.0;
    fVar72 = 0.0;
    fVar64 = 0.0;
    iVar73 = 3;
    if (iVar31 < 4) {
      iVar73 = iVar31 + -1;
    }
    param_1[0x110] = '\0';
    param_1[0x111] = '\0';
    param_1[0x112] = '\0';
    param_1[0x113] = '\0';
    param_1[0x114] = '\0';
    param_1[0x115] = '\0';
    param_1[0x116] = '\0';
    param_1[0x117] = '\0';
    param_1[0x118] = '\0';
    param_1[0x119] = '\0';
    param_1[0x11a] = '\0';
    param_1[0x11b] = '\0';
    param_1[0x11c] = '\0';
    param_1[0x11d] = '\0';
    param_1[0x11e] = '\0';
    param_1[0x11f] = '\0';
    *(int *)(param_1 + 0x1f0) = iVar73;
    if ((param_4 & 1) == 0) {
      bVar29 = false;
      param_1[0x120] = '\0';
      param_1[0x121] = '\0';
      param_1[0x122] = '\0';
      param_1[0x123] = '\0';
      param_1[0x124] = '\0';
      param_1[0x125] = '\0';
      param_1[0x126] = '\0';
      param_1[0x127] = '\0';
      param_1[0x128] = '\0';
      param_1[0x129] = '\0';
      param_1[0x12a] = '\0';
      param_1[299] = '\0';
      param_1[300] = '\0';
      param_1[0x12d] = '\0';
      param_1[0x12e] = '\0';
      param_1[0x12f] = '\0';
      if (1 < iVar31) {
        auVar59._0_8_ = CONCAT44(param_2[5] - param_2[1],param_2[4] - *param_2);
        auVar59._8_4_ = param_2[6] - param_2[2];
        auVar59._12_4_ = param_2[7] - param_2[3];
        *(long *)(param_1 + 0x118) = auVar59._8_8_;
        *(undefined8 *)(param_1 + 0x110) = auVar59._0_8_;
        if (iVar31 == 2) {
          bVar29 = false;
        }
        else {
          *(undefined4 *)(param_1 + 0x128) = uStack_a8;
          *(undefined4 *)(param_1 + 300) = uStack_a4;
          *(undefined4 *)(param_1 + 0x120) = local_b0;
          *(undefined4 *)(param_1 + 0x124) = uStack_ac;
          fVar82 = *param_2;
          *(undefined4 *)(param_1 + 0x128) = uStack_a8;
          *(float *)(param_1 + 300) = -fVar82;
          *(undefined4 *)(param_1 + 0x120) = local_b0;
          *(undefined4 *)(param_1 + 0x124) = uStack_ac;
          bVar29 = false;
          if (param_1[1] != '\0') {
            uVar34 = *(ulong *)(puVar25 + 0x50);
            param_1[0x128] = '\0';
            param_1[0x129] = '\0';
            param_1[0x12a] = '\0';
            param_1[299] = '\0';
            param_1[300] = '\0';
            param_1[0x12d] = '\0';
            param_1[0x12e] = '\0';
            param_1[0x12f] = '\0';
            param_1[0x120] = '\0';
            param_1[0x121] = '\0';
            param_1[0x122] = '\0';
            param_1[0x123] = '\0';
            param_1[0x124] = '\0';
            param_1[0x125] = '\0';
            param_1[0x126] = '\0';
            param_1[0x127] = '\0';
            uVar44 = uVar34;
            iVar73 = 0;
            do {
              iVar41 = iVar73 + 1;
              if (iVar41 < iVar31) {
                auVar59 = *(undefined1 (*) [16])(param_2 + (long)iVar73 * 4);
                iVar42 = iVar73;
                do {
                  iVar45 = iVar42 + 2;
                  iVar42 = iVar41;
                  if (iVar45 < iVar31) {
                    pfVar39 = param_2 + (long)iVar41 * 4;
                    auVar97._0_4_ = *pfVar39 - auVar59._0_4_;
                    auVar97._4_4_ = pfVar39[1] - auVar59._4_4_;
                    auVar97._8_4_ = pfVar39[2] - auVar59._8_4_;
                    auVar97._12_4_ = pfVar39[3] - auVar59._12_4_;
                    auVar68 = NEON_ext(auVar97,auVar97,4,1);
                    do {
                      pfVar39 = param_2 + (long)iVar45 * 4;
                      auVar91._0_4_ = *pfVar39 - auVar59._0_4_;
                      auVar91._4_4_ = pfVar39[1] - auVar59._4_4_;
                      auVar91._8_4_ = pfVar39[2] - auVar59._8_4_;
                      auVar91._12_4_ = pfVar39[3] - auVar59._12_4_;
                      auVar94 = NEON_ext(auVar91,auVar91,4,1);
                      auVar95._0_4_ = auVar97._0_4_ * auVar94._0_4_ - auVar68._0_4_ * auVar91._0_4_;
                      auVar95._4_4_ = auVar97._4_4_ * auVar94._4_4_ - auVar68._4_4_ * auVar91._4_4_;
                      auVar95._8_4_ = auVar97._8_4_ * auVar91._0_4_ - auVar97._0_4_ * auVar91._8_4_;
                      auVar95._12_4_ =
                           auVar97._12_4_ * auVar91._4_4_ - auVar97._4_4_ * auVar91._12_4_;
                      auVar91 = NEON_ext(auVar95,auVar95,4,1);
                      fVar82 = auVar91._0_4_;
                      fVar87 = auVar91._4_4_;
                      fVar98 = fVar82 * fVar82 + fVar87 * fVar87 + auVar95._0_4_ * auVar95._0_4_;
                      iVar41 = iVar45;
                      if ((float)uVar44 < fVar98) {
                        iVar41 = iVar31;
                        iVar26 = iVar31;
                        iVar27 = iVar31;
                        if (fVar98 <= 1e-05) {
                          iVar41 = iVar45;
                          iVar26 = iVar42;
                          iVar27 = iVar73;
                        }
                        iVar73 = iVar27;
                        iVar42 = iVar26;
                        *(ulong *)(param_1 + 0x128) = (ulong)(uint)auVar95._0_4_;
                        *(long *)(param_1 + 0x120) = auVar91._0_8_;
                        uVar44 = (ulong)(uint)fVar98;
                        fVar64 = fVar82;
                        fVar72 = fVar87;
                        fVar63 = auVar95._0_4_;
                      }
                      iVar45 = iVar41 + 1;
                    } while (iVar45 < iVar31);
                  }
                  iVar41 = iVar42 + 1;
                } while (iVar41 < iVar31);
                iVar41 = iVar73 + 1;
              }
              iVar73 = iVar41;
            } while (iVar41 < iVar31);
            fVar82 = fVar63 * fVar63 + fVar64 * fVar64 + fVar72 * fVar72;
            fVar87 = fVar63 * fVar63 + fVar64 * fVar64 + fVar72 * fVar72;
            uVar55 = (uint)(0.0 < fVar82);
            uVar32 = (uint)(0.0 < fVar87);
            if (fVar82 != 0.0) {
              uVar34 = CONCAT44((float)((ulong)*(undefined8 *)(puVar25 + 0x60) >> 0x20) /
                                SQRT(fVar87),(float)*(undefined8 *)(puVar25 + 0x60) / SQRT(fVar82));
            }
            auVar66._0_4_ = (int)(uVar55 * -0x80000000) >> 0x1f;
            auVar66._4_4_ = (int)(uVar32 * -0x80000000) >> 0x1f;
            auVar66._8_4_ = (int)(uVar55 * -0x80000000) >> 0x1f;
            auVar66._12_4_ = (int)(uVar32 * -0x80000000) >> 0x1f;
            bVar29 = true;
            iVar73 = -(uint)(uVar55 == 0 && uVar32 == 0);
            auVar56._0_4_ = fVar64 * (float)uVar34;
            fVar82 = (float)(uVar34 >> 0x20);
            auVar56._4_4_ = fVar72 * fVar82;
            auVar56._8_4_ = fVar63 * (float)uVar34;
            auVar56._12_4_ = fVar82 * 0.0;
            auVar94._4_4_ = fVar72;
            auVar94._0_4_ = fVar64;
            auVar94._8_4_ = fVar63;
            auVar94._12_4_ = 0;
            auVar67._4_4_ = fVar72;
            auVar67._0_4_ = fVar64;
            auVar67._8_4_ = fVar63;
            auVar67._12_4_ = 0;
            auVar67 = auVar67 ^ (auVar94 ^ auVar56) & auVar66;
            auVar57._4_4_ = iVar73;
            auVar57._0_4_ = iVar73;
            auVar57._8_4_ = iVar73;
            auVar57._12_4_ = iVar73;
            auVar67 = auVar67 ^ (auVar67 ^ auVar11) & auVar57;
            *(long *)(param_1 + 0x128) = auVar67._8_8_;
            *(long *)(param_1 + 0x120) = auVar67._0_8_;
            auVar58._0_12_ = auVar67._0_12_;
            auVar58._12_4_ =
                 -(*param_2 * auVar67._0_4_ + param_2[1] * auVar67._4_4_ +
                  param_2[2] * auVar67._8_4_);
            *(long *)(param_1 + 0x128) = auVar58._8_8_;
            *(long *)(param_1 + 0x120) = auVar67._0_8_;
          }
        }
      }
    }
    else {
      param_1[0x1f0] = '\x02';
      param_1[0x1f1] = '\0';
      param_1[0x1f2] = '\0';
      param_1[499] = '\0';
      bVar29 = true;
    }
    uVar34 = 0;
    plVar5 = (long *)(param_1 + 0x80);
    param_1[0x88] = '\0';
    param_1[0x89] = '\0';
    param_1[0x8a] = '\0';
    param_1[0x8b] = '\0';
    if ((int)(*(uint *)(param_1 + 0x8c) & 0x7fffffff) < iVar31) {
      FUN_0085c77c(plVar5,PTR_PTR_047d1a50,(long)iVar31);
      uVar34 = (ulong)*(uint *)(param_1 + 0x88);
    }
    if ((int)uVar34 < iVar31) {
      lVar37 = *(long *)(param_1 + 0x80);
      uVar44 = -(uVar34 >> 0x1f) & 0xffffffc000000000 | uVar34 << 6;
      uVar34 = -(uVar53 >> 0x1f) & 0xffffffc000000000 | uVar53 << 6;
      lVar38 = lVar37 + uVar44;
      uVar44 = (uVar34 - uVar44) - 0x40;
      uVar55 = ((uint)(uVar44 >> 6) & 0x3ffffff) + 1;
      *(int *)(param_1 + 0x88) = iVar31;
      if ((uVar55 & 3) != 0) {
        lVar46 = -((ulong)uVar55 & 3);
        do {
          *(undefined4 *)(lVar38 + 0x2c) = 0;
          bVar28 = lVar46 != -1;
          lVar46 = lVar46 + 1;
          *(undefined4 *)(lVar38 + 0x34) = 0xffffffff;
          lVar38 = lVar38 + 0x40;
        } while (bVar28);
      }
      if (0xbf < uVar44) {
        do {
          *(undefined4 *)(lVar38 + 0x2c) = 0;
          *(undefined4 *)(lVar38 + 0x34) = 0xffffffff;
          *(undefined4 *)(lVar38 + 0x6c) = 0;
          *(undefined4 *)(lVar38 + 0x74) = 0xffffffff;
          *(undefined4 *)(lVar38 + 0xac) = 0;
          *(undefined4 *)(lVar38 + 0xb4) = 0xffffffff;
          *(undefined4 *)(lVar38 + 0xec) = 0;
          *(undefined4 *)(lVar38 + 0xf4) = 0xffffffff;
          lVar38 = lVar38 + 0x100;
        } while (lVar37 + uVar34 != lVar38);
      }
    }
    else if (iVar31 < (int)uVar34) {
      *(int *)(param_1 + 0x88) = iVar31;
    }
    auVar59 = *(undefined1 (*) [16])(puVar25 + 0x150);
    auVar68 = NEON_ext(auVar59,auVar59,8,1);
    auVar74._8_4_ = 0x45fff800;
    auVar74._0_8_ = 0x45fff80045fff800;
    auVar74._12_4_ = 0x45fff800;
    auVar59 = NEON_ext(auVar68,auVar59,8,1);
    auVar69._0_4_ = -auVar59._0_4_;
    auVar69._4_4_ = -auVar59._4_4_;
    auVar69._8_4_ = -auVar59._8_4_;
    auVar69._12_4_ = -auVar59._12_4_;
    auVar83._8_4_ = 0xc6000000;
    auVar83._0_8_ = 0xc6000000c6000000;
    auVar83._12_4_ = 0xc6000000;
    uVar34 = 0;
    lVar38 = 0x34;
    do {
      auVar68 = *(undefined1 (*) [16])(param_2 + uVar34 * 4);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x80) + lVar38);
      fVar64 = *(float *)(param_1 + 0x130);
      fVar72 = *(float *)(param_1 + 0x134);
      fVar63 = *(float *)(param_1 + 0x138);
      fVar82 = *(float *)(param_1 + 0x13c);
      fVar87 = *(float *)(param_1 + 0x140);
      fVar98 = *(float *)(param_1 + 0x144);
      fVar88 = *(float *)(param_1 + 0x148);
      fVar12 = *(float *)(param_1 + 0x14c);
      *(long *)(puVar7 + -7) = auVar68._8_8_;
      *(long *)(puVar7 + -9) = auVar68._0_8_;
      auVar92._0_4_ = (auVar68._0_4_ - fVar64) * fVar87;
      auVar92._4_4_ = (auVar68._4_4_ - fVar72) * fVar98;
      auVar92._8_4_ = (auVar68._8_4_ - fVar63) * fVar88;
      auVar92._12_4_ = (auVar68._12_4_ - fVar82) * fVar12;
      auVar68 = NEON_fminnm(auVar92,auVar74,4);
      auVar68 = NEON_fmax(auVar68,auVar83,4);
      auVar96._0_4_ = -(uint)(auVar68._0_4_ < 0.0);
      auVar96._4_4_ = -(uint)(auVar68._4_4_ < 0.0);
      auVar96._8_4_ = -(uint)(auVar68._8_4_ < 0.0);
      auVar96._12_4_ = -(uint)(auVar68._12_4_ < 0.0);
      auVar97 = auVar59 ^ (auVar59 ^ auVar69) & auVar96;
      *(ulong *)(puVar7 + -5) =
           CONCAT44((int)(auVar68._4_4_ + auVar97._4_4_),(int)(auVar68._0_4_ + auVar97._0_4_));
      puVar7[-3] = (int)(auVar68._8_4_ + auVar97._8_4_);
      puVar7[-2] = 0;
      *puVar7 = 0xffffffff;
      if (param_1[8] != '\0') {
        *(uint *)(*plVar5 + lVar38 + -0x18) = (uint)uVar34 | 0x3f000000;
      }
      uVar34 = uVar34 + 1;
      lVar38 = lVar38 + 0x40;
    } while (uVar54 != uVar34);
    if ((((param_4 & 1) == 0) && (param_1[0xb] != '\0')) && (1 < *(int *)(param_1 + 0x88))) {
      FUN_00861cc0(*plVar5,0,*(int *)(param_1 + 0x88) + -1);
    }
    auVar59 = *(undefined1 (*) [16])(puVar25 + 0x50);
    uVar34 = -(uVar53 >> 0x1f) & 0xfffffffe00000000 | uVar53 << 1;
    uVar99 = *(undefined8 *)(puVar25 + 0x60);
    pcVar6 = param_1 + 0x50;
LAB_0085f71c:
    uVar55 = *(uint *)(param_1 + 0x1f0);
    if (iVar31 < 2) {
LAB_0085f850:
      if (uVar55 < 4) {
        do {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(uVar55) {
          case 0:
            goto switchD_0085f740_caseD_0;
          case 1:
            goto switchD_0085f868_caseD_1;
          case 2:
            goto switchD_0085f740_caseD_2;
          default:
            uVar44 = FUN_00860944(param_1);
            if ((uVar44 & 1) != 0) goto switchD_0085f740_default;
            if (*param_1 == '\0') goto LAB_00860684;
            param_1[0x1f0] = '\x02';
            param_1[0x1f1] = '\0';
            param_1[0x1f2] = '\0';
            param_1[499] = '\0';
          }
        } while( true );
      }
      goto switchD_0085f740_default;
    }
    do {
      switch(uVar55) {
      case 0:
        goto switchD_0085f740_caseD_0;
      case 1:
        lVar38 = *(long *)(param_1 + 0x80);
        fVar64 = *(float *)(param_1 + 0x110);
        fVar72 = *(float *)(param_1 + 0x114);
        fVar63 = *(float *)(param_1 + 0x118);
        fVar82 = *(float *)(param_1 + 0x11c);
        iVar41 = 0;
        iVar73 = 0;
        uVar44 = 1;
        pfVar39 = (float *)(lVar38 + 0x50);
        do {
          lVar37 = lVar38 + (long)iVar73 * 0x40;
          auVar70._0_4_ = fVar64 * *pfVar39;
          auVar70._4_4_ = fVar72 * pfVar39[1];
          auVar70._8_4_ = fVar63 * pfVar39[2];
          auVar70._12_4_ = fVar82 * pfVar39[3];
          lVar46 = lVar38 + (long)iVar41 * 0x40;
          auVar68 = NEON_ext(auVar70,auVar70,8,1);
          auVar84._0_4_ = fVar64 * *(float *)(lVar37 + 0x10);
          auVar84._4_4_ = fVar72 * *(float *)(lVar37 + 0x14);
          auVar84._8_4_ = fVar63 * *(float *)(lVar37 + 0x18);
          auVar84._12_4_ = fVar82 * *(float *)(lVar37 + 0x1c);
          fVar87 = auVar70._0_4_ + auVar70._4_4_ + auVar68._0_4_;
          auVar68 = NEON_ext(auVar84,auVar84,8,1);
          if (fVar87 < auVar84._0_4_ + auVar84._4_4_ + auVar68._0_4_) {
            iVar73 = (int)uVar44;
          }
          auVar75._0_4_ = fVar64 * *(float *)(lVar46 + 0x10);
          auVar75._4_4_ = fVar72 * *(float *)(lVar46 + 0x14);
          auVar75._8_4_ = fVar63 * *(float *)(lVar46 + 0x18);
          auVar75._12_4_ = fVar82 * *(float *)(lVar46 + 0x1c);
          auVar68 = NEON_ext(auVar75,auVar75,8,1);
          if (auVar75._0_4_ + auVar75._4_4_ + auVar68._0_4_ < fVar87) {
            iVar41 = (int)uVar44;
          }
          uVar44 = uVar44 + 1;
          pfVar39 = pfVar39 + 0x10;
        } while (uVar54 != uVar44);
        lVar37 = lVar38 + (long)iVar73 * 0x40;
        auVar68 = *(undefined1 (*) [16])(lVar37 + 0x10);
        iVar73 = *(int *)(lVar37 + 0x20);
        iVar42 = *(int *)(lVar37 + 0x24);
        local_88 = *(long *)(lVar37 + 0x28);
        local_80 = *(long *)(lVar37 + 0x30);
        lVar38 = lVar38 + (long)iVar41 * 0x40;
        auVar97 = *(undefined1 (*) [16])(lVar38 + 0x10);
        iVar41 = *(int *)(lVar38 + 0x20);
        iVar45 = *(int *)(lVar38 + 0x24);
        uVar65 = *(undefined8 *)(lVar38 + 0x28);
        uVar36 = *(undefined8 *)(lVar38 + 0x30);
        if (iVar73 != iVar41 || iVar42 != iVar45) {
          lVar38 = FUN_0086075c(pcVar6);
          lVar37 = FUN_0086075c(pcVar6);
          *(int *)(lVar38 + 0x20) = iVar73;
          *(int *)(lVar38 + 0x24) = iVar42;
          *(long *)(lVar38 + 0x18) = auVar68._8_8_;
          *(long *)(lVar38 + 0x10) = auVar68._0_8_;
          *(long *)(lVar38 + 0x28) = local_88;
          *(long *)(lVar38 + 0x30) = local_80;
          *(undefined4 *)(lVar38 + 0x30) = 0;
          *(int *)(lVar37 + 0x20) = iVar41;
          *(int *)(lVar37 + 0x24) = iVar45;
          *(long *)(lVar37 + 0x18) = auVar97._8_8_;
          *(long *)(lVar37 + 0x10) = auVar97._0_8_;
          *(undefined8 *)(lVar37 + 0x28) = uVar65;
          *(undefined8 *)(lVar37 + 0x30) = uVar36;
          goto LAB_00860700;
        }
        uVar55 = 0;
        param_1[0x1f0] = '\0';
        param_1[0x1f1] = '\0';
        param_1[0x1f2] = '\0';
        param_1[499] = '\0';
        break;
      case 2:
        goto switchD_0085f740_caseD_2;
      case 3:
        uVar44 = FUN_00860944(param_1);
        if ((uVar44 & 1) != 0) goto switchD_0085f740_default;
        if (*param_1 == '\0') goto LAB_00860684;
        uVar55 = 2;
        param_1[0x1f0] = '\x02';
        param_1[0x1f1] = '\0';
        param_1[0x1f2] = '\0';
        param_1[499] = '\0';
        break;
      default:
        goto switchD_0085f740_default;
      }
    } while( true );
  }
  local_88 = 0;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0x80000000;
  if (iVar31 < 1) {
    if (iVar31 == 0) goto LAB_0085f190;
  }
  else {
    FUN_02e8df28(&local_88,PTR_PTR_047d1a50,uVar54);
    if ((uint)local_80 == iVar31) goto LAB_0085f190;
  }
  local_80._0_4_ = iVar31;
LAB_0085f190:
  if (0 < iVar31) {
    if (iVar31 == 1) {
      lVar37 = 0;
    }
    else {
      lVar38 = 0;
      do {
        lVar37 = lVar38 + 2;
        pfVar39 = param_2 + lVar38 * 4;
        uVar99 = *(undefined8 *)pfVar39;
        puVar40 = (undefined8 *)(local_88 + lVar38 * 0x10);
        puVar40[1] = *(undefined8 *)(pfVar39 + 2);
        *puVar40 = uVar99;
        auVar59 = *(undefined1 (*) [16])(pfVar39 + 4);
        lVar38 = local_88 + lVar38 * 0x10;
        *(long *)(lVar38 + 0x18) = auVar59._8_8_;
        *(long *)(lVar38 + 0x10) = auVar59._0_8_;
        lVar38 = lVar37;
      } while (uVar54 - (param_3 & 1) != lVar37);
    }
    if ((param_3 & 1) != 0) {
      auVar59 = *(undefined1 (*) [16])(param_2 + lVar37 * 4);
      puVar40 = (undefined8 *)(local_88 + lVar37 * 0x10);
      puVar40[1] = auVar59._8_8_;
      *puVar40 = auVar59._0_8_;
    }
  }
  uVar30 = FUN_0085f114(param_1,local_88,uVar53,param_4 & 1,param_5);
  uVar55 = local_80._4_4_;
  uVar53 = (ulong)local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < (int)uVar55) && (local_88 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_88,uVar53 << 4);
  }
  return uVar30;
switchD_0085f868_caseD_1:
  uVar55 = 0;
  param_1[0x1f0] = '\0';
  param_1[0x1f1] = '\0';
  param_1[0x1f2] = '\0';
  param_1[499] = '\0';
  goto LAB_0085f850;
LAB_00860684:
  param_1[0x1f0] = -1;
  param_1[0x1f1] = -1;
  param_1[0x1f2] = -1;
  param_1[499] = -1;
  goto LAB_00860730;
switchD_0085f740_caseD_2:
  fVar64 = (float)uVar99;
  fVar72 = (float)((ulong)uVar99 >> 0x20);
  if (bVar29) {
    auVar61._0_12_ = SUB1612(*(undefined1 (*) [16])(param_1 + 0x120),0);
  }
  else {
    auVar78 = ZEXT816(0);
    param_1[0x128] = '\0';
    param_1[0x129] = '\0';
    param_1[0x12a] = '\0';
    param_1[299] = '\0';
    param_1[300] = '\0';
    param_1[0x12d] = '\0';
    param_1[0x12e] = '\0';
    param_1[0x12f] = '\0';
    param_1[0x120] = '\0';
    param_1[0x121] = '\0';
    param_1[0x122] = '\0';
    param_1[0x123] = '\0';
    param_1[0x124] = '\0';
    param_1[0x125] = '\0';
    param_1[0x126] = '\0';
    param_1[0x127] = '\0';
    uVar44 = auVar59._0_8_;
    iVar73 = 0;
    do {
      iVar41 = iVar73 + 1;
      if (iVar41 < iVar31) {
        auVar68 = *(undefined1 (*) [16])(param_2 + (long)iVar73 * 4);
        iVar42 = iVar73;
        do {
          iVar45 = iVar42 + 2;
          iVar42 = iVar41;
          if (iVar45 < iVar31) {
            pfVar39 = param_2 + (long)iVar41 * 4;
            auVar76._0_4_ = *pfVar39 - auVar68._0_4_;
            auVar76._4_4_ = pfVar39[1] - auVar68._4_4_;
            auVar76._8_4_ = pfVar39[2] - auVar68._8_4_;
            auVar76._12_4_ = pfVar39[3] - auVar68._12_4_;
            auVar97 = NEON_ext(auVar76,auVar76,4,1);
            do {
              pfVar39 = param_2 + (long)iVar45 * 4;
              auVar89._0_4_ = *pfVar39 - auVar68._0_4_;
              auVar89._4_4_ = pfVar39[1] - auVar68._4_4_;
              auVar89._8_4_ = pfVar39[2] - auVar68._8_4_;
              auVar89._12_4_ = pfVar39[3] - auVar68._12_4_;
              auVar91 = NEON_ext(auVar89,auVar89,4,1);
              auVar93._0_4_ = auVar76._0_4_ * auVar91._0_4_ - auVar97._0_4_ * auVar89._0_4_;
              auVar93._4_4_ = auVar76._4_4_ * auVar91._4_4_ - auVar97._4_4_ * auVar89._4_4_;
              auVar93._8_4_ = auVar76._8_4_ * auVar89._0_4_ - auVar76._0_4_ * auVar89._8_4_;
              auVar93._12_4_ = auVar76._12_4_ * auVar89._4_4_ - auVar76._4_4_ * auVar89._12_4_;
              auVar91 = NEON_ext(auVar93,auVar93,4,1);
              fVar63 = auVar91._0_4_ * auVar91._0_4_ + auVar91._4_4_ * auVar91._4_4_ +
                       auVar93._0_4_ * auVar93._0_4_;
              iVar41 = iVar45;
              if ((float)uVar44 < fVar63) {
                auVar78._0_8_ = auVar91._0_8_;
                auVar78._8_4_ = auVar93._0_4_;
                auVar78._12_4_ = 0;
                iVar41 = iVar31;
                iVar26 = iVar31;
                iVar27 = iVar31;
                if (fVar63 <= 1e-05) {
                  iVar41 = iVar45;
                  iVar26 = iVar42;
                  iVar27 = iVar73;
                }
                iVar73 = iVar27;
                iVar42 = iVar26;
                *(ulong *)(param_1 + 0x128) = (ulong)(uint)auVar93._0_4_;
                *(undefined8 *)(param_1 + 0x120) = auVar78._0_8_;
                uVar44 = (ulong)(uint)fVar63;
              }
              iVar45 = iVar41 + 1;
            } while (iVar45 < iVar31);
          }
          iVar41 = iVar42 + 1;
        } while (iVar41 < iVar31);
        iVar41 = iVar73 + 1;
      }
      iVar73 = iVar41;
    } while (iVar41 < iVar31);
    fVar63 = auVar78._0_4_;
    fVar82 = auVar78._4_4_;
    fVar87 = auVar78._8_4_;
    fVar98 = fVar87 * fVar87 + fVar63 * fVar63 + fVar82 * fVar82;
    fVar88 = fVar87 * fVar87 + fVar63 * fVar63 + fVar82 * fVar82;
    uVar55 = (uint)(0.0 < fVar98);
    uVar32 = (uint)(0.0 < fVar88);
    uVar44 = auVar59._0_8_;
    if (fVar98 != 0.0) {
      uVar44 = CONCAT44(fVar72 / SQRT(fVar88),fVar64 / SQRT(fVar98));
    }
    auVar77._0_4_ = (int)(uVar55 * -0x80000000) >> 0x1f;
    auVar77._4_4_ = (int)(uVar32 * -0x80000000) >> 0x1f;
    auVar77._8_4_ = (int)(uVar55 * -0x80000000) >> 0x1f;
    auVar77._12_4_ = (int)(uVar32 * -0x80000000) >> 0x1f;
    auVar90._0_4_ = fVar63 * (float)uVar44;
    fVar63 = (float)(uVar44 >> 0x20);
    auVar90._4_4_ = fVar82 * fVar63;
    auVar90._8_4_ = fVar87 * (float)uVar44;
    auVar90._12_4_ = auVar78._12_4_ * fVar63;
    auVar78 = auVar78 ^ (auVar78 ^ auVar90) & auVar77;
    auVar60._0_4_ = -(uint)(uVar55 == 0 && uVar32 == 0);
    auVar60._4_4_ = auVar60._0_4_;
    auVar60._8_4_ = auVar60._0_4_;
    auVar60._12_4_ = auVar60._0_4_;
    auVar78 = auVar78 ^ (auVar78 ^ auVar11) & auVar60;
    *(long *)(param_1 + 0x128) = auVar78._8_8_;
    *(long *)(param_1 + 0x120) = auVar78._0_8_;
    auVar61._0_12_ = auVar78._0_12_;
    auVar61._12_4_ =
         -(*param_2 * auVar78._0_4_ + param_2[1] * auVar78._4_4_ + param_2[2] * auVar78._8_4_);
    *(long *)(param_1 + 0x128) = auVar61._8_8_;
    *(long *)(param_1 + 0x120) = auVar78._0_8_;
  }
  uVar65 = CONCAT44(ABS(auVar61._4_4_),ABS(auVar61._0_4_));
  fVar63 = ABS(auVar61._8_4_);
  uVar65 = NEON_fmaxp(uVar65,uVar65,4);
  uVar65 = NEON_fmax(CONCAT44(fVar63,fVar63),uVar65,4);
  local_88 = 0;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0x80000000;
  if (PTR_DAT_047d1a18
      [(-(uint)((float)((ulong)uVar65 >> 0x20) <= ABS(auVar61._4_4_)) & 2) +
       (uint)((float)uVar65 <= ABS(auVar61._0_4_)) | -(uint)((float)uVar65 <= fVar63) & 4] == '\x01'
     ) {
    uVar55 = *(uint *)(param_1 + 0x88);
    if (0 < (int)uVar55) {
      if (uVar55 == 1) {
        lVar38 = 0;
      }
      else {
        lVar37 = 0;
        lVar38 = 0;
        do {
          lVar46 = *(long *)(param_1 + 0x80) + lVar37;
          lVar38 = lVar38 + 2;
          uVar30 = *(undefined4 *)(lVar46 + 0x24);
          *(undefined4 *)(lVar46 + 0x24) = *(undefined4 *)(lVar46 + 0x28);
          *(undefined4 *)(lVar46 + 0x28) = uVar30;
          lVar46 = *(long *)(param_1 + 0x80) + lVar37;
          lVar37 = lVar37 + 0x80;
          uVar30 = *(undefined4 *)(lVar46 + 100);
          *(undefined4 *)(lVar46 + 100) = *(undefined4 *)(lVar46 + 0x68);
          *(undefined4 *)(lVar46 + 0x68) = uVar30;
        } while ((ulong)uVar55 - ((ulong)uVar55 & 1) != lVar38);
      }
      if ((uVar55 & 1) != 0) {
        lVar38 = *(long *)(param_1 + 0x80) + lVar38 * 0x40;
        uVar30 = *(undefined4 *)(lVar38 + 0x24);
        *(undefined4 *)(lVar38 + 0x24) = *(undefined4 *)(lVar38 + 0x28);
LAB_0085fb70:
        *(undefined4 *)(lVar38 + 0x28) = uVar30;
      }
      goto LAB_0085fb74;
    }
  }
  else {
    if (PTR_DAT_047d1a18
        [(-(uint)((float)((ulong)uVar65 >> 0x20) <= ABS(auVar61._4_4_)) & 2) +
         (uint)((float)uVar65 <= ABS(auVar61._0_4_)) | -(uint)((float)uVar65 <= fVar63) & 4] == '\0'
       ) {
      uVar55 = *(uint *)(param_1 + 0x88);
      if ((int)uVar55 < 1) goto LAB_0085fb94;
      if (uVar55 == 1) {
        lVar37 = 0;
      }
      else {
        lVar38 = 0;
        lVar37 = 0;
        do {
          lVar46 = *(long *)(param_1 + 0x80) + lVar38;
          uVar30 = *(undefined4 *)(lVar46 + 0x20);
          *(undefined4 *)(lVar46 + 0x20) = *(undefined4 *)(lVar46 + 0x28);
          *(undefined4 *)(lVar46 + 0x28) = uVar30;
          lVar46 = *(long *)(param_1 + 0x80) + lVar38;
          lVar38 = lVar38 + 0x80;
          uVar30 = *(undefined4 *)(lVar46 + 0x60);
          lVar37 = lVar37 + 2;
          *(undefined4 *)(lVar46 + 0x60) = *(undefined4 *)(lVar46 + 0x68);
          *(undefined4 *)(lVar46 + 0x68) = uVar30;
        } while ((ulong)uVar55 - ((ulong)uVar55 & 1) != lVar37);
      }
      if ((uVar55 & 1) != 0) {
        lVar38 = *(long *)(param_1 + 0x80) + lVar37 * 0x40;
        uVar30 = *(undefined4 *)(lVar38 + 0x20);
        *(undefined4 *)(lVar38 + 0x20) = *(undefined4 *)(lVar38 + 0x28);
        goto LAB_0085fb70;
      }
    }
LAB_0085fb74:
    if (1 < *(int *)(param_1 + 0x88)) {
      FUN_00861cc0(*plVar5,0,*(int *)(param_1 + 0x88) + -1);
    }
  }
LAB_0085fb94:
  uVar55 = (uint)(uVar53 << 1);
  if ((int)(local_80._4_4_ & 0x7fffffff) < (int)uVar55) {
    FUN_0085c77c(&local_88,PTR_PTR_047d1a50,uVar34);
  }
  if ((int)(uint)local_80 < (int)uVar55) {
    lVar38 = local_88 + (long)(int)(uint)local_80 * 0x40;
    uVar44 = ((-(uVar53 >> 0x1f) & 0xffffff8000000000 | uVar53 << 7) - 0x40) +
             (long)(int)(uint)local_80 * -0x40;
    uVar32 = ((uint)(uVar44 >> 6) & 0x3ffffff) + 1;
    if ((uVar32 & 7) != 0) {
      lVar37 = -((ulong)uVar32 & 7);
      do {
        *(undefined4 *)(lVar38 + 0x2c) = 0;
        bVar29 = lVar37 != -1;
        lVar37 = lVar37 + 1;
        *(undefined4 *)(lVar38 + 0x34) = 0xffffffff;
        lVar38 = lVar38 + 0x40;
      } while (bVar29);
    }
    local_80._0_4_ = uVar55;
    if (0x1bf < uVar44) {
      do {
        *(undefined4 *)(lVar38 + 0x2c) = 0;
        *(undefined4 *)(lVar38 + 0x34) = 0xffffffff;
        *(undefined4 *)(lVar38 + 0x6c) = 0;
        *(undefined4 *)(lVar38 + 0x74) = 0xffffffff;
        *(undefined4 *)(lVar38 + 0xac) = 0;
        *(undefined4 *)(lVar38 + 0xb4) = 0xffffffff;
        *(undefined4 *)(lVar38 + 0xec) = 0;
        *(undefined4 *)(lVar38 + 0xf4) = 0xffffffff;
        *(undefined4 *)(lVar38 + 300) = 0;
        *(undefined4 *)(lVar38 + 0x134) = 0xffffffff;
        *(undefined4 *)(lVar38 + 0x16c) = 0;
        *(undefined4 *)(lVar38 + 0x174) = 0xffffffff;
        *(undefined4 *)(lVar38 + 0x1ac) = 0;
        *(undefined4 *)(lVar38 + 0x1b4) = 0xffffffff;
        *(undefined4 *)(lVar38 + 0x1ec) = 0;
        *(undefined4 *)(lVar38 + 500) = 0xffffffff;
        lVar38 = lVar38 + 0x200;
      } while (local_88 + uVar34 * 0x40 != lVar38);
    }
  }
  else if ((int)uVar55 < (int)(uint)local_80) {
    local_80._0_4_ = uVar55;
  }
  uVar44 = 0;
  uVar55 = 0;
  do {
    lVar38 = (long)(int)uVar55;
    piVar47 = (int *)(local_88 + (long)(int)uVar55 * 0x40 + -0x20);
    lVar37 = (ulong)uVar55 << 0x20;
    uVar32 = uVar55 + 1;
    do {
      uVar55 = uVar32;
      lVar46 = lVar37;
      if (lVar38 + -1 == 0 || lVar38 < 1) {
        lVar48 = *plVar5;
        break;
      }
      lVar48 = *plVar5;
      lVar52 = lVar48 + uVar44 * 0x40;
      iVar41 = piVar47[-0x10];
      piVar2 = piVar47 + -0xf;
      iVar73 = *piVar47;
      piVar9 = piVar47 + 1;
      lVar38 = lVar38 + -1;
      piVar47 = piVar47 + -0x10;
      lVar37 = lVar46 + -0x100000000;
      uVar32 = uVar55 - 1;
    } while ((*(int *)(lVar52 + 0x24) - *piVar2) * (iVar73 - iVar41) <=
             (*(int *)(lVar52 + 0x20) - iVar41) * (*piVar9 - *piVar2));
    lVar48 = lVar48 + uVar44 * 0x40;
    uVar44 = uVar44 + 1;
    auVar68 = *(undefined1 (*) [16])(lVar48 + 0x10);
    lVar38 = local_88 + (lVar46 >> 0x1a);
    *(long *)(lVar38 + 0x18) = auVar68._8_8_;
    *(long *)(lVar38 + 0x10) = auVar68._0_8_;
    *(undefined8 *)(lVar38 + 0x28) = *(undefined8 *)(lVar48 + 0x28);
    uVar65 = *(undefined8 *)(lVar48 + 0x20);
    *(undefined8 *)(lVar38 + 0x30) = *(undefined8 *)(lVar48 + 0x30);
    *(undefined8 *)(lVar38 + 0x20) = uVar65;
  } while (uVar44 != uVar54);
  if (1 < iVar31) {
    lVar37 = (long)(int)uVar55;
    lVar38 = (long)(iVar31 + -2);
    do {
      lVar48 = (long)(int)uVar55;
      piVar47 = (int *)(local_88 + lVar48 * 0x40 + -0x20);
      lVar46 = (ulong)uVar55 << 0x20;
      uVar32 = uVar55 + 1;
      do {
        uVar55 = uVar32;
        lVar52 = lVar46;
        if (lVar48 <= lVar37) {
          lVar50 = *plVar5;
          break;
        }
        lVar50 = *plVar5;
        lVar8 = lVar50 + lVar38 * 0x40;
        iVar41 = piVar47[-0x10];
        piVar2 = piVar47 + -0xf;
        iVar73 = *piVar47;
        piVar9 = piVar47 + 1;
        lVar48 = lVar48 + -1;
        piVar47 = piVar47 + -0x10;
        lVar46 = lVar52 + -0x100000000;
        uVar32 = uVar55 - 1;
      } while ((*(int *)(lVar8 + 0x24) - *piVar2) * (iVar73 - iVar41) <=
               (*(int *)(lVar8 + 0x20) - iVar41) * (*piVar9 - *piVar2));
      lVar50 = lVar50 + lVar38 * 0x40;
      auVar68 = *(undefined1 (*) [16])(lVar50 + 0x10);
      lVar46 = local_88 + (lVar52 >> 0x1a);
      *(long *)(lVar46 + 0x18) = auVar68._8_8_;
      *(long *)(lVar46 + 0x10) = auVar68._0_8_;
      *(undefined8 *)(lVar46 + 0x28) = *(undefined8 *)(lVar50 + 0x28);
      uVar65 = *(undefined8 *)(lVar50 + 0x20);
      *(undefined8 *)(lVar46 + 0x30) = *(undefined8 *)(lVar50 + 0x30);
      *(undefined8 *)(lVar46 + 0x20) = uVar65;
      bVar29 = 0 < lVar38;
      lVar38 = lVar38 + -1;
    } while (bVar29);
  }
  puVar25 = PTR_PTR_047d1a50;
  if ((int)uVar55 < 4) {
    uVar65 = CONCAT44(ABS(*(float *)(param_1 + 0x124)),ABS(*(float *)(param_1 + 0x120)));
    fVar64 = ABS(*(float *)(param_1 + 0x128));
    uVar65 = NEON_fmaxp(uVar65,uVar65,4);
    uVar65 = NEON_fmax(CONCAT44(fVar64,fVar64),uVar65,4);
    if (PTR_DAT_047d1a18
        [(-(uint)((float)((ulong)uVar65 >> 0x20) <= ABS(*(float *)(param_1 + 0x124))) & 2) +
         (uint)((float)uVar65 <= ABS(*(float *)(param_1 + 0x120))) |
         -(uint)((float)uVar65 <= fVar64) & 4] == '\x01') {
      uVar55 = *(uint *)(param_1 + 0x88);
      if (0 < (int)uVar55) {
        if (uVar55 == 1) {
          lVar38 = 0;
        }
        else {
          lVar37 = 0;
          lVar38 = 0;
          do {
            lVar46 = *(long *)(param_1 + 0x80) + lVar37;
            lVar38 = lVar38 + 2;
            uVar30 = *(undefined4 *)(lVar46 + 0x24);
            *(undefined4 *)(lVar46 + 0x24) = *(undefined4 *)(lVar46 + 0x28);
            *(undefined4 *)(lVar46 + 0x28) = uVar30;
            lVar46 = *(long *)(param_1 + 0x80) + lVar37;
            lVar37 = lVar37 + 0x80;
            uVar30 = *(undefined4 *)(lVar46 + 100);
            *(undefined4 *)(lVar46 + 100) = *(undefined4 *)(lVar46 + 0x68);
            *(undefined4 *)(lVar46 + 0x68) = uVar30;
          } while ((ulong)uVar55 - ((ulong)uVar55 & 1) != lVar38);
        }
        if ((uVar55 & 1) != 0) {
          lVar38 = *(long *)(param_1 + 0x80) + lVar38 * 0x40;
          uVar30 = *(undefined4 *)(lVar38 + 0x24);
          *(undefined4 *)(lVar38 + 0x24) = *(undefined4 *)(lVar38 + 0x28);
LAB_008601a0:
          *(undefined4 *)(lVar38 + 0x28) = uVar30;
        }
      }
    }
    else if (PTR_DAT_047d1a18
             [(-(uint)((float)((ulong)uVar65 >> 0x20) <= ABS(*(float *)(param_1 + 0x124))) & 2) +
              (uint)((float)uVar65 <= ABS(*(float *)(param_1 + 0x120))) |
              -(uint)((float)uVar65 <= fVar64) & 4] == '\0') {
      uVar55 = *(uint *)(param_1 + 0x88);
      if (0 < (int)uVar55) {
        if (uVar55 == 1) {
          lVar37 = 0;
        }
        else {
          lVar38 = 0;
          lVar37 = 0;
          do {
            lVar46 = *(long *)(param_1 + 0x80) + lVar38;
            uVar30 = *(undefined4 *)(lVar46 + 0x20);
            *(undefined4 *)(lVar46 + 0x20) = *(undefined4 *)(lVar46 + 0x28);
            *(undefined4 *)(lVar46 + 0x28) = uVar30;
            lVar46 = *(long *)(param_1 + 0x80) + lVar38;
            lVar38 = lVar38 + 0x80;
            uVar30 = *(undefined4 *)(lVar46 + 0x60);
            lVar37 = lVar37 + 2;
            *(undefined4 *)(lVar46 + 0x60) = *(undefined4 *)(lVar46 + 0x68);
            *(undefined4 *)(lVar46 + 0x68) = uVar30;
          } while ((ulong)uVar55 - ((ulong)uVar55 & 1) != lVar37);
        }
        if ((uVar55 & 1) != 0) {
          lVar38 = *(long *)(param_1 + 0x80) + lVar37 * 0x40;
          uVar30 = *(undefined4 *)(lVar38 + 0x20);
          *(undefined4 *)(lVar38 + 0x20) = *(undefined4 *)(lVar38 + 0x28);
          goto LAB_008601a0;
        }
      }
    }
    bVar28 = true;
    param_1[0x1f0] = '\x01';
    param_1[0x1f1] = '\0';
    param_1[0x1f2] = '\0';
    param_1[499] = '\0';
    goto LAB_00860644;
  }
  if (&local_88 == plVar5) {
    uVar32 = *(uint *)(param_1 + 0x8c);
  }
  else {
    FUN_00861e18(plVar5,PTR_PTR_047d1a50);
    FUN_00861e18(&local_88,puVar25);
    lVar38 = *(long *)(param_1 + 0x80);
    *(long *)(param_1 + 0x80) = local_88;
    uVar33 = *(uint *)(param_1 + 0x88);
    *(uint *)(param_1 + 0x88) = (uint)local_80;
    uVar10 = *(uint *)(param_1 + 0x8c);
    *(uint *)(param_1 + 0x8c) = local_80._4_4_;
    uVar32 = local_80._4_4_;
    local_88 = lVar38;
    local_80._0_4_ = uVar33;
    local_80._4_4_ = uVar10;
  }
  uVar33 = uVar55 - 1;
  if ((int)(uVar32 & 0x7fffffff) < (int)uVar33) {
    FUN_0085c77c(plVar5,PTR_PTR_047d1a50,uVar33);
  }
  iVar73 = *(int *)(param_1 + 0x88);
  if (iVar73 < (int)uVar33) {
    lVar37 = *(long *)(param_1 + 0x80);
    lVar38 = lVar37 + (long)iVar73 * 0x40;
    uVar44 = ((ulong)uVar33 * 0x40 + (long)iVar73 * -0x40) - 0x40;
    uVar55 = ((uint)(uVar44 >> 6) & 0x3ffffff) + 1;
    *(uint *)(param_1 + 0x88) = uVar33;
    if ((uVar55 & 7) != 0) {
      lVar46 = -((ulong)uVar55 & 7);
      do {
        *(undefined4 *)(lVar38 + 0x2c) = 0;
        bVar29 = lVar46 != -1;
        lVar46 = lVar46 + 1;
        *(undefined4 *)(lVar38 + 0x34) = 0xffffffff;
        lVar38 = lVar38 + 0x40;
      } while (bVar29);
    }
    if (0x1bf < uVar44) {
      do {
        *(undefined4 *)(lVar38 + 0x2c) = 0;
        *(undefined4 *)(lVar38 + 0x34) = 0xffffffff;
        *(undefined4 *)(lVar38 + 0x6c) = 0;
        *(undefined4 *)(lVar38 + 0x74) = 0xffffffff;
        *(undefined4 *)(lVar38 + 0xac) = 0;
        *(undefined4 *)(lVar38 + 0xb4) = 0xffffffff;
        *(undefined4 *)(lVar38 + 0xec) = 0;
        *(undefined4 *)(lVar38 + 0xf4) = 0xffffffff;
        *(undefined4 *)(lVar38 + 300) = 0;
        *(undefined4 *)(lVar38 + 0x134) = 0xffffffff;
        *(undefined4 *)(lVar38 + 0x16c) = 0;
        *(undefined4 *)(lVar38 + 0x174) = 0xffffffff;
        *(undefined4 *)(lVar38 + 0x1ac) = 0;
        *(undefined4 *)(lVar38 + 0x1b4) = 0xffffffff;
        *(undefined4 *)(lVar38 + 0x1ec) = 0;
        *(undefined4 *)(lVar38 + 500) = 0xffffffff;
        lVar38 = lVar38 + 0x200;
      } while (lVar37 + (ulong)uVar33 * 0x40 != lVar38);
    }
  }
  else if ((int)uVar55 <= iVar73) {
    *(uint *)(param_1 + 0x88) = uVar33;
  }
  uVar65 = CONCAT44(ABS(*(float *)(param_1 + 0x124)),ABS(*(float *)(param_1 + 0x120)));
  fVar63 = ABS(*(float *)(param_1 + 0x128));
  uVar65 = NEON_fmaxp(uVar65,uVar65,4);
  uVar65 = NEON_fmax(CONCAT44(fVar63,fVar63),uVar65,4);
  if (PTR_DAT_047d1a18
      [(-(uint)((float)((ulong)uVar65 >> 0x20) <= ABS(*(float *)(param_1 + 0x124))) & 2) +
       (uint)((float)uVar65 <= ABS(*(float *)(param_1 + 0x120))) |
       -(uint)((float)uVar65 <= fVar63) & 4] == '\x01') {
    uVar55 = *(uint *)(param_1 + 0x88);
    uVar44 = (ulong)uVar55;
    if (0 < (int)uVar55) {
      if (uVar55 == 1) {
        lVar38 = 0;
      }
      else {
        lVar37 = 0;
        lVar38 = 0;
        do {
          lVar46 = *(long *)(param_1 + 0x80) + lVar37;
          lVar38 = lVar38 + 2;
          uVar30 = *(undefined4 *)(lVar46 + 0x24);
          *(undefined4 *)(lVar46 + 0x24) = *(undefined4 *)(lVar46 + 0x28);
          *(undefined4 *)(lVar46 + 0x28) = uVar30;
          lVar46 = *(long *)(param_1 + 0x80) + lVar37;
          lVar37 = lVar37 + 0x80;
          uVar30 = *(undefined4 *)(lVar46 + 100);
          *(undefined4 *)(lVar46 + 100) = *(undefined4 *)(lVar46 + 0x68);
          *(undefined4 *)(lVar46 + 0x68) = uVar30;
        } while (uVar44 - (uVar44 & 1) != lVar38);
      }
      if ((uVar55 & 1) != 0) {
        lVar38 = *(long *)(param_1 + 0x80) + lVar38 * 0x40;
        uVar30 = *(undefined4 *)(lVar38 + 0x24);
        *(undefined4 *)(lVar38 + 0x24) = *(undefined4 *)(lVar38 + 0x28);
LAB_00860200:
        *(undefined4 *)(lVar38 + 0x28) = uVar30;
      }
      goto LAB_00860204;
    }
LAB_00860340:
    auVar68 = ZEXT816(0);
  }
  else {
    if (PTR_DAT_047d1a18
        [(-(uint)((float)((ulong)uVar65 >> 0x20) <= ABS(*(float *)(param_1 + 0x124))) & 2) +
         (uint)((float)uVar65 <= ABS(*(float *)(param_1 + 0x120))) |
         -(uint)((float)uVar65 <= fVar63) & 4] == '\0') {
      uVar55 = *(uint *)(param_1 + 0x88);
      uVar44 = (ulong)uVar55;
      if ((int)uVar55 < 1) goto LAB_00860340;
      if (uVar55 == 1) {
        lVar37 = 0;
      }
      else {
        lVar38 = 0;
        lVar37 = 0;
        do {
          lVar46 = *(long *)(param_1 + 0x80) + lVar38;
          uVar30 = *(undefined4 *)(lVar46 + 0x20);
          *(undefined4 *)(lVar46 + 0x20) = *(undefined4 *)(lVar46 + 0x28);
          *(undefined4 *)(lVar46 + 0x28) = uVar30;
          lVar46 = *(long *)(param_1 + 0x80) + lVar38;
          lVar38 = lVar38 + 0x80;
          uVar30 = *(undefined4 *)(lVar46 + 0x60);
          lVar37 = lVar37 + 2;
          *(undefined4 *)(lVar46 + 0x60) = *(undefined4 *)(lVar46 + 0x68);
          *(undefined4 *)(lVar46 + 0x68) = uVar30;
        } while (uVar44 - (uVar44 & 1) != lVar37);
      }
      if ((uVar55 & 1) != 0) {
        lVar38 = *(long *)(param_1 + 0x80) + lVar37 * 0x40;
        uVar30 = *(undefined4 *)(lVar38 + 0x20);
        *(undefined4 *)(lVar38 + 0x20) = *(undefined4 *)(lVar38 + 0x28);
        goto LAB_00860200;
      }
    }
LAB_00860204:
    uVar55 = *(uint *)(param_1 + 0x88);
    uVar44 = (ulong)uVar55;
    if ((int)uVar55 < 1) goto LAB_00860340;
    uVar35 = uVar44 & 3;
    if (uVar44 - 1 < 3) {
      fVar63 = 0.0;
      fVar82 = 0.0;
      fVar87 = 0.0;
      fVar98 = 0.0;
      lVar38 = 0;
    }
    else {
      fVar63 = 0.0;
      fVar82 = 0.0;
      fVar87 = 0.0;
      fVar98 = 0.0;
      lVar38 = 0;
      pfVar39 = (float *)(*plVar5 + 0x90);
      do {
        pfVar3 = pfVar39 + -0x20;
        pfVar13 = pfVar39 + -0x1f;
        pfVar14 = pfVar39 + -0x1e;
        pfVar15 = pfVar39 + -0x1d;
        pfVar4 = pfVar39 + -0x10;
        pfVar16 = pfVar39 + -0xf;
        pfVar17 = pfVar39 + -0xe;
        pfVar18 = pfVar39 + -0xd;
        fVar88 = *pfVar39;
        pfVar19 = pfVar39 + 1;
        pfVar20 = pfVar39 + 2;
        pfVar21 = pfVar39 + 3;
        pfVar1 = pfVar39 + 0x10;
        pfVar22 = pfVar39 + 0x11;
        pfVar23 = pfVar39 + 0x12;
        pfVar24 = pfVar39 + 0x13;
        pfVar39 = pfVar39 + 0x40;
        lVar38 = lVar38 + 4;
        fVar63 = fVar63 + *pfVar3 + *pfVar4 + fVar88 + *pfVar1;
        fVar82 = fVar82 + *pfVar13 + *pfVar16 + *pfVar19 + *pfVar22;
        fVar87 = fVar87 + *pfVar14 + *pfVar17 + *pfVar20 + *pfVar23;
        fVar98 = fVar98 + *pfVar15 + *pfVar18 + *pfVar21 + *pfVar24;
      } while (uVar44 - uVar35 != lVar38);
    }
    if ((uVar55 & 3) != 0) {
      pfVar39 = (float *)(*plVar5 + lVar38 * 0x40 + 0x10);
      do {
        uVar35 = uVar35 - 1;
        fVar63 = fVar63 + *pfVar39;
        fVar82 = fVar82 + pfVar39[1];
        fVar87 = fVar87 + pfVar39[2];
        fVar98 = fVar98 + pfVar39[3];
        pfVar39 = pfVar39 + 0x10;
      } while (uVar35 != 0);
    }
    if ((int)uVar55 < 1) goto LAB_00860340;
    uVar35 = 0;
    uVar65 = NEON_scvtf(CONCAT44(uVar55,uVar55),4);
    fVar64 = fVar64 / (float)uVar65;
    fVar72 = fVar72 / (float)((ulong)uVar65 >> 0x20);
    fVar63 = fVar64 * fVar63;
    fVar82 = fVar72 * fVar82;
    fVar64 = fVar64 * fVar87;
    fVar72 = fVar72 * fVar98;
    auVar68 = ZEXT816(0);
    iVar73 = uVar55 - 1;
    pfVar39 = (float *)(*plVar5 + 0x10);
    do {
      lVar38 = *plVar5 + (long)iVar73 * 0x40;
      iVar73 = (int)uVar35;
      auVar85._0_4_ = *pfVar39 - fVar63;
      auVar85._4_4_ = pfVar39[1] - fVar82;
      auVar85._8_4_ = pfVar39[2] - fVar64;
      auVar85._12_4_ = pfVar39[3] - fVar72;
      auVar91 = NEON_ext(auVar85,auVar85,4,1);
      auVar79._0_4_ = *(float *)(lVar38 + 0x10) - fVar63;
      auVar79._4_4_ = *(float *)(lVar38 + 0x14) - fVar82;
      auVar79._8_4_ = *(float *)(lVar38 + 0x18) - fVar64;
      auVar79._12_4_ = *(float *)(lVar38 + 0x1c) - fVar72;
      auVar97 = NEON_ext(auVar79,auVar79,4,1);
      uVar35 = uVar35 + 1;
      auVar80._0_4_ = auVar79._0_4_ * auVar91._0_4_ - auVar85._0_4_ * auVar97._0_4_;
      auVar80._4_4_ = auVar79._4_4_ * auVar91._4_4_ - auVar85._4_4_ * auVar97._4_4_;
      auVar80._8_4_ = auVar79._8_4_ * auVar85._0_4_ - auVar85._8_4_ * auVar79._0_4_;
      auVar80._12_4_ = auVar79._12_4_ * auVar85._4_4_ - auVar85._12_4_ * auVar79._4_4_;
      auVar97 = NEON_ext(auVar80,auVar80,4,1);
      auVar86._0_8_ = auVar97._0_8_;
      auVar86._8_4_ = auVar80._0_4_;
      auVar86._12_4_ = 0;
      auVar81._0_4_ = auVar68._0_4_ * auVar68._0_4_;
      auVar81._4_4_ = auVar68._4_4_ * auVar68._4_4_;
      auVar81._8_4_ = auVar68._8_4_ * auVar68._8_4_;
      auVar81._12_4_ = auVar68._12_4_ * auVar68._12_4_;
      auVar91 = NEON_ext(auVar81,auVar81,8,1);
      auVar71._0_4_ =
           -(uint)(auVar91._0_4_ + auVar81._0_4_ + auVar81._4_4_ <
                  auVar97._0_4_ * auVar97._0_4_ + auVar97._4_4_ * auVar97._4_4_ +
                  auVar80._0_4_ * auVar80._0_4_);
      auVar71._4_4_ = auVar71._0_4_;
      auVar71._8_4_ = auVar71._0_4_;
      auVar71._12_4_ = auVar71._0_4_;
      auVar68 = auVar68 ^ (auVar68 ^ auVar86) & auVar71;
      pfVar39 = pfVar39 + 0x10;
    } while (uVar44 != uVar35);
  }
  auVar62._0_4_ = auVar68._0_4_ * *(float *)(param_1 + 0x120);
  auVar62._4_4_ = auVar68._4_4_ * *(float *)(param_1 + 0x124);
  auVar62._8_4_ = auVar68._8_4_ * *(float *)(param_1 + 0x128);
  auVar62._12_4_ = auVar68._12_4_ * *(float *)(param_1 + 300);
  auVar68 = NEON_ext(auVar62,auVar62,8,1);
  if (auVar62._0_4_ + auVar62._4_4_ + auVar68._0_4_ < 0.0) {
    if (&local_88 == plVar5) {
      uVar44 = (ulong)(uint)local_80;
    }
    else {
      lVar38 = *plVar5;
      uVar55 = (uint)uVar44;
      if ((int)(local_80._4_4_ & 0x7fffffff) < (int)uVar55) {
        FUN_00861f20(&local_88,PTR_PTR_047d1a50,(long)(int)uVar55);
      }
      uVar32 = (uint)local_80;
      if ((int)uVar55 <= (int)(uint)local_80) {
        uVar32 = uVar55;
      }
      if ((local_88 != lVar38) && (0 < (int)uVar32)) {
        if (uVar32 == 1) {
          lVar37 = 0;
        }
        else {
          lVar37 = 0;
          pauVar49 = (undefined1 (*) [16])(lVar38 + 0x50);
          puVar40 = (undefined8 *)(local_88 + 0x50);
          do {
            uVar65 = *(undefined8 *)pauVar49[-4];
            puVar40[-7] = *(undefined8 *)(pauVar49[-4] + 8);
            puVar40[-8] = uVar65;
            puVar40[-5] = *(undefined8 *)(pauVar49[-3] + 8);
            uVar65 = *(undefined8 *)pauVar49[-3];
            puVar40[-4] = *(undefined8 *)pauVar49[-2];
            puVar40[-6] = uVar65;
            auVar68 = *pauVar49;
            lVar37 = lVar37 + 2;
            puVar40[1] = auVar68._8_8_;
            *puVar40 = auVar68._0_8_;
            puVar40[3] = *(undefined8 *)(pauVar49[1] + 8);
            uVar65 = *(undefined8 *)pauVar49[1];
            puVar40[4] = *(undefined8 *)pauVar49[2];
            puVar40[2] = uVar65;
            pauVar49 = pauVar49 + 8;
            puVar40 = puVar40 + 0x10;
          } while ((ulong)uVar32 - ((ulong)uVar32 & 1) != lVar37);
        }
        if ((uVar32 & 1) != 0) {
          lVar46 = lVar38 + lVar37 * 0x40;
          auVar68 = *(undefined1 (*) [16])(lVar46 + 0x10);
          lVar37 = local_88 + lVar37 * 0x40;
          *(long *)(lVar37 + 0x18) = auVar68._8_8_;
          *(long *)(lVar37 + 0x10) = auVar68._0_8_;
          *(undefined8 *)(lVar37 + 0x28) = *(undefined8 *)(lVar46 + 0x28);
          uVar65 = *(undefined8 *)(lVar46 + 0x20);
          *(undefined8 *)(lVar37 + 0x30) = *(undefined8 *)(lVar46 + 0x30);
          *(undefined8 *)(lVar37 + 0x20) = uVar65;
        }
      }
      if ((int)(uint)local_80 < (int)uVar55) {
        lVar38 = lVar38 + (long)(int)uVar32 * 0x40;
        lVar37 = local_88 + (long)(int)uVar32 * 0x40;
        uVar33 = uVar55 - uVar32 & 3;
        if (2 < uVar55 + ~uVar32) {
          iVar73 = (uVar55 - uVar32) - uVar33;
          lVar46 = lVar37;
          do {
            *(undefined8 *)(lVar46 + 0x10) = *(undefined8 *)(lVar38 + 0x10);
            lVar37 = lVar46 + 0x100;
            uVar65 = *(undefined8 *)(lVar38 + 0x18);
            uVar36 = *(undefined8 *)(lVar38 + 0x20);
            iVar73 = iVar73 + -4;
            uVar51 = *(undefined8 *)(lVar38 + 0x30);
            *(undefined8 *)(lVar46 + 0x28) = *(undefined8 *)(lVar38 + 0x28);
            *(undefined8 *)(lVar46 + 0x30) = uVar51;
            *(undefined8 *)(lVar46 + 0x18) = uVar65;
            *(undefined8 *)(lVar46 + 0x20) = uVar36;
            uVar65 = *(undefined8 *)(lVar38 + 0x58);
            uVar51 = *(undefined8 *)(lVar38 + 0x60);
            uVar36 = *(undefined8 *)(lVar38 + 0x68);
            *(undefined8 *)(lVar46 + 0x70) = *(undefined8 *)(lVar38 + 0x70);
            *(undefined8 *)(lVar46 + 0x60) = uVar51;
            uVar51 = *(undefined8 *)(lVar38 + 0x50);
            *(undefined8 *)(lVar46 + 0x68) = uVar36;
            *(undefined8 *)(lVar46 + 0x50) = uVar51;
            *(undefined8 *)(lVar46 + 0x58) = uVar65;
            *(undefined8 *)(lVar46 + 0x90) = *(undefined8 *)(lVar38 + 0x90);
            uVar65 = *(undefined8 *)(lVar38 + 0x98);
            uVar36 = *(undefined8 *)(lVar38 + 0xa0);
            uVar51 = *(undefined8 *)(lVar38 + 0xb0);
            *(undefined8 *)(lVar46 + 0xa8) = *(undefined8 *)(lVar38 + 0xa8);
            *(undefined8 *)(lVar46 + 0xb0) = uVar51;
            *(undefined8 *)(lVar46 + 0x98) = uVar65;
            *(undefined8 *)(lVar46 + 0xa0) = uVar36;
            *(undefined8 *)(lVar46 + 0xd0) = *(undefined8 *)(lVar38 + 0xd0);
            uVar36 = *(undefined8 *)(lVar38 + 0xf0);
            uVar65 = *(undefined8 *)(lVar38 + 0xd8);
            uVar51 = *(undefined8 *)(lVar38 + 0xe0);
            *(undefined8 *)(lVar46 + 0xe8) = *(undefined8 *)(lVar38 + 0xe8);
            *(undefined8 *)(lVar46 + 0xf0) = uVar36;
            lVar38 = lVar38 + 0x100;
            *(undefined8 *)(lVar46 + 0xd8) = uVar65;
            *(undefined8 *)(lVar46 + 0xe0) = uVar51;
            lVar46 = lVar37;
          } while (iVar73 != 0);
        }
        if (uVar33 != 0) {
          puVar40 = (undefined8 *)(lVar38 + 0x10);
          puVar43 = (undefined8 *)(lVar37 + 0x10);
          do {
            uVar65 = puVar40[3];
            uVar33 = uVar33 - 1;
            puVar43[1] = puVar40[1];
            puVar43[3] = uVar65;
            *puVar43 = *puVar40;
            uVar65 = puVar40[2];
            puVar43[4] = puVar40[4];
            puVar43[2] = uVar65;
            puVar40 = puVar40 + 8;
            puVar43 = puVar43 + 8;
          } while (uVar33 != 0);
        }
      }
      local_80._0_4_ = uVar55;
    }
    if (0 < (int)uVar44) {
      lVar37 = 0;
      lVar38 = 0;
      iVar73 = -1;
      do {
        iVar41 = (int)uVar44 + iVar73;
        iVar73 = iVar73 + -1;
        lVar46 = local_88 + (long)iVar41 * 0x40;
        lVar48 = *plVar5 + lVar37;
        lVar38 = lVar38 + 1;
        lVar37 = lVar37 + 0x40;
        auVar68 = *(undefined1 (*) [16])(lVar46 + 0x10);
        *(long *)(lVar48 + 0x18) = auVar68._8_8_;
        *(long *)(lVar48 + 0x10) = auVar68._0_8_;
        *(undefined8 *)(lVar48 + 0x28) = *(undefined8 *)(lVar46 + 0x28);
        uVar65 = *(undefined8 *)(lVar46 + 0x20);
        *(undefined8 *)(lVar48 + 0x30) = *(undefined8 *)(lVar46 + 0x30);
        *(undefined8 *)(lVar48 + 0x20) = uVar65;
        uVar44 = (ulong)(int)(uint)local_80;
      } while (lVar38 < (long)uVar44);
    }
  }
  if (0 < *(int *)(param_1 + 0x88)) {
    lVar38 = 0;
    lVar37 = 0;
    do {
      lVar48 = FUN_0086075c(pcVar6);
      lVar46 = *(long *)(param_1 + 0x80) + lVar38;
      lVar38 = lVar38 + 0x40;
      auVar68 = *(undefined1 (*) [16])(lVar46 + 0x10);
      lVar37 = lVar37 + 1;
      *(long *)(lVar48 + 0x18) = auVar68._8_8_;
      *(long *)(lVar48 + 0x10) = auVar68._0_8_;
      uVar65 = *(undefined8 *)(lVar46 + 0x20);
      uVar36 = *(undefined8 *)(lVar46 + 0x30);
      *(undefined8 *)(lVar48 + 0x28) = *(undefined8 *)(lVar46 + 0x28);
      *(undefined8 *)(lVar48 + 0x30) = uVar36;
      *(undefined8 *)(lVar48 + 0x20) = uVar65;
      *(undefined4 *)(lVar48 + 0x30) = 0;
    } while (lVar37 < *(int *)(param_1 + 0x88));
  }
  bVar28 = false;
  param_1[0x88] = '\0';
  param_1[0x89] = '\0';
  param_1[0x8a] = '\0';
  param_1[0x8b] = '\0';
LAB_00860644:
  uVar55 = local_80._4_4_;
  uVar44 = (ulong)local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < (int)uVar55) && (local_88 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_88,uVar44 << 6);
  }
  bVar29 = true;
  if (!bVar28) goto switchD_0085f740_default;
  goto LAB_0085f71c;
switchD_0085f740_caseD_0:
  lVar37 = FUN_0086075c(pcVar6);
  lVar38 = *plVar5;
  auVar59 = *(undefined1 (*) [16])(lVar38 + 0x10);
  *(long *)(lVar37 + 0x18) = auVar59._8_8_;
  *(long *)(lVar37 + 0x10) = auVar59._0_8_;
  uVar99 = *(undefined8 *)(lVar38 + 0x20);
  uVar65 = *(undefined8 *)(lVar38 + 0x30);
  *(undefined8 *)(lVar37 + 0x28) = *(undefined8 *)(lVar38 + 0x28);
  *(undefined8 *)(lVar37 + 0x30) = uVar65;
  *(undefined8 *)(lVar37 + 0x20) = uVar99;
LAB_00860700:
  *(undefined4 *)(lVar37 + 0x30) = 0;
  goto switchD_0085f740_default;
}


