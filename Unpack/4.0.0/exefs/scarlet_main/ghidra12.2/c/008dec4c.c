/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008dec4c; name: FUN_008dec4c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008dec4c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  char cVar6;
  undefined2 uVar7;
  undefined1 auVar8 [16];
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
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined2 uVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  undefined4 *puVar34;
  undefined4 *puVar35;
  long lVar36;
  int *piVar37;
  undefined8 *puVar38;
  long lVar39;
  long lVar40;
  undefined8 *puVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  ulong uVar49;
  float fVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
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
  float fVar67;
  float fVar68;
  int iVar69;
  undefined1 auVar70 [12];
  float fVar79;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar82;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  int iVar80;
  int iVar81;
  int iVar83;
  undefined1 auVar78 [16];
  undefined1 auVar86 [12];
  undefined4 uVar84;
  float fVar97;
  undefined8 uVar85;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar98;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar99;
  float fVar100;
  float fVar105;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar106;
  float fVar107;
  float fVar108;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  float fVar109;
  undefined8 uVar110;
  ulong uVar111;
  float fVar112;
  undefined8 uVar113;
  undefined1 auStack_a0 [8];
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar39 = *(long *)(param_2 + 0x10);
  lVar40 = *(long *)(lVar39 + 0x418);
  piVar37 = *(int **)(*(long *)(lVar39 + 0x238) + 0x338);
  lVar29 = FUN_008ee7bc(lVar39 + 0x7a8,*(undefined4 *)(lVar40 + 0x38));
  *(undefined4 *)((long)param_3 + 0x7c) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_3 + 0xf) = 0;
  lVar31 = *(long *)(param_2 + 0x10);
  puVar41 = (undefined8 *)(*(long *)(lVar31 + 0x1f0) + (long)*(int *)(param_2 + 0x20) * 0x10);
  uStack_58 = puVar41[1];
  local_60 = *puVar41;
  FUN_008d6eb8(*(undefined4 *)(param_2 + 0x1c),(char)*(undefined4 *)(param_2 + 0x18),
               *(undefined8 *)(lVar31 + 0x98),param_3,*(undefined8 *)(lVar31 + 0x238),&local_60);
  FUN_008d76d8(*(undefined4 *)(param_2 + 0x1c),(char)*(undefined4 *)(param_2 + 0x18),
               *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x98),param_3 + 2,
               *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x238),&local_60);
  fVar67 = *(float *)(*(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x238) + 0x18) + 0x360);
  auVar75._0_8_ = CONCAT44(fVar67 * (float)((ulong)param_3[2] >> 0x20),fVar67 * (float)param_3[2]);
  puVar41 = (undefined8 *)param_3[0xb];
  auVar75._12_4_ = (undefined4)((ulong)param_3[3] >> 0x20);
  auVar75._8_4_ = fVar67 * (float)param_3[3];
  fVar43 = *(float *)(param_3 + 0x11);
  param_3[1] = CONCAT44((int)((ulong)param_3[1] >> 0x20),fVar67 * (float)param_3[1]);
  *param_3 = CONCAT44(fVar67 * (float)((ulong)*param_3 >> 0x20),fVar67 * (float)*param_3);
  param_3[3] = auVar75._8_8_;
  param_3[2] = auVar75._0_8_;
  *(undefined4 *)(param_3 + 0x11) = *(undefined4 *)(param_2 + 0x18);
  if ((*(float *)((long)param_3 + 0x7c) == 0.0) ||
     (0.0 < (float)(int)*(float *)((long)param_3 + 0x7c) - (float)(int)fVar43)) {
    param_3[0xb] = puVar41[7];
    lVar31 = *(long *)(param_2 + 0x10);
    lVar33 = (long)*(int *)(param_2 + 0x20) * 0x10;
    puVar38 = (undefined8 *)(*(long *)(lVar31 + 0x1f0) + lVar33);
    uStack_58 = puVar38[1];
    local_60 = *puVar38;
    iVar69 = piVar37[1];
    puVar38 = (undefined8 *)(*(long *)(lVar31 + 0x1e8) + lVar33);
    uStack_68 = puVar38[1];
    local_70 = *puVar38;
    uVar30 = FUN_008d65b4(*(undefined4 *)(param_2 + 0x1c),(char)*(undefined4 *)(param_2 + 0x18),
                          *(undefined8 *)(lVar31 + 0x98),&local_80,*(undefined8 *)(lVar31 + 0x238),
                          &local_70,&local_60);
    lVar31 = *(long *)(param_2 + 0x10);
    uVar85 = *(undefined8 *)(*(long *)(lVar31 + 0x78) + 0x148);
    uVar45 = *(undefined8 *)(*(long *)(lVar31 + 0x78) + 0x140);
    fVar67 = (float)local_80 * (float)uVar45;
    local_80 = CONCAT44((float)((ulong)local_80 >> 0x20) * (float)((ulong)uVar45 >> 0x20),fVar67);
    uStack_78 = CONCAT44((float)((ulong)uStack_78 >> 0x20) * (float)((ulong)uVar85 >> 0x20),
                         (float)uStack_78 * (float)uVar85);
    lVar33 = (long)*(int *)(param_2 + 0x20);
    puVar38 = (undefined8 *)(*(long *)(lVar31 + 0x1d0) + lVar33 * 0x10);
    uVar45 = *puVar38;
    fVar43 = *(float *)(puVar38 + 1);
    if (iVar69 == 0) {
      lVar36 = lVar33 * 0x10;
      pfVar2 = (float *)(*(long *)(lVar31 + 0x210) + lVar36);
      pfVar3 = (float *)(*(long *)(lVar31 + 0x218) + lVar36);
      pfVar4 = (float *)(*(long *)(lVar31 + 0x220) + lVar36);
      cVar6 = *(char *)(*(long *)(lVar31 + 0xa0) + 0x753);
      if (cVar6 == '\x02') {
        fVar68 = *pfVar2;
        fVar50 = pfVar2[1];
        fVar79 = *pfVar3;
        fVar47 = *pfVar4;
        fVar97 = pfVar3[1];
        fVar99 = pfVar2[2];
        fVar48 = pfVar4[1];
        fVar105 = pfVar3[2];
        fVar42 = pfVar4[2];
        uVar85 = *(undefined8 *)(lVar31 + 0x370);
        uVar51 = (undefined1)uVar85;
        uVar52 = (undefined1)((ulong)uVar85 >> 8);
        uVar53 = (undefined1)((ulong)uVar85 >> 0x10);
        uVar54 = (undefined1)((ulong)uVar85 >> 0x18);
        uVar55 = (undefined1)((ulong)uVar85 >> 0x20);
        uVar56 = (undefined1)((ulong)uVar85 >> 0x28);
        uVar57 = (undefined1)((ulong)uVar85 >> 0x30);
        uVar58 = (undefined1)((ulong)uVar85 >> 0x38);
        fVar109 = (float)*(undefined8 *)(lVar31 + 0x378);
LAB_008df09c:
        fVar107 = 0.0;
        fVar98 = 0.0;
        fVar82 = 0.0;
        uVar63 = SUB41(fVar109,0);
        uVar64 = (undefined1)((uint)fVar109 >> 8);
        uVar65 = (undefined1)((uint)fVar109 >> 0x10);
        uVar66 = (undefined1)((uint)fVar109 >> 0x18);
        uVar59 = 0;
        uVar60 = 0;
        uVar61 = 0;
        uVar62 = 0;
      }
      else {
        if (cVar6 != '\0') {
          fVar68 = *pfVar2;
          fVar50 = pfVar2[1];
          fVar79 = *pfVar3;
          fVar47 = *pfVar4;
          fVar97 = pfVar3[1];
          fVar48 = pfVar4[1];
          fVar42 = pfVar4[2];
          fVar99 = pfVar2[2];
          fVar105 = pfVar2[3];
          uVar51 = SUB41(fVar105,0);
          uVar52 = (undefined1)((uint)fVar105 >> 8);
          uVar53 = (undefined1)((uint)fVar105 >> 0x10);
          uVar54 = (undefined1)((uint)fVar105 >> 0x18);
          fVar105 = pfVar3[3];
          uVar55 = SUB41(fVar105,0);
          uVar56 = (undefined1)((uint)fVar105 >> 8);
          uVar57 = (undefined1)((uint)fVar105 >> 0x10);
          uVar58 = (undefined1)((uint)fVar105 >> 0x18);
          fVar105 = pfVar3[2];
          fVar109 = pfVar4[3];
          goto LAB_008df09c;
        }
        fVar68 = *(float *)(lVar31 + 0x340);
        fVar79 = *(float *)(lVar31 + 0x344);
        fVar47 = *(float *)(lVar31 + 0x348);
        fVar82 = *(float *)(lVar31 + 0x34c);
        fVar50 = *(float *)(lVar31 + 0x350);
        fVar97 = *(float *)(lVar31 + 0x354);
        fVar48 = *(float *)(lVar31 + 0x358);
        fVar98 = *(float *)(lVar31 + 0x35c);
        fVar99 = *(float *)(lVar31 + 0x360);
        fVar105 = *(float *)(lVar31 + 0x364);
        fVar42 = *(float *)(lVar31 + 0x368);
        fVar107 = *(float *)(lVar31 + 0x36c);
        uVar85 = *(undefined8 *)(lVar31 + 0x378);
        uVar63 = (undefined1)uVar85;
        uVar64 = (undefined1)((ulong)uVar85 >> 8);
        uVar65 = (undefined1)((ulong)uVar85 >> 0x10);
        uVar66 = (undefined1)((ulong)uVar85 >> 0x18);
        uVar59 = (undefined1)((ulong)uVar85 >> 0x20);
        uVar60 = (undefined1)((ulong)uVar85 >> 0x28);
        uVar61 = (undefined1)((ulong)uVar85 >> 0x30);
        uVar62 = (undefined1)((ulong)uVar85 >> 0x38);
        uVar85 = *(undefined8 *)(lVar31 + 0x370);
        uVar51 = (undefined1)uVar85;
        uVar52 = (undefined1)((ulong)uVar85 >> 8);
        uVar53 = (undefined1)((ulong)uVar85 >> 0x10);
        uVar54 = (undefined1)((ulong)uVar85 >> 0x18);
        uVar55 = (undefined1)((ulong)uVar85 >> 0x20);
        uVar56 = (undefined1)((ulong)uVar85 >> 0x28);
        uVar57 = (undefined1)((ulong)uVar85 >> 0x30);
        uVar58 = (undefined1)((ulong)uVar85 >> 0x38);
      }
      fVar44 = (float)uVar45;
      fVar46 = (float)((ulong)uVar45 >> 0x20);
      puVar38 = (undefined8 *)(*(long *)(lVar31 + 0x1d8) + lVar33 * 0x10);
      uVar85 = *puVar38;
      fVar109 = *(float *)(puVar38 + 1);
      if ((cVar6 == '\x02') || (cVar6 != '\0')) {
        fVar100 = *pfVar2;
        fVar106 = *pfVar3;
        fVar112 = *pfVar4;
        uVar110 = CONCAT44(pfVar3[1],pfVar2[1]);
        uVar111 = (ulong)(uint)pfVar4[1];
        uVar32 = (ulong)(uint)pfVar4[2];
        fVar108 = 0.0;
        uVar113 = CONCAT44(pfVar3[2],pfVar2[2]);
      }
      else {
        fVar100 = *(float *)(lVar31 + 0x340);
        fVar106 = *(float *)(lVar31 + 0x344);
        fVar112 = *(float *)(lVar31 + 0x348);
        fVar108 = *(float *)(lVar31 + 0x34c);
        uVar111 = *(ulong *)(lVar31 + 0x358);
        uVar110 = *(undefined8 *)(lVar31 + 0x350);
        uVar32 = *(ulong *)(lVar31 + 0x368);
        uVar113 = *(undefined8 *)(lVar31 + 0x360);
      }
      uVar45 = CONCAT44((float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) +
                        fVar79 * fVar44 + fVar97 * fVar46 + fVar105 * fVar43,
                        (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) +
                        fVar68 * fVar44 + fVar50 * fVar46 + fVar99 * fVar43);
      uVar49 = CONCAT44((float)CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59))) +
                        fVar82 * fVar44 + fVar98 * fVar46 + fVar107 * fVar43,
                        (float)CONCAT13(uVar66,CONCAT12(uVar65,CONCAT11(uVar64,uVar63))) +
                        fVar47 * fVar44 + fVar48 * fVar46 + fVar42 * fVar43);
      fVar47 = (float)uVar85;
      fVar48 = (float)((ulong)uVar85 >> 0x20);
      fVar43 = fVar100 * fVar47 + (float)uVar110 * fVar48 + (float)uVar113 * fVar109 + 0.0;
      uVar51 = SUB41(fVar43,0);
      uVar52 = (undefined1)((uint)fVar43 >> 8);
      uVar53 = (undefined1)((uint)fVar43 >> 0x10);
      uVar54 = (undefined1)((uint)fVar43 >> 0x18);
      fVar43 = fVar106 * fVar47 + (float)((ulong)uVar110 >> 0x20) * fVar48 +
               (float)((ulong)uVar113 >> 0x20) * fVar109 + 0.0;
      uVar55 = SUB41(fVar43,0);
      uVar56 = (undefined1)((uint)fVar43 >> 8);
      uVar57 = (undefined1)((uint)fVar43 >> 0x10);
      uVar58 = (undefined1)((uint)fVar43 >> 0x18);
      fVar43 = fVar112 * fVar47 + (float)uVar111 * fVar48 + (float)uVar32 * fVar109 + 0.0;
      uVar59 = SUB41(fVar43,0);
      uVar60 = (undefined1)((uint)fVar43 >> 8);
      uVar61 = (undefined1)((uint)fVar43 >> 0x10);
      uVar62 = (undefined1)((uint)fVar43 >> 0x18);
      fVar43 = fVar108 * fVar47 + (float)(uVar111 >> 0x20) * fVar48 +
               (float)(uVar32 >> 0x20) * fVar109 + 0.0;
      uVar63 = SUB41(fVar43,0);
      uVar64 = (undefined1)((uint)fVar43 >> 8);
      uVar65 = (undefined1)((uint)fVar43 >> 0x10);
      uVar66 = (undefined1)((uint)fVar43 >> 0x18);
    }
    else {
      puVar38 = (undefined8 *)(*(long *)(lVar31 + 0x1d8) + lVar33 * 0x10);
      uVar49 = (ulong)(uint)fVar43;
      uVar85 = *puVar38;
      uVar51 = (undefined1)uVar85;
      uVar52 = (undefined1)((ulong)uVar85 >> 8);
      uVar53 = (undefined1)((ulong)uVar85 >> 0x10);
      uVar54 = (undefined1)((ulong)uVar85 >> 0x18);
      uVar55 = (undefined1)((ulong)uVar85 >> 0x20);
      uVar56 = (undefined1)((ulong)uVar85 >> 0x28);
      uVar57 = (undefined1)((ulong)uVar85 >> 0x30);
      uVar58 = (undefined1)((ulong)uVar85 >> 0x38);
      uVar84 = *(undefined4 *)(puVar38 + 1);
      uVar59 = (undefined1)uVar84;
      uVar60 = (undefined1)((uint)uVar84 >> 8);
      uVar61 = (undefined1)((uint)uVar84 >> 0x10);
      uVar62 = (undefined1)((uint)uVar84 >> 0x18);
      uVar63 = 0;
      uVar64 = 0;
      uVar65 = 0;
      uVar66 = 0;
    }
    param_3[9] = uVar49;
    param_3[8] = uVar45;
    puVar41[1] = CONCAT44(*(undefined4 *)((long)puVar41 + 0xc),(int)uVar49);
    *puVar41 = uVar45;
    puVar41[1] = CONCAT44(fVar67,(int)uVar49);
    *puVar41 = uVar45;
    puVar41[3] = CONCAT17(uVar66,CONCAT16(uVar65,CONCAT15(uVar64,CONCAT14(uVar63,CONCAT13(uVar62,
                                                  CONCAT12(uVar61,CONCAT11(uVar60,uVar59)))))));
    puVar41[2] = CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar56,CONCAT14(uVar55,CONCAT13(uVar54,
                                                  CONCAT12(uVar53,CONCAT11(uVar52,uVar51)))))));
    if (piVar37[1] == 0) {
      uVar45 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x350);
      uVar32 = *(ulong *)(*(long *)(param_2 + 0x10) + 0x358) & 0xffffffff;
    }
    else {
      uVar45 = _DAT_03cabe60;
      uVar32 = _UNK_03cabe68;
    }
    puVar41[5] = uVar32;
    puVar41[4] = uVar45;
    if ((*piVar37 - 1U < 2) &&
       (lVar31 = *(long *)(param_2 + 0x10), *(char *)(*(long *)(lVar31 + 0xa0) + 0x8b2) != '\0')) {
      if (*(int *)(param_3 + 0xe) < 1) {
        uVar45 = puVar41[2];
        uVar85 = puVar41[3];
      }
      else {
        uVar45 = *(undefined8 *)puVar41[6];
        fVar43 = 1.0 / *(float *)(lVar31 + 0x4c);
        uVar45 = CONCAT44(((float)((ulong)*puVar41 >> 0x20) - (float)((ulong)uVar45 >> 0x20)) *
                          fVar43 + 0.0,((float)*puVar41 - (float)uVar45) * fVar43 + 0.0);
        uVar85 = CONCAT44(fVar43 * 0.0 + 0.0,
                          ((float)puVar41[1] - (float)((undefined8 *)puVar41[6])[1]) * fVar43 + 0.0)
        ;
      }
      fVar43 = (float)uVar45 * (float)uVar45;
      fVar67 = (float)((ulong)uVar45 >> 0x20);
      fVar67 = fVar67 * fVar67;
      uVar51 = (undefined1)((uint)fVar67 >> 8);
      uVar52 = (undefined1)((uint)fVar67 >> 0x10);
      uVar53 = (undefined1)((uint)fVar67 >> 0x18);
      fVar47 = (float)uVar85 * (float)uVar85;
      uVar54 = (undefined1)((uint)fVar47 >> 8);
      uVar55 = (undefined1)((uint)fVar47 >> 0x10);
      uVar56 = (undefined1)((uint)fVar47 >> 0x18);
      fVar48 = (float)((ulong)uVar85 >> 0x20);
      fVar48 = fVar48 * fVar48;
      uVar57 = (undefined1)((uint)fVar48 >> 8);
      uVar58 = (undefined1)((uint)fVar48 >> 0x10);
      uVar59 = (undefined1)((uint)fVar48 >> 0x18);
      auVar95[4] = SUB41(fVar67,0);
      auVar95._0_4_ = fVar43;
      auVar95[5] = uVar51;
      auVar95[6] = uVar52;
      auVar95[7] = uVar53;
      auVar95[8] = SUB41(fVar47,0);
      auVar95[9] = uVar54;
      auVar95[10] = uVar55;
      auVar95[0xb] = uVar56;
      auVar95[0xc] = SUB41(fVar48,0);
      auVar95[0xd] = uVar57;
      auVar95[0xe] = uVar58;
      auVar95[0xf] = uVar59;
      auVar13[4] = SUB41(fVar67,0);
      auVar13._0_4_ = fVar43;
      auVar13[5] = uVar51;
      auVar13[6] = uVar52;
      auVar13[7] = uVar53;
      auVar13[8] = SUB41(fVar47,0);
      auVar13[9] = uVar54;
      auVar13[10] = uVar55;
      auVar13[0xb] = uVar56;
      auVar13[0xc] = SUB41(fVar48,0);
      auVar13[0xd] = uVar57;
      auVar13[0xe] = uVar58;
      auVar13[0xf] = uVar59;
      auVar75 = NEON_ext(auVar95,auVar13,8,1);
      fVar43 = auVar75._0_4_ + fVar43;
      fVar67 = auVar75._4_4_ + fVar67;
      fVar47 = fVar43 + fVar67;
      fVar43 = fVar43 + fVar67;
      uVar51 = SUB41(fVar47,0);
      uVar52 = (undefined1)((uint)fVar47 >> 8);
      uVar53 = (undefined1)((uint)fVar47 >> 0x10);
      uVar54 = (undefined1)((uint)fVar47 >> 0x18);
      uVar55 = SUB41(fVar43,0);
      uVar56 = (undefined1)((uint)fVar43 >> 8);
      uVar57 = (undefined1)((uint)fVar43 >> 0x10);
      uVar58 = (undefined1)((uint)fVar43 >> 0x18);
      if (fVar47 < 1e-05) {
        uVar85 = *(undefined8 *)(lVar31 + 0x368);
        uVar45 = *(undefined8 *)(lVar31 + 0x360);
        fVar43 = (float)uVar45 * (float)uVar45;
        fVar67 = (float)((ulong)uVar45 >> 0x20);
        fVar67 = fVar67 * fVar67;
        uVar51 = (undefined1)((uint)fVar67 >> 8);
        uVar52 = (undefined1)((uint)fVar67 >> 0x10);
        uVar53 = (undefined1)((uint)fVar67 >> 0x18);
        fVar47 = (float)uVar85 * (float)uVar85;
        uVar54 = (undefined1)((uint)fVar47 >> 8);
        uVar55 = (undefined1)((uint)fVar47 >> 0x10);
        uVar56 = (undefined1)((uint)fVar47 >> 0x18);
        fVar48 = (float)((ulong)uVar85 >> 0x20);
        fVar48 = fVar48 * fVar48;
        uVar57 = (undefined1)((uint)fVar48 >> 8);
        uVar58 = (undefined1)((uint)fVar48 >> 0x10);
        uVar59 = (undefined1)((uint)fVar48 >> 0x18);
        auVar14[4] = SUB41(fVar67,0);
        auVar14._0_4_ = fVar43;
        auVar14[5] = uVar51;
        auVar14[6] = uVar52;
        auVar14[7] = uVar53;
        auVar14[8] = SUB41(fVar47,0);
        auVar14[9] = uVar54;
        auVar14[10] = uVar55;
        auVar14[0xb] = uVar56;
        auVar14[0xc] = SUB41(fVar48,0);
        auVar14[0xd] = uVar57;
        auVar14[0xe] = uVar58;
        auVar14[0xf] = uVar59;
        auVar15[4] = SUB41(fVar67,0);
        auVar15._0_4_ = fVar43;
        auVar15[5] = uVar51;
        auVar15[6] = uVar52;
        auVar15[7] = uVar53;
        auVar15[8] = SUB41(fVar47,0);
        auVar15[9] = uVar54;
        auVar15[10] = uVar55;
        auVar15[0xb] = uVar56;
        auVar15[0xc] = SUB41(fVar48,0);
        auVar15[0xd] = uVar57;
        auVar15[0xe] = uVar58;
        auVar15[0xf] = uVar59;
        auVar75 = NEON_ext(auVar14,auVar15,8,1);
        fVar43 = auVar75._0_4_ + fVar43;
        fVar67 = auVar75._4_4_ + fVar67;
        fVar47 = fVar43 + fVar67;
        fVar43 = fVar43 + fVar67;
        uVar51 = SUB41(fVar47,0);
        uVar52 = (undefined1)((uint)fVar47 >> 8);
        uVar53 = (undefined1)((uint)fVar47 >> 0x10);
        uVar54 = (undefined1)((uint)fVar47 >> 0x18);
        uVar55 = SUB41(fVar43,0);
        uVar56 = (undefined1)((uint)fVar43 >> 8);
        uVar57 = (undefined1)((uint)fVar43 >> 0x10);
        uVar58 = (undefined1)((uint)fVar43 >> 0x18);
      }
      uVar7 = CONCAT11(uVar52,uVar51);
      uVar28 = CONCAT11(uVar56,uVar55);
      auVar16[1] = uVar52;
      auVar16[0] = uVar51;
      auVar16[2] = uVar53;
      auVar16[3] = uVar54;
      auVar16[4] = uVar55;
      auVar16[5] = uVar56;
      auVar16[6] = uVar57;
      auVar16[7] = uVar58;
      auVar16[8] = uVar51;
      auVar16[9] = uVar52;
      auVar16[10] = uVar53;
      auVar16[0xb] = uVar54;
      auVar16[0xc] = uVar55;
      auVar16[0xd] = uVar56;
      auVar16[0xe] = uVar57;
      auVar16[0xf] = uVar58;
      auVar75 = NEON_frsqrte(auVar16,4);
      auVar89._0_4_ =
           auVar75._0_4_ * (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)));
      auVar89._4_4_ =
           auVar75._4_4_ * (float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55)));
      auVar89._8_4_ = auVar75._8_4_ * (float)CONCAT13(uVar54,CONCAT12(uVar53,uVar7));
      auVar89._12_4_ = auVar75._12_4_ * (float)CONCAT13(uVar58,CONCAT12(uVar57,uVar28));
      auVar95 = NEON_frsqrts(auVar75,auVar89,4);
      auVar73._0_4_ = auVar75._0_4_ * auVar95._0_4_;
      auVar73._4_4_ = auVar75._4_4_ * auVar95._4_4_;
      auVar73._8_4_ = auVar75._8_4_ * auVar95._8_4_;
      auVar73._12_4_ = auVar75._12_4_ * auVar95._12_4_;
      auVar90._0_4_ =
           (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) * auVar73._0_4_;
      auVar90._4_4_ =
           (float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) * auVar73._4_4_;
      auVar90._8_4_ = (float)CONCAT13(uVar54,CONCAT12(uVar53,uVar7)) * auVar73._8_4_;
      auVar90._12_4_ = (float)CONCAT13(uVar58,CONCAT12(uVar57,uVar28)) * auVar73._12_4_;
      iVar69 = -(uint)((float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) == 0.0);
      iVar80 = -(uint)((float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) == 0.0);
      iVar81 = -(uint)((float)CONCAT13(uVar54,CONCAT12(uVar53,uVar7)) == 0.0);
      iVar83 = -(uint)((float)CONCAT13(uVar58,CONCAT12(uVar57,uVar28)) == 0.0);
      auVar75 = NEON_frsqrts(auVar73,auVar90,4);
      fVar43 = (float)uVar45 * auVar73._0_4_ * auVar75._0_4_;
      fVar67 = (float)((ulong)uVar45 >> 0x20) * auVar73._4_4_ * auVar75._4_4_;
      fVar47 = (float)uVar85 * auVar73._8_4_ * auVar75._8_4_;
      fVar48 = (float)((ulong)uVar85 >> 0x20) * auVar73._12_4_ * auVar75._12_4_;
      local_90 = CONCAT17((byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18),
                          CONCAT16((byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10),
                                   CONCAT15((byte)((uint)fVar67 >> 8) & ~(byte)((uint)iVar80 >> 8),
                                            CONCAT14(SUB41(fVar67,0) & ~(byte)iVar80,
                                                     CONCAT13((byte)((uint)fVar43 >> 0x18) &
                                                              ~(byte)((uint)iVar69 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar43 >> 0x10)
                                                                       & ~(byte)((uint)iVar69 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar43
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar69
                                                                                       >> 8),
                                                                                SUB41(fVar43,0) &
                                                                                ~(byte)iVar69)))))))
      ;
      uStack_88 = CONCAT17((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18),
                           CONCAT16((byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10),
                                    CONCAT15((byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar83 >> 8),
                                             CONCAT14(SUB41(fVar48,0) & ~(byte)iVar83,
                                                      CONCAT13((byte)((uint)fVar47 >> 0x18) &
                                                               ~(byte)((uint)iVar81 >> 0x18),
                                                               CONCAT12((byte)((uint)fVar47 >> 0x10)
                                                                        & ~(byte)((uint)iVar81 >>
                                                                                 0x10),
                                                                        CONCAT11((byte)((uint)fVar47
                                                                                       >> 8) &
                                                                                 ~(byte)((uint)
                                                  iVar81 >> 8),SUB41(fVar47,0) & ~(byte)iVar81))))))
                          );
      lVar33 = (long)*(int *)(param_2 + 0x20) * 0x10;
      puVar38 = (undefined8 *)(*(long *)(lVar31 + 0x1f8) + lVar33);
      uStack_58 = puVar38[1];
      local_60 = *puVar38;
      puVar38 = (undefined8 *)(*(long *)(lVar31 + 0x1f0) + lVar33);
      uStack_68 = puVar38[1];
      local_70 = *puVar38;
      FUN_008d7aa0(*(undefined4 *)(param_2 + 0x18),*(undefined8 *)(lVar31 + 0x98),auStack_a0,
                   *(undefined8 *)(lVar31 + 0x238),&local_60,&local_70);
      puVar38 = puVar41 + 4;
      uVar30 = FUN_008d4790(local_98,puVar38,puVar38,&local_90);
      fVar42 = (float)puVar41[4];
      fVar43 = fVar42 * fVar42;
      fVar68 = (float)((ulong)puVar41[4] >> 0x20);
      fVar67 = fVar68 * fVar68;
      uVar51 = (undefined1)((uint)fVar67 >> 8);
      uVar52 = (undefined1)((uint)fVar67 >> 0x10);
      uVar53 = (undefined1)((uint)fVar67 >> 0x18);
      fVar79 = (float)puVar41[5];
      fVar47 = fVar79 * fVar79;
      uVar54 = (undefined1)((uint)fVar47 >> 8);
      uVar55 = (undefined1)((uint)fVar47 >> 0x10);
      uVar56 = (undefined1)((uint)fVar47 >> 0x18);
      fVar50 = (float)((ulong)puVar41[5] >> 0x20);
      fVar48 = fVar50 * fVar50;
      uVar57 = (undefined1)((uint)fVar48 >> 8);
      uVar58 = (undefined1)((uint)fVar48 >> 0x10);
      uVar59 = (undefined1)((uint)fVar48 >> 0x18);
      auVar17[4] = SUB41(fVar67,0);
      auVar17._0_4_ = fVar43;
      auVar17[5] = uVar51;
      auVar17[6] = uVar52;
      auVar17[7] = uVar53;
      auVar17[8] = SUB41(fVar47,0);
      auVar17[9] = uVar54;
      auVar17[10] = uVar55;
      auVar17[0xb] = uVar56;
      auVar17[0xc] = SUB41(fVar48,0);
      auVar17[0xd] = uVar57;
      auVar17[0xe] = uVar58;
      auVar17[0xf] = uVar59;
      auVar18[4] = SUB41(fVar67,0);
      auVar18._0_4_ = fVar43;
      auVar18[5] = uVar51;
      auVar18[6] = uVar52;
      auVar18[7] = uVar53;
      auVar18[8] = SUB41(fVar47,0);
      auVar18[9] = uVar54;
      auVar18[10] = uVar55;
      auVar18[0xb] = uVar56;
      auVar18[0xc] = SUB41(fVar48,0);
      auVar18[0xd] = uVar57;
      auVar18[0xe] = uVar58;
      auVar18[0xf] = uVar59;
      auVar75 = NEON_ext(auVar17,auVar18,8,1);
      fVar43 = auVar75._0_4_ + fVar43;
      fVar67 = auVar75._4_4_ + fVar67;
      fVar47 = fVar43 + fVar67;
      fVar43 = fVar43 + fVar67;
      uVar51 = SUB41(fVar43,0);
      uVar52 = (undefined1)((uint)fVar43 >> 8);
      uVar53 = (undefined1)((uint)fVar43 >> 0x10);
      uVar54 = (undefined1)((uint)fVar43 >> 0x18);
      auVar19[4] = uVar51;
      auVar19._0_4_ = fVar47;
      auVar19[5] = uVar52;
      auVar19[6] = uVar53;
      auVar19[7] = uVar54;
      auVar19[8] = SUB41(fVar47,0);
      auVar19[9] = (char)((uint)fVar47 >> 8);
      auVar19[10] = (char)((uint)fVar47 >> 0x10);
      auVar19[0xb] = (char)((uint)fVar47 >> 0x18);
      auVar19[0xc] = uVar51;
      auVar19[0xd] = uVar52;
      auVar19[0xe] = uVar53;
      auVar19[0xf] = uVar54;
      auVar75 = NEON_frsqrte(auVar19,4);
      auVar91._0_4_ = auVar75._0_4_ * fVar47;
      auVar91._4_4_ = auVar75._4_4_ * fVar43;
      auVar91._8_4_ = auVar75._8_4_ * fVar47;
      uVar7 = (undefined2)(CONCAT15(uVar52,CONCAT14(uVar51,fVar47)) >> 0x20);
      auVar91._12_4_ = auVar75._12_4_ * (float)CONCAT13(uVar54,CONCAT12(uVar53,uVar7));
      auVar95 = NEON_frsqrts(auVar75,auVar91,4);
      auVar74._0_4_ = auVar75._0_4_ * auVar95._0_4_;
      auVar74._4_4_ = auVar75._4_4_ * auVar95._4_4_;
      auVar74._8_4_ = auVar75._8_4_ * auVar95._8_4_;
      auVar74._12_4_ = auVar75._12_4_ * auVar95._12_4_;
      auVar92._0_4_ = fVar47 * auVar74._0_4_;
      auVar92._4_4_ = fVar43 * auVar74._4_4_;
      auVar92._8_4_ = fVar47 * auVar74._8_4_;
      auVar92._12_4_ = (float)CONCAT13(uVar54,CONCAT12(uVar53,uVar7)) * auVar74._12_4_;
      iVar69 = -(uint)(fVar47 == 0.0);
      iVar80 = -(uint)(fVar43 == 0.0);
      iVar81 = -(uint)(fVar47 == 0.0);
      iVar83 = -(uint)((float)CONCAT13(uVar54,CONCAT12(uVar53,uVar7)) == 0.0);
      auVar75 = NEON_frsqrts(auVar74,auVar92,4);
      fVar42 = fVar42 * auVar74._0_4_ * auVar75._0_4_;
      fVar68 = fVar68 * auVar74._4_4_ * auVar75._4_4_;
      fVar79 = fVar79 * auVar74._8_4_ * auVar75._8_4_;
      fVar50 = fVar50 * auVar74._12_4_ * auVar75._12_4_;
      puVar41[5] = CONCAT17((byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18),
                            CONCAT16((byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10),
                                     CONCAT15((byte)((uint)fVar50 >> 8) & ~(byte)((uint)iVar83 >> 8)
                                              ,CONCAT14(SUB41(fVar50,0) & ~(byte)iVar83,
                                                        CONCAT13((byte)((uint)fVar79 >> 0x18) &
                                                                 ~(byte)((uint)iVar81 >> 0x18),
                                                                 CONCAT12((byte)((uint)fVar79 >>
                                                                                0x10) &
                                                                          ~(byte)((uint)iVar81 >>
                                                                                 0x10),
                                                                          CONCAT11((byte)((uint)
                                                  fVar79 >> 8) & ~(byte)((uint)iVar81 >> 8),
                                                  SUB41(fVar79,0) & ~(byte)iVar81)))))));
      puVar41[4] = CONCAT17((byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18),
                            CONCAT16((byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10),
                                     CONCAT15((byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar80 >> 8)
                                              ,CONCAT14(SUB41(fVar68,0) & ~(byte)iVar80,
                                                        CONCAT13((byte)((uint)fVar42 >> 0x18) &
                                                                 ~(byte)((uint)iVar69 >> 0x18),
                                                                 CONCAT12((byte)((uint)fVar42 >>
                                                                                0x10) &
                                                                          ~(byte)((uint)iVar69 >>
                                                                                 0x10),
                                                                          CONCAT11((byte)((uint)
                                                  fVar42 >> 8) & ~(byte)((uint)iVar69 >> 8),
                                                  SUB41(fVar42,0) & ~(byte)iVar69)))))));
      if (*(int *)(param_3 + 0xe) == 1) {
        lVar31 = puVar41[6];
        *(undefined8 *)(lVar31 + 0x28) = puVar41[5];
        *(undefined8 *)(lVar31 + 0x20) = *puVar38;
      }
    }
    iVar69 = *(int *)(param_3 + 0xe);
    if ((float)iVar69 < (float)piVar37[5]) {
      iVar69 = iVar69 + 1;
      *(int *)(param_3 + 0xe) = iVar69;
    }
  }
  else {
    lVar31 = *(long *)(param_2 + 0x10);
    lVar33 = (long)*(int *)(param_2 + 0x20) * 0x10;
    puVar38 = (undefined8 *)(*(long *)(lVar31 + 0x1f0) + lVar33);
    uStack_58 = puVar38[1];
    local_60 = *puVar38;
    puVar38 = (undefined8 *)puVar41[6];
    puVar41 = (undefined8 *)(*(long *)(lVar31 + 0x1e8) + lVar33);
    uStack_68 = puVar41[1];
    local_70 = *puVar41;
    uVar30 = FUN_008d65b4(*(undefined4 *)(param_2 + 0x1c),(char)*(undefined4 *)(param_2 + 0x18),
                          *(undefined8 *)(lVar31 + 0x98),&local_80,*(undefined8 *)(lVar31 + 0x238),
                          &local_70,&local_60);
    lVar31 = *(long *)(param_2 + 0x10);
    uVar85 = *(undefined8 *)(*(long *)(lVar31 + 0x78) + 0x148);
    uVar45 = *(undefined8 *)(*(long *)(lVar31 + 0x78) + 0x140);
    fVar43 = (float)local_80 * (float)uVar45;
    local_80 = CONCAT44((float)((ulong)local_80 >> 0x20) * (float)((ulong)uVar45 >> 0x20),fVar43);
    uStack_78 = CONCAT44((float)((ulong)uStack_78 >> 0x20) * (float)((ulong)uVar85 >> 0x20),
                         (float)uStack_78 * (float)uVar85);
    puVar41 = (undefined8 *)(*(long *)(lVar31 + 0x1d0) + (long)*(int *)(param_2 + 0x20) * 0x10);
    uVar85 = puVar41[1];
    uVar45 = *puVar41;
    if (piVar37[1] == 0) {
      lVar33 = (long)*(int *)(param_2 + 0x20) * 0x10;
      puVar35 = (undefined4 *)(*(long *)(lVar31 + 0x210) + lVar33);
      puVar34 = (undefined4 *)(*(long *)(lVar31 + 0x218) + lVar33);
      puVar1 = (undefined4 *)(*(long *)(lVar31 + 0x220) + lVar33);
      cVar6 = *(char *)(*(long *)(lVar31 + 0xa0) + 0x753);
      if (cVar6 == '\x02') {
        uVar84 = *puVar35;
        uVar51 = (undefined1)uVar84;
        uVar52 = (undefined1)((uint)uVar84 >> 8);
        uVar53 = (undefined1)((uint)uVar84 >> 0x10);
        uVar54 = (undefined1)((uint)uVar84 >> 0x18);
        auVar71._0_4_ = puVar35[1];
        uVar84 = *puVar34;
        uVar55 = (undefined1)uVar84;
        uVar56 = (undefined1)((uint)uVar84 >> 8);
        uVar57 = (undefined1)((uint)uVar84 >> 0x10);
        uVar58 = (undefined1)((uint)uVar84 >> 0x18);
        uVar84 = *puVar1;
        auVar71._4_4_ = puVar34[1];
        auVar101._4_12_ = SUB1612(ZEXT816(0),4);
        auVar101._0_4_ = puVar1[1];
        uVar59 = (undefined1)uVar84;
        uVar60 = (undefined1)((uint)uVar84 >> 8);
        uVar61 = (undefined1)((uint)uVar84 >> 0x10);
        uVar62 = (undefined1)((uint)uVar84 >> 0x18);
        auVar87._0_4_ = puVar35[2];
        auVar71._8_8_ = auVar101._0_8_;
        auVar70 = auVar71._0_12_;
        auVar102._4_12_ = SUB1612(ZEXT816(0),4);
        auVar102._0_4_ = puVar1[2];
        auVar87._4_4_ = puVar34[2];
        auVar87._8_8_ = auVar102._0_8_;
        auVar86 = auVar87._0_12_;
        fVar47 = *(float *)(lVar31 + 0x370);
        fVar48 = *(float *)(lVar31 + 0x374);
        fVar67 = *(float *)(lVar31 + 0x378);
      }
      else if (cVar6 == '\0') {
        uVar110 = *(undefined8 *)(lVar31 + 0x348);
        uVar59 = (undefined1)uVar110;
        uVar60 = (undefined1)((ulong)uVar110 >> 8);
        uVar61 = (undefined1)((ulong)uVar110 >> 0x10);
        uVar62 = (undefined1)((ulong)uVar110 >> 0x18);
        uVar110 = *(undefined8 *)(lVar31 + 0x340);
        uVar51 = (undefined1)uVar110;
        uVar52 = (undefined1)((ulong)uVar110 >> 8);
        uVar53 = (undefined1)((ulong)uVar110 >> 0x10);
        uVar54 = (undefined1)((ulong)uVar110 >> 0x18);
        uVar55 = (undefined1)((ulong)uVar110 >> 0x20);
        uVar56 = (undefined1)((ulong)uVar110 >> 0x28);
        uVar57 = (undefined1)((ulong)uVar110 >> 0x30);
        uVar58 = (undefined1)((ulong)uVar110 >> 0x38);
        auVar70 = SUB1612(*(undefined1 (*) [16])(lVar31 + 0x350),0);
        auVar86 = SUB1612(*(undefined1 (*) [16])(lVar31 + 0x360),0);
        fVar47 = *(float *)(lVar31 + 0x370);
        fVar48 = *(float *)(lVar31 + 0x374);
        fVar67 = *(float *)(lVar31 + 0x378);
      }
      else {
        uVar84 = *puVar35;
        uVar51 = (undefined1)uVar84;
        uVar52 = (undefined1)((uint)uVar84 >> 8);
        uVar53 = (undefined1)((uint)uVar84 >> 0x10);
        uVar54 = (undefined1)((uint)uVar84 >> 0x18);
        auVar72._0_4_ = puVar35[1];
        uVar84 = *puVar34;
        uVar55 = (undefined1)uVar84;
        uVar56 = (undefined1)((uint)uVar84 >> 8);
        uVar57 = (undefined1)((uint)uVar84 >> 0x10);
        uVar58 = (undefined1)((uint)uVar84 >> 0x18);
        uVar84 = *puVar1;
        uVar59 = (undefined1)uVar84;
        uVar60 = (undefined1)((uint)uVar84 >> 8);
        uVar61 = (undefined1)((uint)uVar84 >> 0x10);
        uVar62 = (undefined1)((uint)uVar84 >> 0x18);
        auVar72._4_4_ = puVar34[1];
        auVar88._4_12_ = SUB1612(ZEXT816(0),4);
        auVar88._0_4_ = puVar1[1];
        auVar72._8_8_ = auVar88._0_8_;
        auVar70 = auVar72._0_12_;
        fVar47 = (float)puVar35[3];
        fVar48 = (float)puVar34[3];
        fVar67 = (float)puVar1[3];
        auVar86._4_4_ = puVar34[2];
        auVar86._0_4_ = puVar35[2];
        auVar86._8_4_ = puVar1[2];
      }
      fVar42 = (float)uVar45;
      fVar68 = (float)((ulong)uVar45 >> 0x20);
      fVar79 = (float)uVar85;
      uVar45 = CONCAT44(fVar48 + (float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) *
                                 fVar42 + auVar70._4_4_ * fVar68 + auVar86._4_4_ * fVar79,
                        fVar47 + (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) *
                                 fVar42 + auVar70._0_4_ * fVar68 + auVar86._0_4_ * fVar79);
      uVar85 = CONCAT44(*(undefined4 *)((long)puVar38 + 0xc),
                        fVar67 + (float)CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59))) *
                                 fVar42 + auVar70._8_4_ * fVar68 + auVar86._8_4_ * fVar79);
    }
    puVar38[1] = uVar85;
    *puVar38 = uVar45;
    puVar38[1] = CONCAT44(fVar43,(int)uVar85);
    *puVar38 = uVar45;
    uVar45 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x350);
    puVar38[5] = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x358);
    puVar38[4] = uVar45;
    iVar69 = *(int *)(param_3 + 0xe);
  }
  if (iVar69 < 2) goto LAB_008df604;
  puVar41 = *(undefined8 **)(param_3[0xb] + 0x30);
  puVar38 = (undefined8 *)puVar41[6];
  fVar67 = (float)*puVar41 - (float)*puVar38;
  fVar47 = (float)((ulong)*puVar41 >> 0x20) - (float)((ulong)*puVar38 >> 0x20);
  uVar45 = CONCAT44(fVar47,fVar67);
  fVar48 = (float)puVar41[1] - (float)puVar38[1];
  uVar32 = (ulong)(uint)fVar48;
  fVar43 = (float)piVar37[10];
  if (fVar43 <= 0.0) {
    puVar41[3] = uVar32;
    puVar41[2] = uVar45;
    iVar69 = *(int *)(param_3 + 0xe);
  }
  else {
    if (2.0 <= *(float *)((long)param_3 + 0x7c)) {
      auVar76._0_4_ = fVar67 * fVar67;
      auVar76._4_4_ = fVar47 * fVar47;
      auVar76._8_4_ = fVar48 * fVar48;
      auVar76._12_4_ = 0;
      auVar75 = NEON_ext(auVar76,auVar76,8,1);
      fVar68 = auVar75._0_4_ + auVar76._0_4_;
      fVar79 = auVar75._4_4_ + auVar76._4_4_;
      fVar42 = fVar68 + fVar79;
      fVar68 = fVar68 + fVar79;
      if (0.0 < fVar42) {
        auVar77._8_8_ = CONCAT44(fVar68,fVar42);
        auVar77._0_8_ = CONCAT44(fVar68,fVar42);
        auVar75 = NEON_frsqrte(auVar77,4);
        auVar103._0_4_ = fVar42 * auVar75._0_4_;
        auVar103._4_4_ = fVar68 * auVar75._4_4_;
        auVar103._8_4_ = fVar42 * auVar75._8_4_;
        auVar103._12_4_ = fVar68 * auVar75._12_4_;
        auVar95 = NEON_frsqrts(auVar75,auVar103,4);
        auVar93._0_4_ = auVar75._0_4_ * auVar95._0_4_;
        auVar93._4_4_ = auVar75._4_4_ * auVar95._4_4_;
        auVar93._8_4_ = auVar75._8_4_ * auVar95._8_4_;
        auVar93._12_4_ = auVar75._12_4_ * auVar95._12_4_;
        auVar104._0_4_ = fVar42 * auVar93._0_4_;
        auVar104._4_4_ = fVar68 * auVar93._4_4_;
        auVar104._8_4_ = fVar42 * auVar93._8_4_;
        auVar104._12_4_ = fVar68 * auVar93._12_4_;
        iVar69 = -(uint)(fVar42 == 0.0);
        iVar80 = -(uint)(fVar68 == 0.0);
        iVar81 = -(uint)(fVar42 == 0.0);
        iVar83 = -(uint)(fVar68 == 0.0);
        auVar75 = NEON_frsqrts(auVar93,auVar104,4);
        fVar67 = fVar67 * auVar93._0_4_ * auVar75._0_4_;
        fVar47 = fVar47 * auVar93._4_4_ * auVar75._4_4_;
        fVar48 = fVar48 * auVar93._8_4_ * auVar75._8_4_;
        fVar42 = auVar93._12_4_ * auVar75._12_4_ * 0.0;
        uVar45 = CONCAT17((byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18),
                          CONCAT16((byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10),
                                   CONCAT15((byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar80 >> 8),
                                            CONCAT14(SUB41(fVar47,0) & ~(byte)iVar80,
                                                     CONCAT13((byte)((uint)fVar67 >> 0x18) &
                                                              ~(byte)((uint)iVar69 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar67 >> 0x10)
                                                                       & ~(byte)((uint)iVar69 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar67
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar69
                                                                                       >> 8),
                                                                                SUB41(fVar67,0) &
                                                                                ~(byte)iVar69)))))))
        ;
        uVar32 = CONCAT17((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18),
                          CONCAT16((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10),
                                   CONCAT15((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar83 >> 8),
                                            CONCAT14(SUB41(fVar42,0) & ~(byte)iVar83,
                                                     CONCAT13((byte)((uint)fVar48 >> 0x18) &
                                                              ~(byte)((uint)iVar81 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar48 >> 0x10)
                                                                       & ~(byte)((uint)iVar81 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar48
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar81
                                                                                       >> 8),
                                                                                SUB41(fVar48,0) &
                                                                                ~(byte)iVar81)))))))
        ;
      }
      fVar67 = *(float *)(param_3 + 6) + ((float)uVar45 - *(float *)(param_3 + 6)) * fVar43;
      fVar47 = *(float *)((long)param_3 + 0x34) +
               ((float)((ulong)uVar45 >> 0x20) - *(float *)((long)param_3 + 0x34)) * fVar43;
      uVar45 = CONCAT44(fVar47,fVar67);
      fVar48 = *(float *)(param_3 + 7) + ((float)uVar32 - *(float *)(param_3 + 7)) * fVar43;
      fVar43 = *(float *)((long)param_3 + 0x3c) +
               ((float)(uVar32 >> 0x20) - *(float *)((long)param_3 + 0x3c)) * fVar43;
      uVar32 = CONCAT44(fVar43,fVar48);
      fVar67 = fVar67 * fVar67;
      fVar47 = fVar47 * fVar47;
      uVar51 = (undefined1)((uint)fVar47 >> 8);
      uVar52 = (undefined1)((uint)fVar47 >> 0x10);
      uVar53 = (undefined1)((uint)fVar47 >> 0x18);
      fVar48 = fVar48 * fVar48;
      uVar54 = (undefined1)((uint)fVar48 >> 8);
      uVar55 = (undefined1)((uint)fVar48 >> 0x10);
      uVar56 = (undefined1)((uint)fVar48 >> 0x18);
      fVar43 = fVar43 * fVar43;
      uVar57 = (undefined1)((uint)fVar43 >> 8);
      uVar58 = (undefined1)((uint)fVar43 >> 0x10);
      uVar59 = (undefined1)((uint)fVar43 >> 0x18);
      auVar11[4] = SUB41(fVar47,0);
      auVar11._0_4_ = fVar67;
      auVar11[5] = uVar51;
      auVar11[6] = uVar52;
      auVar11[7] = uVar53;
      auVar11[8] = SUB41(fVar48,0);
      auVar11[9] = uVar54;
      auVar11[10] = uVar55;
      auVar11[0xb] = uVar56;
      auVar11[0xc] = SUB41(fVar43,0);
      auVar11[0xd] = uVar57;
      auVar11[0xe] = uVar58;
      auVar11[0xf] = uVar59;
      auVar12[4] = SUB41(fVar47,0);
      auVar12._0_4_ = fVar67;
      auVar12[5] = uVar51;
      auVar12[6] = uVar52;
      auVar12[7] = uVar53;
      auVar12[8] = SUB41(fVar48,0);
      auVar12[9] = uVar54;
      auVar12[10] = uVar55;
      auVar12[0xb] = uVar56;
      auVar12[0xc] = SUB41(fVar43,0);
      auVar12[0xd] = uVar57;
      auVar12[0xe] = uVar58;
      auVar12[0xf] = uVar59;
      auVar75 = NEON_ext(auVar11,auVar12,8,1);
      fVar67 = auVar75._0_4_ + fVar67;
      fVar47 = auVar75._4_4_ + fVar47;
      fVar43 = fVar67 + fVar47;
      fVar67 = fVar67 + fVar47;
      uVar51 = SUB41(fVar43,0);
      uVar52 = (undefined1)((uint)fVar43 >> 8);
      uVar53 = (undefined1)((uint)fVar43 >> 0x10);
      uVar54 = (undefined1)((uint)fVar43 >> 0x18);
      uVar55 = SUB41(fVar67,0);
      uVar56 = (undefined1)((uint)fVar67 >> 8);
      uVar57 = (undefined1)((uint)fVar67 >> 0x10);
      uVar58 = (undefined1)((uint)fVar67 >> 0x18);
      if (0.0 < fVar43) goto LAB_008df434;
