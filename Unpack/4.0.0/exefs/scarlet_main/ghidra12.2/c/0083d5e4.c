/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0083d5e4; name: FUN_0083d5e4
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0083d5e4(long *param_1,long *param_2,long *param_3)

{
  byte *pbVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined2 uVar9;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined1 *puVar24;
  long lVar25;
  int iVar26;
  long lVar27;
  ulong uVar28;
  long *plVar29;
  long lVar30;
  long lVar31;
  undefined8 *puVar32;
  uint uVar33;
  ulong uVar34;
  long *plVar35;
  long lVar36;
  undefined8 *puVar37;
  byte *pbVar38;
  undefined2 *puVar39;
  uint uVar40;
  uint uVar41;
  ulong *puVar42;
  undefined1 (*pauVar43) [12];
  uint *puVar44;
  int iVar45;
  ulong *puVar46;
  ulong *puVar47;
  long lVar48;
  uint uVar49;
  undefined1 *puVar50;
  undefined8 *puVar51;
  long lVar52;
  undefined1 auVar53 [12];
  undefined1 auVar54 [12];
  undefined1 auVar55 [12];
  undefined1 auVar56 [12];
  undefined1 auVar57 [12];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  ulong uVar70;
  undefined8 uVar71;
  float fVar72;
  undefined1 auVar73 [12];
  float fVar85;
  undefined1 auVar74 [16];
  float fVar86;
  float fVar87;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined8 uVar96;
  int iVar97;
  undefined8 uVar98;
  long local_9a8;
  uint local_96c;
  uint local_968;
  uint local_920 [2];
  undefined1 *local_918;
  undefined8 local_910;
  ulong local_908;
  undefined8 local_900;
  undefined4 local_8f8;
  undefined8 local_8f0;
  long local_8e0;
  long local_8d8;
  undefined8 local_8d0;
  undefined8 uStack_8c8;
  float *local_8c0;
  undefined8 uStack_8b8;
  char local_8b0;
  uint local_8ac;
  int local_8a8 [2];
  undefined8 local_8a0;
  undefined8 uStack_898;
  long lStack_890;
  long lStack_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  float fStack_7e8;
  undefined1 auStack_7e4 [4];
  undefined8 uStack_7e0;
  float local_7d8;
  float fStack_7d4;
  float local_7d0;
  undefined1 local_7cc [4];
  undefined8 uStack_7c8;
  float local_7c0;
  float fStack_7bc;
  float fStack_7b8;
  float fStack_7b0;
  float local_7ac;
  float local_7a8;
  float local_7a0;
  undefined8 uStack_798;
  float local_2b0;
  float fStack_2ac;
  float fStack_2a8;
  undefined1 local_2a0 [16];
  long local_290;
  float local_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined8 local_250;
  float fStack_248;
  float fStack_244;
  undefined2 local_240;
  undefined4 local_23c;
  ulong uStack_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined4 local_220;
  undefined1 local_21c;
  undefined2 local_218;
  undefined4 local_214;
  ulong uStack_210;
  undefined4 local_208;
  undefined4 local_204;
  
  pbVar1 = (byte *)CONCAT44(uStack_7c8._4_4_,(undefined4)uStack_7c8);
  if ((int)param_1[1] != 0) {
    uVar28 = param_1[3];
    lVar31 = param_1[2];
    auVar59 = *(undefined1 (*) [16])(param_1 + 4);
    auVar75 = *(undefined1 (*) [16])(param_3 + 6);
    auVar90._0_4_ = (float)lVar31 - *(float *)(param_3 + 8);
    auVar90._4_4_ = (float)((ulong)lVar31 >> 0x20) - *(float *)((long)param_3 + 0x44);
    auVar90._8_4_ = (float)uVar28 - *(float *)(param_3 + 9);
    auVar90._12_4_ = (float)(uVar28 >> 0x20) - *(float *)((long)param_3 + 0x4c);
    auVar74._0_4_ = auVar59._0_4_ + *(float *)(param_3 + 8);
    auVar74._4_4_ = auVar59._4_4_ + *(float *)((long)param_3 + 0x44);
    auVar74._8_4_ = auVar59._8_4_ + *(float *)(param_3 + 9);
    auVar74._12_4_ = auVar59._12_4_ + *(float *)((long)param_3 + 0x4c);
    auVar90 = NEON_fmax(auVar90,auVar75,4);
    auVar74 = NEON_fmin(auVar74,auVar90,4);
    fVar72 = auVar75._0_4_ - auVar74._0_4_;
    fVar85 = auVar75._4_4_ - auVar74._4_4_;
    fVar86 = auVar75._8_4_ - auVar74._8_4_;
    fVar87 = auVar75._12_4_ - auVar74._12_4_;
    auVar75._0_4_ = fVar72 * fVar72;
    auVar75._4_4_ = fVar85 * fVar85;
    auVar75._8_4_ = fVar86 * fVar86;
    auVar75._12_4_ = fVar87 * fVar87;
    auVar74 = NEON_ext(auVar75,auVar75,8,1);
    if (auVar75._0_4_ + auVar75._4_4_ + auVar74._0_4_ <= (float)param_3[10]) {
      lVar25 = param_2[1];
      uVar98 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x1e0);
      puVar47 = (ulong *)((ulong)local_920 | 4);
      puVar51 = (undefined8 *)((ulong)local_920 | 8);
      fVar72 = (float)uVar98;
      auVar75 = *(undefined1 (*) [16])(PTR_DAT_047d19b0 + 0x60);
      uVar96 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x50);
      uVar34 = 0;
      puVar46 = (ulong *)((ulong)&local_880 | 4);
      pbVar38 = (byte *)(*param_1 + (long)param_1);
LAB_0083d75c:
      while( true ) {
        uStack_7c8._0_4_ = SUB84(pbVar1,0);
        fVar85 = (float)((ulong)uVar98 >> 0x20);
        if ((pbVar38[3] & 1) == 0) break;
        uVar70 = (long)(int)uVar34 + 1;
        local_7d0 = (float)uVar70;
        fStack_7b0 = auVar59._0_4_;
        fVar87 = (float)lVar31;
        local_7ac = auVar59._4_4_;
        fVar67 = (float)((ulong)lVar31 >> 0x20);
        fVar86 = auVar59._8_4_;
        fStack_7b8 = (float)uVar28;
        fVar68 = (fStack_7b0 - fVar87) * fVar72;
        fVar85 = (local_7ac - fVar67) * fVar85;
        fVar69 = (fVar86 - fStack_7b8) * fVar72;
        local_7a0 = (float)((int)uVar34 + (pbVar38[3] & 0xfe));
        pbVar1 = (byte *)((long)param_1 + uVar70 * 4 + *param_1);
        uStack_798 = (byte *)((long)param_1 + (long)(int)local_7a0 * 4 + *param_1);
        uStack_7c8._0_4_ = SUB84(pbVar1,0);
        uStack_7c8._4_4_ = (undefined4)((ulong)pbVar1 >> 0x20);
        bVar15 = *pbVar1 >> 4;
        bVar5 = *pbVar1 & 0xf;
        bVar16 = pbVar1[1] >> 4;
        bVar6 = pbVar1[1] & 0xf;
        bVar17 = pbVar1[2] >> 4;
        bVar7 = pbVar1[2] & 0xf;
        bVar18 = *uStack_798 >> 4;
        bVar8 = *uStack_798 & 0xf;
        auStack_7e4 = (undefined1  [4])0x0;
        fStack_7d4 = 0.0;
        bVar19 = uStack_798[1] >> 4;
        bVar20 = uStack_798[2] >> 4;
        bVar21 = uStack_798[1] & 0xf;
        bVar22 = uStack_798[2] & 0xf;
        fVar88 = fVar87 + (float)(byte)(bVar15 * bVar15) * fVar68;
        fVar93 = fVar67 + (float)(byte)(bVar16 * bVar16) * fVar85;
        local_7f0 = CONCAT44(fVar93,fVar88);
        fStack_7e8 = fStack_7b8 + (float)(byte)(bVar17 * bVar17) * fVar69;
        uStack_7e0._0_4_ = fStack_7b0 - (float)(byte)(bVar5 * bVar5) * fVar68;
        uStack_7e0._4_4_ = local_7ac - (float)(byte)(bVar6 * bVar6) * fVar85;
        local_7d8 = fVar86 - (float)(byte)(bVar7 * bVar7) * fVar69;
        local_7c0 = fVar87 + (float)(byte)(bVar18 * bVar18) * fVar68;
        fStack_7bc = fVar67 + (float)(byte)(bVar19 * bVar19) * fVar85;
        fStack_7b8 = fStack_7b8 + (float)(byte)(bVar20 * bVar20) * fVar69;
        fStack_7b0 = fStack_7b0 - (float)(byte)(bVar8 * bVar8) * fVar68;
        local_7a8 = fVar86 - (float)(byte)(bVar22 * bVar22) * fVar69;
        local_7ac = local_7ac - (float)(byte)(bVar21 * bVar21) * fVar85;
        uVar28 = (ulong)(uint)fStack_7e8;
        auVar59._4_4_ = uStack_7e0._4_4_;
        auVar59._0_4_ = (float)uStack_7e0;
        auVar59._8_4_ = local_7d8;
        auVar59._12_4_ = 0;
        auVar74 = *(undefined1 (*) [16])(param_3 + 6);
        fVar85 = *(float *)(param_3 + 8);
        fVar86 = *(float *)((long)param_3 + 0x44);
        fVar87 = *(float *)(param_3 + 9);
        fVar67 = *(float *)((long)param_3 + 0x4c);
        auVar89._0_4_ = fVar85 + (float)uStack_7e0;
        auVar89._4_4_ = fVar86 + uStack_7e0._4_4_;
        auVar89._8_4_ = fVar87 + local_7d8;
        auVar89._12_4_ = fVar67 + 0.0;
        auVar76._0_4_ = fVar88 - fVar85;
        auVar76._4_4_ = fVar93 - fVar86;
        auVar76._8_4_ = fStack_7e8 - fVar87;
        auVar76._12_4_ = 0.0 - fVar67;
        auVar90 = NEON_fmax(auVar76,auVar74,4);
        auVar90 = NEON_fmin(auVar89,auVar90,4);
        fVar68 = auVar74._0_4_ - auVar90._0_4_;
        fVar69 = auVar74._4_4_ - auVar90._4_4_;
        fVar88 = auVar74._8_4_ - auVar90._8_4_;
        fVar93 = auVar74._12_4_ - auVar90._12_4_;
        fVar68 = fVar68 * fVar68;
        fVar69 = fVar69 * fVar69;
        fVar88 = fVar88 * fVar88;
        fVar93 = fVar93 * fVar93;
        auVar23._4_4_ = local_7ac;
        auVar23._0_4_ = fStack_7b0;
        auVar23._8_4_ = local_7a8;
        auVar23._12_4_ = 0;
        auVar94._0_4_ = local_7c0 - fVar85;
        auVar94._4_4_ = fStack_7bc - fVar86;
        auVar94._8_4_ = fStack_7b8 - fVar87;
        auVar94._12_4_ = 0.0 - fVar67;
        auVar91._0_4_ = fVar85 + fStack_7b0;
        auVar91._4_4_ = fVar86 + local_7ac;
        auVar91._8_4_ = fVar87 + local_7a8;
        auVar91._12_4_ = fVar67 + 0.0;
        auVar90 = NEON_fmax(auVar94,auVar74,4);
        auVar90 = NEON_fmin(auVar91,auVar90,4);
        auVar13._4_4_ = fVar69;
        auVar13._0_4_ = fVar68;
        auVar13._8_4_ = fVar88;
        auVar13._12_4_ = fVar93;
        auVar14._4_4_ = fVar69;
        auVar14._0_4_ = fVar68;
        auVar14._8_4_ = fVar88;
        auVar14._12_4_ = fVar93;
        auVar95 = NEON_ext(auVar13,auVar14,8,1);
        fVar85 = auVar74._0_4_ - auVar90._0_4_;
        fVar86 = auVar74._4_4_ - auVar90._4_4_;
        fVar87 = auVar74._8_4_ - auVar90._8_4_;
        fVar67 = auVar74._12_4_ - auVar90._12_4_;
        auVar92._0_4_ = fVar85 * fVar85;
        auVar92._4_4_ = fVar86 * fVar86;
        auVar92._8_4_ = fVar87 * fVar87;
        auVar92._12_4_ = fVar67 * fVar67;
        auVar74 = NEON_ext(auVar92,auVar92,8,1);
        fVar86 = fVar68 + fVar69 + auVar95._0_4_;
        fVar85 = auVar92._0_4_ + auVar92._4_4_ + auVar74._0_4_;
        bVar5 = fVar86 <= (float)param_3[10] | (fVar85 <= (float)param_3[10]) << 1;
        if (bVar5 == 1) {
          uVar34 = uVar70 & 0xffffffff;
          pbVar38 = pbVar1;
          lVar31 = local_7f0;
        }
        else if (bVar5 == 2) {
          uVar34 = (ulong)(uint)local_7a0;
          uVar28 = (ulong)(uint)fStack_7b8;
          pbVar38 = uStack_798;
          auVar59 = auVar23;
          lVar31 = CONCAT44(fStack_7bc,local_7c0);
        }
        else {
          if (bVar5 != 3) goto LAB_0083ed00;
          *(uint *)(param_3 + 0xb) = (uint)(fVar85 < fVar86);
          iVar97 = (int)param_2[1];
          lVar31 = (long)iVar97;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar97) {
            FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar31 + 1);
            uStack_7c8 = pbVar1;
            pbVar1 = uStack_7c8;
            uStack_7c8._4_4_ = SUB84(pbVar1,4);
            local_7cc = SUB84(_local_7cc,0);
            uStack_7c8._0_4_ = SUB84(pbVar1,0);
            iVar97 = (int)param_2[1];
          }
          uStack_7c8._0_4_ = SUB84(pbVar1,0);
          lVar30 = (ulong)(fVar85 >= fVar86) * 0x30;
          *(int *)(param_2 + 1) = (int)(lVar31 + 1);
          puVar32 = (undefined8 *)(*param_2 + (long)iVar97 * 0x30);
          auVar73._0_8_ = *(undefined8 *)(auStack_7e4 + lVar30 + -0xc);
          puVar32[1] = *(undefined8 *)(auStack_7e4 + lVar30 + -4);
          *puVar32 = auVar73._0_8_;
          auVar73._0_8_ = *(undefined8 *)(auStack_7e4 + lVar30 + 4);
          puVar32[3] = *(undefined8 *)(local_7cc + lVar30 + -0xc);
          puVar32[2] = auVar73._0_8_;
          *(undefined4 *)(puVar32 + 4) = *(undefined4 *)(local_7cc + lVar30 + -4);
          lVar31 = (ulong)(fVar85 < fVar86) * 0x30;
          uVar28 = *(ulong *)(auStack_7e4 + lVar31 + -4);
          uVar34 = (ulong)*(uint *)(local_7cc + lVar31 + -4);
          pbVar38 = *(byte **)(local_7cc + lVar31 + 4);
          auVar59 = *(undefined1 (*) [16])(auStack_7e4 + lVar31 + 4);
          lVar31 = *(long *)(auStack_7e4 + lVar31 + -0xc);
        }
      }
      lVar48 = *param_3;
      bVar8 = pbVar38[3] >> 1;
      lVar30 = *(long *)(lVar48 + 0x68);
      lVar31 = lVar30 + (ulong)bVar8 * 4;
      bVar5 = *(byte *)(lVar31 + 1);
      bVar7 = *(byte *)(lVar31 + 2);
      bVar6 = *(byte *)(lVar31 + 3);
      uVar33 = (uint)bVar7;
      if ((uint)bVar5 == (uint)bVar6) {
        if (uVar33 == 4) {
          uVar40 = 4;
          goto LAB_0083da7c;
        }
        if (uVar33 == 3) {
          uVar40 = 3;
          goto LAB_0083da7c;
        }
      }
      else {
        uVar40 = 1;
        if (uVar33 != bVar6) {
          uVar40 = 2;
        }
LAB_0083da7c:
        lVar52 = (ulong)bVar8 * 4;
        uVar49 = (uint)bVar8;
        if (uVar40 == 4) {
          puVar2 = (ushort *)
                   (*(long *)(lVar48 + 0x80) +
                   (((ulong)(*(ushort *)
                              (*(long *)(lVar48 + 0x80) + (ulong)*(byte *)(lVar30 + lVar52) * 2) >>
                            6) & 3) + (ulong)*(byte *)(lVar30 + lVar52)) * 2);
          plVar35 = (long *)(*(long *)(lVar48 + 0xd0) + 0x70);
          plVar35 = (long *)((long)plVar35 +
                            ((long)(int)((uint)puVar2[1] << 0x10) | (ulong)*puVar2) * 0x40 +
                            *plVar35);
          lVar36 = plVar35[6];
          lVar30 = plVar35[4];
          lVar27 = plVar35[5];
          lVar31 = 0;
          if (lVar36 != 0) {
            lVar31 = lVar36 + (long)(plVar35 + 6);
          }
          local_9a8 = 0;
          if ((*(ushort *)(lVar31 + 0x1a) & 1) != 0) {
            local_9a8 = lVar31;
          }
          iVar97 = *(int *)(local_9a8 + 0x20);
          local_8e0 = *plVar35;
          local_8d8 = plVar35[1];
          uStack_8c8 = (ulong)SUB164(*(undefined1 (*) [16])(plVar35 + 2),8);
          local_8d0 = SUB168(*(undefined1 (*) [16])(plVar35 + 2),0);
          FUN_031cc2c4(&local_280,&local_8e0);
          uStack_7c8 = pbVar1;
          pbVar1 = uStack_7c8;
          uStack_7c8._4_4_ = SUB84(pbVar1,4);
          local_7cc = SUB84(_local_7cc,0);
          uStack_7c8._0_4_ = SUB84(pbVar1,0);
          fStack_248 = (float)uStack_8c8;
          fStack_244 = uStack_8c8._4_4_;
          local_250 = local_8d0;
          lVar31 = *(long *)(lVar48 + 0xd8);
          if (*(char *)(lVar31 + 0x30) != '\0') {
            fStack_248 = (float)uStack_8c8 * (float)*(undefined8 *)(lVar31 + 0x48);
            fStack_244 = uStack_8c8._4_4_ * (float)((ulong)*(undefined8 *)(lVar31 + 0x48) >> 0x20);
            local_250 = CONCAT44(local_8d0._4_4_ *
                                 (float)((ulong)*(undefined8 *)(lVar31 + 0x40) >> 0x20),
                                 (float)local_8d0 * (float)*(undefined8 *)(lVar31 + 0x40));
          }
          auVar84._12_4_ = auVar75._0_4_;
          auVar84._8_4_ = (int)lVar27;
          FUN_031cc5e4(&local_870,*(undefined8 *)(lVar31 + 0x20),&local_280);
          uStack_7c8 = pbVar1;
          pbVar1 = uStack_7c8;
          uStack_7c8._4_4_ = SUB84(pbVar1,4);
          uStack_7c8._0_4_ = SUB84(pbVar1,0);
          FUN_031cc66c(&local_830,&local_870,*(undefined8 *)(*(long *)(lVar48 + 200) + 0x20));
          uStack_7c8 = pbVar1;
          pbVar1 = uStack_7c8;
          uStack_7c8._4_4_ = SUB84(pbVar1,4);
          uStack_7c8._0_4_ = SUB84(pbVar1,0);
          uVar9 = *(undefined2 *)((long)plVar35 + 0x2c);
          local_96c = (*(byte *)((long)plVar35 + 0x1e) >> 5 ^ 0xffffffff) & 1;
          local_968 = *(uint *)(local_9a8 + 0x44);
          auVar84._0_8_ = lVar30;
          lVar31 = 1;
        }
        else {
          iVar97 = *(int *)(*(long *)(lVar48 + 0xd0) + 0x20);
          if (uVar40 < 3) {
            bVar8 = *(byte *)(lVar30 + lVar52);
            puVar32 = (undefined8 *)(lVar48 + 0x10);
            uVar41 = *(uint *)(lVar48 + 0x90);
            if ((int)(uint)bVar8 < (int)uVar41) {
              uVar4 = *(uint *)(*(long *)(lVar48 + 0x70) + (ulong)bVar8 * 4);
              auVar57 = SUB1612(*(undefined1 (*) [16])(lVar48 + 0x30),0);
              fVar85 = (float)*(undefined8 *)(lVar48 + 0x48);
              auVar73._0_8_ = *(undefined8 *)(lVar48 + 0x40);
              auVar53._0_8_ = CONCAT44(uVar4 >> 0xb,uVar4) & 0x7ff000007ff;
              auVar53._8_4_ = uVar4 >> 0x16;
            }
            else {
              auVar57 = SUB1612(*(undefined1 (*) [16])(lVar48 + 0x10),0);
              fVar85 = (float)*(undefined8 *)(lVar48 + 0x28);
              auVar73._0_8_ = *(undefined8 *)(lVar48 + 0x20);
              uVar28 = *(ulong *)(*(long *)(lVar48 + 0x78) +
                                 (ulong)*(ushort *)(*(long *)(lVar48 + 0x80) + (ulong)bVar8 * 2) * 8
                                 );
              auVar53._0_8_ = CONCAT44((int)(uVar28 >> 0x15),(int)uVar28) & 0x1fffff001fffff;
              auVar53._8_4_ = (uint)(uVar28 >> 0x2a);
            }
            auVar58._12_4_ = 0;
            auVar58._0_12_ = auVar53;
            auVar59 = NEON_scvtf(auVar58,4);
            fVar86 = auVar57._0_4_ + (float)auVar73._0_8_ * auVar59._0_4_;
            fVar87 = auVar57._4_4_ + (float)((ulong)auVar73._0_8_ >> 0x20) * auVar59._4_4_;
            local_7f0 = CONCAT44(fVar87,fVar86);
            fStack_7e8 = auVar57._8_4_ + fVar85 * auVar59._8_4_;
            if ((int)(uint)bVar5 < (int)uVar41) {
              fVar85 = (float)*(undefined8 *)(lVar48 + 0x48);
              auVar73._0_8_ = *(undefined8 *)(lVar48 + 0x40);
              uVar4 = *(uint *)(*(long *)(lVar48 + 0x70) + (ulong)(uint)bVar5 * 4);
              auVar54._0_8_ = CONCAT44(uVar4 >> 0xb,uVar4) & 0x7ff000007ff;
              auVar54._8_4_ = uVar4 >> 0x16;
              puVar37 = (undefined8 *)(lVar48 + 0x30);
            }
            else {
              fVar85 = (float)*(undefined8 *)(lVar48 + 0x28);
              auVar73._0_8_ = *(undefined8 *)(lVar48 + 0x20);
              uVar28 = *(ulong *)(*(long *)(lVar48 + 0x78) +
                                 (ulong)*(ushort *)(*(long *)(lVar48 + 0x80) + (ulong)bVar5 * 2) * 8
                                 );
              auVar54._0_8_ = CONCAT44((int)(uVar28 >> 0x15),(int)uVar28) & 0x1fffff001fffff;
              auVar54._8_4_ = (uint)(uVar28 >> 0x2a);
              puVar37 = puVar32;
            }
            auVar60._12_4_ = 0;
            auVar60._0_12_ = auVar54;
            auVar59 = NEON_scvtf(auVar60,4);
            auStack_7e4 = (undefined1  [4])((float)*puVar37 + (float)auVar73._0_8_ * auVar59._0_4_);
            uStack_7e0._0_4_ =
                 (float)((ulong)*puVar37 >> 0x20) +
                 (float)((ulong)auVar73._0_8_ >> 0x20) * auVar59._4_4_;
            uStack_7e0._4_4_ = (float)puVar37[1] + fVar85 * auVar59._8_4_;
            if (uVar41 == uVar33 || (int)uVar41 < (int)(uint)bVar7) {
              fVar85 = (float)*(undefined8 *)(lVar48 + 0x28);
              auVar73._0_8_ = *(undefined8 *)(lVar48 + 0x20);
              uVar28 = *(ulong *)(*(long *)(lVar48 + 0x78) +
                                 (ulong)*(ushort *)(*(long *)(lVar48 + 0x80) + (ulong)bVar7 * 2) * 8
                                 );
              auVar55._0_8_ = CONCAT44((int)(uVar28 >> 0x15),(int)uVar28) & 0x1fffff001fffff;
              auVar55._8_4_ = (uint)(uVar28 >> 0x2a);
            }
            else {
              fVar85 = (float)*(undefined8 *)(lVar48 + 0x48);
              auVar73._0_8_ = *(undefined8 *)(lVar48 + 0x40);
              uVar4 = *(uint *)(*(long *)(lVar48 + 0x70) + (ulong)bVar7 * 4);
              auVar55._0_8_ = CONCAT44(uVar4 >> 0xb,uVar4) & 0x7ff000007ff;
              auVar55._8_4_ = uVar4 >> 0x16;
              puVar32 = (undefined8 *)(lVar48 + 0x30);
            }
            auVar61._12_4_ = 0;
            auVar61._0_12_ = auVar55;
            auVar59 = NEON_scvtf(auVar61,4);
            local_7d8 = (float)*puVar32 + (float)auVar73._0_8_ * auVar59._0_4_;
            fStack_7d4 = (float)((ulong)*puVar32 >> 0x20) +
                         (float)((ulong)auVar73._0_8_ >> 0x20) * auVar59._4_4_;
            local_7d0 = (float)puVar32[1] + fVar85 * auVar59._8_4_;
            if (uVar33 == bVar6) {
              local_7cc = (undefined1  [4])local_7d8;
              fVar67 = fStack_7d4;
              fVar85 = local_7d0;
            }
            else {
              if ((int)(uint)bVar6 < (int)uVar41) {
                uVar33 = *(uint *)(*(long *)(lVar48 + 0x70) + (ulong)(uint)bVar6 * 4);
                auVar57 = SUB1612(*(undefined1 (*) [16])(lVar48 + 0x30),0);
                fVar85 = (float)*(undefined8 *)(lVar48 + 0x48);
                auVar73._0_8_ = *(undefined8 *)(lVar48 + 0x40);
                auVar56._0_8_ = CONCAT44(uVar33 >> 0xb,uVar33) & 0x7ff000007ff;
                auVar56._8_4_ = uVar33 >> 0x16;
              }
              else {
                auVar57 = SUB1612(*(undefined1 (*) [16])(lVar48 + 0x10),0);
                fVar85 = (float)*(undefined8 *)(lVar48 + 0x28);
                auVar73._0_8_ = *(undefined8 *)(lVar48 + 0x20);
                uVar28 = *(ulong *)(*(long *)(lVar48 + 0x78) +
                                   (ulong)*(ushort *)(*(long *)(lVar48 + 0x80) + (ulong)bVar6 * 2) *
                                   8);
                auVar56._0_8_ = CONCAT44((int)(uVar28 >> 0x15),(int)uVar28) & 0x1fffff001fffff;
                auVar56._8_4_ = (uint)(uVar28 >> 0x2a);
              }
              auVar62._12_4_ = 0;
              auVar62._0_12_ = auVar56;
              auVar59 = NEON_scvtf(auVar62,4);
              local_7cc = (undefined1  [4])(auVar57._0_4_ + (float)auVar73._0_8_ * auVar59._0_4_);
              fVar67 = auVar57._4_4_ + (float)((ulong)auVar73._0_8_ >> 0x20) * auVar59._4_4_;
              fVar85 = auVar57._8_4_ + fVar85 * auVar59._8_4_;
            }
            if (uVar40 != 2) {
              pbVar1 = (byte *)CONCAT44(fVar85,fVar67);
              local_968 = 3;
              goto LAB_0083e580;
            }
            pbVar1 = (byte *)CONCAT44(fVar85,fVar67);
            if (*(byte *)(lVar31 + 3) < (*(byte *)(lVar31 + 1) & *(byte *)(lVar48 + 0x58))) {
              local_968 = 4;
              goto LAB_0083e580;
            }
            lVar31 = 2;
            uStack_798 = (byte *)CONCAT44(uStack_798._4_4_,fVar87);
            pbVar1 = (byte *)CONCAT44(fStack_7e8,fVar87);
            local_968 = 3;
            local_7c0 = fVar86;
            fStack_7bc = fVar87;
            fStack_7b8 = fStack_7e8;
            fStack_7b0 = fStack_7d4;
            local_7ac = local_7d0;
            local_7a8 = (float)local_7cc;
            local_7a0 = fVar85;
            local_7cc = (undefined1  [4])fVar86;
          }
          else {
            lVar31 = *(long *)(lVar48 + 0x80);
            uVar28 = (ulong)*(byte *)(lVar30 + lVar52);
            uVar10 = *(ushort *)(lVar31 + uVar28 * 2);
            uVar11 = uVar10 >> 4 & 3;
            if (uVar11 == 0) {
              uVar28 = (ulong)*(ushort *)(lVar31 + uVar28 * 2 + 2);
              if (uVar10 < 0x7000) {
                local_968 = (uint)(uVar10 >> 8);
LAB_0083e0fc:
                lVar27 = *(long *)(lVar48 + 0x78) + uVar28 * 8;
                if (1 < local_968) goto LAB_0083e1f4;
                uVar28 = 0;
              }
              else {
                lVar27 = *(long *)(lVar48 + 0x78) + uVar28 * 8;
                local_968 = 0x70;
LAB_0083e1f4:
                uVar71 = *(undefined8 *)(lVar48 + 0x18);
                auVar73._0_8_ = *(undefined8 *)(lVar48 + 0x10);
                fVar85 = *(float *)(lVar48 + 0x20);
                fVar86 = *(float *)(lVar48 + 0x24);
                fVar87 = *(float *)(lVar48 + 0x28);
                uVar28 = 0;
                puVar42 = (ulong *)(lVar27 + 8);
                puVar32 = (undefined8 *)auStack_7e4;
                do {
                  uVar34 = puVar42[-1];
                  auVar77._0_8_ = CONCAT44((int)(uVar34 >> 0x15),(int)uVar34) & 0x1fffff001fffff;
                  auVar77._8_4_ = (uint)(uVar34 >> 0x2a);
                  auVar77._12_4_ = 0;
                  auVar59 = NEON_scvtf(auVar77,4);
                  uVar28 = uVar28 + 2;
                  fVar67 = (float)auVar73._0_8_;
                  fVar68 = (float)((ulong)auVar73._0_8_ >> 0x20);
                  fVar69 = (float)uVar71;
                  *(ulong *)((long)puVar32 + -0xc) =
                       CONCAT44(fVar68 + fVar86 * auVar59._4_4_,fVar67 + fVar85 * auVar59._0_4_);
                  *(float *)((long)puVar32 + -4) = fVar69 + fVar87 * auVar59._8_4_;
                  uVar34 = *puVar42;
                  auVar78._0_8_ = CONCAT44((int)(uVar34 >> 0x15),(int)uVar34) & 0x1fffff001fffff;
                  auVar78._8_4_ = (uint)(uVar34 >> 0x2a);
                  auVar78._12_4_ = 0;
                  auVar59 = NEON_scvtf(auVar78,4);
                  *puVar32 = CONCAT44(fVar68 + fVar86 * auVar59._4_4_,
                                      fVar67 + fVar85 * auVar59._0_4_);
                  *(float *)(puVar32 + 1) = fVar69 + fVar87 * auVar59._8_4_;
                  puVar42 = puVar42 + 2;
                  puVar32 = puVar32 + 3;
                } while ((long)uVar28 < (long)(int)(local_968 - 1));
              }
              if ((int)uVar28 < (int)local_968) {
                uVar34 = *(ulong *)(lVar27 + (uVar28 & 0xffffffff) * 8);
                auVar64._0_8_ = CONCAT44((int)(uVar34 >> 0x15),(int)uVar34) & 0x1fffff001fffff;
                auVar64._8_4_ = (uint)(uVar34 >> 0x2a);
                auVar64._12_4_ = 0;
                puVar32 = (undefined8 *)(auStack_7e4 + (uVar28 & 0xffffffff) * 0xc + -0xc);
                auVar59 = NEON_scvtf(auVar64,4);
                auVar73._0_8_ =
                     CONCAT44(*(float *)(lVar48 + 0x14) +
                              (float)((ulong)*(undefined8 *)(lVar48 + 0x20) >> 0x20) * auVar59._4_4_
                              ,*(float *)(lVar48 + 0x10) +
                               (float)*(undefined8 *)(lVar48 + 0x20) * auVar59._0_4_);
                fVar87 = *(float *)(lVar48 + 0x18) +
                         (float)*(undefined8 *)(lVar48 + 0x28) * auVar59._8_4_;
LAB_0083e554:
                uStack_7c8 = pbVar1;
                *puVar32 = auVar73._0_8_;
                *(float *)(puVar32 + 1) = fVar87;
                pbVar1 = uStack_7c8;
                _local_7cc = (ulong)(uint)local_7cc;
              }
            }
            else {
              if (uVar33 == 4 || (uint)bVar5 != (uint)bVar6) {
                plVar35 = *(long **)(lVar48 + 0x60);
LAB_0083df64:
                lVar27 = *plVar35;
                if (0 < (int)*(uint *)(plVar35 + 1)) {
                  uVar34 = 0;
                  pbVar38 = (byte *)((long)plVar35 + lVar27 + 3);
                  do {
                    if (((*pbVar38 & 1) == 0) && (*pbVar38 >> 1 == uVar49)) {
                      auVar63 = *(undefined1 (*) [16])(plVar35 + 2);
                      auVar57 = auVar63._0_12_;
                      auVar59 = *(undefined1 (*) [16])(plVar35 + 4);
                      auVar73 = auVar59._0_12_;
                      if ((int)uVar34 == 0) goto LAB_0083e0d0;
                      goto LAB_0083dfbc;
                    }
                    uVar34 = uVar34 + 1;
                    pbVar38 = pbVar38 + 4;
                  } while (*(uint *)(plVar35 + 1) != uVar34);
                }
                auVar63 = *(undefined1 (*) [16])(plVar35 + 2);
                auVar59 = *(undefined1 (*) [16])(plVar35 + 4);
                uVar34 = 0xffffffff;
LAB_0083dfbc:
                uVar70 = auVar59._8_8_;
                auVar73._0_8_ = auVar59._0_8_;
                lVar36 = 0;
                do {
                  iVar45 = (int)lVar36;
                  fVar86 = (float)((ulong)auVar73._0_8_ >> 0x20);
                  iVar26 = iVar45 + (*(byte *)((long)plVar35 + (long)iVar45 * 4 + lVar27 + 3) & 0xfe
                                    );
                  fVar67 = fVar72 * ((float)auVar73._0_8_ - auVar63._0_4_);
                  fVar68 = fVar85 * (fVar86 - auVar63._4_4_);
                  fVar69 = fVar72 * ((float)uVar70 - auVar63._8_4_);
                  _local_280 = CONCAT44(iVar26,iVar45 + 1);
                  iVar26 = *(int *)((ulong)&local_280 | (ulong)(iVar26 <= (int)uVar34) << 2);
                  lVar36 = (long)iVar26;
                  pbVar38 = (byte *)((long)plVar35 + lVar36 * 4 + lVar27);
                  bVar8 = *pbVar38 >> 4;
                  bVar5 = *pbVar38 & 0xf;
                  bVar21 = pbVar38[1] >> 4;
                  bVar6 = pbVar38[1] & 0xf;
                  bVar22 = pbVar38[2] >> 4;
                  bVar7 = pbVar38[2] & 0xf;
                  auVar57._0_8_ =
                       CONCAT44(auVar63._4_4_ + (float)(byte)(bVar21 * bVar21) * fVar68,
                                auVar63._0_4_ + (float)(byte)(bVar8 * bVar8) * fVar67);
                  fVar87 = auVar63._8_4_ + (float)(byte)(bVar22 * bVar22) * fVar69;
                  auVar57._8_4_ = fVar87;
                  auVar73._0_8_ =
                       CONCAT44(fVar86 - (float)(byte)(bVar6 * bVar6) * fVar68,
                                (float)auVar73._0_8_ - (float)(byte)(bVar5 * bVar5) * fVar67);
                  fVar86 = (float)uVar70 - (float)(byte)(bVar7 * bVar7) * fVar69;
                  auVar63._8_4_ = fVar87;
                  auVar63._0_8_ = auVar57._0_8_;
                  auVar63._12_4_ = 0;
                  auVar73._8_4_ = fVar86;
                  uVar70 = (ulong)(uint)fVar86;
                } while (iVar26 != (int)uVar34);
              }
              else {
                plVar35 = *(long **)(lVar48 + 0x60);
                if (bVar7 != 3) goto LAB_0083df64;
                auVar95 = *(undefined1 (*) [16])(plVar35 + 2);
                auVar57 = auVar95._0_12_;
                uVar34 = plVar35[5];
                auVar73._0_8_ = *(undefined8 *)*(undefined1 (*) [16])(plVar35 + 4);
                uVar33 = (uint)bVar5;
                if (uVar33 == 0) {
                  auVar73 = SUB1612(*(undefined1 (*) [16])(plVar35 + 4),0);
                }
                else {
                  lVar27 = 0;
                  do {
                    iVar45 = (int)lVar27;
                    fVar86 = (float)((ulong)auVar73._0_8_ >> 0x20);
                    iVar26 = iVar45 + (*(byte *)((long)plVar35 + (long)iVar45 * 4 + *plVar35 + 3) &
                                      0xfe);
                    fVar67 = fVar72 * ((float)auVar73._0_8_ - auVar95._0_4_);
                    fVar68 = fVar85 * (fVar86 - auVar95._4_4_);
                    fVar69 = fVar72 * ((float)uVar34 - auVar95._8_4_);
                    _local_280 = CONCAT44(iVar26,iVar45 + 1);
                    uVar41 = *(uint *)((ulong)&local_280 | (ulong)(iVar26 <= (int)uVar33) << 2);
                    lVar27 = (long)(int)uVar41;
                    pbVar38 = (byte *)((long)plVar35 + lVar27 * 4 + *plVar35);
                    bVar8 = *pbVar38 >> 4;
                    bVar5 = *pbVar38 & 0xf;
                    bVar21 = pbVar38[1] >> 4;
                    bVar6 = pbVar38[1] & 0xf;
                    bVar22 = pbVar38[2] >> 4;
                    bVar7 = pbVar38[2] & 0xf;
                    auVar57._0_8_ =
                         CONCAT44(auVar95._4_4_ + (float)(byte)(bVar21 * bVar21) * fVar68,
                                  auVar95._0_4_ + (float)(byte)(bVar8 * bVar8) * fVar67);
                    fVar87 = auVar95._8_4_ + (float)(byte)(bVar22 * bVar22) * fVar69;
                    auVar57._8_4_ = fVar87;
                    auVar73._0_8_ =
                         CONCAT44(fVar86 - (float)(byte)(bVar6 * bVar6) * fVar68,
                                  (float)auVar73._0_8_ - (float)(byte)(bVar5 * bVar5) * fVar67);
                    fVar86 = (float)uVar34 - (float)(byte)(bVar7 * bVar7) * fVar69;
                    auVar95._8_4_ = fVar87;
                    auVar95._0_8_ = auVar57._0_8_;
                    auVar95._12_4_ = 0;
                    auVar73._8_4_ = fVar86;
                    uVar34 = (ulong)(uint)fVar86;
                  } while (uVar41 != uVar33);
                }
              }
LAB_0083e0d0:
              uVar28 = (ulong)*(ushort *)(lVar31 + uVar28 * 2 + 2);
              local_968 = (uint)(uVar10 >> 8);
              if (0x6f < local_968) {
                local_968 = 0x70;
              }
              fVar85 = auVar57._0_4_;
              fVar86 = auVar57._4_4_;
              fVar87 = auVar57._8_4_;
              if (uVar11 == 2) {
                lVar27 = *(long *)(lVar48 + 0x78) + uVar28 * 8;
                fVar67 = (auVar73._0_4_ - fVar85) * *(float *)PTR_DAT_047d1a68;
                fVar68 = (auVar73._4_4_ - fVar86) * *(float *)(PTR_DAT_047d1a68 + 4);
                fVar69 = (auVar73._8_4_ - fVar87) * *(float *)(PTR_DAT_047d1a68 + 8);
                if (1 < local_968) {
                  uVar28 = 0;
                  puVar32 = (undefined8 *)auStack_7e4;
                  do {
                    uVar10 = *(ushort *)(lVar27 + (uVar28 ^ 3) * 2);
                    auVar79._0_8_ = (ulong)CONCAT24(uVar10 >> 5,(uint)uVar10) & 0x1f0000001f;
                    uVar34 = uVar28 ^ 2;
                    uVar28 = uVar28 + 2;
                    auVar79._8_2_ = uVar10 >> 10;
                    auVar79._10_6_ = 0;
                    auVar59 = NEON_scvtf(auVar79,4);
                    *(ulong *)((long)puVar32 + -0xc) =
                         CONCAT44(fVar86 + fVar68 * auVar59._4_4_,fVar85 + fVar67 * auVar59._0_4_);
                    *(float *)((long)puVar32 + -4) = fVar87 + fVar69 * auVar59._8_4_;
                    uVar10 = *(ushort *)(lVar27 + uVar34 * 2);
                    auVar80._0_8_ = (ulong)CONCAT24(uVar10 >> 5,(uint)uVar10) & 0x1f0000001f;
                    auVar80._8_2_ = uVar10 >> 10;
                    auVar80._10_6_ = 0;
                    auVar59 = NEON_scvtf(auVar80,4);
                    *puVar32 = CONCAT44(fVar86 + fVar68 * auVar59._4_4_,
                                        fVar85 + fVar67 * auVar59._0_4_);
                    *(float *)(puVar32 + 1) = fVar87 + fVar69 * auVar59._8_4_;
                    puVar32 = puVar32 + 3;
                  } while ((long)uVar28 < (long)(int)(local_968 - 1));
                  if ((int)local_968 <= (int)uVar28) goto LAB_0083e55c;
LAB_0083e4ec:
                  uVar10 = *(ushort *)(lVar27 + (ulong)((uint)uVar28 ^ 3) * 2);
                  uVar4 = uVar10 & 0x1f;
                  uVar41 = uVar10 >> 5 & 0x1f;
                  uVar33 = (uint)(uVar10 >> 10);
LAB_0083e534:
                  auVar83._4_4_ = uVar41;
                  auVar83._0_4_ = uVar4;
                  auVar83._8_4_ = uVar33;
                  auVar83._12_4_ = 0;
                  auVar59 = NEON_scvtf(auVar83,4);
                  puVar32 = (undefined8 *)(auStack_7e4 + (uVar28 & 0xffffffff) * 0xc + -0xc);
                  auVar73._0_8_ =
                       CONCAT44(fVar86 + fVar68 * auVar59._4_4_,fVar85 + fVar67 * auVar59._0_4_);
                  fVar87 = fVar87 + fVar69 * auVar59._8_4_;
                  goto LAB_0083e554;
                }
                uVar28 = 0;
                if (local_968 != 0) goto LAB_0083e4ec;
              }
              else if (uVar11 == 1) {
                lVar27 = *(long *)(lVar48 + 0x78) + uVar28 * 8;
                fVar67 = (auVar73._0_4_ - fVar85) * *(float *)PTR_DAT_047d1a70;
                fVar68 = (auVar73._4_4_ - fVar86) * *(float *)(PTR_DAT_047d1a70 + 4);
                fVar69 = (auVar73._8_4_ - fVar87) * *(float *)(PTR_DAT_047d1a70 + 8);
                if (local_968 < 2) {
                  uVar28 = 0;
                  if (local_968 != 0) goto LAB_0083e518;
                }
                else {
                  uVar28 = 0;
                  puVar44 = (uint *)(lVar27 + 4);
                  puVar32 = (undefined8 *)auStack_7e4;
                  do {
                    uVar33 = *puVar44;
                    auVar81._0_8_ = CONCAT44(uVar33 >> 0xb,uVar33) & 0x7ff000007ff;
                    auVar81._8_4_ = uVar33 >> 0x16;
                    auVar81._12_4_ = 0;
                    auVar59 = NEON_scvtf(auVar81,4);
                    uVar28 = uVar28 + 2;
                    *(ulong *)((long)puVar32 + -0xc) =
                         CONCAT44(fVar86 + fVar68 * auVar59._4_4_,fVar85 + fVar67 * auVar59._0_4_);
                    *(float *)((long)puVar32 + -4) = fVar87 + fVar69 * auVar59._8_4_;
                    uVar33 = puVar44[-1];
                    puVar44 = puVar44 + 2;
                    auVar82._0_8_ = CONCAT44(uVar33 >> 0xb,uVar33) & 0x7ff000007ff;
                    auVar82._8_4_ = uVar33 >> 0x16;
                    auVar82._12_4_ = 0;
                    auVar59 = NEON_scvtf(auVar82,4);
                    *puVar32 = CONCAT44(fVar86 + fVar68 * auVar59._4_4_,
                                        fVar85 + fVar67 * auVar59._0_4_);
                    *(float *)(puVar32 + 1) = fVar87 + fVar69 * auVar59._8_4_;
                    puVar32 = puVar32 + 3;
                  } while ((long)uVar28 < (long)(int)(local_968 - 1));
                  if ((int)uVar28 < (int)local_968) {
LAB_0083e518:
                    uVar33 = *(uint *)(lVar27 + (ulong)((uint)uVar28 | 1) * 4);
                    uVar4 = uVar33 & 0x7ff;
                    uVar41 = uVar33 >> 0xb & 0x7ff;
                    uVar33 = uVar33 >> 0x16;
                    goto LAB_0083e534;
                  }
                }
              }
              else {
                if (uVar11 == 0) goto LAB_0083e0fc;
                FUN_032260f8(&local_8e0,&local_280,0x200);
                uStack_7c8 = pbVar1;
                pbVar1 = uStack_7c8;
                uStack_7c8._4_4_ = SUB84(pbVar1,4);
                uStack_7c8._0_4_ = SUB84(pbVar1,0);
                auVar73._0_8_ = FUN_0322b1e0(&local_8e0,"Compression method #");
                uStack_7c8 = pbVar1;
                pbVar1 = uStack_7c8;
                uStack_7c8._4_4_ = SUB84(pbVar1,4);
                uStack_7c8._0_4_ = SUB84(pbVar1,0);
                auVar73._0_8_ =
                     FUN_0322b250(auVar73._0_8_,
                                  *(ushort *)
                                   (*(long *)(lVar48 + 0x80) +
                                   (ulong)*(byte *)(*(long *)(lVar48 + 0x68) + lVar52) * 2) >> 4 & 3
                                 );
                uStack_7c8 = pbVar1;
                pbVar1 = uStack_7c8;
                uStack_7c8._4_4_ = SUB84(pbVar1,4);
                uStack_7c8._0_4_ = SUB84(pbVar1,0);
                FUN_0322b1e0(auVar73._0_8_," not implemented");
                uStack_7c8 = pbVar1;
                pbVar1 = uStack_7c8;
                uStack_7c8._4_4_ = SUB84(pbVar1,4);
                uStack_7c8._0_4_ = SUB84(pbVar1,0);
                iVar26 = FUN_03226f50(0x902f09ed,&local_280,
                                      "../..\\Geometry/Collide/DataStructures/StaticMeshTree/hkcdStaticMeshTreeDecoder.inl"
                                      ,0x95);
                uStack_7c8 = pbVar1;
                pbVar1 = uStack_7c8;
                uStack_7c8._4_4_ = SUB84(pbVar1,4);
                uStack_7c8._0_4_ = SUB84(pbVar1,0);
                if (iVar26 != 0) {
                  CallSupervisor(0x26);
                }
                FUN_032261b0(&local_8e0);
                uStack_7c8 = pbVar1;
                pbVar1 = uStack_7c8;
                uStack_7c8._4_4_ = SUB84(pbVar1,4);
                local_7cc = SUB84(_local_7cc,0);
                uStack_7c8._0_4_ = SUB84(pbVar1,0);
                lVar31 = *(long *)(lVar48 + 0x80);
                lVar30 = *(long *)(lVar48 + 0x68);
              }
            }
LAB_0083e55c:
            if ((*(ushort *)(lVar31 + (ulong)*(byte *)(lVar30 + lVar52) * 2) & 0xc0) != 0) {
              iVar97 = (uint)*(ushort *)(lVar31 + (ulong)*(byte *)(lVar30 + lVar52) * 2 + 4) << 0x10
              ;
            }
LAB_0083e580:
            lVar31 = 1;
          }
          local_830 = *(undefined8 *)(lVar48 + 0xf0);
          uStack_828 = *(undefined8 *)(lVar48 + 0xf8);
          local_820 = *(undefined8 *)(lVar48 + 0x100);
          uStack_818 = *(undefined8 *)(lVar48 + 0x108);
          local_810 = *(undefined8 *)(lVar48 + 0x110);
          uStack_808 = *(undefined8 *)(lVar48 + 0x118);
          local_800 = *(undefined8 *)(lVar48 + 0x120);
          uStack_7f8 = *(undefined8 *)(lVar48 + 0x128);
          puVar32 = *(undefined8 **)(*(long *)(lVar48 + 0xd8) + 0x20);
          local_870 = *puVar32;
          uStack_868 = puVar32[1];
          local_860 = puVar32[2];
          uStack_858 = puVar32[3];
          local_850 = puVar32[4];
          uStack_848 = puVar32[5];
          local_840 = puVar32[6];
          uStack_838 = puVar32[7];
          lVar30 = *(long *)(lVar48 + 0x88);
          uVar33 = (uint)*(byte *)(*(long *)(lVar48 + 0x60) + 0x5a);
          if (uVar33 < 5) {
            iVar26 = 0;
          }
          else {
            iVar26 = 0;
            iVar45 = uVar33 - 1;
            do {
              while( true ) {
                iVar3 = iVar26 + iVar45 >> 1;
                iVar12 = uVar49 - *(byte *)(lVar30 + (long)iVar3 * 4 + 2);
                if (iVar12 < 0) break;
                puVar39 = (undefined2 *)
                          (lVar30 + ((long)((ulong)(uint)(iVar26 + iVar45) << 0x20) >> 0x21) * 4);
                if (iVar12 < (int)(uint)*(byte *)((long)puVar39 + 3)) goto LAB_0083e66c;
                iVar26 = iVar3 + 1;
                if (iVar45 - iVar26 < 4) goto LAB_0083e648;
              }
              iVar45 = iVar3;
            } while (3 < iVar3 - iVar26);
          }
LAB_0083e648:
          for (puVar39 = (undefined2 *)(lVar30 + (long)iVar26 * 4);
              ((int)(uVar49 - *(byte *)(puVar39 + 1)) < 0 ||
              ((int)(uint)*(byte *)((long)puVar39 + 3) <= (int)(uVar49 - *(byte *)(puVar39 + 1))));
              puVar39 = puVar39 + 2) {
          }
LAB_0083e66c:
          uVar9 = *puVar39;
          local_96c = 0;
          local_9a8 = 0;
          auVar84 = auVar75;
        }
        _local_7cc = (ulong)(uint)local_7cc;
        lVar30 = 0;
        puVar32 = (undefined8 *)auStack_7e4;
        do {
          uStack_7c8._0_4_ = SUB84(pbVar1,0);
          uVar33 = uVar49 << 1 | (uint)lVar30 | *(int *)(lVar48 + 0x94) << 8;
          plVar35 = *(long **)(lVar48 + 0xd8);
          lVar27 = plVar35[5];
          if (lVar27 == 0) {
LAB_0083e74c:
            uStack_7c8._0_4_ = SUB84(pbVar1,0);
            local_880 = **(undefined8 **)(lVar48 + 0xe0);
            uStack_878 = (*(undefined8 **)(lVar48 + 0xe0))[1];
            local_8e0 = *plVar35;
            local_8d8 = plVar35[1];
            local_8d0 = plVar35[2];
            local_8c0 = (float *)plVar35[4];
            uStack_8b8 = 0;
            local_8b0 = (char)plVar35[6];
            local_8ac = *(uint *)((long)plVar35 + 0x34);
            auVar59 = *(undefined1 (*) [16])(plVar35 + 8);
            lStack_888 = plVar35[0xb];
            lStack_890 = plVar35[10];
            uStack_898 = auVar59._8_8_;
            local_8a0 = auVar59._0_8_;
            local_8a8[0] = (int)plVar35[7];
            iVar26 = *(int *)((long)plVar35 + 0x1c) +
                     (uint)*(byte *)(*(long *)(lVar48 + 0xd0) + 0x1c);
            uVar33 = (uVar33 + 1 << (ulong)(-iVar26 & 0x1f)) - 1 |
                     *(uint *)(PTR_DAT_047d1a60 + (long)*(int *)((long)plVar35 + 0x1c) * 4) &
                     *(uint *)(plVar35 + 3);
            uStack_8c8 = CONCAT44(iVar26,uVar33);
            if (auVar84._8_4_ == auVar75._8_4_ &&
                (auVar84._0_4_ == auVar75._0_4_ && auVar84._4_4_ == auVar75._4_4_)) {
              plVar29 = (long *)**(long **)(lVar48 + 0xb8);
            }
            else {
              auVar65._0_8_ = CONCAT44(auVar84._4_4_ * auVar59._4_4_,auVar84._0_4_ * auVar59._0_4_);
              auVar65._8_4_ = auVar84._8_4_ * auVar59._8_4_;
              auVar65._12_4_ = auVar84._12_4_ * auVar59._12_4_;
              local_8b0 = '\x01';
              uStack_898 = auVar65._8_8_;
              plVar29 = (long *)**(long **)(lVar48 + 0xb8);
              local_8a0 = auVar65._0_8_;
              local_8ac = local_96c;
            }
            if (plVar29 != (long *)0x0) {
              (**(code **)(*plVar29 + 0x40))
                        (plVar29,uVar9,5,*plVar35,plVar35[1],*(long *)(lVar48 + 0xd0),uVar33,0,
                         &local_880);
              uStack_7c8 = pbVar1;
              pbVar1 = uStack_7c8;
              uStack_7c8._4_4_ = SUB84(pbVar1,4);
              local_7cc = SUB84(_local_7cc,0);
              uStack_7c8._0_4_ = SUB84(pbVar1,0);
              lVar27 = *(long *)(lVar48 + 0xb8);
              if (*(long *)(lVar27 + 8) != 0) {
                _local_280 = CONCAT62(stack0xfffffffffffffd82,*(undefined2 *)(lVar27 + 0x10));
                auVar73._0_8_ = *(undefined8 *)(lVar27 + 0x14);
                *(undefined4 *)((undefined8 *)((ulong)&local_280 | 4) + 1) =
                     *(undefined4 *)(lVar27 + 0x1c);
                *(undefined8 *)((ulong)&local_280 | 4) = auVar73._0_8_;
                puVar37 = *(undefined8 **)(lVar48 + 200);
                local_270 = *puVar37;
                uStack_268 = puVar37[1];
                local_260 = (undefined4)puVar37[2];
                uStack_25c = (undefined4)((ulong)puVar37[2] >> 0x20);
                uStack_258 = *(undefined4 *)(puVar37 + 3);
                local_250 = *(long *)(lVar27 + 0x38);
                local_920[0] = CONCAT22(local_920[0]._2_2_,(undefined2)local_880);
                uVar28 = *puVar46;
                *(int *)(puVar47 + 1) = (int)puVar46[1];
                *puVar47 = uVar28;
                local_910 = **(ulong **)(lVar48 + 0xd8);
                local_908 = (*(ulong **)(lVar48 + 0xd8))[1];
                local_900 = *(undefined8 *)(lVar48 + 0xd0);
                local_8f8 = (float)uStack_8c8;
                local_8f0 = 0;
                uVar28 = (**(code **)(**(long **)(lVar27 + 8) + 0x40))
                                   (*(long **)(lVar27 + 8),5,*(char *)(lVar48 + 0x130) == '\0',
                                    &local_280,local_920);
                uStack_7c8 = pbVar1;
                pbVar1 = uStack_7c8;
                uStack_7c8._4_4_ = SUB84(pbVar1,4);
                uStack_7c8._0_4_ = SUB84(pbVar1,0);
                if ((uVar28 & 1) == 0) goto LAB_0083e6f4;
              }
            }
            uStack_7c8._0_4_ = SUB84(pbVar1,0);
            local_920[0] = 7;
            puVar50 = auStack_7e4 + lVar30 * 0x30 + -0xc;
            puVar51[2] = 0;
            puVar51[3] = 0;
            *puVar51 = 0;
            puVar51[1] = 0;
            if (uVar40 - 1 < 2) {
              local_920[0] = 3;
LAB_0083e988:
              local_910 = CONCAT44(iVar97,local_968);
              local_918 = puVar50;
            }
            else {
              if (uVar40 == 3) {
                uVar11 = *(ushort *)
                          (*(long *)(lVar48 + 0x80) +
                          (ulong)*(byte *)(*(long *)(lVar48 + 0x68) + lVar52) * 2);
                uVar10 = uVar11 & 0xf;
                if (uVar10 == 2) {
                  local_920[0] = 4;
                }
                else if (uVar10 == 1) {
                  local_920[0] = 2;
                }
                else if ((uVar11 & 0xf) == 0) {
                  local_920[0] = 0;
                }
                else {
                  local_920[0] = 7;
                }
                goto LAB_0083e988;
              }
              if (uVar40 == 4) {
                (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(local_9a8 + 0x18) * 0x200
                            + 0xa8))(local_9a8,local_920,&local_7f0,&local_2b0);
                uStack_7c8 = pbVar1;
                pbVar1 = uStack_7c8;
                uStack_7c8._4_4_ = SUB84(pbVar1,4);
                local_7cc = SUB84(_local_7cc,0);
                uStack_7c8._0_4_ = SUB84(pbVar1,0);
              }
            }
            uStack_7c8._0_4_ = SUB84(pbVar1,0);
            if (local_8b0 != '\0') {
              local_8a8[0] = iVar97;
              if (uVar40 - 3 < 2) {
                FUN_00cb0560(local_918,local_910 & 0xffffffff,local_8ac,&local_8a0,local_8a8,
                             &lStack_890);
                uStack_7c8 = pbVar1;
                pbVar1 = uStack_7c8;
                uStack_7c8._4_4_ = SUB84(pbVar1,4);
                local_7cc = SUB84(_local_7cc,0);
                uStack_7c8._0_4_ = SUB84(pbVar1,0);
                if (local_8b0 == '\0') goto LAB_0083ea98;
              }
              uStack_7c8._0_4_ = SUB84(pbVar1,0);
              if (0 < (int)local_910) {
                lVar27 = 0;
                fVar67 = (float)local_8a0;
                fVar68 = (float)((ulong)local_8a0 >> 0x20);
                fVar69 = (float)uStack_898;
                fVar85 = (float)lStack_890;
                fVar86 = (float)((ulong)lStack_890 >> 0x20);
                fVar87 = (float)lStack_888;
                if ((int)local_910 != 1) {
                  pauVar43 = (undefined1 (*) [12])(local_918 + 0xc);
                  puVar37 = puVar32;
                  do {
                    lVar27 = lVar27 + 2;
                    auVar57 = pauVar43[-1];
                    *(ulong *)((long)puVar37 + -0xc) =
                         CONCAT44(fVar86 + fVar68 * auVar57._4_4_,
                                  fVar85 + fVar67 * (float)*(undefined8 *)pauVar43[-1]);
                    *(float *)((long)puVar37 + -4) = fVar87 + fVar69 * auVar57._8_4_;
                    puVar24 = *pauVar43;
                    auVar57 = *pauVar43;
                    pauVar43 = pauVar43 + 2;
                    *puVar37 = CONCAT44(fVar86 + fVar68 * auVar57._4_4_,
                                        fVar85 + fVar67 * (float)*(undefined8 *)puVar24);
                    *(float *)(puVar37 + 1) = fVar87 + fVar69 * auVar57._8_4_;
                    puVar37 = puVar37 + 3;
                  } while ((local_910 & 0xffffffff) - (local_910 & 1) != lVar27);
                }
                if ((local_910 & 1) != 0) {
                  auVar73._0_8_ = *(undefined8 *)(local_918 + lVar27 * 0xc);
                  fVar88 = *(float *)((long)(local_918 + lVar27 * 0xc) + 8);
                  uStack_7c8 = pbVar1;
                  *(ulong *)(puVar50 + lVar27 * 0xc) =
                       CONCAT44(fVar86 + fVar68 * (float)((ulong)auVar73._0_8_ >> 0x20),
                                fVar85 + fVar67 * (float)auVar73._0_8_);
                  *(float *)((long)(puVar50 + lVar27 * 0xc) + 8) = fVar87 + fVar69 * fVar88;
                  pbVar1 = uStack_7c8;
                  _local_7cc = (ulong)(uint)local_7cc;
                }
              }
              local_910 = CONCAT44(local_8a8[0],(int)local_910);
              local_908 = 0;
              local_900 = 0;
              _local_7cc = _local_7cc & 0xffffffff;
              local_918 = puVar50;
            }
LAB_0083ea98:
            uStack_7c8._0_4_ = SUB84(pbVar1,0);
            local_8c0 = (float *)&local_870;
            plVar29 = *(long **)(lVar48 + 0x138);
            lVar27 = *(long *)(lVar48 + 0xb8);
            puVar44 = *(uint **)(lVar48 + 0xc0);
            plVar35 = *(long **)(lVar48 + 200);
            if ((*(byte *)(plVar29 + 1) >> 1 & 1) == 0) {
              local_290 = plVar29[2];
              uVar28 = (**(code **)(**(long **)(lVar48 + 0xb0) + (ulong)*puVar44 * 0x38 +
                                    (ulong)local_920[0] * 8 + 0x3cb8))
                                 (puVar44,local_920,&local_830,*(byte *)(plVar29 + 1),&local_2b0);
              uStack_7c8 = pbVar1;
              pbVar1 = uStack_7c8;
              uStack_7c8._4_4_ = SUB84(pbVar1,4);
              local_7cc = SUB84(_local_7cc,0);
              uStack_7c8._0_4_ = SUB84(pbVar1,0);
              if ((uVar28 & 1) != 0) {
                local_208 = 5;
                local_204 = 0;
                local_260 = (undefined4)local_290;
                fVar85 = (float)*(undefined8 *)(local_8c0 + 4);
                fVar86 = (float)((ulong)*(undefined8 *)(local_8c0 + 4) >> 0x20);
                fVar87 = (float)*(undefined8 *)(local_8c0 + 6);
                fVar67 = (float)((ulong)*(undefined8 *)(local_8c0 + 6) >> 0x20);
                fVar69 = local_2a0._4_4_;
                auVar59 = *(undefined1 (*) [16])(local_8c0 + 8);
                auVar74 = *(undefined1 (*) [16])(local_8c0 + 0xc);
                fVar88 = local_2a0._8_4_;
                _fStack_278 = CONCAT44(auVar74._12_4_ +
                                       auVar59._12_4_ * fStack_2a8 +
                                       local_8c0[3] * local_2b0 + fVar67 * fStack_2ac,
                                       auVar74._8_4_ +
                                       auVar59._8_4_ * fStack_2a8 +
                                       local_8c0[2] * local_2b0 + fVar87 * fStack_2ac);
                _local_280 = CONCAT44(auVar74._4_4_ +
                                      auVar59._4_4_ * fStack_2a8 +
                                      local_8c0[1] * local_2b0 + fVar86 * fStack_2ac,
                                      auVar74._0_4_ +
                                      auVar59._0_4_ * fStack_2a8 +
                                      *local_8c0 * local_2b0 + fVar85 * fStack_2ac);
                fVar68 = local_2a0._0_4_;
                auVar66._0_8_ =
                     CONCAT44(auVar59._4_4_ * fVar88 + local_8c0[1] * fVar68 + fVar86 * fVar69,
                              auVar59._0_4_ * fVar88 + *local_8c0 * fVar68 + fVar85 * fVar69);
                auVar66._8_4_ = auVar59._8_4_ * fVar88 + local_8c0[2] * fVar68 + fVar87 * fVar69;
                auVar66._12_4_ = auVar59._12_4_ * fVar88 + local_8c0[3] * fVar68 + fVar67 * fVar69;
                uStack_268 = auVar66._8_8_;
                lVar36 = *plVar35;
                fStack_248 = *(float *)(plVar35 + 3);
                local_240 = *(undefined2 *)(lVar27 + 0x10);
                local_23c = (undefined4)*(ulong *)(lVar27 + 0x14);
                uStack_238 = *(ulong *)(lVar27 + 0x14) >> 0x20;
                fStack_244 = (float)CONCAT31(fStack_244._1_3_,0xf);
                if (lVar36 == 0) {
                  uStack_258 = 0xffffffff;
                  uStack_254 = 0xffffffff;
                  local_250 = CONCAT44(local_250._4_4_,0xffffff);
                  if (local_8e0 == 0) goto LAB_0083ec6c;
LAB_0083ec48:
                  local_230 = *(undefined8 *)(local_8e0 + 0xb0);
                  local_228 = *(undefined4 *)(local_8e0 + 0x50);
                }
                else {
                  uStack_258 = (undefined4)*(undefined8 *)(lVar36 + 0xb0);
                  uStack_254 = (undefined4)((ulong)*(undefined8 *)(lVar36 + 0xb0) >> 0x20);
                  local_250 = CONCAT44(local_250._4_4_,*(undefined4 *)(lVar36 + 0x50));
                  if (local_8e0 != 0) goto LAB_0083ec48;
LAB_0083ec6c:
                  local_228 = 0xffffff;
                  local_230 = 0xffffffffffffffff;
                }
                local_220 = (float)uStack_8c8;
                local_218 = (undefined2)local_880;
                local_214 = (undefined4)*puVar46;
                uStack_210 = *puVar46 >> 0x20;
                local_21c = *(undefined1 *)(lVar27 + 0x20);
                local_270 = auVar66._0_8_;
                (**(code **)(*plVar29 + 0x28))(plVar29,&local_280);
                uStack_7c8 = pbVar1;
                pbVar1 = uStack_7c8;
                uStack_7c8._4_4_ = SUB84(pbVar1,4);
                local_7cc = SUB84(_local_7cc,0);
                uStack_7c8._0_4_ = SUB84(pbVar1,0);
              }
            }
            else {
              (**(code **)(*plVar29 + 0x30))
                        (plVar29,**(long **)(lVar48 + 0xb0),lVar27,puVar44,lVar27 + 0x10,plVar35,
                         local_920,&local_880,&local_8e0,&local_830);
              uStack_7c8 = pbVar1;
              pbVar1 = uStack_7c8;
              uStack_7c8._4_4_ = SUB84(pbVar1,4);
              local_7cc = SUB84(_local_7cc,0);
              uStack_7c8._0_4_ = SUB84(pbVar1,0);
            }
          }
          else {
            uVar28 = (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar27 + 0x18) * 0x40
                                 + 0x4020))
                               (lVar27,uVar33 << (ulong)(*(uint *)(lVar48 + 0xa0) & 0x1f));
            uStack_7c8 = pbVar1;
            pbVar1 = uStack_7c8;
            uStack_7c8._4_4_ = SUB84(pbVar1,4);
            uStack_7c8._0_4_ = SUB84(pbVar1,0);
            if ((uVar28 & 1) != 0) {
              plVar35 = *(long **)(lVar48 + 0xd8);
              goto LAB_0083e74c;
            }
          }
