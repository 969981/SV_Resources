/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f755c0; name: FUN_02f755c0
 */


undefined8
FUN_02f755c0(long param_1,long *param_2,long *param_3,float *param_4,undefined8 *param_5,
            undefined8 *param_6,uint param_7,undefined8 *param_8,long param_9,undefined4 *param_10)

{
  unkbyte9 *pVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  bool bVar33;
  bool bVar34;
  char cVar35;
  undefined1 auVar36 [16];
  undefined *puVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  uint uVar41;
  long lVar42;
  long lVar43;
  uint uVar44;
  unkbyte9 *pVar45;
  ulong uVar46;
  undefined1 *puVar47;
  byte *pbVar48;
  float *pfVar49;
  long lVar50;
  undefined8 *puVar51;
  float *pfVar52;
  ulong uVar53;
  undefined8 *puVar54;
  uint uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  int iVar72;
  float fVar73;
  float fVar74;
  int iVar76;
  float fVar77;
  int iVar78;
  float fVar79;
  undefined1 auVar75 [12];
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined8 uVar94;
  undefined1 auVar95 [16];
  float fVar102;
  undefined8 uVar96;
  undefined8 uVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  undefined8 local_960;
  undefined8 uStack_958;
  undefined8 local_948;
  float local_940 [32];
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ushort local_a8 [4];
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  ushort local_88 [4];
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  
  fVar11 = *(float *)(param_5 + 3) + 0.0;
  pfVar49 = (float *)param_2[6];
  fVar12 = (float)*param_5 - (float)*(undefined8 *)((long)param_5 + 0xc) * fVar11;
  fVar13 = (float)((ulong)*param_5 >> 0x20) -
           (float)((ulong)*(undefined8 *)((long)param_5 + 0xc) >> 0x20) * fVar11;
  fVar11 = *(float *)(param_5 + 1) - *(float *)((long)param_5 + 0x14) * fVar11;
  uVar56 = (undefined1)((uint)fVar11 >> 8);
  uVar57 = (undefined1)((uint)fVar11 >> 0x10);
  uVar58 = (undefined1)((uint)fVar11 >> 0x18);
  fVar14 = *pfVar49;
  fVar73 = pfVar49[1];
  fVar74 = pfVar49[2];
  fVar77 = pfVar49[3];
  uVar97 = *(undefined8 *)(pfVar49 + 6);
  uVar15 = *(undefined8 *)(pfVar49 + 4);
  uVar94 = *(undefined8 *)(pfVar49 + 10);
  uVar16 = *(undefined8 *)(pfVar49 + 8);
  fVar26 = pfVar49[0xc];
  fVar27 = pfVar49[0xd];
  fVar28 = pfVar49[0xe];
  fVar105 = pfVar49[0xf];
  *param_10 = 0;
  *(undefined1 *)((long)param_10 + 0x92) = 0;
  *(undefined1 *)((long)param_10 + 0x95) = 0;
  fVar26 = fVar26 + (float)uVar16 * fVar11 + fVar14 * fVar12 + (float)uVar15 * fVar13;
  fVar27 = fVar27 + (float)((ulong)uVar16 >> 0x20) * fVar11 +
                    fVar73 * fVar12 + (float)((ulong)uVar15 >> 0x20) * fVar13;
  uVar80 = SUB41(fVar27,0);
  uVar81 = (undefined1)((uint)fVar27 >> 8);
  uVar82 = (undefined1)((uint)fVar27 >> 0x10);
  uVar83 = (undefined1)((uint)fVar27 >> 0x18);
  fVar28 = fVar28 + (float)uVar94 * fVar11 + fVar74 * fVar12 + (float)uVar97 * fVar13;
  fVar105 = fVar105 + (float)((ulong)uVar94 >> 0x20) * fVar11 +
                      fVar77 * fVar12 + (float)((ulong)uVar97 >> 0x20) * fVar13;
  uVar86 = SUB41(fVar105,0);
  uVar87 = (undefined1)((uint)fVar105 >> 8);
  uVar89 = (undefined1)((uint)fVar105 >> 0x10);
  uVar91 = (undefined1)((uint)fVar105 >> 0x18);
  *(ulong *)(param_10 + 0x22) =
       CONCAT17(uVar91,CONCAT16(uVar89,CONCAT15(uVar87,CONCAT14(uVar86,fVar28))));
  *(ulong *)(param_10 + 0x20) =
       CONCAT17(uVar83,CONCAT16(uVar82,CONCAT15(uVar81,CONCAT14(uVar80,fVar26))));
  uVar15 = *param_6;
  pfVar49 = (float *)(param_10 + 4);
  *(undefined8 *)(param_10 + 6) = param_6[1];
  *(undefined8 *)pfVar49 = uVar15;
  *(undefined8 *)(param_10 + 8) = 0;
  *(undefined8 *)(param_10 + 10) = 0;
  puVar37 = PTR_DAT_047d19f0;
  if ((*(byte *)(param_9 + 10) >> 2 & 1) == 0) {
    fVar27 = *(float *)((long)param_5 + 0x14);
    local_4c0 = *(undefined8 *)((long)param_5 + 0xc);
    uStack_4b8 = (undefined4 *)
                 CONCAT17((char)((uint)fVar27 >> 0x18),
                          CONCAT16((char)((uint)fVar27 >> 0x10),
                                   CONCAT15((char)((uint)fVar27 >> 8),
                                            CONCAT14(SUB41(fVar27,0),fVar27))));
    fVar27 = *(float *)(param_5 + 1);
    local_8c0 = *param_5;
    uStack_8b8 = CONCAT17((char)((uint)fVar27 >> 0x18),
                          CONCAT16((char)((uint)fVar27 >> 0x10),
                                   CONCAT15((char)((uint)fVar27 >> 8),
                                            CONCAT14(SUB41(fVar27,0),fVar27))));
    uVar38 = (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(param_2[5] + 0x18) * 0x200 +
                         0x90))(param_2[5],&local_4c0,&local_8c0,param_9 + 0x10,0,0xffffffff,
                                &local_80,local_88);
    pVar45 = (unkbyte9 *)param_3[6];
    uVar15 = *(undefined8 *)((long)pVar45 + 8);
    uVar59 = (undefined1)((ulong)uVar15 >> 8);
    uVar60 = (undefined1)((ulong)uVar15 >> 0x10);
    uVar61 = (undefined1)((ulong)uVar15 >> 0x18);
    uVar62 = (undefined1)((ulong)uVar15 >> 0x20);
    uVar63 = (undefined1)((ulong)uVar15 >> 0x28);
    uVar64 = (undefined1)((ulong)uVar15 >> 0x30);
    uVar65 = (undefined1)((ulong)uVar15 >> 0x38);
    auVar24 = *(undefined1 (*) [16])(pVar45 + 1);
    pVar1 = pVar45 + 2;
    uVar15 = *(undefined8 *)((long)pVar45 + 0x28);
    uVar66 = (undefined1)((ulong)uVar15 >> 8);
    uVar67 = (undefined1)((ulong)uVar15 >> 0x10);
    uVar68 = (undefined1)((ulong)uVar15 >> 0x18);
    uVar69 = (undefined1)((ulong)uVar15 >> 0x20);
    uVar70 = (undefined1)((ulong)uVar15 >> 0x28);
    uVar71 = (undefined1)((ulong)uVar15 >> 0x30);
    uVar92 = (undefined1)((ulong)uVar15 >> 0x38);
    auVar95[9] = uVar59;
    auVar95._0_9_ = *pVar45;
    auVar95[10] = uVar60;
    auVar95[0xb] = uVar61;
    auVar95[0xc] = uVar62;
    auVar95[0xd] = uVar63;
    auVar95[0xe] = uVar64;
    auVar95[0xf] = uVar65;
    auVar98[9] = uVar59;
    auVar98._0_9_ = *pVar45;
    auVar98[10] = uVar60;
    auVar98[0xb] = uVar61;
    auVar98[0xc] = uVar62;
    auVar98[0xd] = uVar63;
    auVar98[0xe] = uVar64;
    auVar98[0xf] = uVar65;
    auVar95 = NEON_ext(auVar95,auVar98,8,1);
    auVar98 = NEON_ext(auVar24,auVar24,8,1);
    auVar99[9] = uVar66;
    auVar99._0_9_ = *pVar1;
    auVar99[10] = uVar67;
    auVar99[0xb] = uVar68;
    auVar99[0xc] = uVar69;
    auVar99[0xd] = uVar70;
    auVar99[0xe] = uVar71;
    auVar99[0xf] = uVar92;
    auVar17[9] = uVar66;
    auVar17._0_9_ = *pVar1;
    auVar17[10] = uVar67;
    auVar17[0xb] = uVar68;
    auVar17[0xc] = uVar69;
    auVar17[0xd] = uVar70;
    auVar17[0xe] = uVar71;
    auVar17[0xf] = uVar92;
    auVar99 = NEON_ext(auVar99,auVar17,8,1);
    fVar73 = *pfVar49;
    fVar74 = (float)param_10[5];
    fVar77 = (float)param_10[6];
    fVar79 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
    fVar27 = auVar95._0_4_ * fVar77 +
             (float)*(undefined8 *)pVar45 * fVar73 +
             (float)((ulong)*(undefined8 *)pVar45 >> 0x20) * fVar74;
    fVar105 = auVar98._0_4_ * fVar77 + auVar24._0_4_ * fVar73 + auVar24._4_4_ * fVar74;
    fVar14 = auVar99._0_4_ * fVar77 + (float)*(undefined8 *)pVar1 * fVar73 + fVar79 * fVar74;
    fVar73 = auVar99._4_4_ * fVar77 + fVar79 * fVar73 + auVar99._4_4_ * fVar74;
    uStack_b8 = CONCAT17((char)((uint)fVar73 >> 0x18),
                         CONCAT16((char)((uint)fVar73 >> 0x10),
                                  CONCAT15((char)((uint)fVar73 >> 8),
                                           CONCAT14(SUB41(fVar73,0),fVar14))));
    local_c0 = CONCAT17((char)((uint)fVar105 >> 0x18),
                        CONCAT16((char)((uint)fVar105 >> 0x10),
                                 CONCAT15((char)((uint)fVar105 >> 8),
                                          CONCAT14(SUB41(fVar105,0),fVar27))));
    auVar95 = *(undefined1 (*) [16])(param_4 + 0xc);
    uStack_4b8 = (undefined4 *)
                 CONCAT44(auVar95._12_4_ +
                          (float)(CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar56,CONCAT14(SUB41(
                                                  fVar11,0),fVar11)))) >> 0x20) * param_4[0xb] +
                          fVar12 * param_4[3] +
                          fVar13 * (float)((ulong)*(undefined8 *)(param_4 + 6) >> 0x20),
                          auVar95._8_4_ +
                          fVar11 * param_4[10] +
                          fVar12 * param_4[2] + fVar13 * (float)*(undefined8 *)(param_4 + 6));
    local_4c0 = CONCAT44(auVar95._4_4_ +
                         (float)(CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar56,CONCAT14(SUB41(
                                                  fVar11,0),fVar11)))) >> 0x20) * param_4[9] +
                         fVar12 * param_4[1] +
                         fVar13 * (float)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20),
                         auVar95._0_4_ +
                         fVar11 * param_4[8] +
                         fVar12 * *param_4 + fVar13 * (float)*(undefined8 *)(param_4 + 4));
    fVar27 = 0.0 - fVar27;
    fVar105 = 0.0 - fVar105;
    uVar56 = (undefined1)((uint)fVar105 >> 8);
    uVar57 = (undefined1)((uint)fVar105 >> 0x10);
    uVar58 = (undefined1)((uint)fVar105 >> 0x18);
    fVar14 = 0.0 - fVar14;
    fVar73 = 0.0 - fVar73;
    uVar59 = (undefined1)((uint)fVar73 >> 8);
    uVar60 = (undefined1)((uint)fVar73 >> 0x10);
    uVar61 = (undefined1)((uint)fVar73 >> 0x18);
    uStack_8b8 = CONCAT17(uVar61,CONCAT16(uVar60,CONCAT15(uVar59,CONCAT14(SUB41(fVar73,0),fVar14))))
    ;
    local_8c0 = CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar56,CONCAT14(SUB41(fVar105,0),fVar27))))
    ;
    uVar16 = CONCAT17(uVar61,CONCAT16(uVar60,CONCAT15(uVar59,CONCAT14(SUB41(fVar73,0),fVar14))));
    uVar15 = CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar56,CONCAT14(SUB41(fVar105,0),fVar27))));
    uVar39 = (**(code **)(*(long *)puVar37 + (ulong)*(byte *)(param_3[5] + 0x18) * 0x200 + 0x90))
                       (param_3[5],&local_8c0,&local_4c0,param_9 + 0x10,1,0xffffffff,&local_a0,
                        local_a8);
    iVar40 = (**(code **)(*(long *)puVar37 + (ulong)*(byte *)(param_2[5] + 0x18) * 0x200 + 0x88))
                       (param_2[5],uVar38,&local_80,&local_4c0);
    uVar41 = (**(code **)(*(long *)puVar37 + (ulong)*(byte *)(param_3[5] + 0x18) * 0x200 + 0x88))
                       (param_3[5],uVar39,&local_a0,&local_8c0);
    fVar105 = fStack_94;
    fVar13 = fStack_98;
    fVar12 = fStack_9c;
    fVar11 = local_a0;
    lVar50 = param_3[5];
    uVar55 = uVar39;
    if ((*(byte *)(lVar50 + 0x1b) >> 1 & 1) == 0) {
      pfVar52 = (float *)&local_8c0;
      uVar44 = *(uint *)(param_9 + 0x8c) ^ uVar39 | *(uint *)(param_9 + 0x88) ^ uVar38;
      if ((uVar44 != 0) || ((param_7 & 1) == 0)) goto LAB_02f75c9c;
      bVar33 = false;
      bVar34 = false;
    }
    else {
      bVar7 = *(byte *)(param_9 + 0x2b);
      uVar46 = (ulong)bVar7;
      uVar3 = *(uint *)(param_9 + 0x8c);
      uVar44 = *(uint *)(param_9 + 0x88) ^ uVar38 | (uint)(bVar7 < 2) | (uVar3 ^ uVar39) & 1;
      if ((uVar44 == 0) && ((param_7 & 1) != 0)) {
        return 0;
      }
      uVar4 = *(uint *)(lVar50 + 0x44);
      bVar5 = *(byte *)(param_9 + 0x99);
      if ((bVar5 >> 1 & 1) == 0) {
        uVar41 = uVar4;
        pfVar52 = (float *)&local_8c0;
      }
      else {
        fVar74 = 0.0;
        fVar79 = 0.0;
        fVar103 = 0.0;
        fVar104 = 0.0;
        fVar73 = 0.0 - (float)*param_8;
        fVar77 = 0.0 - (float)((ulong)*param_8 >> 0x20);
        fVar102 = 0.0 - (float)param_8[1];
        if ((~bVar5 & 3) == 0) {
          fVar74 = fVar73 * local_a0 + fVar77 * fStack_9c + fVar102 * fStack_98;
          fVar79 = fVar73 * local_a0 + fVar77 * fStack_9c + fVar102 * fStack_98;
          fVar73 = fVar73 - local_a0 * fVar74;
          uVar56 = SUB41(fVar73,0);
          uVar57 = (undefined1)((uint)fVar73 >> 8);
          uVar58 = (undefined1)((uint)fVar73 >> 0x10);
          uVar59 = (undefined1)((uint)fVar73 >> 0x18);
          fVar77 = fVar77 - fStack_9c * fVar79;
          uVar60 = SUB41(fVar77,0);
          uVar61 = (undefined1)((uint)fVar77 >> 8);
          uVar62 = (undefined1)((uint)fVar77 >> 0x10);
          uVar63 = (undefined1)((uint)fVar77 >> 0x18);
          fVar102 = fVar102 - fStack_98 * fVar74;
          uVar64 = SUB41(fVar102,0);
          uVar65 = (undefined1)((uint)fVar102 >> 8);
          uVar66 = (undefined1)((uint)fVar102 >> 0x10);
          uVar67 = (undefined1)((uint)fVar102 >> 0x18);
          fVar73 = (0.0 - (float)((ulong)param_8[1] >> 0x20)) -
                   fStack_94 *
                   (float)CONCAT13((char)((uint)fVar79 >> 0x18),
                                   CONCAT12((char)((uint)fVar79 >> 0x10),
                                            (short)(CONCAT15((char)((uint)fVar79 >> 8),
                                                             CONCAT14(SUB41(fVar79,0),fVar74)) >>
                                                   0x20)));
          uVar68 = SUB41(fVar73,0);
          uVar69 = (undefined1)((uint)fVar73 >> 8);
          uVar70 = (undefined1)((uint)fVar73 >> 0x10);
          uVar71 = (undefined1)((uint)fVar73 >> 0x18);
        }
        else {
          piVar2 = (int *)(lVar50 + 0x40);
          puVar54 = (undefined8 *)((long)piVar2 + (ulong)(bVar5 >> 2 & 3) * 0xc + (long)*piVar2);
          puVar51 = (undefined8 *)((long)piVar2 + (ulong)(bVar5 >> 4 & 3) * 0xc + (long)*piVar2);
          uVar97 = *puVar51;
          uVar94 = *puVar54;
          fVar108 = (float)uVar94 - (float)uVar97;
          fVar109 = (float)((ulong)uVar94 >> 0x20) - (float)((ulong)uVar97 >> 0x20);
          fVar106 = *(float *)(puVar54 + 1) - *(float *)(puVar51 + 1);
          fVar107 = fVar108 * fVar108 + fVar109 * fVar109 + fVar106 * fVar106;
          if (fVar107 != 0.0) {
            fVar107 = SQRT(fVar107);
            fVar104 = SQRT(fVar108 * fVar108 + fVar109 * fVar109 + fVar106 * fVar106);
            fVar74 = fVar108 / fVar107;
            fVar79 = fVar109 / fVar104;
            fVar103 = fVar106 / fVar107;
            fVar104 = (float)(CONCAT17((char)((uint)fVar106 >> 0x18),
                                       CONCAT16((char)((uint)fVar106 >> 0x10),
                                                CONCAT15((char)((uint)fVar106 >> 8),
                                                         CONCAT14(SUB41(fVar106,0),fVar106)))) >>
                             0x20) /
                      (float)CONCAT13((char)((uint)fVar104 >> 0x18),
                                      CONCAT12((char)((uint)fVar104 >> 0x10),
                                               (short)(CONCAT15((char)((uint)fVar104 >> 8),
                                                                CONCAT14(SUB41(fVar104,0),fVar107))
                                                      >> 0x20)));
          }
          fVar106 = fVar73 * fVar74 + fVar77 * fVar79 + fVar102 * fVar103;
          fVar73 = fVar73 * fVar74 + fVar77 * fVar79 + fVar102 * fVar103;
          fVar74 = fVar74 * fVar106;
          uVar56 = SUB41(fVar74,0);
          uVar57 = (undefined1)((uint)fVar74 >> 8);
          uVar58 = (undefined1)((uint)fVar74 >> 0x10);
          uVar59 = (undefined1)((uint)fVar74 >> 0x18);
          fVar79 = fVar79 * fVar73;
          uVar60 = SUB41(fVar79,0);
          uVar61 = (undefined1)((uint)fVar79 >> 8);
          uVar62 = (undefined1)((uint)fVar79 >> 0x10);
          uVar63 = (undefined1)((uint)fVar79 >> 0x18);
          fVar103 = fVar103 * fVar106;
          uVar64 = SUB41(fVar103,0);
          uVar65 = (undefined1)((uint)fVar103 >> 8);
          uVar66 = (undefined1)((uint)fVar103 >> 0x10);
          uVar67 = (undefined1)((uint)fVar103 >> 0x18);
          fVar104 = fVar104 * (float)CONCAT13((char)((uint)fVar73 >> 0x18),
                                              CONCAT12((char)((uint)fVar73 >> 0x10),
                                                       (short)(CONCAT15((char)((uint)fVar73 >> 8),
                                                                        CONCAT14(SUB41(fVar73,0),
                                                                                 fVar106)) >> 0x20))
                                             );
          uVar68 = SUB41(fVar104,0);
          uVar69 = (undefined1)((uint)fVar104 >> 8);
          uVar70 = (undefined1)((uint)fVar104 >> 0x10);
          uVar71 = (undefined1)((uint)fVar104 >> 0x18);
        }
        iVar72 = -(uint)(ABS((float)CONCAT13(uVar59,CONCAT12(uVar58,CONCAT11(uVar57,uVar56)))) <
                        0.0001);
        iVar76 = -(uint)(ABS((float)CONCAT13(uVar63,CONCAT12(uVar62,CONCAT11(uVar61,uVar60)))) <
                        0.0001);
        iVar78 = -(uint)(ABS((float)CONCAT13(uVar67,CONCAT12(uVar66,CONCAT11(uVar65,uVar64)))) <
                        0.0001);
        if (CONCAT13((byte)((uint)iVar76 >> 0x18) & (byte)((uint)iVar72 >> 0x18) &
                     (byte)((uint)iVar78 >> 0x18),
                     CONCAT12((byte)((uint)iVar76 >> 0x10) & (byte)((uint)iVar72 >> 0x10) &
                              (byte)((uint)iVar78 >> 0x10),
                              CONCAT11((byte)((uint)iVar76 >> 8) & (byte)((uint)iVar72 >> 8) &
                                       (byte)((uint)iVar78 >> 8),
                                       (byte)iVar76 & (byte)iVar72 & (byte)iVar78))) == 0) {
          fVar73 = (float)CONCAT13(uVar59,CONCAT12(uVar58,CONCAT11(uVar57,uVar56))) *
                   (float)CONCAT13(uVar59,CONCAT12(uVar58,CONCAT11(uVar57,uVar56)));
          fVar77 = (float)CONCAT13(uVar63,CONCAT12(uVar62,CONCAT11(uVar61,uVar60))) *
                   (float)CONCAT13(uVar63,CONCAT12(uVar62,CONCAT11(uVar61,uVar60)));
          fVar79 = (float)CONCAT13(uVar67,CONCAT12(uVar66,CONCAT11(uVar65,uVar64))) *
                   (float)CONCAT13(uVar67,CONCAT12(uVar66,CONCAT11(uVar65,uVar64)));
          fVar74 = fVar79 + fVar73 + fVar77;
          if (fVar74 == 0.0) {
            auVar75 = SUB1612(ZEXT816(0),0);
            if (-1 < (int)uVar4) goto LAB_02f75a38;
            goto LAB_02f759d8;
          }
          fVar74 = SQRT(fVar74);
          auVar75._0_4_ = (float)CONCAT13(uVar59,CONCAT12(uVar58,CONCAT11(uVar57,uVar56))) / fVar74;
          auVar75._4_4_ =
               (float)CONCAT13(uVar63,CONCAT12(uVar62,CONCAT11(uVar61,uVar60))) /
               SQRT(fVar79 + fVar73 + fVar77);
          auVar75._8_4_ = (float)CONCAT13(uVar67,CONCAT12(uVar66,CONCAT11(uVar65,uVar64))) / fVar74;
          if ((int)uVar4 < 0) goto LAB_02f759d8;
LAB_02f75a38:
          if (uVar4 == 0) goto LAB_02f759d8;
          lVar50 = (long)(int)(uVar4 - 1);
          uVar92 = (undefined1)((uint)fStack_98 >> 8);
          uVar84 = (undefined1)((uint)fStack_98 >> 0x10);
          uVar85 = (undefined1)((uint)fStack_98 >> 0x18);
          uVar88 = (undefined1)((uint)fStack_94 >> 8);
          uVar90 = (undefined1)((uint)fStack_94 >> 0x10);
          uVar93 = (undefined1)((uint)fStack_94 >> 0x18);
          auVar25._4_4_ = fStack_9c;
          auVar25._0_4_ = local_a0;
          auVar25[8] = fStack_98._0_1_;
          auVar24._4_4_ = fStack_9c;
          auVar24._0_4_ = local_a0;
          auVar24[8] = fStack_98._0_1_;
          auVar24[9] = uVar92;
          auVar24[10] = uVar84;
          auVar24[0xb] = uVar85;
          auVar24[0xc] = SUB41(fStack_94,0);
          auVar24[0xd] = uVar88;
          auVar24[0xe] = uVar90;
          auVar24[0xf] = uVar93;
          auVar25[9] = uVar92;
          auVar25[10] = uVar84;
          auVar25[0xb] = uVar85;
          auVar25[0xc] = SUB41(fStack_94,0);
          auVar25[0xd] = uVar88;
          auVar25[0xe] = uVar90;
          auVar25[0xf] = uVar93;
          auVar95 = NEON_ext(auVar24,auVar25,8,1);
          uVar55 = 1;
          auVar100._0_4_ = (float)local_8c0 - local_940[lVar50 * 4 + 0x20];
          auVar100._4_4_ = local_8c0._4_4_ - local_940[lVar50 * 4 + 0x21];
          auVar100._8_4_ = (float)uStack_8b8 - *(float *)(&uStack_8b8 + lVar50 * 2);
          auVar100._12_4_ = uStack_8b8._4_4_ - *(float *)((long)&uStack_8b8 + lVar50 * 0x10 + 4);
          uVar97 = NEON_ext(CONCAT44(fStack_9c,local_a0),auVar95._0_8_,4,1);
          auVar95 = NEON_ext(auVar100,auVar100,4,1);
          fVar77 = (float)((ulong)uVar97 >> 0x20);
          auVar101._0_4_ = (float)uVar97 * auVar100._0_4_ - local_a0 * auVar95._0_4_;
          auVar101._4_4_ = fVar77 * auVar100._4_4_ - fStack_9c * auVar95._4_4_;
          auVar101._8_4_ = local_a0 * auVar100._8_4_ - fStack_98 * auVar100._0_4_;
          auVar101._12_4_ = fStack_9c * auVar100._12_4_ - fStack_94 * auVar100._4_4_;
          auVar95 = NEON_ext(auVar101,auVar101,4,1);
          fVar79 = auVar75._0_4_ * auVar95._0_4_;
          fVar102 = auVar75._4_4_ * auVar95._4_4_;
          fVar74 = auVar75._8_4_ * auVar101._0_4_;
          fVar73 = fVar79 + fVar102 + fVar74;
          fVar74 = fVar79 + fVar102 + fVar74;
          lVar50 = 0;
          do {
            lVar42 = (long)(int)(uVar55 - 1);
            fVar79 = local_940[lVar42 * 4 + 0x20];
            fVar102 = local_940[lVar42 * 4 + 0x21];
            fVar103 = *(float *)(&uStack_8b8 + lVar42 * 2);
            fVar104 = *(float *)((long)&uStack_8b8 + lVar42 * 0x10 + 4);
            uVar41 = 0;
            if (uVar55 != uVar4) {
              uVar41 = uVar55;
            }
            uVar55 = uVar55 + 1;
            fVar110 = (float)CONCAT13(uVar59,CONCAT12(uVar58,CONCAT11(uVar57,uVar56))) + fVar79;
            fVar111 = (float)CONCAT13(uVar63,CONCAT12(uVar62,CONCAT11(uVar61,uVar60))) + fVar102;
            fVar112 = (float)CONCAT13(uVar67,CONCAT12(uVar66,CONCAT11(uVar65,uVar64))) + fVar103;
            fVar113 = (float)CONCAT13(uVar71,CONCAT12(uVar70,CONCAT11(uVar69,uVar68))) + fVar104;
            uVar53 = CONCAT44(-(uint)(fVar74 <= 0.0),-(uint)(fVar73 <= 0.0)) & 0x100000001;
            fVar73 = (float)*(undefined8 *)(local_940 + (ulong)uVar41 * 4 + 0x20) - fVar79;
            fVar106 = (float)((ulong)*(undefined8 *)(local_940 + (ulong)uVar41 * 4 + 0x20) >> 0x20)
                      - fVar102;
            fVar108 = (float)(&uStack_8b8)[(ulong)uVar41 * 2] - fVar103;
            fVar109 = (float)((ulong)(&uStack_8b8)[(ulong)uVar41 * 2] >> 0x20) - fVar104;
            auVar29._4_4_ = fVar106;
            auVar29._0_4_ = fVar73;
            auVar29._8_4_ = fVar108;
            auVar29._12_4_ = fVar109;
            auVar30._4_4_ = fVar106;
            auVar30._0_4_ = fVar73;
            auVar30._8_4_ = fVar108;
            auVar30._12_4_ = fVar109;
            auVar95 = NEON_ext(auVar29,auVar30,4,1);
            iVar72 = (int)uVar53;
            iVar76 = (int)(uVar53 >> 0x20);
            fVar74 = (float)uVar97 * fVar73 - fVar11 * auVar95._0_4_;
            fVar107 = fVar77 * fVar106 - fVar12 * auVar95._4_4_;
            fVar73 = fVar11 * fVar108 - fVar13 * fVar73;
            fVar106 = fVar12 * fVar109 - fVar105 * fVar106;
            lVar42 = lVar50 + 2;
            local_940[lVar50 * 4 + 2] =
                 (float)((uint)fVar112 ^ ((uint)fVar112 ^ (uint)fVar103) & (iVar72 << 0x1f) >> 0x1f)
            ;
            local_940[lVar50 * 4 + 3] =
                 (float)((uint)fVar113 ^ ((uint)fVar113 ^ (uint)fVar104) & (iVar76 << 0x1f) >> 0x1f)
            ;
            local_940[lVar50 * 4] =
                 (float)((uint)fVar110 ^ ((uint)fVar110 ^ (uint)fVar79) & (iVar72 << 0x1f) >> 0x1f);
            local_940[lVar50 * 4 + 1] =
                 (float)((uint)fVar111 ^ ((uint)fVar111 ^ (uint)fVar102) & (iVar76 << 0x1f) >> 0x1f)
            ;
            auVar31._4_4_ = fVar107;
            auVar31._0_4_ = fVar74;
            auVar31._8_4_ = fVar73;
            auVar31._12_4_ = fVar106;
            auVar32._4_4_ = fVar107;
            auVar32._0_4_ = fVar74;
            auVar32._8_4_ = fVar73;
            auVar32._12_4_ = fVar106;
            auVar95 = NEON_ext(auVar31,auVar32,4,1);
            fVar106 = auVar75._0_4_ * auVar95._0_4_;
            fVar107 = auVar75._4_4_ * auVar95._4_4_;
            fVar74 = auVar75._8_4_ * fVar74;
            fVar73 = fVar106 + fVar107 + fVar74;
            fVar74 = fVar106 + fVar107 + fVar74;
            uVar53 = CONCAT44(-(uint)(fVar74 <= 0.0),-(uint)(fVar73 <= 0.0)) & 0x100000001;
            iVar72 = (int)uVar53;
            iVar76 = (int)(uVar53 >> 0x20);
            local_940[lVar50 * 4 + 6] =
                 (float)((uint)fVar103 ^
                        ((uint)fVar103 ^ (uint)fVar112) & ~((iVar72 << 0x1f) >> 0x1f));
            local_940[lVar50 * 4 + 7] =
                 (float)((uint)fVar104 ^
                        ((uint)fVar104 ^ (uint)fVar113) & ~((iVar76 << 0x1f) >> 0x1f));
            local_940[lVar50 * 4 + 4] =
                 (float)((uint)fVar79 ^ ((uint)fVar79 ^ (uint)fVar110) & ~((iVar72 << 0x1f) >> 0x1f)
                        );
            local_940[lVar50 * 4 + 5] =
                 (float)((uint)fVar102 ^
                        ((uint)fVar102 ^ (uint)fVar111) & ~((iVar76 << 0x1f) >> 0x1f));
            lVar50 = lVar42;
          } while (uVar55 - uVar4 != 1);
        }
        else {
LAB_02f759d8:
          lVar42 = 0;
        }
        uVar55 = uVar39 | 2;
        uVar41 = (uint)lVar42;
        pfVar52 = local_940;
        if ((int)(uint)lVar42 < 1) {
          uVar55 = uVar39;
          uVar41 = uVar4;
          pfVar52 = (float *)&local_8c0;
        }
      }
      if (uVar44 == 0) {
        if (uVar3 == uVar55) {
          uVar44 = 0;
          uVar55 = uVar3;
        }
        else {
          uVar39 = iVar40 + 3U & 0xfffffffc;
          uVar44 = (uint)bVar7;
          cVar35 = (char)uVar39;
          if ((uVar3 >> 1 & 1) == 0) {
            if (*(char *)(param_9 + 0x98) == '\0') {
              if (bVar7 != 0) {
                pbVar48 = (byte *)(param_9 + 0x90);
                uVar53 = uVar46;
                do {
                  if ((int)uVar39 <= (int)(uint)*pbVar48) {
                    *pbVar48 = ((*pbVar48 - cVar35) * '\x02' | 1) + cVar35;
                  }
                  uVar53 = uVar53 - 1;
                  pbVar48 = pbVar48 + 1;
                } while (uVar53 != 0);
                goto LAB_02f75c34;
              }
              goto LAB_02f75c3c;
            }
            if (bVar7 == 0) goto LAB_02f75c3c;
            pbVar48 = (byte *)(param_9 + 0x90);
            uVar53 = uVar46;
            do {
              bVar6 = *pbVar48;
              bVar5 = bVar6 << 1;
              if (3 < bVar6) {
                bVar5 = bVar6 + 4;
              }
              uVar53 = uVar53 - 1;
              *pbVar48 = bVar5;
              pbVar48 = pbVar48 + 1;
            } while (uVar53 != 0);
LAB_02f75c34:
            if (bVar7 < 4) goto LAB_02f75c3c;
          }
          else {
            if (*(char *)(param_9 + 0x98) == '\0') {
              if (bVar7 != 0) {
                pbVar48 = (byte *)(param_9 + 0x90);
                uVar53 = uVar46;
                do {
                  if ((int)uVar39 <= (int)(uint)*pbVar48) {
                    uVar3 = *pbVar48 - uVar39;
                    if ((int)uVar3 < 0) {
                      uVar3 = uVar3 + 1;
                    }
                    *pbVar48 = cVar35 + (char)(uVar3 >> 1);
                  }
                  uVar53 = uVar53 - 1;
                  pbVar48 = pbVar48 + 1;
                } while (uVar53 != 0);
                goto LAB_02f75c34;
              }
            }
            else if (bVar7 != 0) {
              pbVar48 = (byte *)(param_9 + 0x90);
              uVar53 = uVar46;
              do {
                bVar6 = *pbVar48;
                bVar5 = bVar6 >> 1;
                if (7 < bVar6) {
                  bVar5 = bVar6 - 4;
                }
                uVar53 = uVar53 - 1;
                *pbVar48 = bVar5;
                pbVar48 = pbVar48 + 1;
              } while (uVar53 != 0);
              goto LAB_02f75c34;
            }
LAB_02f75c3c:
            uVar39 = uVar44;
            if (uVar44 < 4) {
              uVar39 = 3;
            }
            uVar39 = uVar39 + 1;
            uVar53 = ~uVar46;
            if ((uVar39 - uVar44 & 1) != 0) {
              ((undefined1 *)(param_9 + 0x90))[uVar46] = *(undefined1 *)(param_9 + 0x90);
              uVar46 = uVar46 + 1;
            }
            if (uVar53 + uVar39 != 0) {
              lVar50 = uVar39 - uVar46;
              puVar47 = (undefined1 *)(uVar46 + param_9 + 0x91);
              do {
                puVar47[-1] = *(undefined1 *)(param_9 + 0x90);
                *puVar47 = *(undefined1 *)(param_9 + 0x90);
                lVar50 = lVar50 + -2;
                uVar44 = 0;
                puVar47 = puVar47 + 2;
              } while (lVar50 != 0);
              goto LAB_02f75c9c;
            }
          }
          uVar44 = 0;
        }
      }
LAB_02f75c9c:
      uVar56 = (undefined1)((uint7)uStack_77 >> 8);
      uVar57 = (undefined1)((uint7)uStack_77 >> 0x10);
      uVar58 = (undefined1)((uint7)uStack_77 >> 0x18);
      uVar59 = (undefined1)((uint7)uStack_77 >> 0x20);
      uVar60 = (undefined1)((uint7)uStack_77 >> 0x28);
      uVar61 = (undefined1)((uint7)uStack_77 >> 0x30);
      auVar19[8] = uStack_78;
      auVar19._0_8_ = local_80;
      auVar18[8] = uStack_78;
      auVar18._0_8_ = local_80;
      auVar18[9] = (char)uStack_77;
      auVar18[10] = uVar56;
      auVar18[0xb] = uVar57;
      auVar18[0xc] = uVar58;
      auVar18[0xd] = uVar59;
      auVar18[0xe] = uVar60;
      auVar18[0xf] = uVar61;
      auVar19[9] = (char)uStack_77;
      auVar19[10] = uVar56;
      auVar19[0xb] = uVar57;
      auVar19[0xc] = uVar58;
      auVar19[0xd] = uVar59;
      auVar19[0xe] = uVar60;
      auVar19[0xf] = uVar61;
      auVar95 = NEON_ext(auVar18,auVar19,8,1);
      uVar97 = *(undefined8 *)((long)param_5 + 0xc);
      fVar74 = *(float *)((long)param_5 + 0x14);
      uVar96 = NEON_ext(uVar97,(ulong)(uint)fVar74,4,1);
      fVar73 = (float)((ulong)local_80 >> 0x20);
      uVar94 = NEON_ext(local_80,auVar95._0_8_,4,1);
      fVar11 = (float)((ulong)uVar97 >> 0x20);
      auVar36._8_8_ = uVar16;
      auVar36._0_8_ = uVar15;
      fVar12 = (float)local_80 * (float)uVar96 - (float)uVar97 * (float)uVar94;
      fVar13 = fVar73 * (float)((ulong)uVar96 >> 0x20) - fVar11 * (float)((ulong)uVar94 >> 0x20);
      uVar56 = (undefined1)((uint)fVar13 >> 8);
      uVar57 = (undefined1)((uint)fVar13 >> 0x10);
      uVar58 = (undefined1)((uint)fVar13 >> 0x18);
      fVar105 = (float)CONCAT71(uStack_77,uStack_78) * (float)uVar97 - (float)local_80 * fVar74;
      uVar59 = (undefined1)((uint)fVar105 >> 8);
      uVar60 = (undefined1)((uint)fVar105 >> 0x10);
      uVar61 = (undefined1)((uint)fVar105 >> 0x18);
      fVar11 = (float)((uint7)uStack_77 >> 0x18) * fVar11 - fVar73 * fVar74;
      uVar62 = (undefined1)((uint)fVar11 >> 8);
      uVar63 = (undefined1)((uint)fVar11 >> 0x10);
      uVar64 = (undefined1)((uint)fVar11 >> 0x18);
      auVar9[4] = SUB41(fVar13,0);
      auVar9._0_4_ = fVar12;
      auVar9[5] = uVar56;
      auVar9[6] = uVar57;
      auVar9[7] = uVar58;
      auVar9[8] = SUB41(fVar105,0);
      auVar9[9] = uVar59;
      auVar9[10] = uVar60;
      auVar9[0xb] = uVar61;
      auVar9[0xc] = SUB41(fVar11,0);
      auVar9[0xd] = uVar62;
      auVar9[0xe] = uVar63;
      auVar9[0xf] = uVar64;
      auVar10[4] = SUB41(fVar13,0);
      auVar10._0_4_ = fVar12;
      auVar10[5] = uVar56;
      auVar10[6] = uVar57;
      auVar10[7] = uVar58;
      auVar10[8] = SUB41(fVar105,0);
      auVar10[9] = uVar59;
      auVar10[10] = uVar60;
      auVar10[0xb] = uVar61;
      auVar10[0xc] = SUB41(fVar11,0);
      auVar10[0xd] = uVar62;
      auVar10[0xe] = uVar63;
      auVar10[0xf] = uVar64;
      auVar95 = NEON_ext(auVar9,auVar10,4,1);
      auVar99 = NEON_ext(auVar36,auVar36,4,1);
      uVar56 = (undefined1)((uint)fStack_98 >> 8);
      uVar57 = (undefined1)((uint)fStack_98 >> 0x10);
      uVar58 = (undefined1)((uint)fStack_98 >> 0x18);
      uVar59 = (undefined1)((uint)fStack_94 >> 8);
      uVar60 = (undefined1)((uint)fStack_94 >> 0x10);
      uVar61 = (undefined1)((uint)fStack_94 >> 0x18);
      auVar21._4_4_ = fStack_9c;
      auVar21._0_4_ = local_a0;
      auVar21[8] = fStack_98._0_1_;
      auVar20._4_4_ = fStack_9c;
      auVar20._0_4_ = local_a0;
      auVar20[8] = fStack_98._0_1_;
      auVar20[9] = uVar56;
      auVar20[10] = uVar57;
      auVar20[0xb] = uVar58;
      auVar20[0xc] = SUB41(fStack_94,0);
      auVar20[0xd] = uVar59;
      auVar20[0xe] = uVar60;
      auVar20[0xf] = uVar61;
      auVar21[9] = uVar56;
      auVar21[10] = uVar57;
      auVar21[0xb] = uVar58;
      auVar21[0xc] = SUB41(fStack_94,0);
      auVar21[0xd] = uVar59;
      auVar21[0xe] = uVar60;
      auVar21[0xf] = uVar61;
      auVar98 = NEON_ext(auVar20,auVar21,8,1);
      uVar97 = NEON_ext(CONCAT44(fStack_9c,local_a0),auVar98._0_8_,4,1);
      fVar105 = (float)((ulong)uVar15 >> 0x20);
      fVar11 = auVar99._0_4_ * local_a0 - fVar27 * (float)uVar97;
      fVar13 = auVar99._4_4_ * fStack_9c - fVar105 * (float)((ulong)uVar97 >> 0x20);
      uVar56 = (undefined1)((uint)fVar13 >> 8);
      uVar57 = (undefined1)((uint)fVar13 >> 0x10);
      uVar58 = (undefined1)((uint)fVar13 >> 0x18);
      fVar27 = fVar27 * fStack_98 - fVar14 * local_a0;
      uVar59 = (undefined1)((uint)fVar27 >> 8);
      uVar60 = (undefined1)((uint)fVar27 >> 0x10);
      uVar61 = (undefined1)((uint)fVar27 >> 0x18);
      fVar105 = fVar105 * fStack_94 - (float)((ulong)uVar16 >> 0x20) * fStack_9c;
      uVar62 = (undefined1)((uint)fVar105 >> 8);
      uVar63 = (undefined1)((uint)fVar105 >> 0x10);
      uVar64 = (undefined1)((uint)fVar105 >> 0x18);
      auVar22[4] = SUB41(fVar13,0);
      auVar22._0_4_ = fVar11;
      auVar22[5] = uVar56;
      auVar22[6] = uVar57;
      auVar22[7] = uVar58;
      auVar22[8] = SUB41(fVar27,0);
      auVar22[9] = uVar59;
      auVar22[10] = uVar60;
      auVar22[0xb] = uVar61;
      auVar22[0xc] = SUB41(fVar105,0);
      auVar22[0xd] = uVar62;
      auVar22[0xe] = uVar63;
      auVar22[0xf] = uVar64;
      auVar23[4] = SUB41(fVar13,0);
      auVar23._0_4_ = fVar11;
      auVar23[5] = uVar56;
      auVar23[6] = uVar57;
      auVar23[7] = uVar58;
      auVar23[8] = SUB41(fVar27,0);
      auVar23[9] = uVar59;
      auVar23[10] = uVar60;
      auVar23[0xb] = uVar61;
      auVar23[0xc] = SUB41(fVar105,0);
      auVar23[0xd] = uVar62;
      auVar23[0xe] = uVar63;
      auVar23[0xf] = uVar64;
      auVar98 = NEON_ext(auVar22,auVar23,4,1);
      iVar72 = (uint)local_88[0] -
               (int)((float)(((int)(auVar95._0_4_ * auVar95._0_4_ + auVar95._4_4_ * auVar95._4_4_ +
                                   fVar12 * fVar12) >> 1) + 0x1fbb4000) * 42972.5 + 0.5);
      iVar76 = (uint)local_a8[0] -
               (int)((float)(((int)(auVar98._0_4_ * auVar98._0_4_ + auVar98._4_4_ * auVar98._4_4_ +
                                   fVar11 * fVar11) >> 1) + 0x1fbb4000) * 42972.5 + 0.5);
      if (iVar76 <= iVar72) {
        iVar72 = iVar76;
      }
      if ((uint)local_a8[0] <= (uint)local_88[0]) {
        local_88[0] = local_a8[0];
      }
      uVar39 = (uint)local_88[0];
      uVar3 = uVar39;
      if ((int)uVar39 <= iVar72 * 4) {
        uVar3 = iVar72 << 2;
      }
      *(short *)(param_9 + 0x94) = (short)(uVar39 + uVar3 + 3 >> 2);
      local_948 = 0x5f7ffff05f7ffff0;
      uVar8 = *(undefined4 *)((long)param_5 + 0x14);
      local_960 = *(undefined8 *)((long)param_5 + 0xc);
      uStack_958 = CONCAT17((char)((uint)uVar8 >> 0x18),
                            CONCAT16((char)((uint)uVar8 >> 0x10),
                                     CONCAT15((char)((uint)uVar8 >> 8),CONCAT14((char)uVar8,uVar8)))
                           );
      iVar40 = FUN_008217e0(*(long *)(param_1 + 8) + 0x530,&local_948,param_2,param_3,uVar38,uVar55,
                            uVar44 != 0,1,&local_4c0,pfVar52,iVar40,uVar41,&local_80,&local_a0,
                            param_4,&local_960,&local_c0,pfVar49,param_9,param_10);
      if (iVar40 == 2) {
        if ((*(byte *)(param_9 + 0x99) >> 6 & 1) == 0) {
          *param_10 = 0;
          memset(param_10 + 0xc,0,0x50);
          bVar34 = false;
          *(undefined1 *)(param_9 + 0x2b) = 0;
          *(undefined8 *)(param_9 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(param_9 + 0x40) = 0;
          *(undefined8 *)(param_9 + 0x48) = 0;
          *(undefined8 *)(param_9 + 0x50) = 0;
          *(undefined8 *)(param_9 + 0x58) = 0;
          *(undefined8 *)(param_9 + 0x60) = 0;
          *(undefined8 *)(param_9 + 0x68) = 0;
        }
        else {
          bVar34 = true;
        }
      }
      else {
        bVar34 = false;
      }
      bVar33 = true;
    }
    if (!bVar33) {
      return 0;
    }
    if (!bVar34) goto LAB_02f75f44;
  }
  if ((param_7 & 1) != 0) {
    return 0;
  }
  *param_10 = 1;
  uVar8 = *(undefined4 *)(param_5 + 3);
  uVar56 = (undefined1)((uint)uVar8 >> 8);
  uVar57 = (undefined1)((uint)uVar8 >> 0x10);
  uVar58 = (undefined1)((uint)uVar8 >> 0x18);
  *(ulong *)(param_10 + 0x16) =
       CONCAT17(uVar91,CONCAT16(uVar89,CONCAT15(uVar87,CONCAT14(uVar86,fVar28))));
  *(ulong *)(param_10 + 0x14) =
       CONCAT17(uVar83,CONCAT16(uVar82,CONCAT15(uVar81,CONCAT14(uVar80,fVar26))));
  *(ulong *)(param_10 + 0x1a) =
       CONCAT17(uVar91,CONCAT16(uVar89,CONCAT15(uVar87,CONCAT14(uVar86,fVar28))));
  *(ulong *)(param_10 + 0x18) =
       CONCAT17(uVar83,CONCAT16(uVar82,CONCAT15(uVar81,CONCAT14(uVar80,fVar26))));
  *(ulong *)(param_10 + 0xe) =
       CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar56,CONCAT14((char)uVar8,uVar8))));
  *(ulong *)(param_10 + 0xc) =
       CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar56,CONCAT14((char)uVar8,uVar8))));
  *(ulong *)(param_10 + 0x12) =
       CONCAT17(uVar91,CONCAT16(uVar89,CONCAT15(uVar87,CONCAT14(uVar86,fVar28))));
  *(ulong *)(param_10 + 0x10) =
       CONCAT17(uVar83,CONCAT16(uVar82,CONCAT15(uVar81,CONCAT14(uVar80,fVar26))));
  *(ulong *)(param_10 + 0x1e) =
       CONCAT17(uVar91,CONCAT16(uVar89,CONCAT15(uVar87,CONCAT14(uVar86,fVar28))));
  *(ulong *)(param_10 + 0x1c) =
       CONCAT17(uVar83,CONCAT16(uVar82,CONCAT15(uVar81,CONCAT14(uVar80,fVar26))));
  *(ulong *)(param_10 + 0x22) =
       CONCAT17(uVar91,CONCAT16(uVar89,CONCAT15(uVar87,CONCAT14(uVar86,fVar28))));
  *(ulong *)(param_10 + 0x20) =
       CONCAT17(uVar83,CONCAT16(uVar82,CONCAT15(uVar81,CONCAT14(uVar80,fVar26))));
  param_10[1] = *(undefined4 *)(param_5 + 3);
  *(undefined8 *)(param_9 + 0x88) = 0xffffffffffffffff;
  if (*(byte *)(param_9 + 0x2b) != 1) {
    uVar16 = *(undefined8 *)
              ((long)(PTR_DAT_047d19e0 +
                     (ulong)(0xf >> (ulong)(4 - *(byte *)(param_9 + 0x2b) & 0x1f)) * 0x10) + 8);
    uVar15 = *(undefined8 *)
              (PTR_DAT_047d19e0 +
              (ulong)(0xf >> (ulong)(4 - *(byte *)(param_9 + 0x2b) & 0x1f)) * 0x10);
    *(undefined8 *)(param_9 + 0x50) = 0;
    *(undefined8 *)(param_9 + 0x58) = 0;
    *(undefined1 *)(param_9 + 0x2b) = 1;
    *(undefined8 *)(param_9 + 0x60) = 0;
    *(undefined8 *)(param_9 + 0x68) = 0;
    *(ulong *)(param_9 + 0x48) =
         CONCAT17(*(byte *)(param_9 + 0x4f) & (byte)((ulong)uVar16 >> 0x38),
                  CONCAT16(*(byte *)(param_9 + 0x4e) & (byte)((ulong)uVar16 >> 0x30),
                           CONCAT15(*(byte *)(param_9 + 0x4d) & (byte)((ulong)uVar16 >> 0x28),
                                    CONCAT14(*(byte *)(param_9 + 0x4c) &
                                             (byte)((ulong)uVar16 >> 0x20),
                                             CONCAT13(*(byte *)(param_9 + 0x4b) &
                                                      (byte)((ulong)uVar16 >> 0x18),
                                                      CONCAT12(*(byte *)(param_9 + 0x4a) &
                                                               (byte)((ulong)uVar16 >> 0x10),
                                                               CONCAT11(*(byte *)(param_9 + 0x49) &
                                                                        (byte)((ulong)uVar16 >> 8),
                                                                        *(byte *)(param_9 + 0x48) &
                                                                        (byte)uVar16)))))));
    *(ulong *)(param_9 + 0x40) =
         CONCAT17(*(byte *)(param_9 + 0x47) & (byte)((ulong)uVar15 >> 0x38),
                  CONCAT16(*(byte *)(param_9 + 0x46) & (byte)((ulong)uVar15 >> 0x30),
                           CONCAT15(*(byte *)(param_9 + 0x45) & (byte)((ulong)uVar15 >> 0x28),
                                    CONCAT14(*(byte *)(param_9 + 0x44) &
                                             (byte)((ulong)uVar15 >> 0x20),
                                             CONCAT13(*(byte *)(param_9 + 0x43) &
                                                      (byte)((ulong)uVar15 >> 0x18),
                                                      CONCAT12(*(byte *)(param_9 + 0x42) &
                                                               (byte)((ulong)uVar15 >> 0x10),
                                                               CONCAT11(*(byte *)(param_9 + 0x41) &
                                                                        (byte)((ulong)uVar15 >> 8),
                                                                        *(byte *)(param_9 + 0x40) &
                                                                        (byte)uVar15)))))));
  }
  fVar11 = (float)param_10[5];
  fVar12 = (float)param_10[6];
  *(ushort *)(param_9 + 0x80) = (ushort)((uint)(int)(*pfVar49 * 1.96608e+09) >> 0x10) ^ 0x8000;
  *(ushort *)(param_9 + 0x82) = (ushort)((uint)(int)(fVar11 * 1.96608e+09) >> 0x10) ^ 0x8000;
  *(ushort *)(param_9 + 0x84) = (ushort)((uint)(int)(fVar12 * 1.96608e+09) >> 0x10) ^ 0x8000;