LAB_008df464:
      param_3[7] = uVar32;
      param_3[6] = uVar45;
    }
    else {
      fVar67 = fVar67 * fVar67;
      fVar47 = fVar47 * fVar47;
      uVar51 = (undefined1)((uint)fVar47 >> 8);
      uVar52 = (undefined1)((uint)fVar47 >> 0x10);
      uVar53 = (undefined1)((uint)fVar47 >> 0x18);
      fVar48 = fVar48 * fVar48;
      uVar54 = (undefined1)((uint)fVar48 >> 8);
      uVar55 = (undefined1)((uint)fVar48 >> 0x10);
      uVar56 = (undefined1)((uint)fVar48 >> 0x18);
      param_3[7] = uVar32;
      param_3[6] = uVar45;
      auVar8[4] = SUB41(fVar47,0);
      auVar8._0_4_ = fVar67;
      auVar8[5] = uVar51;
      auVar8[6] = uVar52;
      auVar8[7] = uVar53;
      auVar8[8] = SUB41(fVar48,0);
      auVar8[9] = uVar54;
      auVar8[10] = uVar55;
      auVar8[0xb] = uVar56;
      auVar8._12_4_ = 0;
      auVar9[4] = SUB41(fVar47,0);
      auVar9._0_4_ = fVar67;
      auVar9[5] = uVar51;
      auVar9[6] = uVar52;
      auVar9[7] = uVar53;
      auVar9[8] = SUB41(fVar48,0);
      auVar9[9] = uVar54;
      auVar9[10] = uVar55;
      auVar9[0xb] = uVar56;
      auVar9._12_4_ = 0;
      auVar75 = NEON_ext(auVar8,auVar9,8,1);
      fVar67 = auVar75._0_4_ + fVar67;
      fVar47 = auVar75._4_4_ + fVar47;
      fVar43 = fVar67 + fVar47;
      fVar67 = fVar67 + fVar47;
      uVar51 = SUB41(fVar43,0);
      uVar52 = (undefined1)((uint)fVar43 >> 8);
      uVar53 = (undefined1)((uint)fVar43 >> 0x10);
      uVar54 = (undefined1)((uint)fVar43 >> 0x18);
      uVar55 = SUB41(fVar67,0);
      uVar56 = (undefined1)((uint)fVar67 >> 8);
      uVar57 = (undefined1)((uint)fVar67 >> 0x10);
      uVar58 = (undefined1)((uint)fVar67 >> 0x18);
      if (0.0 < fVar43) {
LAB_008df434:
        uVar7 = CONCAT11(uVar52,uVar51);
        uVar28 = CONCAT11(uVar56,uVar55);
        auVar10[1] = uVar52;
        auVar10[0] = uVar51;
        auVar10[2] = uVar53;
        auVar10[3] = uVar54;
        auVar10[4] = uVar55;
        auVar10[5] = uVar56;
        auVar10[6] = uVar57;
        auVar10[7] = uVar58;
        auVar10[8] = uVar51;
        auVar10[9] = uVar52;
        auVar10[10] = uVar53;
        auVar10[0xb] = uVar54;
        auVar10[0xc] = uVar55;
        auVar10[0xd] = uVar56;
        auVar10[0xe] = uVar57;
        auVar10[0xf] = uVar58;
        auVar75 = NEON_frsqrte(auVar10,4);
        auVar94._0_4_ =
             (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) * auVar75._0_4_;
        auVar94._4_4_ =
             (float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) * auVar75._4_4_;
        auVar94._8_4_ = (float)CONCAT13(uVar54,CONCAT12(uVar53,uVar7)) * auVar75._8_4_;
        auVar94._12_4_ = (float)CONCAT13(uVar58,CONCAT12(uVar57,uVar28)) * auVar75._12_4_;
        auVar95 = NEON_frsqrts(auVar75,auVar94,4);
        auVar78._0_4_ = auVar75._0_4_ * auVar95._0_4_;
        auVar78._4_4_ = auVar75._4_4_ * auVar95._4_4_;
        auVar78._8_4_ = auVar75._8_4_ * auVar95._8_4_;
        auVar78._12_4_ = auVar75._12_4_ * auVar95._12_4_;
        auVar96._0_4_ =
             (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) * auVar78._0_4_;
        auVar96._4_4_ =
             (float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) * auVar78._4_4_;
        auVar96._8_4_ = (float)CONCAT13(uVar54,CONCAT12(uVar53,uVar7)) * auVar78._8_4_;
        auVar96._12_4_ = (float)CONCAT13(uVar58,CONCAT12(uVar57,uVar28)) * auVar78._12_4_;
        iVar69 = -(uint)((float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) == 0.0);
        iVar80 = -(uint)((float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) == 0.0);
        iVar81 = -(uint)((float)CONCAT13(uVar54,CONCAT12(uVar53,uVar7)) == 0.0);
        iVar83 = -(uint)((float)CONCAT13(uVar58,CONCAT12(uVar57,uVar28)) == 0.0);
        auVar75 = NEON_frsqrts(auVar78,auVar96,4);
        fVar43 = (float)uVar45 * auVar78._0_4_ * auVar75._0_4_;
        fVar67 = (float)((ulong)uVar45 >> 0x20) * auVar78._4_4_ * auVar75._4_4_;
        fVar47 = (float)uVar32 * auVar78._8_4_ * auVar75._8_4_;
        fVar48 = (float)(uVar32 >> 0x20) * auVar78._12_4_ * auVar75._12_4_;
        uVar45 = CONCAT17((byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18),
                          CONCAT16((byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10),
                                   CONCAT15((byte)((uint)fVar67 >> 8) & ~(byte)((uint)iVar80 >> 8),
                                            CONCAT14(SUB41(fVar67,0) & ~(byte)iVar80,
                                                     CONCAT13((byte)((uint)fVar43 >> 0x18) &
                                                              ~(byte)((uint)iVar69 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar43 >> 0x10)
                                                                       & ~(byte)((uint)iVar69 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar43
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar69
                                                                                       >> 8),
                                                                                SUB41(fVar43,0) &
                                                                                ~(byte)iVar69)))))))
        ;
        uVar32 = CONCAT17((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18),
                          CONCAT16((byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10),
                                   CONCAT15((byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar83 >> 8),
                                            CONCAT14(SUB41(fVar48,0) & ~(byte)iVar83,
                                                     CONCAT13((byte)((uint)fVar47 >> 0x18) &
                                                              ~(byte)((uint)iVar81 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar47 >> 0x10)
                                                                       & ~(byte)((uint)iVar81 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar47
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar81
                                                                                       >> 8),
                                                                                SUB41(fVar47,0) &
                                                                                ~(byte)iVar81)))))))
        ;
        goto LAB_008df464;
      }
    }
    puVar41[3] = param_3[7];
    puVar41[2] = param_3[6];
    iVar69 = *(int *)(param_3 + 0xe);
  }
  if (iVar69 == 2) {
    puVar38[3] = puVar41[3];
    puVar38[2] = puVar41[2];
  }
  uVar51 = 0;
  uVar52 = 0;
  uVar53 = 0x80;
  uVar54 = 0x3f;
  if (piVar37[3] == 1) {
    fVar43 = (float)piVar37[5];
    lVar31 = *(long *)(*(long *)(lVar39 + 0x238) + 0x10);
    cVar6 = *(char *)(lVar31 + 0x75c);
  }
  else {
    fVar43 = 1.0;
    if (piVar37[3] == 0) {
      fVar43 = (float)*(int *)(param_3 + 0xe);
    }
    lVar31 = *(long *)(*(long *)(lVar39 + 0x238) + 0x10);
    cVar6 = *(char *)(lVar31 + 0x75c);
  }
  if (cVar6 != '\0') {
    uVar84 = *(undefined4 *)(lVar39 + 0x74);
    uVar51 = (undefined1)uVar84;
    uVar52 = (undefined1)((uint)uVar84 >> 8);
    uVar53 = (undefined1)((uint)uVar84 >> 0x10);
    uVar54 = (undefined1)((uint)uVar84 >> 0x18);
  }
  if (*(char *)(lVar31 + 0x756) != '\0') {
    fVar67 = (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) *
             *(float *)(lVar39 + 0x70);
    uVar51 = SUB41(fVar67,0);
    uVar52 = (undefined1)((uint)fVar67 >> 8);
    uVar53 = (undefined1)((uint)fVar67 >> 0x10);
    uVar54 = (undefined1)((uint)fVar67 >> 0x18);
  }
  lVar31 = (long)*(int *)(lVar40 + 0x20) * (long)*(int *)((long)param_3 + 0x74);
  if ((float)piVar37[4] == 0.0) {
    uVar5 = *(uint *)(param_3 + 0xe);
    if ((int)uVar5 < 3) {
      *(undefined4 *)(param_3 + 0xf) = 0;
    }
    else {
      puVar34 = (undefined4 *)param_3[0xb];
      uVar32 = 0;
      puVar35 = (undefined4 *)(lVar29 + lVar31 * 0x50 + 0x50);
      do {
        puVar34 = *(undefined4 **)(puVar34 + 0xc);
        uVar84 = puVar34[8];
        uVar20 = puVar34[9];
        uVar21 = puVar34[10];
        uVar22 = *puVar34;
        uVar23 = puVar34[1];
        uVar24 = puVar34[2];
        fVar67 = (float)puVar34[3];
        uVar25 = puVar34[4];
        uVar26 = puVar34[5];
        uVar27 = puVar34[6];
        fVar47 = (float)(int)uVar32;
        uVar32 = uVar32 + 1;
        puVar35[-0x14] = uVar22;
        puVar35[-0x13] = uVar23;
        puVar35[-0x12] = uVar24;
        puVar35[-0x10] = uVar25;
        puVar35[-0xf] = uVar26;
        puVar35[-0x11] = (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) * fVar67;
        fVar48 = (1.0 / (fVar43 + -1.0)) * fVar47;
        puVar35[-0xe] = uVar27;
        puVar35[-0xc] = uVar84;
        puVar35[-0xb] = uVar20;
        puVar35[-0xd] = fVar48;
        puVar35[-10] = uVar21;
        puVar35[-9] = fVar47;
        *puVar35 = uVar22;
        puVar35[1] = uVar23;
        *(undefined8 *)(puVar35 + -8) = 0;
        *(undefined8 *)(puVar35 + -6) = 0;
        *(undefined8 *)(puVar35 + -4) = 0;
        *(undefined8 *)(puVar35 + -2) = 0;
        puVar35[2] = uVar24;
        puVar35[4] = uVar25;
        puVar35[5] = uVar26;
        puVar35[3] = (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) * -fVar67;
        puVar35[6] = uVar27;
        puVar35[7] = fVar48;
        puVar35[8] = uVar84;
        puVar35[9] = uVar20;
        puVar35[10] = uVar21;
        puVar35[0xb] = fVar47;
        *(undefined8 *)(puVar35 + 0x10) = 0;
        *(undefined8 *)(puVar35 + 0x12) = 0;
        *(undefined8 *)(puVar35 + 0xc) = 0;
        *(undefined8 *)(puVar35 + 0xe) = 0;
        puVar35 = puVar35 + 0x28;
      } while (uVar5 != uVar32);
      *(uint *)(param_3 + 0xf) = uVar5 << 1;
    }
  }
  else {
    FUN_008de6fc(uVar30,param_3,piVar37,lVar29 + lVar31 * 0x50);
  }
LAB_008df604:
  FUN_008ee7c8(*(long *)(param_2 + 0x10) + 0x7a8);
  return;
}


