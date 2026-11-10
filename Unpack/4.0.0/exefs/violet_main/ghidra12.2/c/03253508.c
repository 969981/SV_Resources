/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03253508; name: FUN_03253508
 */


void FUN_03253508(long *param_1,undefined8 *param_2,long param_3,long *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  unkbyte9 *pVar3;
  undefined8 *puVar4;
  uint uVar5;
  char cVar6;
  ulong uVar7;
  unkbyte9 *pVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  bool bVar32;
  int iVar33;
  ulong uVar34;
  unkbyte9 *pVar35;
  unkbyte9 *pVar36;
  undefined8 *puVar37;
  uint uVar38;
  int iVar39;
  ulong uVar40;
  undefined8 *puVar41;
  long lVar42;
  uint uVar43;
  ulong uVar44;
  long lVar45;
  long lVar46;
  int iVar47;
  long lVar48;
  ulong uVar49;
  float fVar50;
  undefined1 auVar51 [12];
  float fVar54;
  float fVar55;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  uint uVar56;
  undefined4 uVar57;
  undefined1 auVar59 [12];
  undefined1 auVar60 [12];
  undefined8 uVar58;
  undefined1 auVar61 [12];
  undefined1 auVar62 [12];
  undefined4 uVar67;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined4 uVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined8 local_3180;
  undefined8 uStack_3178;
  undefined8 local_3170;
  undefined8 uStack_3168;
  float local_3160;
  float fStack_315c;
  float fStack_3158;
  float fStack_3150;
  float fStack_314c;
  float fStack_3148;
  uint local_3140;
  uint local_313c;
  int local_3138;
  undefined8 local_3130 [4];
  undefined8 local_3110;
  uint local_3108 [3062];
  undefined1 local_130 [16];
  undefined8 auStack_120 [2];
  uint local_110 [44];
  
  local_3130[0] = *param_2;
  local_3130[1] = param_2[1];
  local_3130[3] = param_2[3];
  local_3130[2] = param_2[2];
  uVar34 = param_2[4];
  local_3108[0] = *(uint *)(param_2 + 5);
  if (*(int *)((long)param_2 + 0x24) < 5) {
    lVar42 = *param_4;
    uVar49 = lVar42 - param_3;
    local_3110._0_4_ = (int)uVar34;
    local_3110._4_4_ = (int)(uVar34 >> 0x20);
    iVar33 = *(int *)(param_2 + 5);
    if (local_3110._4_4_ < 5) {
      lVar46 = param_1[5] + (long)(int)local_3110 * 0x10;
      uVar57 = *(undefined4 *)(lVar46 + 0xc);
      uVar67 = *(undefined4 *)(lVar46 + 0x1c);
      uVar68 = *(undefined4 *)(lVar46 + 0x3c);
      *(undefined4 *)(lVar42 + 0x68) = *(undefined4 *)(lVar46 + 0x2c);
      *(undefined4 *)(lVar42 + 0x6c) = uVar68;
      *(undefined4 *)(lVar42 + 0x60) = uVar57;
      *(undefined4 *)(lVar42 + 100) = uVar67;
      lVar42 = *param_4;
      if (local_3110._4_4_ != 4) {
        lVar46 = (long)local_3110._4_4_;
        if ((uVar34 & 0x100000000) != 0) {
          *(undefined4 *)(lVar42 + lVar46 * 4 + 0x60) = 0xffffffff;
          lVar42 = *param_4;
          lVar46 = lVar46 + 1;
        }
        if (local_3110._4_4_ != 3) {
          do {
            *(undefined4 *)(lVar42 + lVar46 * 4 + 0x60) = 0xffffffff;
            lVar42 = lVar46 * 4;
            lVar46 = lVar46 + 2;
            *(undefined4 *)(*param_4 + lVar42 + 100) = 0xffffffff;
            lVar42 = *param_4;
          } while ((int)lVar46 != 4);
        }
      }
      *(undefined1 *)(lVar42 + 0x70) = 1;
      lVar42 = *param_4;
    }
    param_3 = param_3 + (long)iVar33 * 0x80;
    *param_4 = lVar42 + 0x80;
    *(undefined1 *)(param_3 + 0x70) = 0;
    *(undefined8 *)(param_3 + 0x68) = 0;
    *(ulong *)(param_3 + 0x60) = uVar49 >> 7 & 0xffffffff;
  }
  else {
    auVar63._8_4_ = 0x807fffff;
    auVar63._0_8_ = 0x807fffff807fffff;
    auVar63._12_4_ = 0x807fffff;
    uVar49 = 1;
    local_3110 = uVar34;
    do {
      uVar49 = (long)(int)uVar49 - 1;
      memcpy(&local_3160,local_3130 + uVar49 * 6,0x30);
      if ((int)local_313c < 0x21) {
        uVar34 = (ulong)local_313c;
        if (*(int *)((long)param_1 + 0xc) == 0) {
          uVar58 = CONCAT44(fStack_314c - fStack_315c,fStack_3150 - local_3160);
          fVar50 = fStack_3148 - fStack_3158;
          uVar58 = NEON_fmaxp(uVar58,uVar58,4);
          uVar58 = NEON_fmax(CONCAT17((char)((uint)fVar50 >> 0x18),
                                      CONCAT16((char)((uint)fVar50 >> 0x10),
                                               CONCAT15((char)((uint)fVar50 >> 8),
                                                        CONCAT14(SUB41(fVar50,0),fVar50)))),uVar58,4
                            );
          cVar6 = PTR_DAT_047d1a18
                  [(-(uint)((float)((ulong)uVar58 >> 0x20) <= fStack_314c - fStack_315c) & 2) +
                   (uint)((float)uVar58 <= fStack_3150 - local_3160) |
                   -(uint)((float)uVar58 <= fVar50) & 4];
          if (cVar6 == '\x02') {
            if (0 < (int)local_313c) {
              uVar34 = 0;
              puVar4 = (undefined8 *)(param_1[5] + (long)(int)local_3140 * 0x10);
              puVar37 = puVar4;
              do {
                auVar53 = *(undefined1 (*) [16])(puVar4 + uVar34 * 2);
                if (uVar34 != 0) {
                  uVar56 = (uint)(auVar53._8_4_ >> 0x1f) >> 1;
                  auVar62._0_8_ =
                       (long)CONCAT81(CONCAT44((uint)(auVar53._12_4_ >> 0x1f) >> 1,uVar56),
                                      auVar53[7]) << 0x38;
                  auVar62[8] = (byte)uVar56 ^ auVar53[8];
                  auVar62[9] = (byte)(uVar56 >> 8) ^ auVar53[9];
                  auVar62[10] = (byte)(uVar56 >> 0x10) ^ auVar53[10];
                  auVar62[0xb] = (byte)((char)auVar53[0xb] >> 7) >> 1 ^ auVar53[0xb];
                  uVar44 = uVar34;
                  puVar41 = puVar37;
                  do {
                    puVar2 = puVar4 + (ulong)((int)uVar44 - 1) * 2;
                    uVar58 = puVar2[1];
                    bVar69 = (byte)((ulong)uVar58 >> 0x18);
                    uVar56 = CONCAT13((char)bVar69 >> 7,(int3)((int)(char)bVar69 >> 7)) >> 1;
                    if ((float)CONCAT13((byte)((char)bVar69 >> 7) >> 1 ^ bVar69,
                                        CONCAT12((byte)(uVar56 >> 0x10) ^
                                                 (byte)((ulong)uVar58 >> 0x10),
                                                 CONCAT11((byte)(uVar56 >> 8) ^
                                                          (byte)((ulong)uVar58 >> 8),
                                                          (byte)uVar56 ^ (byte)uVar58))) <=
                        auVar62._8_4_) goto LAB_03253ba8;
                    puVar41[1] = puVar2[1];
                    *puVar41 = *puVar2;
                    uVar40 = uVar44 - 1;
                    bVar32 = 0 < (long)uVar44;
                    uVar44 = uVar40;
                    puVar41 = puVar41 + -2;
                  } while (uVar40 != 0 && bVar32);
                }
                uVar44 = 0;
LAB_03253ba8:
                uVar34 = uVar34 + 1;
                puVar37 = puVar37 + 2;
                puVar41 = (undefined8 *)
                          ((long)puVar4 +
                          (-(uVar44 >> 0x1f & 1) & 0xfffffff000000000 | (uVar44 & 0xffffffff) << 4))
                ;
                puVar41[1] = auVar53._8_8_;
                *puVar41 = auVar53._0_8_;
              } while (uVar34 != local_313c);
            }
          }
          else if (cVar6 == '\x01') {
            if (0 < (int)local_313c) {
              uVar34 = 0;
              puVar4 = (undefined8 *)(param_1[5] + (long)(int)local_3140 * 0x10);
              puVar37 = puVar4;
              do {
                auVar53 = *(undefined1 (*) [16])(puVar4 + uVar34 * 2);
                if (uVar34 != 0) {
                  uVar56 = (uint)(auVar53._4_4_ >> 0x1f) >> 1;
                  auVar65._4_4_ = (uint)(auVar53._12_4_ >> 0x1f) >> 1;
                  auVar65._0_4_ = (uint)(auVar53._8_4_ >> 0x1f) >> 1;
                  auVar65._8_8_ = 0;
                  auVar29._1_11_ = SUB1611(auVar65 << 0x40,5);
                  auVar29[0] = (byte)uVar56 ^ auVar53[4];
                  uVar44 = uVar34;
                  puVar41 = puVar37;
                  do {
                    puVar2 = puVar4 + (ulong)((int)uVar44 - 1) * 2;
                    uVar58 = *puVar2;
                    bVar69 = (byte)((ulong)uVar58 >> 0x38);
                    uVar38 = CONCAT13((char)bVar69 >> 7,(int3)((int)(char)bVar69 >> 7)) >> 1;
                    if ((float)CONCAT13((byte)((char)bVar69 >> 7) >> 1 ^ bVar69,
                                        CONCAT12((byte)(uVar38 >> 0x10) ^
                                                 (byte)((ulong)uVar58 >> 0x30),
                                                 CONCAT11((byte)(uVar38 >> 8) ^
                                                          (byte)((ulong)uVar58 >> 0x28),
                                                          (byte)uVar38 ^
                                                          (byte)((ulong)uVar58 >> 0x20)))) <=
                        (float)(CONCAT17((byte)((char)auVar53[7] >> 7) >> 1 ^ auVar53[7],
                                         CONCAT16((byte)(uVar56 >> 0x10) ^ auVar53[6],
                                                  CONCAT15((byte)(uVar56 >> 8) ^ auVar53[5],
                                                           auVar29._0_5_ << 0x20))) >> 0x20))
                    goto LAB_03253c44;
                    puVar41[1] = puVar2[1];
                    *puVar41 = *puVar2;
                    uVar40 = uVar44 - 1;
                    bVar32 = 0 < (long)uVar44;
                    uVar44 = uVar40;
                    puVar41 = puVar41 + -2;
                  } while (uVar40 != 0 && bVar32);
                }
                uVar44 = 0;
LAB_03253c44:
                uVar34 = uVar34 + 1;
                puVar37 = puVar37 + 2;
                puVar41 = (undefined8 *)
                          ((long)puVar4 +
                          (-(uVar44 >> 0x1f & 1) & 0xfffffff000000000 | (uVar44 & 0xffffffff) << 4))
                ;
                puVar41[1] = auVar53._8_8_;
                *puVar41 = auVar53._0_8_;
              } while (uVar34 != local_313c);
            }
          }
          else if ((cVar6 == '\0') && (0 < (int)local_313c)) {
            uVar44 = 0;
            puVar4 = (undefined8 *)(param_1[5] + (long)(int)local_3140 * 0x10);
            puVar37 = puVar4;
            do {
              auVar53 = *(undefined1 (*) [16])(puVar4 + uVar44 * 2);
              if (uVar44 != 0) {
                uVar56 = (uint)(auVar53._0_4_ >> 0x1f) >> 1;
                uVar40 = uVar44;
                puVar41 = puVar37;
                do {
                  puVar2 = puVar4 + (ulong)((int)uVar40 - 1) * 2;
                  uVar58 = *puVar2;
                  bVar69 = (byte)((ulong)uVar58 >> 0x18);
                  uVar38 = CONCAT13((char)bVar69 >> 7,(int3)((int)(char)bVar69 >> 7)) >> 1;
                  if ((float)CONCAT13((byte)((char)bVar69 >> 7) >> 1 ^ bVar69,
                                      CONCAT12((byte)(uVar38 >> 0x10) ^
                                               (byte)((ulong)uVar58 >> 0x10),
                                               CONCAT11((byte)(uVar38 >> 8) ^
                                                        (byte)((ulong)uVar58 >> 8),
                                                        (byte)uVar38 ^ (byte)uVar58))) <=
                      (float)CONCAT13((byte)((char)auVar53[3] >> 7) >> 1 ^ auVar53[3],
                                      CONCAT12((byte)(uVar56 >> 0x10) ^ auVar53[2],
                                               CONCAT11((byte)(uVar56 >> 8) ^ auVar53[1],
                                                        (byte)uVar56 ^ auVar53[0]))))
                  goto LAB_032539ec;
                  puVar41[1] = puVar2[1];
                  *puVar41 = *puVar2;
                  uVar7 = uVar40 - 1;
                  bVar32 = 0 < (long)uVar40;
                  uVar40 = uVar7;
                  puVar41 = puVar41 + -2;
                } while (uVar7 != 0 && bVar32);
              }
              uVar40 = 0;
LAB_032539ec:
              uVar44 = uVar44 + 1;
              puVar37 = puVar37 + 2;
              puVar41 = (undefined8 *)
                        ((long)puVar4 +
                        (-(uVar40 >> 0x1f & 1) & 0xfffffff000000000 | (uVar40 & 0xffffffff) << 4));
              puVar41[1] = auVar53._8_8_;
              *puVar41 = auVar53._0_8_;
            } while (uVar44 != uVar34);
          }
        }
        else if ((*(int *)((long)param_1 + 0xc) == 2) && (*(char *)((long)param_1 + 0x1f) != '\0'))
        {
          FUN_03254230(param_1,&local_3160);
        }
        else {
          pVar3 = (unkbyte9 *)(param_1[5] + (long)(int)local_3140 * 0x10);
          auVar59._8_4_ = 0x7f800000;
          auVar59._0_8_ = 0x7f8000007f800000;
          auVar30._8_8_ = auVar63._8_8_;
          auVar30._0_8_ = 0x807fffff807fffff;
          auVar62 = auVar30._0_12_;
          if (local_313c != 0) {
            auVar64._8_4_ = 0x7f800000;
            auVar64._0_8_ = 0x7f8000007f800000;
            auVar64._12_4_ = 0x7f800000;
            auVar52._8_8_ = auVar63._8_8_;
            auVar52._0_8_ = 0x807fffff807fffff;
            uVar44 = (long)(int)local_313c * 0x10 - 0x10;
            uVar56 = ((uint)(uVar44 >> 4) & 0xfffffff) + 1;
            pVar36 = pVar3;
            if ((uVar56 & 7) != 0) {
              auVar64._8_4_ = 0x7f800000;
              auVar64._0_8_ = 0x7f8000007f800000;
              auVar64._12_4_ = 0x7f800000;
              auVar52._8_4_ = 0x807fffff;
              auVar52._0_8_ = 0x807fffff807fffff;
              auVar52._12_4_ = 0x807fffff;
              lVar42 = -((ulong)uVar56 & 7);
              pVar35 = pVar3;
              do {
                pVar36 = pVar35 + 1;
                uVar58 = *(undefined8 *)((long)pVar35 + 8);
                uVar72 = (undefined1)((ulong)uVar58 >> 8);
                uVar73 = (undefined1)((ulong)uVar58 >> 0x10);
                uVar74 = (undefined1)((ulong)uVar58 >> 0x18);
                uVar75 = (undefined1)((ulong)uVar58 >> 0x20);
                uVar76 = (undefined1)((ulong)uVar58 >> 0x28);
                uVar77 = (undefined1)((ulong)uVar58 >> 0x30);
                uVar78 = (undefined1)((ulong)uVar58 >> 0x38);
                auVar9[9] = uVar72;
                auVar9._0_9_ = *pVar35;
                auVar9[10] = uVar73;
                auVar9[0xb] = uVar74;
                auVar9[0xc] = uVar75;
                auVar9[0xd] = uVar76;
                auVar9[0xe] = uVar77;
                auVar9[0xf] = uVar78;
                auVar64 = NEON_smin(auVar64,auVar9,4);
                auVar10[9] = uVar72;
                auVar10._0_9_ = *pVar35;
                auVar10[10] = uVar73;
                auVar10[0xb] = uVar74;
                auVar10[0xc] = uVar75;
                auVar10[0xd] = uVar76;
                auVar10[0xe] = uVar77;
                auVar10[0xf] = uVar78;
                auVar52 = NEON_smax(auVar52,auVar10,4);
                bVar32 = lVar42 != -1;
                lVar42 = lVar42 + 1;
                pVar35 = pVar36;
              } while (bVar32);
            }
            auVar62 = auVar52._0_12_;
            auVar59 = auVar64._0_12_;
            if (0x6f < uVar44) {
              do {
                uVar58 = *(undefined8 *)((long)pVar36 + 8);
                uVar72 = (undefined1)((ulong)uVar58 >> 8);
                uVar73 = (undefined1)((ulong)uVar58 >> 0x10);
                uVar74 = (undefined1)((ulong)uVar58 >> 0x18);
                uVar75 = (undefined1)((ulong)uVar58 >> 0x20);
                uVar76 = (undefined1)((ulong)uVar58 >> 0x28);
                uVar77 = (undefined1)((ulong)uVar58 >> 0x30);
                uVar78 = (undefined1)((ulong)uVar58 >> 0x38);
                uVar58 = *(undefined8 *)((long)pVar36 + 0x18);
                uVar79 = (undefined1)((ulong)uVar58 >> 8);
                uVar80 = (undefined1)((ulong)uVar58 >> 0x10);
                uVar81 = (undefined1)((ulong)uVar58 >> 0x18);
                uVar82 = (undefined1)((ulong)uVar58 >> 0x20);
                uVar83 = (undefined1)((ulong)uVar58 >> 0x28);
                uVar84 = (undefined1)((ulong)uVar58 >> 0x30);
                uVar85 = (undefined1)((ulong)uVar58 >> 0x38);
                auVar11[9] = uVar72;
                auVar11._0_9_ = *pVar36;
                auVar11[10] = uVar73;
                auVar11[0xb] = uVar74;
                auVar11[0xc] = uVar75;
                auVar11[0xd] = uVar76;
                auVar11[0xe] = uVar77;
                auVar11[0xf] = uVar78;
                auVar65 = NEON_smin(auVar64,auVar11,4);
                auVar12[9] = uVar72;
                auVar12._0_9_ = *pVar36;
                auVar12[10] = uVar73;
                auVar12[0xb] = uVar74;
                auVar12[0xc] = uVar75;
                auVar12[0xd] = uVar76;
                auVar12[0xe] = uVar77;
                auVar12[0xf] = uVar78;
                auVar53 = NEON_smax(auVar52,auVar12,4);
                auVar20[9] = uVar79;
                auVar20._0_9_ = pVar36[1];
                auVar20[10] = uVar80;
                auVar20[0xb] = uVar81;
                auVar20[0xc] = uVar82;
                auVar20[0xd] = uVar83;
                auVar20[0xe] = uVar84;
                auVar20[0xf] = uVar85;
                auVar65 = NEON_smin(auVar65,auVar20,4);
                auVar21[9] = uVar79;
                auVar21._0_9_ = pVar36[1];
                auVar21[10] = uVar80;
                auVar21[0xb] = uVar81;
                auVar21[0xc] = uVar82;
                auVar21[0xd] = uVar83;
                auVar21[0xe] = uVar84;
                auVar21[0xf] = uVar85;
                auVar53 = NEON_smax(auVar53,auVar21,4);
                uVar58 = *(undefined8 *)((long)pVar36 + 0x28);
                uVar72 = (undefined1)((ulong)uVar58 >> 8);
                uVar73 = (undefined1)((ulong)uVar58 >> 0x10);
                uVar74 = (undefined1)((ulong)uVar58 >> 0x18);
                uVar75 = (undefined1)((ulong)uVar58 >> 0x20);
                uVar76 = (undefined1)((ulong)uVar58 >> 0x28);
                uVar77 = (undefined1)((ulong)uVar58 >> 0x30);
                uVar78 = (undefined1)((ulong)uVar58 >> 0x38);
                uVar58 = *(undefined8 *)((long)pVar36 + 0x38);
                uVar79 = (undefined1)((ulong)uVar58 >> 8);
                uVar80 = (undefined1)((ulong)uVar58 >> 0x10);
                uVar81 = (undefined1)((ulong)uVar58 >> 0x18);
                uVar82 = (undefined1)((ulong)uVar58 >> 0x20);
                uVar83 = (undefined1)((ulong)uVar58 >> 0x28);
                uVar84 = (undefined1)((ulong)uVar58 >> 0x30);
                uVar85 = (undefined1)((ulong)uVar58 >> 0x38);
                auVar13[9] = uVar72;
                auVar13._0_9_ = pVar36[2];
                auVar13[10] = uVar73;
                auVar13[0xb] = uVar74;
                auVar13[0xc] = uVar75;
                auVar13[0xd] = uVar76;
                auVar13[0xe] = uVar77;
                auVar13[0xf] = uVar78;
                auVar65 = NEON_smin(auVar65,auVar13,4);
                auVar14[9] = uVar72;
                auVar14._0_9_ = pVar36[2];
                auVar14[10] = uVar73;
                auVar14[0xb] = uVar74;
                auVar14[0xc] = uVar75;
                auVar14[0xd] = uVar76;
                auVar14[0xe] = uVar77;
                auVar14[0xf] = uVar78;
                auVar53 = NEON_smax(auVar53,auVar14,4);
                auVar22[9] = uVar79;
                auVar22._0_9_ = pVar36[3];
                auVar22[10] = uVar80;
                auVar22[0xb] = uVar81;
                auVar22[0xc] = uVar82;
                auVar22[0xd] = uVar83;
                auVar22[0xe] = uVar84;
                auVar22[0xf] = uVar85;
                auVar65 = NEON_smin(auVar65,auVar22,4);
                auVar23[9] = uVar79;
                auVar23._0_9_ = pVar36[3];
                auVar23[10] = uVar80;
                auVar23[0xb] = uVar81;
                auVar23[0xc] = uVar82;
                auVar23[0xd] = uVar83;
                auVar23[0xe] = uVar84;
                auVar23[0xf] = uVar85;
                auVar53 = NEON_smax(auVar53,auVar23,4);
                uVar58 = *(undefined8 *)((long)pVar36 + 0x48);
                uVar72 = (undefined1)((ulong)uVar58 >> 8);
                uVar73 = (undefined1)((ulong)uVar58 >> 0x10);
                uVar74 = (undefined1)((ulong)uVar58 >> 0x18);
                uVar75 = (undefined1)((ulong)uVar58 >> 0x20);
                uVar76 = (undefined1)((ulong)uVar58 >> 0x28);
                uVar77 = (undefined1)((ulong)uVar58 >> 0x30);
                uVar78 = (undefined1)((ulong)uVar58 >> 0x38);
                uVar58 = *(undefined8 *)((long)pVar36 + 0x58);
                uVar79 = (undefined1)((ulong)uVar58 >> 8);
                uVar80 = (undefined1)((ulong)uVar58 >> 0x10);
                uVar81 = (undefined1)((ulong)uVar58 >> 0x18);
                uVar82 = (undefined1)((ulong)uVar58 >> 0x20);
                uVar83 = (undefined1)((ulong)uVar58 >> 0x28);
                uVar84 = (undefined1)((ulong)uVar58 >> 0x30);
                uVar85 = (undefined1)((ulong)uVar58 >> 0x38);
                auVar15[9] = uVar72;
                auVar15._0_9_ = pVar36[4];
                auVar15[10] = uVar73;
                auVar15[0xb] = uVar74;
                auVar15[0xc] = uVar75;
                auVar15[0xd] = uVar76;
                auVar15[0xe] = uVar77;
                auVar15[0xf] = uVar78;
                auVar65 = NEON_smin(auVar65,auVar15,4);
                auVar16[9] = uVar72;
                auVar16._0_9_ = pVar36[4];
                auVar16[10] = uVar73;
                auVar16[0xb] = uVar74;
                auVar16[0xc] = uVar75;
                auVar16[0xd] = uVar76;
                auVar16[0xe] = uVar77;
                auVar16[0xf] = uVar78;
                auVar53 = NEON_smax(auVar53,auVar16,4);
                auVar24[9] = uVar79;
                auVar24._0_9_ = pVar36[5];
                auVar24[10] = uVar80;
                auVar24[0xb] = uVar81;
                auVar24[0xc] = uVar82;
                auVar24[0xd] = uVar83;
                auVar24[0xe] = uVar84;
                auVar24[0xf] = uVar85;
                auVar65 = NEON_smin(auVar65,auVar24,4);
                auVar25[9] = uVar79;
                auVar25._0_9_ = pVar36[5];
                auVar25[10] = uVar80;
                auVar25[0xb] = uVar81;
                auVar25[0xc] = uVar82;
                auVar25[0xd] = uVar83;
                auVar25[0xe] = uVar84;
                auVar25[0xf] = uVar85;
                auVar53 = NEON_smax(auVar53,auVar25,4);
                pVar35 = pVar36 + 6;
                uVar58 = *(undefined8 *)((long)pVar36 + 0x68);
                uVar72 = (undefined1)((ulong)uVar58 >> 8);
                uVar73 = (undefined1)((ulong)uVar58 >> 0x10);
                uVar74 = (undefined1)((ulong)uVar58 >> 0x18);
                uVar75 = (undefined1)((ulong)uVar58 >> 0x20);
                uVar76 = (undefined1)((ulong)uVar58 >> 0x28);
                uVar77 = (undefined1)((ulong)uVar58 >> 0x30);
                uVar78 = (undefined1)((ulong)uVar58 >> 0x38);
                pVar8 = pVar36 + 7;
                uVar58 = *(undefined8 *)((long)pVar36 + 0x78);
                uVar79 = (undefined1)((ulong)uVar58 >> 8);
                uVar80 = (undefined1)((ulong)uVar58 >> 0x10);
                uVar81 = (undefined1)((ulong)uVar58 >> 0x18);
                uVar82 = (undefined1)((ulong)uVar58 >> 0x20);
                uVar83 = (undefined1)((ulong)uVar58 >> 0x28);
                uVar84 = (undefined1)((ulong)uVar58 >> 0x30);
                uVar85 = (undefined1)((ulong)uVar58 >> 0x38);
                pVar36 = pVar36 + 8;
                auVar17[9] = uVar72;
                auVar17._0_9_ = *pVar35;
                auVar17[10] = uVar73;
                auVar17[0xb] = uVar74;
                auVar17[0xc] = uVar75;
                auVar17[0xd] = uVar76;
                auVar17[0xe] = uVar77;
                auVar17[0xf] = uVar78;
                auVar65 = NEON_smin(auVar65,auVar17,4);
                auVar18[9] = uVar72;
                auVar18._0_9_ = *pVar35;
                auVar18[10] = uVar73;
                auVar18[0xb] = uVar74;
                auVar18[0xc] = uVar75;
                auVar18[0xd] = uVar76;
                auVar18[0xe] = uVar77;
                auVar18[0xf] = uVar78;
                auVar53 = NEON_smax(auVar53,auVar18,4);
                auVar26[9] = uVar79;
                auVar26._0_9_ = *pVar8;
                auVar26[10] = uVar80;
                auVar26[0xb] = uVar81;
                auVar26[0xc] = uVar82;
                auVar26[0xd] = uVar83;
                auVar26[0xe] = uVar84;
                auVar26[0xf] = uVar85;
                auVar64 = NEON_smin(auVar65,auVar26,4);
                auVar59 = auVar64._0_12_;
                auVar27[9] = uVar79;
                auVar27._0_9_ = *pVar8;
                auVar27[10] = uVar80;
                auVar27[0xb] = uVar81;
                auVar27[0xc] = uVar82;
                auVar27[0xd] = uVar83;
                auVar27[0xe] = uVar84;
                auVar27[0xf] = uVar85;
                auVar52 = NEON_smax(auVar53,auVar27,4);
                auVar62 = auVar52._0_12_;
              } while (pVar36 != pVar3 + (int)local_313c);
            }
          }
          bVar69 = (char)auVar59[3] >> 7;
          bVar70 = (char)auVar59[7] >> 7;
          bVar71 = (char)auVar59[0xb] >> 7;
          uVar56 = CONCAT13(bVar69,CONCAT12(bVar69,CONCAT11(bVar69,bVar69))) >> 1;
          uVar38 = CONCAT13(bVar70,CONCAT12(bVar70,CONCAT11(bVar70,bVar70))) >> 1;
          uVar43 = CONCAT13(bVar71,CONCAT12(bVar71,CONCAT11(bVar71,bVar71))) >> 1;
          fVar54 = (float)CONCAT13(bVar69 >> 1 ^ auVar59[3],
                                   CONCAT12((byte)(uVar56 >> 0x10) ^ auVar59[2],
                                            CONCAT11((byte)(uVar56 >> 8) ^ auVar59[1],
                                                     (byte)uVar56 ^ auVar59[0])));
          auVar60._0_8_ =
               CONCAT17(bVar70 >> 1 ^ auVar59[7],
                        CONCAT16((byte)(uVar38 >> 0x10) ^ auVar59[6],
                                 CONCAT15((byte)(uVar38 >> 8) ^ auVar59[5],
                                          CONCAT14((byte)uVar38 ^ auVar59[4],fVar54))));
          auVar60[8] = (byte)uVar43 ^ auVar59[8];
          auVar60[9] = (byte)(uVar43 >> 8) ^ auVar59[9];
          auVar60[10] = (byte)(uVar43 >> 0x10) ^ auVar59[10];
          auVar60[0xb] = bVar71 >> 1 ^ auVar59[0xb];
          bVar69 = (char)auVar62[3] >> 7;
          bVar70 = (char)auVar62[7] >> 7;
          bVar71 = (char)auVar62[0xb] >> 7;
          uVar56 = CONCAT13(bVar69,CONCAT12(bVar69,CONCAT11(bVar69,bVar69))) >> 1;
          uVar38 = CONCAT13(bVar70,CONCAT12(bVar70,CONCAT11(bVar70,bVar70))) >> 1;
          uVar43 = CONCAT13(bVar71,CONCAT12(bVar71,CONCAT11(bVar71,bVar71))) >> 1;
          fVar50 = (float)CONCAT13(bVar69 >> 1 ^ auVar62[3],
                                   CONCAT12((byte)(uVar56 >> 0x10) ^ auVar62[2],
                                            CONCAT11((byte)(uVar56 >> 8) ^ auVar62[1],
                                                     (byte)uVar56 ^ auVar62[0])));
          auVar51._0_8_ =
               CONCAT17(bVar70 >> 1 ^ auVar62[7],
                        CONCAT16((byte)(uVar38 >> 0x10) ^ auVar62[6],
                                 CONCAT15((byte)(uVar38 >> 8) ^ auVar62[5],
                                          CONCAT14((byte)uVar38 ^ auVar62[4],fVar50))));
          auVar51[8] = (byte)uVar43 ^ auVar62[8];
          auVar51[9] = (byte)(uVar43 >> 8) ^ auVar62[9];
          auVar51[10] = (byte)(uVar43 >> 0x10) ^ auVar62[10];
          auVar51[0xb] = bVar71 >> 1 ^ auVar62[0xb];
          fVar50 = fVar50 - fVar54;
          fVar54 = (float)((ulong)auVar51._0_8_ >> 0x20) - (float)((ulong)auVar60._0_8_ >> 0x20);
          uVar58 = CONCAT44(fVar54,fVar50);
          fVar55 = auVar51._8_4_ - auVar60._8_4_;
          uVar58 = NEON_fmaxp(uVar58,uVar58,4);
          uVar58 = NEON_fmax(CONCAT17((char)((uint)fVar55 >> 0x18),
                                      CONCAT16((char)((uint)fVar55 >> 0x10),
                                               CONCAT15((char)((uint)fVar55 >> 8),
                                                        CONCAT14(SUB41(fVar55,0),fVar55)))),uVar58,4
                            );
          cVar6 = PTR_DAT_047d1a18
                  [(-(uint)((float)((ulong)uVar58 >> 0x20) <= fVar54) & 2) +
                   (uint)((float)uVar58 <= fVar50) | -(uint)((float)uVar58 <= fVar55) & 4];
          if (cVar6 == '\x02') {
            if (0 < (int)local_313c) {
              uVar44 = 0;
              pVar36 = pVar3;
              do {
                auVar53 = *(undefined1 (*) [16])(pVar3 + uVar44);
                if (uVar44 != 0) {
                  uVar56 = (uint)(auVar53._8_4_ >> 0x1f) >> 1;
                  auVar61._0_8_ =
                       (long)CONCAT81(CONCAT44((uint)(auVar53._12_4_ >> 0x1f) >> 1,uVar56),
                                      auVar53[7]) << 0x38;
                  auVar61[8] = (byte)uVar56 ^ auVar53[8];
                  auVar61[9] = (byte)(uVar56 >> 8) ^ auVar53[9];
                  auVar61[10] = (byte)(uVar56 >> 0x10) ^ auVar53[10];
                  auVar61[0xb] = (byte)((char)auVar53[0xb] >> 7) >> 1 ^ auVar53[0xb];
                  uVar40 = uVar44;
                  pVar35 = pVar36;
                  do {
                    pVar8 = pVar3 + ((int)uVar40 - 1);
                    uVar58 = *(undefined8 *)((long)pVar8 + 8);
                    bVar69 = (byte)((ulong)uVar58 >> 0x18);
                    uVar56 = CONCAT13((char)bVar69 >> 7,(int3)((int)(char)bVar69 >> 7)) >> 1;
                    if ((float)CONCAT13((byte)((char)bVar69 >> 7) >> 1 ^ bVar69,
                                        CONCAT12((byte)(uVar56 >> 0x10) ^
                                                 (byte)((ulong)uVar58 >> 0x10),
                                                 CONCAT11((byte)(uVar56 >> 8) ^
                                                          (byte)((ulong)uVar58 >> 8),
                                                          (byte)uVar56 ^ (byte)uVar58))) <=
                        auVar61._8_4_) goto LAB_03253a78;
                    *(undefined8 *)((long)pVar35 + 8) = *(undefined8 *)((long)pVar8 + 8);
                    *(undefined8 *)pVar35 = *(undefined8 *)pVar8;
                    uVar7 = uVar40 - 1;
                    bVar32 = 0 < (long)uVar40;
                    uVar40 = uVar7;
                    pVar35 = pVar35 + -1;
                  } while (uVar7 != 0 && bVar32);
                }
                uVar40 = 0;
LAB_03253a78:
                uVar44 = uVar44 + 1;
                pVar36 = pVar36 + 1;
                puVar37 = (undefined8 *)
                          ((long)pVar3 +
                          (-(uVar40 >> 0x1f & 1) & 0xfffffff000000000 | (uVar40 & 0xffffffff) << 4))
                ;
                puVar37[1] = auVar53._8_8_;
                *puVar37 = auVar53._0_8_;
              } while (uVar44 != uVar34);
            }
          }
          else if (cVar6 == '\x01') {
            if (0 < (int)local_313c) {
              uVar44 = 0;
              pVar36 = pVar3;
              do {
                auVar53 = *(undefined1 (*) [16])(pVar3 + uVar44);
                if (uVar44 != 0) {
                  uVar56 = (uint)(auVar53._4_4_ >> 0x1f) >> 1;
                  auVar31._4_4_ = (uint)(auVar53._12_4_ >> 0x1f) >> 1;
                  auVar31._0_4_ = (uint)(auVar53._8_4_ >> 0x1f) >> 1;
                  auVar31._8_8_ = 0;
                  auVar28._1_11_ = SUB1611(auVar31 << 0x40,5);
                  auVar28[0] = (byte)uVar56 ^ auVar53[4];
                  uVar40 = uVar44;
                  pVar35 = pVar36;
                  do {
                    pVar8 = pVar3 + ((int)uVar40 - 1);
                    uVar58 = *(undefined8 *)pVar8;
                    bVar69 = (byte)((ulong)uVar58 >> 0x38);
                    uVar38 = CONCAT13((char)bVar69 >> 7,(int3)((int)(char)bVar69 >> 7)) >> 1;
                    if ((float)CONCAT13((byte)((char)bVar69 >> 7) >> 1 ^ bVar69,
                                        CONCAT12((byte)(uVar38 >> 0x10) ^
                                                 (byte)((ulong)uVar58 >> 0x30),
                                                 CONCAT11((byte)(uVar38 >> 8) ^
                                                          (byte)((ulong)uVar58 >> 0x28),
                                                          (byte)uVar38 ^
                                                          (byte)((ulong)uVar58 >> 0x20)))) <=
                        (float)(CONCAT17((byte)((char)auVar53[7] >> 7) >> 1 ^ auVar53[7],
                                         CONCAT16((byte)(uVar56 >> 0x10) ^ auVar53[6],
                                                  CONCAT15((byte)(uVar56 >> 8) ^ auVar53[5],
                                                           auVar28._0_5_ << 0x20))) >> 0x20))
                    goto LAB_03253b04;
                    *(undefined8 *)((long)pVar35 + 8) = *(undefined8 *)((long)pVar8 + 8);
                    *(undefined8 *)pVar35 = *(undefined8 *)pVar8;
                    uVar7 = uVar40 - 1;
                    bVar32 = 0 < (long)uVar40;
                    uVar40 = uVar7;
                    pVar35 = pVar35 + -1;
                  } while (uVar7 != 0 && bVar32);
                }
                uVar40 = 0;
LAB_03253b04:
                uVar44 = uVar44 + 1;
                pVar36 = pVar36 + 1;
                puVar37 = (undefined8 *)
                          ((long)pVar3 +
                          (-(uVar40 >> 0x1f & 1) & 0xfffffff000000000 | (uVar40 & 0xffffffff) << 4))
                ;
                puVar37[1] = auVar53._8_8_;
                *puVar37 = auVar53._0_8_;
              } while (uVar44 != uVar34);
            }
          }
          else if (cVar6 == '\0' && 0 < (int)local_313c) {
            uVar44 = 0;
            pVar36 = pVar3;
            do {
              auVar53 = *(undefined1 (*) [16])(pVar3 + uVar44);
              if (uVar44 != 0) {
                uVar56 = (uint)(auVar53._0_4_ >> 0x1f) >> 1;
                uVar40 = uVar44;
                pVar35 = pVar36;
                do {
                  pVar8 = pVar3 + ((int)uVar40 - 1);
                  uVar58 = *(undefined8 *)pVar8;
                  bVar69 = (byte)((ulong)uVar58 >> 0x18);
                  uVar38 = CONCAT13((char)bVar69 >> 7,(int3)((int)(char)bVar69 >> 7)) >> 1;
                  if ((float)CONCAT13((byte)((char)bVar69 >> 7) >> 1 ^ bVar69,
                                      CONCAT12((byte)(uVar38 >> 0x10) ^
                                               (byte)((ulong)uVar58 >> 0x10),
                                               CONCAT11((byte)(uVar38 >> 8) ^
                                                        (byte)((ulong)uVar58 >> 8),
                                                        (byte)uVar38 ^ (byte)uVar58))) <=
                      (float)CONCAT13((byte)((char)auVar53[3] >> 7) >> 1 ^ auVar53[3],
                                      CONCAT12((byte)(uVar56 >> 0x10) ^ auVar53[2],
                                               CONCAT11((byte)(uVar56 >> 8) ^ auVar53[1],
                                                        (byte)uVar56 ^ auVar53[0]))))
                  goto LAB_032538f4;
                  *(undefined8 *)((long)pVar35 + 8) = *(undefined8 *)((long)pVar8 + 8);
                  *(undefined8 *)pVar35 = *(undefined8 *)pVar8;
                  uVar7 = uVar40 - 1;
                  bVar32 = 0 < (long)uVar40;
                  uVar40 = uVar7;
                  pVar35 = pVar35 + -1;
                } while (uVar7 != 0 && bVar32);
              }
              uVar40 = 0;
LAB_032538f4:
              uVar44 = uVar44 + 1;
              pVar36 = pVar36 + 1;
              puVar37 = (undefined8 *)
                        ((long)pVar3 +
                        (-(uVar40 >> 0x1f & 1) & 0xfffffff000000000 | (uVar40 & 0xffffffff) << 4));
              puVar37[1] = auVar53._8_8_;
              *puVar37 = auVar53._0_8_;
            } while (uVar44 != uVar34);
          }
        }
        uVar56 = local_3140;
        uVar38 = local_313c;
        iVar33 = local_3138;
        do {
          if ((int)uVar38 < 5) {
            uVar34 = 0;
          }
          else {
            local_110[0] = uVar56;
            local_110[1] = 4;
            if (uVar38 - 8 == 0 || (int)uVar38 < 8) {
              uVar34 = 1;
              uVar56 = uVar56 + 4;
              uVar38 = uVar38 - 4;
            }
            else {
              local_110[0xc] = uVar56 + 4;
              local_110[0xd] = 4;
              if ((int)uVar38 < 0xd) {
                uVar34 = 2;
                uVar56 = uVar56 + 8;
                uVar38 = uVar38 - 8;
              }
              else {
                local_110[0x18] = uVar56 + 8;
                local_110[0x19] = 4;
                uVar34 = 3;
                uVar56 = uVar56 + 0xc;
                uVar38 = uVar38 - 0xc;
              }
            }
          }
          if (uVar38 != 0) {
            local_110[uVar34 * 0xc] = uVar56;
            local_110[uVar34 * 0xc + 1] = uVar38;
            uVar34 = (ulong)((int)uVar34 + 1);
          }
          lVar42 = (long)iVar33;
          if ((int)uVar34 == 0) {
            lVar42 = param_3 + lVar42 * 0x80;
            *(undefined1 *)(lVar42 + 0x70) = 0;
            *(undefined8 *)(lVar42 + 0x60) = 0;
            *(undefined8 *)(lVar42 + 0x68) = 0;
            break;
          }
          lVar45 = param_1[5];
          local_3180 = 0;
          uStack_3178 = 0;
          iVar39 = 0;
          lVar46 = *param_4;
          uVar44 = 0;
          do {
            uVar43 = (uint)uVar44;
            if (2 < uVar43 - 1) {
              uVar43 = 0;
            }
            iVar47 = (int)((ulong)(lVar46 - param_3) >> 7);
            *(int *)((ulong)&local_3180 | ((ulong)uVar43 & 3) << 2) = iVar47;
            uVar43 = local_110[uVar44 * 0xc + 1];
            if ((int)uVar43 < 5) {
              lVar48 = lVar45 + (long)(int)local_110[uVar44 * 0xc] * 0x10;
              auVar66._0_8_ = CONCAT44(*(undefined4 *)(lVar48 + 0x1c),*(undefined4 *)(lVar48 + 0xc))
              ;
              auVar66._8_4_ = *(undefined4 *)(lVar48 + 0x2c);
              auVar66._12_4_ = *(undefined4 *)(lVar48 + 0x3c);
              *(long *)(lVar46 + 0x68) = auVar66._8_8_;
              *(undefined8 *)(lVar46 + 0x60) = auVar66._0_8_;
              uVar43 = local_110[uVar44 * 0xc + 1];
              lVar46 = (long)(int)uVar43;
              lVar48 = *param_4;
              if ((int)uVar43 < 4) {
                for (uVar5 = -uVar43 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                  lVar1 = lVar46 * 4;
                  lVar46 = lVar46 + 1;
                  *(undefined4 *)(lVar48 + lVar1 + 0x60) = 0xffffffff;
                  lVar48 = *param_4;
                }
                if (2 < 3 - uVar43) {
                  do {
                    *(undefined4 *)(lVar48 + lVar46 * 4 + 0x60) = 0xffffffff;
                    *(undefined4 *)(*param_4 + lVar46 * 4 + 100) = 0xffffffff;
                    *(undefined4 *)(*param_4 + lVar46 * 4 + 0x68) = 0xffffffff;
                    lVar48 = lVar46 * 4;
                    lVar46 = lVar46 + 4;
                    *(undefined4 *)(*param_4 + lVar48 + 0x6c) = 0xffffffff;
                    lVar48 = *param_4;
                  } while ((int)lVar46 != 4);
                }
              }
              *(undefined1 *)(lVar48 + 0x70) = 1;
              lVar46 = *param_4;
            }
            else {
              iVar39 = iVar39 + 1;
              uVar56 = local_110[uVar44 * 0xc];
              uVar38 = uVar43;
              iVar33 = iVar47;
            }
            uVar44 = uVar44 + 1;
            lVar46 = lVar46 + 0x80;
            *param_4 = lVar46;
          } while (uVar44 != uVar34);
          lVar42 = param_3 + lVar42 * 0x80;
          *(undefined1 *)(lVar42 + 0x70) = 0;
          *(undefined8 *)(lVar42 + 0x68) = 0;
          *(undefined8 *)(lVar42 + 0x60) = 0;
        } while (iVar39 != 0);
      }
      else {
        (**(code **)(*param_1 + 0x20))(param_1,&local_3160,local_130);
        local_3170 = 0;
        uStack_3168 = 0;
        lVar42 = 0;
        lVar45 = param_1[5];
        lVar46 = *param_4;
        do {
          uVar56 = (uint)lVar42;
          if (2 < uVar56 - 1) {
            uVar56 = 0;
          }
          uVar38 = (uint)((ulong)(lVar46 - param_3) >> 7);
          *(uint *)((ulong)&local_3170 | ((ulong)uVar56 & 3) << 2) = uVar38;
          uVar56 = local_110[lVar42 * 0xc + 1];
          if ((int)uVar56 < 5) {
            lVar48 = lVar45 + (long)(int)local_110[lVar42 * 0xc] * 0x10;
            auVar53._0_8_ = CONCAT44(*(undefined4 *)(lVar48 + 0x1c),*(undefined4 *)(lVar48 + 0xc));
            auVar53._8_4_ = *(undefined4 *)(lVar48 + 0x2c);
            auVar53._12_4_ = *(undefined4 *)(lVar48 + 0x3c);
            *(long *)(lVar46 + 0x68) = auVar53._8_8_;
            *(undefined8 *)(lVar46 + 0x60) = auVar53._0_8_;
            uVar56 = local_110[lVar42 * 0xc + 1];
            lVar46 = (long)(int)uVar56;
            lVar48 = *param_4;
            if ((int)uVar56 < 4) {
              for (uVar38 = -uVar56 & 3; uVar38 != 0; uVar38 = uVar38 - 1) {
                lVar1 = lVar46 * 4;
                lVar46 = lVar46 + 1;
                *(undefined4 *)(lVar48 + lVar1 + 0x60) = 0xffffffff;
                lVar48 = *param_4;
              }
              if (2 < 3 - uVar56) {
                do {
                  *(undefined4 *)(lVar48 + lVar46 * 4 + 0x60) = 0xffffffff;
                  *(undefined4 *)(*param_4 + lVar46 * 4 + 100) = 0xffffffff;
                  *(undefined4 *)(*param_4 + lVar46 * 4 + 0x68) = 0xffffffff;
                  lVar48 = lVar46 * 4;
                  lVar46 = lVar46 + 4;
                  *(undefined4 *)(*param_4 + lVar48 + 0x6c) = 0xffffffff;
                  lVar48 = *param_4;
                } while ((int)lVar46 != 4);
              }
            }
            *(undefined1 *)(lVar48 + 0x70) = 1;
            lVar46 = *param_4;
          }
          else {
            lVar48 = (long)(int)uVar49;
            auVar53 = *(undefined1 (*) [16])(local_130 + lVar42 * 0x30);
            uVar19 = auStack_120[lVar42 * 6 + 1];
            uVar58 = auStack_120[lVar42 * 6];
            *(uint *)(local_3130 + lVar48 * 6 + 4) = local_110[lVar42 * 0xc];
            local_3108[lVar48 * 0xc + -1] = uVar56;
            local_3108[lVar48 * 0xc] = uVar38;
            local_3130[lVar48 * 6 + 1] = auVar53._8_8_;
            local_3130[lVar48 * 6] = auVar53._0_8_;
            local_3130[lVar48 * 6 + 3] = uVar19;
            local_3130[lVar48 * 6 + 2] = uVar58;
            uVar49 = (ulong)((int)uVar49 + 1);
          }
          lVar42 = lVar42 + 1;
          lVar46 = lVar46 + 0x80;
          *param_4 = lVar46;
        } while (lVar42 != 4);
        lVar42 = param_3 + (long)local_3138 * 0x80;
        *(undefined1 *)(lVar42 + 0x70) = 0;
        *(undefined8 *)(lVar42 + 0x68) = 0;
        *(undefined8 *)(lVar42 + 0x60) = 0;
      }
    } while ((int)uVar49 != 0);
  }
  return;
}