LAB_02f75f44:
  lVar50 = *(long *)(param_1 + 8);
  uStack_8b8 = lVar50 + 0x530;
  local_8c0 = 0;
  if (*(char *)(*(long *)(lVar50 + 0x500) + 0xaa0) != '\0') {
    local_8c0 = *(long *)(lVar50 + 0x500) + 0xab0;
  }
  *(long *)(param_10 + 0x26) = param_9;
  lVar42 = param_2[2];
  *(long *)(param_10 + 0x2a) = lVar42;
  lVar43 = param_3[2];
  *(long *)(param_10 + 0x2c) = lVar43;
  param_10[0x28] = (int)param_2[3];
  param_10[0x29] = (int)param_3[3];
  bVar7 = *(byte *)(param_9 + 10);
  *(undefined1 *)(param_10 + 0x24) = 0;
  *(undefined1 *)((long)param_10 + 0x95) = 0;
  *(undefined1 *)((long)param_10 + 0x93) = 0;
  *(byte *)((long)param_10 + 0x91) = bVar7 >> 6 & 1;
  uVar55 = *(uint *)(lVar43 + 0x14) | *(uint *)(lVar42 + 0x14);
  param_10[0x2f] = uVar55;
  if (*(int *)(param_9 + 0x1c) == 0xaaa00) {
    uVar55 = *(uint *)(*param_2 + 0x54) | uVar55 | *(uint *)(*param_3 + 0x54);
    bVar7 = *(byte *)(param_9 + 0xe) & 3;
    uVar41 = *(uint *)(*(long *)(param_1 + 0x30) + (ulong)*(ushort *)(param_2[1] + 0x58) * 0x70 + 4)
    ;
    uVar38 = *(uint *)(*(long *)(param_1 + 0x30) + (ulong)*(ushort *)(param_3[1] + 0x58) * 0x70 + 4)
    ;
    if (bVar7 == 1) {
      uVar55 = uVar55 & 0xffffff7f;
    }
    else if (bVar7 == 2) {
      uVar55 = uVar55 | 0x80;
    }
    if (lVar50 != 0) {
      uVar55 = *(uint *)(lVar50 + 0x81c) | uVar55;
    }
    *(undefined2 *)((long)param_10 + 0x92) = 0x101;
    *(undefined4 *)(param_9 + 0x1c) = 0;
    *(uint *)(param_9 + 0x2c) = uVar38 | uVar41 | uVar55 | *(uint *)(param_9 + 0x2c);
    FUN_02f526d4(param_9,lVar42,lVar43,param_2[5],param_3[5]);
    lVar50 = *(long *)(param_1 + 0x40);
    uVar55 = *(uint *)(param_9 + 0x2c);
    if ((*(uint *)(lVar50 + 0x108) & uVar55) != 0) {
      lVar42 = 0;
      puVar51 = (undefined8 *)(lVar50 + 0x118);
      uStack_4b8 = param_10;
      local_4c0 = param_9;
      do {
        if ((*(uint *)(puVar51 + -1) & uVar55) != 0) {
          (**(code **)(*(long *)*puVar51 + 0x20))
                    ((long *)*puVar51,param_1,&local_8c0,param_2,param_3,&local_4c0);
        }
        lVar42 = lVar42 + 1;
        puVar51 = puVar51 + 2;
      } while (lVar42 < *(int *)(lVar50 + 0x10c));
    }
  }
  return 1;
}