LAB_0083e6f4:
          _local_7cc = (ulong)(uint)local_7cc;
          lVar30 = lVar30 + 1;
          puVar32 = puVar32 + 6;
        } while (lVar30 != lVar31);
      }
      _local_7cc = _local_7cc & 0xffffffff;
      auVar73._0_8_ = NEON_fmax(uVar96,*(undefined8 *)(*(long *)(lVar48 + 0x138) + 0x10),4);
      fVar85 = (float)((ulong)auVar73._0_8_ >> 0x20);
      param_3[10] = CONCAT44(fVar85 * fVar85,(float)auVar73._0_8_ * (float)auVar73._0_8_);
LAB_0083ed00:
      _local_7cc = _local_7cc & 0xffffffff;
      if ((int)lVar25 < (int)param_2[1]) {
        iVar97 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar97;
        plVar35 = (long *)(*param_2 + (long)iVar97 * 0x30);
        uVar28 = plVar35[1];
        uVar34 = (ulong)(int)plVar35[4];
        pbVar38 = (byte *)((long)param_1 + uVar34 * 4 + *param_1);
        auVar59 = *(undefined1 (*) [16])(plVar35 + 2);
        lVar31 = *plVar35;
        goto LAB_0083d75c;
      }
    }
  }
  return;
}


