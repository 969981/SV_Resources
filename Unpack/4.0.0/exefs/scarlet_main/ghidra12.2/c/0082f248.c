/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0082f248; name: FUN_0082f248
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0082f248(long *param_1,float *param_2,undefined8 *param_3,long param_4,undefined4 param_5)

{
  undefined1 (*pauVar1) [16];
  float *pfVar2;
  ushort *puVar3;
  char cVar4;
  undefined2 uVar5;
  ushort uVar6;
  ushort uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  long *plVar23;
  undefined8 *puVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  byte *pbVar28;
  long *plVar29;
  undefined8 *puVar30;
  long lVar31;
  byte *pbVar32;
  ulong uVar33;
  undefined2 *puVar34;
  long lVar35;
  long lVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  ulong *puVar40;
  undefined1 (*pauVar41) [12];
  uint uVar42;
  uint *puVar43;
  undefined8 *puVar44;
  uint uVar45;
  ulong *puVar46;
  ulong *puVar47;
  undefined8 *puVar48;
  float *pfVar49;
  undefined1 (*pauVar50) [16];
  undefined1 auVar51 [12];
  undefined1 auVar52 [12];
  undefined1 auVar53 [12];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  byte bVar63;
  byte bVar72;
  byte bVar73;
  int iVar64;
  byte bVar74;
  byte bVar75;
  byte bVar78;
  byte bVar79;
  int iVar76;
  float fVar77;
  byte bVar80;
  int iVar81;
  undefined1 auVar65 [12];
  undefined1 auVar66 [12];
  undefined1 auVar67 [12];
  float fVar82;
  int iVar83;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar84;
  undefined8 uVar85;
  undefined1 auVar86 [12];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  int iVar95;
  float fVar96;
  int iVar101;
  int iVar102;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  int iVar103;
  undefined1 auVar100 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar107;
  float fVar109;
  float fVar110;
  undefined1 auVar108 [16];
  undefined8 uVar111;
  long local_db0;
  uint local_d74;
  uint local_d70;
  undefined8 local_d30 [128];
  undefined8 *local_930;
  uint local_920 [2];
  undefined8 *local_918;
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
  undefined8 local_8b8;
  char local_8b0;
  uint local_8ac;
  int local_8a8 [2];
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 local_878;
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
  float local_7e8;
  undefined8 local_7e4;
  float local_7dc;
  undefined8 local_7d8;
  float local_7d0;
  undefined8 local_7cc;
  float local_7c4;
  undefined8 local_7c0;
  float local_7b8;
  undefined8 local_7b4;
  float local_7ac;
  undefined8 local_7a8;
  float local_7a0;
  undefined8 local_79c;
  float local_794;
  float local_2b0;
  float fStack_2ac;
  float fStack_2a8;
  undefined1 local_2a0 [16];
  long local_290;
  undefined8 local_280;
  undefined8 uStack_278;
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
  
  uVar21 = _UNK_03cab278;
  uVar20 = _DAT_03cab270;
  if (*(char *)(*(long *)(param_4 + 0x138) + 0x18) == '\0') {
    pauVar1 = (undefined1 (*) [16])(param_4 + 0x10);
    pfVar2 = (float *)(param_4 + 0x20);
    fVar8 = *param_2;
    fVar9 = param_2[1];
    fVar10 = param_2[2];
    fVar11 = param_2[4];
    fVar12 = param_2[5];
    fVar13 = param_2[6];
    uVar111 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x50);
    pauVar50 = (undefined1 (*) [16])(PTR_DAT_047d19b0 + 0x60);
    uVar14 = *(undefined8 *)*pauVar50;
    auVar18 = *pauVar50;
    auVar17 = *pauVar50;
    local_930 = (undefined8 *)((ulong)local_d30 | 4);
    puVar46 = (ulong *)((ulong)local_920 | 4);
    puVar47 = (ulong *)((ulong)&local_880 | 4);
    puVar48 = (undefined8 *)((ulong)local_920 | 8);
    fVar15 = *(float *)(PTR_DAT_047d19b0 + 0x1e0);
    fVar16 = *(float *)(PTR_DAT_047d19b0 + 0x1e4);
    auVar55._0_8_ = *param_3;
    auVar55._8_8_ = auVar55._0_8_;
    local_d30[0]._0_4_ = param_5;
    do {
      puVar24 = (undefined8 *)((long)local_930 + -4);
      pfVar49 = (float *)((long)param_1 + (long)*(int *)((long)local_930 + -4) * 0x80 + *param_1);
      auVar104._0_4_ = fVar9 - pfVar49[0xc];
      auVar104._4_4_ = fVar9 - pfVar49[0xd];
      auVar104._8_4_ = fVar9 - pfVar49[0xe];
      auVar104._12_4_ = fVar9 - pfVar49[0xf];
      auVar105 = NEON_smax(auVar104,ZEXT816(0),4);
      auVar97._0_4_ = fVar8 - pfVar49[4];
      auVar97._4_4_ = fVar8 - pfVar49[5];
      auVar97._8_4_ = fVar8 - pfVar49[6];
      auVar97._12_4_ = fVar8 - pfVar49[7];
      auVar98 = NEON_smax(auVar97,ZEXT816(0),4);
      auVar99._4_4_ = fVar11 - pfVar49[1];
      auVar99._0_4_ = fVar11 - *pfVar49;
      auVar99._8_4_ = fVar11 - pfVar49[2];
      auVar99._12_4_ = fVar11 - pfVar49[3];
      auVar99 = NEON_smin(auVar98,auVar99,4);
      auVar108._0_4_ = fVar12 - pfVar49[8];
      auVar108._4_4_ = fVar12 - pfVar49[9];
      auVar108._8_4_ = fVar12 - pfVar49[10];
      auVar108._12_4_ = fVar12 - pfVar49[0xb];
      iVar64 = -(uint)(*pfVar49 <= pfVar49[4]);
      iVar76 = -(uint)(pfVar49[1] <= pfVar49[5]);
      iVar81 = -(uint)(pfVar49[2] <= pfVar49[6]);
      iVar83 = -(uint)(pfVar49[3] <= pfVar49[7]);
      auVar106 = NEON_smin(auVar105,auVar108,4);
      auVar98._4_4_ = fVar10 - (float)((ulong)*(undefined8 *)(pfVar49 + 0x14) >> 0x20);
      auVar98._0_4_ = fVar10 - (float)*(undefined8 *)(pfVar49 + 0x14);
      auVar98._8_4_ = fVar10 - (float)*(undefined8 *)(pfVar49 + 0x16);
      auVar98._12_4_ = fVar10 - (float)((ulong)*(undefined8 *)(pfVar49 + 0x16) >> 0x20);
      auVar98 = NEON_smax(auVar98,ZEXT816(0),4);
      auVar105._4_4_ = fVar13 - (float)((ulong)*(undefined8 *)(pfVar49 + 0x10) >> 0x20);
      auVar105._0_4_ = fVar13 - (float)*(undefined8 *)(pfVar49 + 0x10);
      auVar105._8_4_ = fVar13 - (float)*(undefined8 *)(pfVar49 + 0x12);
      auVar105._12_4_ = fVar13 - (float)((ulong)*(undefined8 *)(pfVar49 + 0x12) >> 0x20);
      auVar98 = NEON_smin(auVar98,auVar105,4);
      fVar84 = auVar55._0_4_;
      iVar95 = -(uint)(auVar99._0_4_ * auVar99._0_4_ + auVar106._0_4_ * auVar106._0_4_ +
                       auVar98._0_4_ * auVar98._0_4_ <= fVar84);
      iVar101 = -(uint)(auVar99._4_4_ * auVar99._4_4_ + auVar106._4_4_ * auVar106._4_4_ +
                        auVar98._4_4_ * auVar98._4_4_ <= auVar55._4_4_);
      iVar102 = -(uint)(auVar99._8_4_ * auVar99._8_4_ + auVar106._8_4_ * auVar106._8_4_ +
                        auVar98._8_4_ * auVar98._8_4_ <= auVar55._8_4_);
      iVar103 = -(uint)(auVar99._12_4_ * auVar99._12_4_ + auVar106._12_4_ * auVar106._12_4_ +
                        auVar98._12_4_ * auVar98._12_4_ <= auVar55._12_4_);
      bVar63 = (byte)iVar95 & (byte)iVar64;
      bVar72 = (byte)((uint)iVar95 >> 8) & (byte)((uint)iVar64 >> 8);
      bVar73 = (byte)((uint)iVar95 >> 0x10) & (byte)((uint)iVar64 >> 0x10);
      bVar74 = (byte)((uint)iVar95 >> 0x18) & (byte)((uint)iVar64 >> 0x18);
      iVar64 = CONCAT13(bVar74,CONCAT12(bVar73,CONCAT11(bVar72,bVar63)));
      bVar75 = (byte)iVar101 & (byte)iVar76;
      bVar78 = (byte)((uint)iVar101 >> 8) & (byte)((uint)iVar76 >> 8);
      bVar79 = (byte)((uint)iVar101 >> 0x10) & (byte)((uint)iVar76 >> 0x10);
      bVar80 = (byte)((uint)iVar101 >> 0x18) & (byte)((uint)iVar76 >> 0x18);
      auVar65._0_8_ = CONCAT17(bVar80,CONCAT16(bVar79,CONCAT15(bVar78,CONCAT14(bVar75,iVar64))));
      auVar65[8] = (byte)iVar102 & (byte)iVar81;
      auVar65[9] = (byte)((uint)iVar102 >> 8) & (byte)((uint)iVar81 >> 8);
      auVar65[10] = (byte)((uint)iVar102 >> 0x10) & (byte)((uint)iVar81 >> 0x10);
      auVar65[0xb] = (byte)((uint)iVar102 >> 0x18) & (byte)((uint)iVar81 >> 0x18);
      auVar106[0xc] = (byte)iVar103 & (byte)iVar83;
      auVar106._0_12_ = auVar65;
      auVar106[0xd] = (byte)((uint)iVar103 >> 8) & (byte)((uint)iVar83 >> 8);
      auVar106[0xe] = (byte)((uint)iVar103 >> 0x10) & (byte)((uint)iVar83 >> 0x10);
      auVar106[0xf] = (byte)((uint)iVar103 >> 0x18) & (byte)((uint)iVar83 >> 0x18);
      if (((iVar64 != 0 || (int)((ulong)auVar65._0_8_ >> 0x20) != 0) || auVar65._8_4_ != 0) ||
          auVar106._12_4_ != 0) {
        iVar64 = CONCAT13(bVar74 & (byte)((ulong)uVar20 >> 0x18),
                          CONCAT12(bVar73 & (byte)((ulong)uVar20 >> 0x10),
                                   CONCAT11(bVar72 & (byte)((ulong)uVar20 >> 8),
                                            bVar63 & (byte)uVar20)));
        auVar66._0_8_ =
             CONCAT17(bVar80 & (byte)((ulong)uVar20 >> 0x38),
                      CONCAT16(bVar79 & (byte)((ulong)uVar20 >> 0x30),
                               CONCAT15(bVar78 & (byte)((ulong)uVar20 >> 0x28),
                                        CONCAT14(bVar75 & (byte)((ulong)uVar20 >> 0x20),iVar64))));
        auVar66[8] = auVar65[8] & (byte)uVar21;
        auVar66[9] = auVar65[9] & (byte)((ulong)uVar21 >> 8);
        auVar66[10] = auVar65[10] & (byte)((ulong)uVar21 >> 0x10);
        auVar66[0xb] = auVar65[0xb] & (byte)((ulong)uVar21 >> 0x18);
        auVar68[0xc] = auVar106[0xc] & (byte)((ulong)uVar21 >> 0x20);
        auVar68._0_12_ = auVar66;
        auVar68[0xd] = auVar106[0xd] & (byte)((ulong)uVar21 >> 0x28);
        auVar68[0xe] = auVar106[0xe] & (byte)((ulong)uVar21 >> 0x30);
        auVar68[0xf] = auVar106[0xf] & (byte)((ulong)uVar21 >> 0x38);
        uVar22 = (ulong)(uint)(iVar64 + (int)((ulong)auVar66._0_8_ >> 0x20) +
                              auVar66._8_4_ + auVar68._12_4_);
        iVar64 = *(int *)(PTR_DAT_047d1aa8 + uVar22 * 4);
        auVar98 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar49 + 0x18),
                          *(undefined1 (*) [16])(PTR_DAT_047d1aa0 + uVar22 * 0x10));
        if (*(char *)(pfVar49 + 0x1c) == '\0') {
          *(long *)((long)local_930 + 4) = auVar98._8_8_;
          *puVar24 = auVar98._0_8_;
          puVar24 = (undefined8 *)((long)puVar24 + (long)iVar64 * 4);
        }
        else {
          local_930 = puVar24;
          if (iVar64 < 1) {
            uVar85 = CONCAT44(fVar84,fVar84);
            cVar4 = *(char *)(*(long *)(param_4 + 0x138) + 0x18);
          }
          else {
            iVar76 = 0;
            do {
              switch(iVar76) {
              case 0:
                uVar25 = auVar98._0_4_;
                break;
              case 1:
                uVar25 = auVar98._4_4_;
                break;
              case 2:
                uVar25 = auVar98._8_4_;
                break;
              case 3:
                uVar25 = auVar98._12_4_;
                break;
              default:
                uVar25 = 0;
              }
              uVar37 = uVar25 >> 8;
              uVar25 = uVar25 >> 1 & 0x7f;
              if (*(uint *)(param_4 + 0x94) == uVar37 && *(uint *)(param_4 + 0x98) == uVar37) {
                lVar35 = *(long *)(param_4 + 0x68);
              }
              else {
                lVar31 = *(long *)(param_4 + 0x50);
                lVar35 = *(long *)(lVar31 + 0x40);
                *(uint *)(param_4 + 0x94) = uVar37;
                *(uint *)(param_4 + 0x98) = uVar37;
                lVar27 = lVar31 + 0x40 + (ulong)uVar37 * 0x60 + lVar35;
                *(long *)(param_4 + 0x60) = lVar27;
                lVar36 = *(long *)(lVar31 + 0x70);
                lVar35 = 0;
                if (lVar36 != 0) {
                  lVar35 = lVar36 + lVar31 + 0x70;
                }
                *(ulong *)(param_4 + 0x70) = lVar35 + (ulong)*(uint *)(lVar27 + 0x48) * 4;
                lVar36 = *(long *)(lVar31 + 0x80);
                lVar35 = 0;
                if (lVar36 != 0) {
                  lVar35 = lVar36 + lVar31 + 0x80;
                }
                *(ulong *)(param_4 + 0x78) = lVar35 + (ulong)*(byte *)(lVar27 + 0x5b) * 0x80000;
                lVar35 = *(long *)(lVar31 + 0x60);
                lVar36 = 0;
                if (lVar35 != 0) {
                  lVar36 = lVar35 + lVar31 + 0x60;
                }
                lVar36 = lVar36 + (ulong)*(uint *)(lVar27 + 0x4c) * 2;
                *(long *)(param_4 + 0x80) = lVar36;
                lVar39 = *(long *)(lVar31 + 0x90);
                lVar35 = 0;
                if (lVar39 != 0) {
                  lVar35 = lVar39 + lVar31 + 0x90;
                }
                *(ulong *)(param_4 + 0x88) = lVar35 + (ulong)*(uint *)(lVar27 + 0x54) * 4;
                *(uint *)(param_4 + 0x90) = (uint)*(byte *)(lVar27 + 0x58);
                lVar39 = *(long *)(lVar31 + 0x50);
                lVar35 = 0;
                if (lVar39 != 0) {
                  lVar35 = lVar39 + lVar31 + 0x50;
                }
                lVar35 = lVar35 + (ulong)*(uint *)(lVar27 + 0x50) * 4;
                *(long *)(param_4 + 0x68) = lVar35;
                uVar85 = *(undefined8 *)(lVar27 + 0x30);
                *(undefined8 *)(param_4 + 0x38) = *(undefined8 *)(lVar27 + 0x38);
                *(undefined8 *)(param_4 + 0x30) = uVar85;
                auVar65 = *(undefined1 (*) [12])(lVar27 + 0x3c);
                *(ulong *)(param_4 + 0x48) = (ulong)auVar65._8_4_;
                *(long *)(param_4 + 0x40) = auVar65._0_8_;
                *(ulong *)(param_4 + 0x80) = lVar36 + (ulong)*(byte *)(lVar27 + 0x58) * -2;
              }
              lVar27 = lVar35 + (ulong)uVar25 * 4;
              pbVar28 = (byte *)(lVar27 + 1);
              bVar63 = *pbVar28;
              bVar72 = *(byte *)(lVar27 + 2);
              pbVar32 = (byte *)(lVar27 + 3);
              bVar73 = *pbVar32;
              if (bVar63 == bVar73) {
                if (bVar72 == 4) {
                  uVar37 = 4;
                  goto LAB_0082f6b0;
                }
                if (bVar72 == 3) {
                  uVar37 = 3;
                  goto LAB_0082f6b0;
                }
              }
              else {
                uVar37 = 1;
                if (bVar72 != bVar73) {
                  uVar37 = 2;
                }
LAB_0082f6b0:
                lVar31 = (ulong)uVar25 * 4;
                if (uVar37 == 4) {
                  puVar3 = (ushort *)
                           (*(long *)(param_4 + 0x80) +
                           (((ulong)(*(ushort *)
                                      (*(long *)(param_4 + 0x80) +
                                      (ulong)*(byte *)(lVar35 + lVar31) * 2) >> 6) & 3) +
                           (ulong)*(byte *)(lVar35 + lVar31)) * 2);
                  plVar29 = (long *)(*(long *)(param_4 + 0xd0) + 0x70);
                  plVar29 = (long *)((long)plVar29 +
                                    ((long)(int)((uint)puVar3[1] << 0x10) | (ulong)*puVar3) * 0x40 +
                                    *plVar29);
                  lVar27 = plVar29[6];
                  auVar55 = *(undefined1 (*) [16])(plVar29 + 4);
                  lVar35 = 0;
                  if (lVar27 != 0) {
                    lVar35 = lVar27 + (long)(plVar29 + 6);
                  }
                  local_db0 = 0;
                  if ((*(ushort *)(lVar35 + 0x1a) & 1) != 0) {
                    local_db0 = lVar35;
                  }
                  iVar81 = *(int *)(local_db0 + 0x20);
                  local_8e0 = *plVar29;
                  local_8d8 = plVar29[1];
                  uStack_8c8 = (ulong)SUB164(*(undefined1 (*) [16])(plVar29 + 2),8);
                  local_8d0 = SUB168(*(undefined1 (*) [16])(plVar29 + 2),0);
                  FUN_031cc2c4(&local_280,&local_8e0);
                  fStack_248 = (float)uStack_8c8;
                  fStack_244 = uStack_8c8._4_4_;
                  local_250 = local_8d0;
                  lVar35 = *(long *)(param_4 + 0xd8);
                  if (*(char *)(lVar35 + 0x30) != '\0') {
                    fStack_248 = (float)uStack_8c8 * *(float *)(lVar35 + 0x48);
                    fStack_244 = uStack_8c8._4_4_ * *(float *)(lVar35 + 0x4c);
                    local_250 = CONCAT44(local_8d0._4_4_ * *(float *)(lVar35 + 0x44),
                                         (float)local_8d0 * *(float *)(lVar35 + 0x40));
                  }
                  auVar69._0_12_ = auVar55._0_12_;
                  auVar69._12_4_ = (int)uVar14;
                  FUN_031cc5e4(&local_870,*(undefined8 *)(lVar35 + 0x20),&local_280);
                  FUN_031cc66c(&local_830,&local_870,
                               *(undefined8 *)(*(long *)(param_4 + 200) + 0x20));
                  uVar5 = *(undefined2 *)((long)plVar29 + 0x2c);
                  lVar35 = 1;
                  auVar65 = auVar17._0_12_;
                  auVar94._8_8_ = auVar69._8_8_;
                  auVar94._0_8_ = auVar55._0_8_;
                  local_d74 = (*(byte *)((long)plVar29 + 0x1e) >> 5 ^ 0xffffffff) & 1;
                  local_d70 = *(uint *)(local_db0 + 0x44);
                }
                else {
                  iVar81 = *(int *)(*(long *)(param_4 + 0xd0) + 0x20);
                  if (uVar37 < 3) {
                    bVar63 = *(byte *)(lVar35 + lVar31);
                    uVar26 = *(uint *)(param_4 + 0x90);
                    if ((int)(uint)bVar63 < (int)uVar26) {
                      uVar38 = *(uint *)(*(long *)(param_4 + 0x70) + (ulong)bVar63 * 4);
                      auVar66 = SUB1612(*(undefined1 (*) [16])(param_4 + 0x30),0);
                      auVar65 = SUB1612(*(undefined1 (*) [16])(param_4 + 0x40),0);
                      auVar51._0_8_ = CONCAT44(uVar38 >> 0xb,uVar38) & 0x7ff000007ff;
                      auVar51._8_4_ = uVar38 >> 0x16;
                    }
                    else {
                      auVar66 = SUB1612(*(undefined1 (*) [16])(param_4 + 0x10),0);
                      auVar65 = SUB1612(*(undefined1 (*) [16])(param_4 + 0x20),0);
                      uVar22 = *(ulong *)(*(long *)(param_4 + 0x78) +
                                         (ulong)*(ushort *)
                                                 (*(long *)(param_4 + 0x80) + (ulong)bVar63 * 2) * 8
                                         );
                      auVar51._0_8_ = CONCAT44((int)(uVar22 >> 0x15),(int)uVar22) & 0x1fffff001fffff
                      ;
                      auVar51._8_4_ = (uint)(uVar22 >> 0x2a);
                    }
                    auVar54._12_4_ = 0;
                    auVar54._0_12_ = auVar51;
                    auVar55 = NEON_scvtf(auVar54,4);
                    local_7f0 = CONCAT44(auVar66._4_4_ + auVar65._4_4_ * auVar55._4_4_,
                                         auVar66._0_4_ + auVar65._0_4_ * auVar55._0_4_);
                    local_7e8 = auVar66._8_4_ + auVar65._8_4_ * auVar55._8_4_;
                    bVar63 = *pbVar28;
                    if ((int)(uint)bVar63 < (int)uVar26) {
                      uVar45 = *(uint *)(*(long *)(param_4 + 0x70) + (ulong)bVar63 * 4);
                      uVar38 = uVar45 & 0x7ff;
                      uVar42 = uVar45 >> 0xb & 0x7ff;
                      uVar45 = uVar45 >> 0x16;
                      pfVar49 = (float *)(param_4 + 0x40);
                      pauVar50 = (undefined1 (*) [16])(param_4 + 0x30);
                    }
                    else {
                      uVar22 = *(ulong *)(*(long *)(param_4 + 0x78) +
                                         (ulong)*(ushort *)
                                                 (*(long *)(param_4 + 0x80) + (ulong)bVar63 * 2) * 8
                                         );
                      uVar38 = (uint)uVar22 & 0x1fffff;
                      uVar42 = (uint)(uVar22 >> 0x15) & 0x1fffff;
                      uVar45 = (uint)(uVar22 >> 0x2a);
                      pfVar49 = pfVar2;
                      pauVar50 = pauVar1;
                    }
                    auVar56._4_4_ = uVar42;
                    auVar56._0_4_ = uVar38;
                    auVar56._8_4_ = uVar45;
                    auVar56._12_4_ = 0;
                    auVar55 = NEON_scvtf(auVar56,4);
                    local_7e4 = CONCAT44(*(float *)(*pauVar50 + 4) + pfVar49[1] * auVar55._4_4_,
                                         *(float *)*pauVar50 + *pfVar49 * auVar55._0_4_);
                    local_7dc = *(float *)(*pauVar50 + 8) + pfVar49[2] * auVar55._8_4_;
                    bVar63 = *(byte *)(lVar27 + 2);
                    if ((int)(uint)bVar63 < (int)uVar26) {
                      uVar45 = *(uint *)(*(long *)(param_4 + 0x70) + (ulong)bVar63 * 4);
                      uVar38 = uVar45 & 0x7ff;
                      uVar42 = uVar45 >> 0xb & 0x7ff;
                      uVar45 = uVar45 >> 0x16;
                      pfVar49 = (float *)(param_4 + 0x40);
                      pauVar50 = (undefined1 (*) [16])(param_4 + 0x30);
                    }
                    else {
                      uVar22 = *(ulong *)(*(long *)(param_4 + 0x78) +
                                         (ulong)*(ushort *)
                                                 (*(long *)(param_4 + 0x80) + (ulong)bVar63 * 2) * 8
                                         );
                      uVar38 = (uint)uVar22 & 0x1fffff;
                      uVar42 = (uint)(uVar22 >> 0x15) & 0x1fffff;
                      uVar45 = (uint)(uVar22 >> 0x2a);
                      pfVar49 = pfVar2;
                      pauVar50 = pauVar1;
                    }
                    auVar57._4_4_ = uVar42;
                    auVar57._0_4_ = uVar38;
                    auVar57._8_4_ = uVar45;
                    auVar57._12_4_ = 0;
                    auVar105 = NEON_scvtf(auVar57,4);
                    auVar55 = *pauVar50;
                    local_7d8 = CONCAT44(auVar55._4_4_ + pfVar49[1] * auVar105._4_4_,
                                         auVar55._0_4_ + *pfVar49 * auVar105._0_4_);
                    local_7d0 = auVar55._8_4_ + pfVar49[2] * auVar105._8_4_;
                    bVar72 = *pbVar32;
                    if ((uint)bVar63 == (uint)bVar72) {
                      local_7c4 = local_7d0;
                      local_7cc = local_7d8;
                    }
                    else {
                      if (uVar26 == bVar72 || (int)uVar26 < (int)(uint)bVar72) {
                        auVar66 = SUB1612(*(undefined1 (*) [16])(param_4 + 0x10),0);
                        auVar65 = SUB1612(*(undefined1 (*) [16])(param_4 + 0x20),0);
                        uVar22 = *(ulong *)(*(long *)(param_4 + 0x78) +
                                           (ulong)*(ushort *)
                                                   (*(long *)(param_4 + 0x80) + (ulong)bVar72 * 2) *
                                           8);
                        auVar53._0_8_ =
                             CONCAT44((int)(uVar22 >> 0x15),(int)uVar22) & 0x1fffff001fffff;
                        auVar53._8_4_ = (uint)(uVar22 >> 0x2a);
                      }
                      else {
                        uVar26 = *(uint *)(*(long *)(param_4 + 0x70) + (ulong)(uint)bVar72 * 4);
                        auVar66 = SUB1612(*(undefined1 (*) [16])(param_4 + 0x30),0);
                        auVar65 = SUB1612(*(undefined1 (*) [16])(param_4 + 0x40),0);
                        auVar53._0_8_ = CONCAT44(uVar26 >> 0xb,uVar26) & 0x7ff000007ff;
                        auVar53._8_4_ = uVar26 >> 0x16;
                      }
                      auVar58._12_4_ = 0;
                      auVar58._0_12_ = auVar53;
                      auVar55 = NEON_scvtf(auVar58,4);
                      local_7cc = CONCAT44(auVar66._4_4_ + auVar65._4_4_ * auVar55._4_4_,
                                           auVar66._0_4_ + auVar65._0_4_ * auVar55._0_4_);
                      local_7c4 = auVar66._8_4_ + auVar65._8_4_ * auVar55._8_4_;
                    }
                    if (uVar37 != 2) {
                      local_d70 = 3;
                      goto LAB_00830194;
                    }
                    if (*pbVar32 < (*pbVar28 & *(byte *)(param_4 + 0x58))) {
                      local_d70 = 4;
                      goto LAB_00830194;
                    }
                    lVar35 = 2;
                    local_7b8 = local_7e8;
                    local_7c0 = local_7f0;
                    local_7ac = local_7d0;
                    local_7b4 = local_7d8;
                    local_7a0 = local_7c4;
                    local_7a8 = local_7cc;
                    local_794 = local_7e8;
                    local_79c = local_7f0;
                    local_d70 = 3;
                    local_7cc = local_7f0;
                    local_7c4 = local_7e8;
                  }
                  else {
                    lVar27 = *(long *)(param_4 + 0x80);
                    uVar22 = (ulong)*(byte *)(lVar35 + lVar31);
                    uVar6 = *(ushort *)(lVar27 + uVar22 * 2);
                    uVar7 = uVar6 >> 4 & 3;
                    if (uVar7 == 0) {
                      uVar22 = (ulong)*(ushort *)(lVar27 + uVar22 * 2 + 2);
                      if (uVar6 < 0x7000) {
                        local_d70 = (uint)(uVar6 >> 8);
LAB_0082fcfc:
                        lVar36 = *(long *)(param_4 + 0x78) + uVar22 * 8;
                        if (1 < local_d70) goto LAB_0082fdf0;
                        uVar22 = 0;
                      }
                      else {
                        lVar36 = *(long *)(param_4 + 0x78) + uVar22 * 8;
                        local_d70 = 0x70;
LAB_0082fdf0:
                        fVar84 = *pfVar2;
                        fVar107 = *(float *)(param_4 + 0x24);
                        fVar109 = *(float *)(param_4 + 0x28);
                        auVar55 = *pauVar1;
                        uVar22 = 0;
                        puVar40 = (ulong *)(lVar36 + 8);
                        puVar24 = &local_7e4;
                        do {
                          uVar33 = puVar40[-1];
                          auVar87._0_8_ =
                               CONCAT44((int)(uVar33 >> 0x15),(int)uVar33) & 0x1fffff001fffff;
                          auVar87._8_4_ = (uint)(uVar33 >> 0x2a);
                          auVar87._12_4_ = 0;
                          auVar105 = NEON_scvtf(auVar87,4);
                          uVar22 = uVar22 + 2;
                          *(ulong *)((long)puVar24 + -0xc) =
                               CONCAT44(auVar55._4_4_ + fVar107 * auVar105._4_4_,
                                        auVar55._0_4_ + fVar84 * auVar105._0_4_);
                          *(float *)((long)puVar24 + -4) = auVar55._8_4_ + fVar109 * auVar105._8_4_;
                          uVar33 = *puVar40;
                          auVar88._0_8_ =
                               CONCAT44((int)(uVar33 >> 0x15),(int)uVar33) & 0x1fffff001fffff;
                          auVar88._8_4_ = (uint)(uVar33 >> 0x2a);
                          auVar88._12_4_ = 0;
                          auVar105 = NEON_scvtf(auVar88,4);
                          *puVar24 = CONCAT44(auVar55._4_4_ + fVar107 * auVar105._4_4_,
                                              auVar55._0_4_ + fVar84 * auVar105._0_4_);
                          *(float *)(puVar24 + 1) = auVar55._8_4_ + fVar109 * auVar105._8_4_;
                          puVar40 = puVar40 + 2;
                          puVar24 = puVar24 + 3;
                        } while ((long)uVar22 < (long)(int)(local_d70 - 1));
                      }
                      if ((int)uVar22 < (int)local_d70) {
                        uVar33 = *(ulong *)(lVar36 + (uVar22 & 0xffffffff) * 8);
                        auVar60._0_8_ =
                             CONCAT44((int)(uVar33 >> 0x15),(int)uVar33) & 0x1fffff001fffff;
                        auVar60._8_4_ = (uint)(uVar33 >> 0x2a);
                        auVar60._12_4_ = 0;
                        puVar24 = (undefined8 *)((long)&local_7f0 + (uVar22 & 0xffffffff) * 0xc);
                        auVar105 = NEON_scvtf(auVar60,4);
                        auVar55 = *pauVar1;
                        uVar85 = CONCAT44(auVar55._4_4_ +
                                          *(float *)(param_4 + 0x24) * auVar105._4_4_,
                                          auVar55._0_4_ + *pfVar2 * auVar105._0_4_);
                        fVar109 = auVar55._8_4_ + *(float *)(param_4 + 0x28) * auVar105._8_4_;
LAB_00830168:
                        *puVar24 = uVar85;
                        *(float *)(puVar24 + 1) = fVar109;
                      }
                    }
                    else {
                      if ((bVar72 == 4) || (bVar63 != bVar73)) {
                        plVar29 = *(long **)(param_4 + 0x60);
LAB_0082fb68:
                        lVar36 = *plVar29;
                        if (0 < (int)*(uint *)(plVar29 + 1)) {
                          uVar33 = 0;
                          pbVar28 = (byte *)((long)plVar29 + lVar36 + 3);
                          do {
                            if (((*pbVar28 & 1) == 0) && (uVar25 == *pbVar28 >> 1)) {
                              auVar59 = *(undefined1 (*) [16])(plVar29 + 2);
                              auVar52 = auVar59._0_12_;
                              auVar71 = *(undefined1 (*) [16])(plVar29 + 4);
                              auVar86 = auVar71._0_12_;
                              if ((int)uVar33 != 0) goto LAB_0082fbbc;
                              goto LAB_0082fcd0;
                            }
                            uVar33 = uVar33 + 1;
                            pbVar28 = pbVar28 + 4;
                          } while (*(uint *)(plVar29 + 1) != uVar33);
                        }
                        auVar59 = *(undefined1 (*) [16])(plVar29 + 2);
                        auVar71 = *(undefined1 (*) [16])(plVar29 + 4);
                        uVar33 = 0xffffffff;
LAB_0082fbbc:
                        lVar39 = 0;
                        do {
                          iVar95 = (int)lVar39;
                          iVar83 = iVar95 + (*(byte *)((long)plVar29 + (long)iVar95 * 4 + lVar36 + 3
                                                      ) & 0xfe);
                          fVar107 = fVar15 * (auVar71._0_4_ - auVar59._0_4_);
                          fVar109 = fVar16 * (auVar71._4_4_ - auVar59._4_4_);
                          fVar110 = fVar15 * (auVar71._8_4_ - auVar59._8_4_);
                          local_280 = CONCAT44(iVar83,iVar95 + 1);
                          iVar83 = *(int *)((ulong)&local_280 | (ulong)(iVar83 <= (int)uVar33) << 2)
                          ;
                          lVar39 = (long)iVar83;
                          pbVar28 = (byte *)((long)plVar29 + lVar39 * 4 + lVar36);
                          bVar74 = *pbVar28 >> 4;
                          bVar63 = *pbVar28 & 0xf;
                          bVar75 = pbVar28[1] >> 4;
                          bVar72 = pbVar28[1] & 0xf;
                          bVar78 = pbVar28[2] >> 4;
                          bVar73 = pbVar28[2] & 0xf;
                          auVar52._0_8_ =
                               CONCAT44(auVar59._4_4_ + (float)(byte)(bVar75 * bVar75) * fVar109,
                                        auVar59._0_4_ + (float)(byte)(bVar74 * bVar74) * fVar107);
                          fVar84 = auVar59._8_4_ + (float)(byte)(bVar78 * bVar78) * fVar110;
                          auVar52._8_4_ = fVar84;
                          auVar86._4_4_ = auVar71._4_4_ - (float)(byte)(bVar72 * bVar72) * fVar109;
                          auVar86._0_4_ = auVar71._0_4_ - (float)(byte)(bVar63 * bVar63) * fVar107;
                          auVar59._8_4_ = fVar84;
                          auVar59._0_8_ = auVar52._0_8_;
                          auVar59._12_4_ = 0;
                          auVar86._8_4_ = auVar71._8_4_ - (float)(byte)(bVar73 * bVar73) * fVar110;
                          auVar71._12_4_ = 0;
                          auVar71._0_12_ = auVar86;
                        } while (iVar83 != (int)uVar33);
                      }
                      else {
                        plVar29 = *(long **)(param_4 + 0x60);
                        if (bVar72 != 3) goto LAB_0082fb68;
                        auVar100 = *(undefined1 (*) [16])(plVar29 + 2);
                        auVar52 = auVar100._0_12_;
                        auVar70 = *(undefined1 (*) [16])(plVar29 + 4);
                        auVar86 = auVar70._0_12_;
                        uVar26 = (uint)bVar63;
                        if (uVar26 != 0) {
                          lVar36 = 0;
                          do {
                            iVar95 = (int)lVar36;
                            iVar83 = iVar95 + (*(byte *)((long)plVar29 +
                                                        (long)iVar95 * 4 + *plVar29 + 3) & 0xfe);
                            fVar107 = fVar15 * (auVar70._0_4_ - auVar100._0_4_);
                            fVar109 = fVar16 * (auVar70._4_4_ - auVar100._4_4_);
                            fVar110 = fVar15 * (auVar70._8_4_ - auVar100._8_4_);
                            local_280 = CONCAT44(iVar83,iVar95 + 1);
                            uVar38 = *(uint *)((ulong)&local_280 |
                                              (ulong)(iVar83 <= (int)uVar26) << 2);
                            lVar36 = (long)(int)uVar38;
                            pbVar28 = (byte *)((long)plVar29 + lVar36 * 4 + *plVar29);
                            bVar74 = *pbVar28 >> 4;
                            bVar63 = *pbVar28 & 0xf;
                            bVar75 = pbVar28[1] >> 4;
                            bVar72 = pbVar28[1] & 0xf;
                            bVar78 = pbVar28[2] >> 4;
                            bVar73 = pbVar28[2] & 0xf;
                            auVar52._0_8_ =
                                 CONCAT44(auVar100._4_4_ + (float)(byte)(bVar75 * bVar75) * fVar109,
                                          auVar100._0_4_ + (float)(byte)(bVar74 * bVar74) * fVar107)
                            ;
                            fVar84 = auVar100._8_4_ + (float)(byte)(bVar78 * bVar78) * fVar110;
                            auVar52._8_4_ = fVar84;
                            auVar86._4_4_ = auVar70._4_4_ - (float)(byte)(bVar72 * bVar72) * fVar109
                            ;
                            auVar86._0_4_ = auVar70._0_4_ - (float)(byte)(bVar63 * bVar63) * fVar107
                            ;
                            auVar100._8_4_ = fVar84;
                            auVar100._0_8_ = auVar52._0_8_;
                            auVar100._12_4_ = 0;
                            auVar86._8_4_ = auVar70._8_4_ - (float)(byte)(bVar73 * bVar73) * fVar110
                            ;
                            auVar70._12_4_ = 0;
                            auVar70._0_12_ = auVar86;
                          } while (uVar38 != uVar26);
                        }
                      }
LAB_0082fcd0:
                      uVar22 = (ulong)*(ushort *)(lVar27 + uVar22 * 2 + 2);
                      local_d70 = (uint)(uVar6 >> 8);
                      if (0x6f < local_d70) {
                        local_d70 = 0x70;
                      }
                      fVar84 = auVar52._0_4_;
                      fVar107 = auVar52._4_4_;
                      fVar109 = auVar52._8_4_;
                      if (uVar7 == 2) {
                        lVar36 = *(long *)(param_4 + 0x78) + uVar22 * 8;
                        auVar67._0_4_ = (auVar86._0_4_ - fVar84) * *(float *)PTR_DAT_047d1a68;
                        auVar67._4_4_ = (auVar86._4_4_ - fVar107) * *(float *)(PTR_DAT_047d1a68 + 4)
                        ;
                        auVar67._8_4_ = (auVar86._8_4_ - fVar109) * *(float *)(PTR_DAT_047d1a68 + 8)
                        ;
                        if (local_d70 < 2) {
                          uVar22 = 0;
                          if (local_d70 == 0) goto LAB_00830170;
LAB_00830100:
                          uVar6 = *(ushort *)(lVar36 + (ulong)((uint)uVar22 ^ 3) * 2);
                          uVar45 = uVar6 & 0x1f;
                          uVar38 = uVar6 >> 5 & 0x1f;
                          uVar26 = (uint)(uVar6 >> 10);
LAB_00830148:
                          auVar93._4_4_ = uVar38;
                          auVar93._0_4_ = uVar45;
                          auVar93._8_4_ = uVar26;
                          auVar93._12_4_ = 0;
                          auVar55 = NEON_scvtf(auVar93,4);
                          puVar24 = (undefined8 *)((long)&local_7f0 + (uVar22 & 0xffffffff) * 0xc);
                          uVar85 = CONCAT44(fVar107 + auVar67._4_4_ * auVar55._4_4_,
                                            fVar84 + auVar67._0_4_ * auVar55._0_4_);
                          fVar109 = fVar109 + auVar67._8_4_ * auVar55._8_4_;
                          goto LAB_00830168;
                        }
                        uVar22 = 0;
                        puVar24 = &local_7e4;
                        do {
                          uVar6 = *(ushort *)(lVar36 + (uVar22 ^ 3) * 2);
                          auVar89._0_8_ = (ulong)CONCAT24(uVar6 >> 5,(uint)uVar6) & 0x1f0000001f;
                          uVar33 = uVar22 ^ 2;
                          uVar22 = uVar22 + 2;
                          auVar89._8_2_ = uVar6 >> 10;
                          auVar89._10_6_ = 0;
                          auVar55 = NEON_scvtf(auVar89,4);
                          *(ulong *)((long)puVar24 + -0xc) =
                               CONCAT44(fVar107 + auVar67._4_4_ * auVar55._4_4_,
                                        fVar84 + auVar67._0_4_ * auVar55._0_4_);
                          *(float *)((long)puVar24 + -4) = fVar109 + auVar67._8_4_ * auVar55._8_4_;
                          uVar6 = *(ushort *)(lVar36 + uVar33 * 2);
                          auVar90._0_8_ = (ulong)CONCAT24(uVar6 >> 5,(uint)uVar6) & 0x1f0000001f;
                          auVar90._8_2_ = uVar6 >> 10;
                          auVar90._10_6_ = 0;
                          auVar55 = NEON_scvtf(auVar90,4);
                          *puVar24 = CONCAT44(fVar107 + auVar67._4_4_ * auVar55._4_4_,
                                              fVar84 + auVar67._0_4_ * auVar55._0_4_);
                          *(float *)(puVar24 + 1) = fVar109 + auVar67._8_4_ * auVar55._8_4_;
                          puVar24 = puVar24 + 3;
                        } while ((long)uVar22 < (long)(int)(local_d70 - 1));
                        if ((int)uVar22 < (int)local_d70) goto LAB_00830100;
                      }
                      else if (uVar7 == 1) {
                        lVar36 = *(long *)(param_4 + 0x78) + uVar22 * 8;
                        auVar67._0_4_ = (auVar86._0_4_ - fVar84) * *(float *)PTR_DAT_047d1a70;
                        auVar67._4_4_ = (auVar86._4_4_ - fVar107) * *(float *)(PTR_DAT_047d1a70 + 4)
                        ;
                        auVar67._8_4_ = (auVar86._8_4_ - fVar109) * *(float *)(PTR_DAT_047d1a70 + 8)
                        ;
                        if (local_d70 < 2) {
                          uVar22 = 0;
                          if (local_d70 != 0) goto LAB_0083012c;
                        }
                        else {
                          uVar22 = 0;
                          puVar43 = (uint *)(lVar36 + 4);
                          puVar24 = &local_7e4;
                          do {
                            uVar26 = *puVar43;
                            auVar91._0_8_ = CONCAT44(uVar26 >> 0xb,uVar26) & 0x7ff000007ff;
                            auVar91._8_4_ = uVar26 >> 0x16;
                            auVar91._12_4_ = 0;
                            auVar55 = NEON_scvtf(auVar91,4);
                            uVar22 = uVar22 + 2;
                            *(ulong *)((long)puVar24 + -0xc) =
                                 CONCAT44(fVar107 + auVar67._4_4_ * auVar55._4_4_,
                                          fVar84 + auVar67._0_4_ * auVar55._0_4_);
                            *(float *)((long)puVar24 + -4) = fVar109 + auVar67._8_4_ * auVar55._8_4_
                            ;
                            uVar26 = puVar43[-1];
                            puVar43 = puVar43 + 2;
                            auVar92._0_8_ = CONCAT44(uVar26 >> 0xb,uVar26) & 0x7ff000007ff;
                            auVar92._8_4_ = uVar26 >> 0x16;
                            auVar92._12_4_ = 0;
                            auVar55 = NEON_scvtf(auVar92,4);
                            *puVar24 = CONCAT44(fVar107 + auVar67._4_4_ * auVar55._4_4_,
                                                fVar84 + auVar67._0_4_ * auVar55._0_4_);
                            *(float *)(puVar24 + 1) = fVar109 + auVar67._8_4_ * auVar55._8_4_;
                            puVar24 = puVar24 + 3;
                          } while ((long)uVar22 < (long)(int)(local_d70 - 1));
                          if ((int)uVar22 < (int)local_d70) {
LAB_0083012c:
                            uVar26 = *(uint *)(lVar36 + (ulong)((uint)uVar22 | 1) * 4);
                            uVar45 = uVar26 & 0x7ff;
                            uVar38 = uVar26 >> 0xb & 0x7ff;
                            uVar26 = uVar26 >> 0x16;
                            goto LAB_00830148;
                          }
                        }
                      }
                      else {
                        if (uVar7 == 0) goto LAB_0082fcfc;
                        FUN_032260f8(&local_8e0,&local_280,0x200);
                        uVar85 = FUN_0322b1e0(&local_8e0,"Compression method #");
                        uVar85 = FUN_0322b250(uVar85,*(ushort *)
                                                      (*(long *)(param_4 + 0x80) +
                                                      (ulong)*(byte *)(*(long *)(param_4 + 0x68) +
                                                                      lVar31) * 2) >> 4 & 3);
                        FUN_0322b1e0(uVar85," not implemented");
                        iVar83 = FUN_03226f50(0x902f09ed,&local_280,
                                              "../..\\Geometry/Collide/DataStructures/StaticMeshTree/hkcdStaticMeshTreeDecoder.inl"
                                              ,0x95);
                        if (iVar83 != 0) {
                          CallSupervisor(0x26);
                        }
                        FUN_032261b0(&local_8e0);
                        lVar27 = *(long *)(param_4 + 0x80);
                        lVar35 = *(long *)(param_4 + 0x68);
                      }
                    }
LAB_00830170:
                    if ((*(ushort *)(lVar27 + (ulong)*(byte *)(lVar35 + lVar31) * 2) & 0xc0) != 0) {
                      iVar81 = (uint)*(ushort *)(lVar27 + (ulong)*(byte *)(lVar35 + lVar31) * 2 + 4)
                               << 0x10;
                    }
LAB_00830194:
                    lVar35 = 1;
                  }
                  local_830 = *(undefined8 *)(param_4 + 0xf0);
                  uStack_828 = *(undefined8 *)(param_4 + 0xf8);
                  local_820 = *(undefined8 *)(param_4 + 0x100);
                  uStack_818 = *(undefined8 *)(param_4 + 0x108);
                  local_810 = *(undefined8 *)(param_4 + 0x110);
                  uStack_808 = *(undefined8 *)(param_4 + 0x118);
                  local_800 = *(undefined8 *)(param_4 + 0x120);
                  uStack_7f8 = *(undefined8 *)(param_4 + 0x128);
                  puVar24 = *(undefined8 **)(*(long *)(param_4 + 0xd8) + 0x20);
                  local_870 = *puVar24;
                  uStack_868 = puVar24[1];
                  local_860 = puVar24[2];
                  uStack_858 = puVar24[3];
                  local_850 = puVar24[4];
                  uStack_848 = puVar24[5];
                  local_840 = puVar24[6];
                  uStack_838 = puVar24[7];
                  lVar27 = *(long *)(param_4 + 0x88);
                  uVar26 = (uint)*(byte *)(*(long *)(param_4 + 0x60) + 0x5a);
                  if (uVar26 < 5) {
                    iVar83 = 0;
                  }
                  else {
                    iVar83 = 0;
                    iVar95 = uVar26 - 1;
                    do {
                      while( true ) {
                        iVar101 = iVar83 + iVar95 >> 1;
                        iVar102 = uVar25 - *(byte *)(lVar27 + (long)iVar101 * 4 + 2);
                        if (iVar102 < 0) break;
                        puVar34 = (undefined2 *)
                                  (lVar27 + ((long)((ulong)(uint)(iVar83 + iVar95) << 0x20) >> 0x21)
                                            * 4);
                        if (iVar102 < (int)(uint)*(byte *)((long)puVar34 + 3)) goto LAB_00830280;
                        iVar83 = iVar101 + 1;
                        if (iVar95 - iVar83 < 4) goto LAB_0083025c;
                      }
                      iVar95 = iVar101;
                    } while (3 < iVar101 - iVar83);
                  }
LAB_0083025c:
                  for (puVar34 = (undefined2 *)(lVar27 + (long)iVar83 * 4);
                      ((int)(uVar25 - *(byte *)(puVar34 + 1)) < 0 ||
                      ((int)(uint)*(byte *)((long)puVar34 + 3) <=
                       (int)(uVar25 - *(byte *)(puVar34 + 1)))); puVar34 = puVar34 + 2) {
                  }
LAB_00830280:
                  auVar65 = auVar18._0_12_;
                  uVar5 = *puVar34;
                  local_d74 = 0;
                  local_db0 = 0;
                  auVar94 = auVar18;
                }
                lVar27 = 0;
                puVar24 = &local_7e4;
                do {
                  uVar26 = uVar25 << 1 | (uint)lVar27 | *(int *)(param_4 + 0x94) << 8;
                  plVar29 = *(long **)(param_4 + 0xd8);
                  lVar36 = plVar29[5];
                  if (lVar36 == 0) {
LAB_0083035c:
                    local_880 = **(undefined8 **)(param_4 + 0xe0);
                    local_878 = (*(undefined8 **)(param_4 + 0xe0))[1];
                    local_8e0 = *plVar29;
                    local_8d8 = plVar29[1];
                    local_8d0 = plVar29[2];
                    local_8c0 = (float *)plVar29[4];
                    local_8b8 = 0;
                    local_8b0 = (char)plVar29[6];
                    local_8ac = *(uint *)((long)plVar29 + 0x34);
                    auVar55 = *(undefined1 (*) [16])(plVar29 + 8);
                    uStack_888 = SUB168(*(undefined1 (*) [16])(plVar29 + 10),8);
                    local_890 = SUB168(*(undefined1 (*) [16])(plVar29 + 10),0);
                    uStack_898 = auVar55._8_8_;
                    local_8a0 = auVar55._0_8_;
                    local_8a8[0] = (int)plVar29[7];
                    iVar83 = *(int *)((long)plVar29 + 0x1c) +
                             (uint)*(byte *)(*(long *)(param_4 + 0xd0) + 0x1c);
                    uVar26 = (uVar26 + 1 << (ulong)(-iVar83 & 0x1f)) - 1 |
                             *(uint *)(PTR_DAT_047d1a60 + (long)*(int *)((long)plVar29 + 0x1c) * 4)
                             & *(uint *)(plVar29 + 3);
                    uStack_8c8 = CONCAT44(iVar83,uVar26);
                    if (auVar94._8_4_ == auVar65._8_4_ &&
                        (auVar94._0_4_ == auVar65._0_4_ && auVar94._4_4_ == auVar65._4_4_)) {
                      plVar23 = (long *)**(long **)(param_4 + 0xb8);
                    }
                    else {
                      auVar61._0_8_ =
                           CONCAT44(auVar94._4_4_ * auVar55._4_4_,auVar94._0_4_ * auVar55._0_4_);
                      auVar61._8_4_ = auVar94._8_4_ * auVar55._8_4_;
                      auVar61._12_4_ = auVar94._12_4_ * auVar55._12_4_;
                      local_8b0 = '\x01';
                      uStack_898 = auVar61._8_8_;
                      plVar23 = (long *)**(long **)(param_4 + 0xb8);
                      local_8a0 = auVar61._0_8_;
                      local_8ac = local_d74;
                    }
                    if (plVar23 != (long *)0x0) {
                      (**(code **)(*plVar23 + 0x40))
                                (plVar23,uVar5,5,*plVar29,plVar29[1],*(long *)(param_4 + 0xd0),
                                 uVar26,0,&local_880);
                      lVar36 = *(long *)(param_4 + 0xb8);
                      if (*(long *)(lVar36 + 8) != 0) {
                        local_280 = CONCAT62(local_280._2_6_,*(undefined2 *)(lVar36 + 0x10));
                        uVar85 = *(undefined8 *)(lVar36 + 0x14);
                        *(undefined4 *)((undefined8 *)((ulong)&local_280 | 4) + 1) =
                             *(undefined4 *)(lVar36 + 0x1c);
                        *(undefined8 *)((ulong)&local_280 | 4) = uVar85;
                        puVar30 = *(undefined8 **)(param_4 + 200);
                        local_270 = *puVar30;
                        uStack_268 = puVar30[1];
                        local_260 = (undefined4)puVar30[2];
                        uStack_25c = (undefined4)((ulong)puVar30[2] >> 0x20);
                        uStack_258 = *(undefined4 *)(puVar30 + 3);
                        local_250 = *(long *)(lVar36 + 0x38);
                        local_920[0] = CONCAT22(local_920[0]._2_2_,(undefined2)local_880);
                        uVar22 = *puVar47;
                        *(int *)(puVar46 + 1) = (int)puVar47[1];
                        *puVar46 = uVar22;
                        local_910 = **(ulong **)(param_4 + 0xd8);
                        local_908 = (*(ulong **)(param_4 + 0xd8))[1];
                        local_900 = *(undefined8 *)(param_4 + 0xd0);
                        local_8f8 = (float)uStack_8c8;
                        local_8f0 = 0;
                        uVar22 = (**(code **)(**(long **)(lVar36 + 8) + 0x40))
                                           (*(long **)(lVar36 + 8),5,
                                            *(char *)(param_4 + 0x130) == '\0',&local_280,local_920)
                        ;
                        if ((uVar22 & 1) == 0) goto LAB_00830304;
                      }
                    }
                    local_920[0] = 7;
                    puVar30 = &local_7f0 + lVar27 * 6;
                    puVar48[2] = 0;
                    puVar48[3] = 0;
                    *puVar48 = 0;
                    puVar48[1] = 0;
                    if (uVar37 - 1 < 2) {
                      local_920[0] = 3;
LAB_008305a8:
                      local_910 = CONCAT44(iVar81,local_d70);
                      local_918 = puVar30;
                    }
                    else {
                      if (uVar37 == 3) {
                        uVar7 = *(ushort *)
                                 (*(long *)(param_4 + 0x80) +
                                 (ulong)*(byte *)(*(long *)(param_4 + 0x68) + lVar31) * 2);
                        uVar6 = uVar7 & 0xf;
                        if (uVar6 == 2) {
                          local_920[0] = 4;
                        }
                        else if (uVar6 == 1) {
                          local_920[0] = 2;
                        }
                        else if ((uVar7 & 0xf) == 0) {
                          local_920[0] = 0;
                        }
                        else {
                          local_920[0] = 7;
                        }
                        goto LAB_008305a8;
                      }
                      if (uVar37 == 4) {
                        (**(code **)(*(long *)PTR_DAT_047d19f0 +
                                     (ulong)*(byte *)(local_db0 + 0x18) * 0x200 + 0xa8))
                                  (local_db0,local_920,&local_7f0,&local_2b0);
                      }
                    }
                    if (local_8b0 != '\0') {
                      local_8a8[0] = iVar81;
                      if (uVar37 - 3 < 2) {
                        FUN_00cb0560(local_918,local_910 & 0xffffffff,local_8ac,&local_8a0,local_8a8
                                     ,&local_890);
                        if (local_8b0 == '\0') goto LAB_008306bc;
                      }
                      if (0 < (int)local_910) {
                        lVar36 = 0;
                        fVar110 = (float)local_8a0;
                        fVar84 = (float)local_890;
                        fVar77 = (float)((ulong)local_8a0 >> 0x20);
                        fVar107 = (float)((ulong)local_890 >> 0x20);
                        fVar82 = (float)uStack_898;
                        fVar109 = (float)uStack_888;
                        if ((int)local_910 != 1) {
                          pauVar41 = (undefined1 (*) [12])((long)local_918 + 0xc);
                          puVar44 = puVar24;
                          do {
                            lVar36 = lVar36 + 2;
                            auVar66 = pauVar41[-1];
                            *(ulong *)((long)puVar44 + -0xc) =
                                 CONCAT44(fVar107 + fVar77 * auVar66._4_4_,
                                          fVar84 + fVar110 * (float)*(undefined8 *)pauVar41[-1]);
                            *(float *)((long)puVar44 + -4) = fVar109 + fVar82 * auVar66._8_4_;
                            puVar19 = *pauVar41;
                            auVar66 = *pauVar41;
                            pauVar41 = pauVar41 + 2;
                            *puVar44 = CONCAT44(fVar107 + fVar77 * auVar66._4_4_,
                                                fVar84 + fVar110 * (float)*(undefined8 *)puVar19);
                            *(float *)(puVar44 + 1) = fVar109 + fVar82 * auVar66._8_4_;
                            puVar44 = puVar44 + 3;
                          } while ((local_910 & 0xffffffff) - (local_910 & 1) != lVar36);
                        }
                        if ((local_910 & 1) != 0) {
                          puVar44 = (undefined8 *)((long)local_918 + lVar36 * 0xc);
                          uVar85 = *puVar44;
                          fVar96 = *(float *)(puVar44 + 1);
                          puVar44 = (undefined8 *)((long)puVar30 + lVar36 * 0xc);
                          *puVar44 = CONCAT44(fVar107 + fVar77 * (float)((ulong)uVar85 >> 0x20),
                                              fVar84 + fVar110 * (float)uVar85);
                          *(float *)(puVar44 + 1) = fVar109 + fVar82 * fVar96;
                        }
                      }
                      local_910 = CONCAT44(local_8a8[0],(int)local_910);
                      local_908 = 0;
                      local_900 = 0;
                      local_918 = puVar30;
                    }
LAB_008306bc:
                    local_8c0 = (float *)&local_870;
                    plVar23 = *(long **)(param_4 + 0x138);
                    lVar36 = *(long *)(param_4 + 0xb8);
                    puVar43 = *(uint **)(param_4 + 0xc0);
                    plVar29 = *(long **)(param_4 + 200);
                    if ((*(byte *)(plVar23 + 1) >> 1 & 1) == 0) {
                      local_290 = plVar23[2];
                      uVar22 = (**(code **)(**(long **)(param_4 + 0xb0) + (ulong)*puVar43 * 0x38 +
                                            (ulong)local_920[0] * 8 + 0x3cb8))
                                         (puVar43,local_920,&local_830,*(byte *)(plVar23 + 1),
                                          &local_2b0);
                      if ((uVar22 & 1) != 0) {
                        local_208 = 5;
                        local_204 = 0;
                        local_260 = (undefined4)local_290;
                        fVar107 = local_2a0._4_4_;
                        auVar55 = *(undefined1 (*) [16])(local_8c0 + 8);
                        auVar105 = *(undefined1 (*) [16])(local_8c0 + 0xc);
                        fVar109 = local_2a0._8_4_;
                        uStack_278 = CONCAT44(auVar105._12_4_ +
                                              auVar55._12_4_ * fStack_2a8 +
                                              local_8c0[3] * local_2b0 + local_8c0[7] * fStack_2ac,
                                              auVar105._8_4_ +
                                              auVar55._8_4_ * fStack_2a8 +
                                              local_8c0[2] * local_2b0 + local_8c0[6] * fStack_2ac);
                        local_280 = CONCAT44(auVar105._4_4_ +
                                             auVar55._4_4_ * fStack_2a8 +
                                             local_8c0[1] * local_2b0 + local_8c0[5] * fStack_2ac,
                                             auVar105._0_4_ +
                                             auVar55._0_4_ * fStack_2a8 +
                                             *local_8c0 * local_2b0 + local_8c0[4] * fStack_2ac);
                        fVar84 = local_2a0._0_4_;
                        auVar62._0_8_ =
                             CONCAT44(auVar55._4_4_ * fVar109 +
                                      local_8c0[1] * fVar84 + local_8c0[5] * fVar107,
                                      auVar55._0_4_ * fVar109 +
                                      *local_8c0 * fVar84 + local_8c0[4] * fVar107);
                        auVar62._8_4_ =
                             auVar55._8_4_ * fVar109 +
                             local_8c0[2] * fVar84 + local_8c0[6] * fVar107;
                        auVar62._12_4_ =
                             auVar55._12_4_ * fVar109 +
                             local_8c0[3] * fVar84 + local_8c0[7] * fVar107;
                        uStack_268 = auVar62._8_8_;
                        lVar39 = *plVar29;
                        fStack_248 = *(float *)(plVar29 + 3);
                        local_240 = *(undefined2 *)(lVar36 + 0x10);
                        local_23c = (undefined4)*(ulong *)(lVar36 + 0x14);
                        uStack_238 = *(ulong *)(lVar36 + 0x14) >> 0x20;
                        fStack_244 = (float)CONCAT31(fStack_244._1_3_,0xf);
                        if (lVar39 == 0) {
                          uStack_258 = 0xffffffff;
                          uStack_254 = 0xffffffff;
                          local_250 = CONCAT44(local_250._4_4_,0xffffff);
                          if (local_8e0 != 0) goto LAB_0083086c;
LAB_00830890:
                          local_228 = 0xffffff;
                          local_230 = 0xffffffffffffffff;
                        }
                        else {
                          uStack_258 = (undefined4)*(undefined8 *)(lVar39 + 0xb0);
                          uStack_254 = (undefined4)((ulong)*(undefined8 *)(lVar39 + 0xb0) >> 0x20);
                          local_250 = CONCAT44(local_250._4_4_,*(undefined4 *)(lVar39 + 0x50));
                          if (local_8e0 == 0) goto LAB_00830890;
LAB_0083086c:
                          local_230 = *(undefined8 *)(local_8e0 + 0xb0);
                          local_228 = *(undefined4 *)(local_8e0 + 0x50);
                        }
                        local_220 = (float)uStack_8c8;
                        local_218 = (undefined2)local_880;
                        local_214 = (undefined4)*puVar47;
                        uStack_210 = *puVar47 >> 0x20;
                        local_21c = *(undefined1 *)(lVar36 + 0x20);
                        local_270 = auVar62._0_8_;
                        (**(code **)(*plVar23 + 0x28))(plVar23,&local_280);
                      }
                    }
                    else {
                      (**(code **)(*plVar23 + 0x30))
                                (plVar23,**(long **)(param_4 + 0xb0),lVar36,puVar43,lVar36 + 0x10,
                                 plVar29,local_920,&local_880,&local_8e0,&local_830);
                    }
                  }
                  else {
                    uVar22 = (**(code **)(*(long *)PTR_DAT_047d19f0 +
                                          (ulong)*(byte *)(lVar36 + 0x18) * 0x40 + 0x4020))
                                       (lVar36,uVar26 << (ulong)(*(uint *)(param_4 + 0xa0) & 0x1f));
                    if ((uVar22 & 1) != 0) {
                      plVar29 = *(long **)(param_4 + 0xd8);
                      goto LAB_0083035c;
                    }
                  }
LAB_00830304:
                  lVar27 = lVar27 + 1;
                  puVar24 = puVar24 + 6;
                } while (lVar27 != lVar35);
              }
              iVar76 = iVar76 + 1;
            } while (iVar76 != iVar64);
            uVar85 = *(undefined8 *)(*(long *)(param_4 + 0x138) + 0x10);
            uVar85 = NEON_fmax(uVar111,CONCAT44((float)((ulong)uVar85 >> 0x20) *
                                                (float)((ulong)*(undefined8 *)(param_4 + 0xe8) >>
                                                       0x20),
                                                (float)uVar85 *
                                                (float)*(undefined8 *)(param_4 + 0xe8)),4);
            fVar84 = (float)((ulong)uVar85 >> 0x20);
            uVar85 = CONCAT44(fVar84 * fVar84,(float)uVar85 * (float)uVar85);
            cVar4 = *(char *)(*(long *)(param_4 + 0x138) + 0x18);
          }
          if (cVar4 != '\0') {
            return;
          }
          auVar55._8_8_ = uVar85;
          auVar55._0_8_ = uVar85;
          puVar24 = local_930;
        }
      }
      local_930 = puVar24;
    } while (local_d30 != local_930);
  }
  return;
}


