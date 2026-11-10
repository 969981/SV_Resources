/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008eb7c0; name: FUN_008eb7c0
 */


void FUN_008eb7c0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined8 *puVar31;
  int iVar32;
  ulong uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  ulong extraout_d0;
  ulong uVar37;
  float fVar38;
  float fVar39;
  uint uVar40;
  undefined4 uVar41;
  undefined8 extraout_var;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  ulong uVar49;
  ulong uVar50;
  float fVar51;
  float fVar69;
  undefined1 auVar54 [12];
  float fVar52;
  float fVar53;
  undefined1 auVar55 [12];
  undefined1 auVar56 [12];
  float fVar66;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar75;
  float fVar76;
  undefined1 auVar77 [12];
  float fVar70;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar67;
  undefined1 auVar63 [16];
  float fVar68;
  float fVar71;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined8 uVar72;
  ulong uVar73;
  float fVar74;
  float fVar95;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar96;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  uint uVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  undefined8 uVar101;
  float fVar102;
  undefined8 uVar103;
  ulong uVar104;
  float fVar105;
  undefined8 local_130;
  ulong uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulong uStack_e8;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  int local_94;
  
  lVar29 = *(long *)(param_2 + 0x418);
  piVar21 = *(int **)(*(long *)(param_2 + 0x238) + 0x338);
  *(undefined4 *)(lVar29 + 0x24) = 0;
  if (*(long *)(param_2 + 0x7f8) == 0) {
    return;
  }
  local_94 = 0;
  local_d8 = 0;
  FUN_008e5f68(*(undefined4 *)(param_2 + 0x44),*(undefined8 *)(param_1 + 0x18),&local_d8,&local_94,
               param_2,1,0);
  if (local_94 == 0) {
    return;
  }
  puVar18 = (undefined8 *)FUN_008ee7bc(param_2 + 0x7a8,*(undefined4 *)(lVar29 + 0x28));
  iVar32 = local_94;
  lVar20 = *(long *)(param_2 + 0x238);
  fVar105 = 1.0;
  uVar10 = piVar21[4];
  uVar11 = piVar21[5];
  iVar8 = local_94;
  if (uVar11 - 1 < 2) {
    iVar8 = local_94 + 1;
  }
  if (*(char *)(*(long *)(lVar20 + 0x10) + 0x75c) != '\0') {
    fVar105 = *(float *)(param_2 + 0x74);
  }
  uVar37 = extraout_d0;
  uVar42 = extraout_var;
  if (*(char *)(*(long *)(lVar20 + 0x10) + 0x756) != '\0') {
    uVar37 = (ulong)(uint)*(float *)(param_2 + 0x70);
    uVar42 = 0;
    fVar105 = fVar105 * *(float *)(param_2 + 0x70);
  }
  fVar35 = (float)uVar42;
  uVar17 = local_94 - 2;
  if ((((local_94 < 2 && uVar11 == 1) || (uVar10 != 0)) || (iVar8 < 2)) &&
     ((local_94 < 3 || ((int)uVar10 < 1)))) goto LAB_008ed794;
  iVar8 = iVar8 + (iVar8 + -1) * uVar10;
  uVar16 = local_94 - 1;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110._0_4_ = 0.0;
  local_110._4_4_ = 0.0;
  uStack_108._0_4_ = 0.0;
  uStack_108._4_4_ = 0.0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  if (uVar11 == 1) {
    iVar14 = *(int *)(local_d8 + (long)(int)uVar16 * 8 + 4);
    lVar22 = (long)iVar14;
    iVar12 = *(int *)(param_2 + 0x28);
    lVar25 = (long)*(int *)(local_d8 + 4);
    iVar15 = *(int *)(local_d8 + 0xc);
    lVar30 = (long)iVar15;
    if ((iVar14 <= iVar12) && (*(long *)(param_2 + 0x1d0) != 0)) {
      puVar3 = (ulong *)(*(long *)(param_2 + 0x1d0) + lVar22 * 0x10);
      uVar37 = *puVar3;
      fVar35 = *(float *)(puVar3 + 1);
    }
    lVar23 = lVar22 * 0x10;
    lVar27 = *(long *)(param_2 + 0x210);
    puVar4 = (undefined4 *)(lVar27 + lVar23);
    lVar28 = *(long *)(param_2 + 0x218);
    lVar26 = *(long *)(param_2 + 0x220);
    cVar13 = *(char *)(*(long *)(param_2 + 0xa0) + 0x753);
    puVar5 = (undefined4 *)(lVar28 + lVar23);
    puVar6 = (uint *)(lVar26 + lVar23);
    if (cVar13 == '\x02') {
      auVar57._0_4_ = puVar4[1];
      uVar42 = CONCAT44(*puVar5,*puVar4);
      uVar40 = *puVar6;
      auVar57._4_4_ = puVar5[1];
      auVar78._4_12_ = SUB1612(ZEXT816(0),4);
      auVar78._0_4_ = puVar6[1];
      auVar57._8_8_ = auVar78._0_8_;
      fVar70 = (float)puVar6[2];
      uVar103 = CONCAT44(puVar5[2],puVar4[2]);
      fVar66 = *(float *)(param_2 + 0x370);
      fVar43 = *(float *)(param_2 + 0x374);
      fVar52 = *(float *)(param_2 + 0x378);
LAB_008ebac8:
      fVar48 = 0.0;
      uVar33 = (ulong)uVar40;
      fVar69 = 0.0;
    }
    else {
      if (cVar13 != '\0') {
        auVar57._0_4_ = puVar4[1];
        uVar42 = CONCAT44(*puVar5,*puVar4);
        uVar40 = *puVar6;
        auVar57._4_4_ = puVar5[1];
        fVar70 = (float)puVar6[2];
        auVar57._8_4_ = puVar6[1];
        auVar57._12_4_ = 0;
        fVar66 = (float)puVar4[3];
        fVar43 = (float)puVar5[3];
        uVar103 = CONCAT44(puVar5[2],puVar4[2]);
        fVar52 = (float)puVar6[3];
        goto LAB_008ebac8;
      }
      uVar33 = *(ulong *)(param_2 + 0x348);
      uVar42 = *(undefined8 *)(param_2 + 0x340);
      auVar57 = *(undefined1 (*) [16])(param_2 + 0x350);
      fVar70 = *(float *)(param_2 + 0x368);
      fVar48 = *(float *)(param_2 + 0x36c);
      uVar103 = *(undefined8 *)(param_2 + 0x360);
      fVar66 = *(float *)(param_2 + 0x370);
      fVar43 = *(float *)(param_2 + 0x374);
      fVar52 = *(float *)(param_2 + 0x378);
      fVar69 = *(float *)(param_2 + 0x37c);
    }
    fVar102 = (float)uVar37;
    fVar67 = (float)(uVar37 >> 0x20);
    local_f0 = CONCAT44(fVar43 + (float)((ulong)uVar42 >> 0x20) * fVar102 + auVar57._4_4_ * fVar67 +
                                 (float)((ulong)uVar103 >> 0x20) * fVar35,
                        fVar66 + (float)uVar42 * fVar102 + auVar57._0_4_ * fVar67 +
                                 (float)uVar103 * fVar35);
    uStack_e8 = CONCAT44(fVar69 + (float)(uVar33 >> 0x20) * fVar102 + auVar57._12_4_ * fVar67 +
                                  fVar48 * fVar35,
                         fVar52 + (float)uVar33 * fVar102 + auVar57._8_4_ * fVar67 + fVar70 * fVar35
                        );
    uVar42 = local_f0;
    uVar37 = uStack_e8;
    if ((*(int *)(local_d8 + 4) <= iVar12) && (*(long *)(param_2 + 0x1d0) != 0)) {
      puVar31 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar25 * 0x10);
      uVar42 = *puVar31;
      uVar37 = (ulong)*(uint *)(puVar31 + 1);
    }
    lVar19 = lVar25 * 0x10;
    if (cVar13 == '\x02') {
      lVar25 = lVar25 * 0x10;
      uVar45 = CONCAT44(*(undefined4 *)(lVar28 + lVar19),*(undefined4 *)(lVar27 + lVar19));
      fVar35 = *(float *)(lVar26 + lVar19);
      auVar58._0_4_ = *(undefined4 *)(lVar27 + lVar25 + 8);
      uVar46 = CONCAT44(*(undefined4 *)(lVar28 + lVar25 + 4),*(undefined4 *)(lVar27 + lVar25 + 4));
      fVar52 = *(float *)(lVar26 + lVar25 + 4);
      auVar58._4_4_ = *(undefined4 *)(lVar28 + lVar25 + 8);
      auVar79._4_12_ = SUB1612(ZEXT816(0),4);
      auVar79._0_4_ = *(undefined4 *)(lVar26 + lVar25 + 8);
      auVar58._8_8_ = auVar79._0_8_;
      uVar103 = *(undefined8 *)(param_2 + 0x370);
      uVar41 = (undefined4)*(undefined8 *)(param_2 + 0x378);
LAB_008ebc08:
      fVar43 = 0.0;
      fVar66 = 0.0;
      auVar80._8_4_ = uVar41;
      auVar80._0_8_ = uVar103;
      auVar80._12_4_ = 0;
    }
    else {
      if (cVar13 != '\0') {
        lVar25 = lVar25 * 0x10;
        uVar45 = CONCAT44(*(undefined4 *)(lVar28 + lVar19),*(undefined4 *)(lVar27 + lVar19));
        fVar35 = *(float *)(lVar26 + lVar19);
        lVar27 = lVar27 + lVar25;
        auVar58._0_4_ = *(undefined4 *)(lVar27 + 8);
        lVar28 = lVar28 + lVar25;
        lVar26 = lVar26 + lVar25;
        uVar46 = CONCAT44(*(undefined4 *)(lVar28 + 4),*(undefined4 *)(lVar27 + 4));
        fVar52 = *(float *)(lVar26 + 4);
        auVar58._4_4_ = *(undefined4 *)(lVar28 + 8);
        auVar58._8_4_ = *(undefined4 *)(lVar26 + 8);
        auVar58._12_4_ = 0;
        uVar103 = CONCAT44(*(undefined4 *)(lVar28 + 0xc),*(undefined4 *)(lVar27 + 0xc));
        uVar41 = *(undefined4 *)(lVar26 + 0xc);
        goto LAB_008ebc08;
      }
      fVar35 = *(float *)(param_2 + 0x348);
      fVar66 = *(float *)(param_2 + 0x34c);
      uVar45 = *(undefined8 *)(param_2 + 0x340);
      fVar52 = *(float *)(param_2 + 0x358);
      fVar43 = *(float *)(param_2 + 0x35c);
      uVar46 = *(undefined8 *)(param_2 + 0x350);
      auVar58 = *(undefined1 (*) [16])(param_2 + 0x360);
      auVar80 = *(undefined1 (*) [16])(param_2 + 0x370);
    }
    fVar70 = (float)uVar42;
    fVar69 = (float)((ulong)uVar42 >> 0x20);
    fVar48 = (float)uVar37;
    local_110._0_4_ =
         auVar80._0_4_ + (float)uVar45 * fVar70 + (float)uVar46 * fVar69 + auVar58._0_4_ * fVar48;
    local_110._4_4_ =
         auVar80._4_4_ +
         (float)((ulong)uVar45 >> 0x20) * fVar70 + (float)((ulong)uVar46 >> 0x20) * fVar69 +
         auVar58._4_4_ * fVar48;
    uStack_108._0_4_ = auVar80._8_4_ + fVar35 * fVar70 + fVar52 * fVar69 + auVar58._8_4_ * fVar48;
    uStack_108._4_4_ = auVar80._12_4_ + fVar66 * fVar70 + fVar43 * fVar69 + auVar58._12_4_ * fVar48;
    if (*piVar21 - 1U < 2) {
      if (cVar13 == '\0') {
        uVar40 = (uint)*(undefined8 *)(param_2 + 0x358);
        uVar103 = *(undefined8 *)(param_2 + 0x350);
      }
      else {
        puVar7 = (undefined4 *)0x0;
        if (iVar14 <= iVar12) {
          puVar7 = puVar4;
        }
        puVar4 = (undefined4 *)0x0;
        if (iVar14 <= iVar12) {
          puVar4 = puVar5;
        }
        puVar9 = (uint *)0x0;
        if (iVar14 <= iVar12) {
          puVar9 = puVar6;
        }
        uVar103 = CONCAT44(puVar4[1],puVar7[1]);
        uVar40 = puVar9[1];
      }
    }
    else {
      uVar103 = 0;
      uVar40 = 0;
    }
    lVar22 = *(long *)(param_2 + 0xb0) + lVar22 * 0x20;
    puVar31 = (undefined8 *)(*(long *)(param_2 + 0x1f0) + lVar23);
    uStack_b8 = puVar31[1];
    local_c0 = *puVar31;
    puVar31 = (undefined8 *)(*(long *)(param_2 + 0x1e8) + lVar23);
    uStack_c8 = puVar31[1];
    local_d0 = *puVar31;
    FUN_008d65b4(*(undefined4 *)(lVar22 + 0xc),*(float *)(param_2 + 0x44) - *(float *)(lVar22 + 8),
                 *(undefined8 *)(param_2 + 0x98),&local_130,lVar20,&local_d0,&local_c0);
    uVar37 = *(ulong *)(*(long *)(param_2 + 0x78) + 0x148);
    uVar42 = *(undefined8 *)(*(long *)(param_2 + 0x78) + 0x140);
    fVar35 = (float)local_130 * (float)uVar42;
    local_130 = CONCAT44((float)((ulong)local_130 >> 0x20) * (float)((ulong)uVar42 >> 0x20),fVar35);
    uStack_128 = CONCAT44((float)(uStack_128 >> 0x20) * (float)(uVar37 >> 0x20),
                          (float)uStack_128 * (float)uVar37);
    fVar52 = (float)local_f0;
    fVar66 = (float)((ulong)local_f0 >> 0x20);
    fVar43 = (float)uStack_e8;
    fVar70 = (float)(uStack_e8 >> 0x20);
    if ((int)uVar10 < 1) {
      if ((iVar15 <= *(int *)(param_2 + 0x28)) && (*(long *)(param_2 + 0x1d0) != 0)) {
        puVar31 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar30 * 0x10);
        uVar42 = *puVar31;
        uVar37 = (ulong)*(uint *)(puVar31 + 1);
      }
      lVar27 = lVar30 * 0x10;
      lVar20 = *(long *)(param_2 + 0x210);
      lVar22 = *(long *)(param_2 + 0x218);
      lVar25 = *(long *)(param_2 + 0x220);
      cVar13 = *(char *)(*(long *)(param_2 + 0xa0) + 0x753);
      if (cVar13 == '\x02') {
        fVar69 = *(float *)(lVar20 + lVar27);
        lVar30 = lVar30 * 0x10;
        fVar48 = *(float *)(lVar22 + lVar27);
        fVar102 = *(float *)(lVar25 + lVar27);
        fVar67 = *(float *)(lVar20 + lVar30 + 4);
        fVar98 = *(float *)(lVar22 + lVar30 + 4);
        fVar44 = *(float *)(lVar25 + lVar30 + 4);
        uVar45 = CONCAT44(*(undefined4 *)(lVar22 + lVar30 + 8),*(undefined4 *)(lVar20 + lVar30 + 8))
        ;
        uVar97 = *(uint *)(lVar25 + lVar30 + 8);
        uVar46 = *(undefined8 *)(param_2 + 0x370);
        uVar33 = *(ulong *)(param_2 + 0x378) & 0xffffffff;
LAB_008ec084:
        uVar50 = (ulong)uVar97;
        fVar74 = 0.0;
        fVar47 = 0.0;
      }
      else {
        if (cVar13 != '\0') {
          fVar69 = *(float *)(lVar20 + lVar27);
          lVar30 = lVar30 * 0x10;
          fVar48 = *(float *)(lVar22 + lVar27);
          fVar102 = *(float *)(lVar25 + lVar27);
          lVar20 = lVar20 + lVar30;
          fVar67 = *(float *)(lVar20 + 4);
          lVar22 = lVar22 + lVar30;
          lVar25 = lVar25 + lVar30;
          fVar98 = *(float *)(lVar22 + 4);
          fVar44 = *(float *)(lVar25 + 4);
          uVar45 = CONCAT44(*(undefined4 *)(lVar22 + 8),*(undefined4 *)(lVar20 + 8));
          uVar97 = *(uint *)(lVar25 + 8);
          uVar46 = CONCAT44(*(undefined4 *)(lVar22 + 0xc),*(undefined4 *)(lVar20 + 0xc));
          uVar33 = (ulong)*(uint *)(lVar25 + 0xc);
          goto LAB_008ec084;
        }
        fVar69 = *(float *)(param_2 + 0x340);
        fVar48 = *(float *)(param_2 + 0x344);
        fVar102 = *(float *)(param_2 + 0x348);
        fVar47 = *(float *)(param_2 + 0x34c);
        fVar67 = *(float *)(param_2 + 0x350);
        fVar98 = *(float *)(param_2 + 0x354);
        fVar44 = *(float *)(param_2 + 0x358);
        fVar74 = *(float *)(param_2 + 0x35c);
        uVar50 = *(ulong *)(param_2 + 0x368);
        uVar45 = *(undefined8 *)(param_2 + 0x360);
        uVar33 = *(ulong *)(param_2 + 0x378);
        uVar46 = *(undefined8 *)(param_2 + 0x370);
      }
      fVar75 = (float)uVar42;
      fVar34 = (float)((ulong)uVar42 >> 0x20);
      fVar51 = (float)uVar37;
      auVar86._0_8_ = CONCAT44(local_110._4_4_ - fVar66,(float)local_110 - fVar52);
      auVar86._8_4_ = (float)uStack_108 - fVar43;
      auVar86._12_4_ = uStack_108._4_4_ - fVar70;
      uStack_f8 = auVar86._8_8_;
      fVar52 = ((float)uVar46 + fVar69 * fVar75 + fVar67 * fVar34 + (float)uVar45 * fVar51) -
               (float)local_110;
      fVar66 = ((float)((ulong)uVar46 >> 0x20) +
               fVar48 * fVar75 + fVar98 * fVar34 + (float)((ulong)uVar45 >> 0x20) * fVar51) -
               local_110._4_4_;
      fVar69 = ((float)uVar33 + fVar102 * fVar75 + fVar44 * fVar34 + (float)uVar50 * fVar51) -
               (float)uStack_108;
      fVar70 = ((float)(uVar33 >> 0x20) +
               fVar47 * fVar75 + fVar74 * fVar34 + (float)(uVar50 >> 0x20) * fVar51) -
               uStack_108._4_4_;
      local_100 = auVar86._0_8_;
    }
    else {
      if ((iVar15 <= *(int *)(param_2 + 0x28)) && (*(long *)(param_2 + 0x1d0) != 0)) {
        puVar31 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar30 * 0x10);
        uVar42 = *puVar31;
        uVar37 = (ulong)*(uint *)(puVar31 + 1);
      }
      lVar30 = lVar30 * 0x10;
      puVar4 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar30);
      puVar5 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar30);
      puVar7 = (undefined4 *)(*(long *)(param_2 + 0x220) + lVar30);
      cVar13 = *(char *)(*(long *)(param_2 + 0xa0) + 0x753);
      if (cVar13 == '\x02') {
        auVar59._0_4_ = *puVar4;
        auVar59._4_4_ = *puVar5;
        auVar81._4_12_ = SUB1612(ZEXT816(0),4);
        auVar81._0_4_ = *puVar7;
        uVar45 = CONCAT44(puVar5[1],puVar4[1]);
        fVar69 = (float)puVar7[1];
        auVar59._8_8_ = auVar81._0_8_;
        auVar54._4_4_ = puVar5[2];
        auVar54._0_4_ = puVar4[2];
        auVar54._8_4_ = puVar7[2];
        uVar46 = *(undefined8 *)(param_2 + 0x370);
        uVar33 = *(ulong *)(param_2 + 0x378) & 0xffffffff;
LAB_008ebe5c:
        fVar48 = 0.0;
        auVar83._12_4_ = 0;
        auVar83._0_12_ = auVar54;
      }
      else {
        if (cVar13 != '\0') {
          auVar59._0_4_ = *puVar4;
          auVar59._4_4_ = *puVar5;
          auVar82._4_12_ = SUB1612(ZEXT816(0),4);
          auVar82._0_4_ = *puVar7;
          auVar59._8_8_ = auVar82._0_8_;
          uVar45 = CONCAT44(puVar5[1],puVar4[1]);
          fVar69 = (float)puVar7[1];
          uVar46 = CONCAT44(puVar5[3],puVar4[3]);
          uVar33 = (ulong)(uint)puVar7[3];
          auVar54._4_4_ = puVar5[2];
          auVar54._0_4_ = puVar4[2];
          auVar54._8_4_ = puVar7[2];
          goto LAB_008ebe5c;
        }
        auVar59 = *(undefined1 (*) [16])(param_2 + 0x340);
        fVar69 = *(float *)(param_2 + 0x358);
        fVar48 = *(float *)(param_2 + 0x35c);
        uVar45 = *(undefined8 *)(param_2 + 0x350);
        auVar83 = *(undefined1 (*) [16])(param_2 + 0x360);
        uVar33 = *(ulong *)(param_2 + 0x378);
        uVar46 = *(undefined8 *)(param_2 + 0x370);
      }
      fVar102 = (float)uVar42;
      fVar67 = (float)((ulong)uVar42 >> 0x20);
      fVar98 = (float)uVar37;
      local_100 = CONCAT44(local_110._4_4_ - fVar66,(float)local_110 - fVar52);
      uStack_f8 = CONCAT44(uStack_108._4_4_ - fVar70,(float)uStack_108 - fVar43);
      fVar52 = (((float)uVar46 +
                auVar59._0_4_ * fVar102 + (float)uVar45 * fVar67 + auVar83._0_4_ * fVar98) - fVar52)
               * 0.5;
      fVar66 = (((float)((ulong)uVar46 >> 0x20) +
                auVar59._4_4_ * fVar102 + (float)((ulong)uVar45 >> 0x20) * fVar67 +
                auVar83._4_4_ * fVar98) - fVar66) * 0.5;
      fVar69 = (((float)uVar33 + auVar59._8_4_ * fVar102 + fVar69 * fVar67 + auVar83._8_4_ * fVar98)
               - fVar43) * 0.5;
      fVar70 = (((float)(uVar33 >> 0x20) +
                auVar59._12_4_ * fVar102 + fVar48 * fVar67 + auVar83._12_4_ * fVar98) - fVar70) *
               0.5;
    }
    uStack_118 = CONCAT44(fVar70,fVar69);
    local_120 = CONCAT44(fVar66,fVar52);
    *puVar18 = local_f0;
    *(float *)(puVar18 + 1) = fVar43;
LAB_008ec2e4:
    fVar35 = fVar105 * fVar35;
    puVar18[10] = local_f0;
    *(int *)(puVar18 + 0xb) = (int)uStack_e8;
    puVar18[2] = local_100;
    *(int *)(puVar18 + 3) = (int)uStack_f8;
    puVar18[0xc] = local_100;
    *(int *)(puVar18 + 0xd) = (int)uStack_f8;
    puVar18[4] = uVar103;
    *(uint *)(puVar18 + 5) = uVar40;
    puVar18[0xe] = uVar103;
    *(uint *)(puVar18 + 0xf) = uVar40;
    *(float *)((long)puVar18 + 0xc) = -fVar35;
    *(float *)((long)puVar18 + 0x5c) = fVar35;
    *(undefined4 *)((long)puVar18 + 0x2c) = 0;
    *(undefined4 *)((long)puVar18 + 0x7c) = 0;
    fVar52 = 0.0 / (float)(iVar8 + -1);
    uVar37 = (ulong)(uint)fVar52;
    uVar42 = 0;
    *(float *)((long)puVar18 + 0x1c) = fVar52;
    *(float *)((long)puVar18 + 0x6c) = fVar52;
    uVar33 = 1;
    *(int *)(lVar29 + 0x24) = *(int *)(lVar29 + 0x24) + 2;
  }
  else {
    if (uVar11 == 2) {
      iVar14 = *(int *)(local_d8 + 4);
      lVar22 = (long)iVar14;
      iVar12 = *(int *)(param_2 + 0x28);
      iVar15 = *(int *)(local_d8 + 0xc);
      lVar30 = (long)iVar15;
      if ((iVar14 <= iVar12) && (*(long *)(param_2 + 0x1d0) != 0)) {
        puVar3 = (ulong *)(*(long *)(param_2 + 0x1d0) + lVar22 * 0x10);
        uVar37 = *puVar3;
        fVar35 = *(float *)(puVar3 + 1);
      }
      lVar25 = lVar22 * 0x10;
      puVar4 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar25);
      cVar13 = *(char *)(*(long *)(param_2 + 0xa0) + 0x753);
      puVar5 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar25);
      puVar6 = (uint *)(*(long *)(param_2 + 0x220) + lVar25);
      if (cVar13 == '\x02') {
        auVar87._0_4_ = puVar4[1];
        uVar103 = CONCAT44(*puVar5,*puVar4);
        uVar97 = *puVar6;
        auVar87._4_4_ = puVar5[1];
        auVar84._4_12_ = SUB1612(ZEXT816(0),4);
        auVar84._0_4_ = puVar6[1];
        auVar87._8_8_ = auVar84._0_8_;
        fVar52 = (float)puVar6[2];
        uVar45 = CONCAT44(puVar5[2],puVar4[2]);
        uVar42 = *(undefined8 *)(param_2 + 0x370);
        uVar40 = (uint)*(undefined8 *)(param_2 + 0x378);
LAB_008ebf44:
        fVar66 = 0.0;
        uVar33 = (ulong)uVar97;
        auVar85._8_4_ = uVar40;
        auVar85._0_8_ = uVar42;
        auVar85._12_4_ = 0;
      }
      else {
        if (cVar13 != '\0') {
          auVar87._0_4_ = puVar4[1];
          uVar103 = CONCAT44(*puVar5,*puVar4);
          uVar97 = *puVar6;
          auVar87._4_4_ = puVar5[1];
          fVar52 = (float)puVar6[2];
          auVar87._8_4_ = puVar6[1];
          auVar87._12_4_ = 0;
          uVar42 = CONCAT44(puVar5[3],puVar4[3]);
          uVar45 = CONCAT44(puVar5[2],puVar4[2]);
          uVar40 = puVar6[3];
          goto LAB_008ebf44;
        }
        uVar33 = *(ulong *)(param_2 + 0x348);
        uVar103 = *(undefined8 *)(param_2 + 0x340);
        auVar87 = *(undefined1 (*) [16])(param_2 + 0x350);
        fVar52 = *(float *)(param_2 + 0x368);
        fVar66 = *(float *)(param_2 + 0x36c);
        uVar45 = *(undefined8 *)(param_2 + 0x360);
        auVar85 = *(undefined1 (*) [16])(param_2 + 0x370);
      }
      fVar43 = (float)uVar37;
      fVar70 = (float)(uVar37 >> 0x20);
      local_110._0_4_ =
           auVar85._0_4_ + (float)uVar103 * fVar43 + auVar87._0_4_ * fVar70 + (float)uVar45 * fVar35
      ;
      local_110._4_4_ =
           auVar85._4_4_ +
           (float)((ulong)uVar103 >> 0x20) * fVar43 + auVar87._4_4_ * fVar70 +
           (float)((ulong)uVar45 >> 0x20) * fVar35;
      uStack_108._0_4_ =
           auVar85._8_4_ + (float)uVar33 * fVar43 + auVar87._8_4_ * fVar70 + fVar52 * fVar35;
      uStack_108._4_4_ =
           auVar85._12_4_ +
           (float)(uVar33 >> 0x20) * fVar43 + auVar87._12_4_ * fVar70 + fVar66 * fVar35;
      if (*piVar21 - 1U < 2) {
        if (cVar13 == '\0') {
          uVar40 = (uint)*(undefined8 *)(param_2 + 0x358);
          uVar103 = *(undefined8 *)(param_2 + 0x350);
        }
        else {
          puVar7 = (undefined4 *)0x0;
          if (iVar14 <= iVar12) {
            puVar7 = puVar4;
          }
          puVar4 = (undefined4 *)0x0;
          if (iVar14 <= iVar12) {
            puVar4 = puVar5;
          }
          puVar9 = (uint *)0x0;
          if (iVar14 <= iVar12) {
            puVar9 = puVar6;
          }
          uVar103 = CONCAT44(puVar4[1],puVar7[1]);
          uVar40 = puVar9[1];
        }
      }
      else {
        uVar103 = 0;
        uVar40 = 0;
      }
      lVar22 = *(long *)(param_2 + 0xb0) + lVar22 * 0x20;
      fVar35 = *(float *)(lVar22 + 8);
      auVar87 = ZEXT416((uint)fVar35);
      puVar31 = (undefined8 *)(*(long *)(param_2 + 0x1f0) + lVar25);
      uStack_b8 = puVar31[1];
      local_c0 = *puVar31;
      puVar31 = (undefined8 *)(*(long *)(param_2 + 0x1e8) + lVar25);
      uStack_c8 = puVar31[1];
      local_d0 = *puVar31;
      FUN_008d65b4(*(undefined4 *)(lVar22 + 0xc),*(float *)(param_2 + 0x44) - fVar35,
                   *(undefined8 *)(param_2 + 0x98),&local_130,lVar20,&local_d0,&local_c0);
      auVar54 = auVar87._0_12_;
      uVar45 = *(undefined8 *)(*(long *)(param_2 + 0x78) + 0x148);
      uVar42 = *(undefined8 *)(*(long *)(param_2 + 0x78) + 0x140);
      fVar35 = (float)local_130 * (float)uVar42;
      local_130 = CONCAT44((float)((ulong)local_130 >> 0x20) * (float)((ulong)uVar42 >> 0x20),fVar35
                          );
      uStack_128 = CONCAT44((float)(uStack_128 >> 0x20) * (float)((ulong)uVar45 >> 0x20),
                            (float)uStack_128 * (float)uVar45);
      uStack_e8 = *(ulong *)(param_2 + 0x378);
      local_f0 = *(undefined8 *)(param_2 + 0x370);
      fVar52 = (float)local_f0;
      fVar66 = (float)((ulong)local_f0 >> 0x20);
      fVar43 = (float)uStack_e8;
      fVar70 = (float)(uStack_e8 >> 0x20);
      if ((int)uVar10 < 1) {
        uStack_f8 = CONCAT44(uStack_108._4_4_ - fVar70,(float)uStack_108 - fVar43);
        local_100 = CONCAT44(local_110._4_4_ - fVar66,(float)local_110 - fVar52);
      }
      else {
        if ((iVar15 <= *(int *)(param_2 + 0x28)) && (*(long *)(param_2 + 0x1d0) != 0)) {
          auVar54 = *(undefined1 (*) [12])(*(long *)(param_2 + 0x1d0) + lVar30 * 0x10);
        }
        lVar27 = lVar30 * 0x10;
        lVar20 = *(long *)(param_2 + 0x210);
        lVar22 = *(long *)(param_2 + 0x218);
        lVar25 = *(long *)(param_2 + 0x220);
        cVar13 = *(char *)(*(long *)(param_2 + 0xa0) + 0x753);
        uVar42 = local_f0;
        if (cVar13 == '\x02') {
          lVar30 = lVar30 * 0x10;
          uVar45 = CONCAT44(*(undefined4 *)(lVar22 + lVar27),*(undefined4 *)(lVar20 + lVar27));
          fVar67 = *(float *)(lVar25 + lVar27);
          fVar69 = *(float *)(lVar20 + lVar30 + 4);
          fVar48 = *(float *)(lVar22 + lVar30 + 4);
          fVar102 = *(float *)(lVar25 + lVar30 + 4);
          uVar46 = CONCAT44(*(undefined4 *)(lVar22 + lVar30 + 8),
                            *(undefined4 *)(lVar20 + lVar30 + 8));
          uVar37 = uStack_e8 & 0xffffffff;
          uVar97 = *(uint *)(lVar25 + lVar30 + 8);
LAB_008ec294:
          fVar44 = 0.0;
          uVar33 = (ulong)uVar97;
          fVar98 = 0.0;
        }
        else {
          if (cVar13 != '\0') {
            lVar30 = lVar30 * 0x10;
            uVar45 = CONCAT44(*(undefined4 *)(lVar22 + lVar27),*(undefined4 *)(lVar20 + lVar27));
            fVar67 = *(float *)(lVar25 + lVar27);
            lVar20 = lVar20 + lVar30;
            fVar69 = *(float *)(lVar20 + 4);
            lVar22 = lVar22 + lVar30;
            lVar25 = lVar25 + lVar30;
            fVar48 = *(float *)(lVar22 + 4);
            fVar102 = *(float *)(lVar25 + 4);
            uVar46 = CONCAT44(*(undefined4 *)(lVar22 + 8),*(undefined4 *)(lVar20 + 8));
            uVar97 = *(uint *)(lVar25 + 8);
            uVar37 = (ulong)*(uint *)(lVar25 + 0xc);
            uVar42 = CONCAT44(*(undefined4 *)(lVar22 + 0xc),*(undefined4 *)(lVar20 + 0xc));
            goto LAB_008ec294;
          }
          fVar67 = *(float *)(param_2 + 0x348);
          fVar44 = *(float *)(param_2 + 0x34c);
          uVar45 = *(undefined8 *)(param_2 + 0x340);
          fVar69 = *(float *)(param_2 + 0x350);
          fVar48 = *(float *)(param_2 + 0x354);
          fVar102 = *(float *)(param_2 + 0x358);
          fVar98 = *(float *)(param_2 + 0x35c);
          uVar33 = *(ulong *)(param_2 + 0x368);
          uVar46 = *(undefined8 *)(param_2 + 0x360);
          uVar37 = uStack_e8;
        }
        fVar47 = auVar54._0_4_;
        fVar74 = auVar54._4_4_;
        fVar75 = auVar54._8_4_;
        fVar69 = (float)uVar42 + (float)uVar45 * fVar47 + fVar69 * fVar74 + (float)uVar46 * fVar75;
        fVar48 = (float)((ulong)uVar42 >> 0x20) +
                 (float)((ulong)uVar45 >> 0x20) * fVar47 + fVar48 * fVar74 +
                 (float)((ulong)uVar46 >> 0x20) * fVar75;
        fVar102 = (float)uVar37 + fVar67 * fVar47 + fVar102 * fVar74 + (float)uVar33 * fVar75;
        fVar67 = (float)(uVar37 >> 0x20) +
                 fVar44 * fVar47 + fVar98 * fVar74 + (float)(uVar33 >> 0x20) * fVar75;
        auVar87 = NEON_fmov(0x3e800000,4);
        local_100 = CONCAT44(((local_110._4_4_ - fVar66) + (local_110._4_4_ - fVar48)) *
                             auVar87._4_4_,
                             (((float)local_110 - fVar52) + ((float)local_110 - fVar69)) *
                             auVar87._0_4_);
        uStack_f8 = CONCAT44(((uStack_108._4_4_ - fVar70) + (uStack_108._4_4_ - fVar67)) *
                             auVar87._12_4_,
                             (((float)uStack_108 - fVar43) + ((float)uStack_108 - fVar102)) *
                             auVar87._8_4_);
        uStack_118 = CONCAT44((fVar67 - fVar70) * 0.5,(fVar102 - fVar43) * 0.5);
        local_120 = CONCAT44((fVar48 - fVar66) * 0.5,(fVar69 - fVar52) * 0.5);
      }
      *puVar18 = local_f0;
      *(float *)(puVar18 + 1) = fVar43;
      goto LAB_008ec2e4;
    }
    uVar33 = 0;
    fVar35 = 0.0;
    uVar103 = 0;
    uVar40 = 0;
  }
  fVar52 = 1.0 / (float)(int)(uVar10 + 1);
  if (((0 < (int)uVar10) && (0 < (int)uVar10)) && (uVar11 - 1 < 2)) {
    puVar31 = puVar18 + uVar33 * 0x14 + 10;
    uVar50 = 0;
    do {
      uVar104 = uVar50 + 1;
      fVar66 = fVar52 * (float)(int)uVar104;
      fVar43 = 1.0 - fVar66;
      uVar42 = CONCAT44(local_100._4_4_ * fVar43 + local_120._4_4_ * fVar66,
                        (float)local_100 * fVar43 + (float)local_120 * fVar66);
      fVar66 = (float)uStack_f8 * fVar43 + (float)uStack_118 * fVar66;
      FUN_008d46b0(&local_c0,&local_f0,&local_100,&local_110,&local_120);
      fVar43 = (float)((int)uVar33 + (int)uVar50);
      puVar31[-10] = local_c0;
      *(int *)(puVar31 + -9) = (int)uStack_b8;
      *puVar31 = local_c0;
      *(int *)(puVar31 + 1) = (int)uStack_b8;
      puVar31[-8] = uVar42;
      *(float *)(puVar31 + -7) = fVar66;
      puVar31[2] = uVar42;
      *(float *)(puVar31 + 3) = fVar66;
      fVar66 = fVar43 / (float)(iVar8 + -1);
      uVar37 = (ulong)(uint)fVar66;
      uVar42 = 0;
      puVar31[4] = uVar103;
      puVar31[-6] = uVar103;
      *(float *)((long)puVar31 + -0x44) = -fVar35;
      *(float *)((long)puVar31 + 0xc) = fVar35;
      *(uint *)(puVar31 + -5) = uVar40;
      *(float *)((long)puVar31 + -0x24) = fVar43;
      *(uint *)(puVar31 + 5) = uVar40;
      *(float *)((long)puVar31 + 0x2c) = fVar43;
      *(float *)((long)puVar31 + -0x34) = fVar66;
      *(float *)((long)puVar31 + 0x1c) = fVar66;
      puVar31 = puVar31 + 0x14;
      *(int *)(lVar29 + 0x24) = *(int *)(lVar29 + 0x24) + 2;
      uVar50 = uVar104;
    } while (uVar10 != uVar104);
    uVar33 = (ulong)((int)uVar33 + uVar10);
  }
  uVar40 = (uint)uVar33;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  if (1 < iVar32) {
    uVar103 = 0;
    uVar104 = 0;
    uVar50 = 0;
    do {
      fVar35 = (float)uVar42;
      iVar12 = *(int *)(local_d8 + uVar50 * 8 + 4);
      lVar22 = (long)iVar12;
      uVar2 = uVar50 + 1;
      iVar14 = *(int *)(local_d8 + uVar2 * 8 + 4);
      lVar20 = (long)iVar14;
      iVar32 = *(int *)(param_2 + 0x28);
      if ((iVar12 <= iVar32) && (*(long *)(param_2 + 0x1d0) != 0)) {
        puVar3 = (ulong *)(*(long *)(param_2 + 0x1d0) + lVar22 * 0x10);
        uVar37 = *puVar3;
        fVar35 = *(float *)(puVar3 + 1);
      }
      lVar28 = lVar22 * 0x10;
      lVar30 = *(long *)(param_2 + 0x210);
      puVar4 = (undefined4 *)(lVar30 + lVar28);
      lVar25 = *(long *)(param_2 + 0x218);
      lVar27 = *(long *)(param_2 + 0x220);
      cVar13 = *(char *)(*(long *)(param_2 + 0xa0) + 0x753);
      puVar5 = (undefined4 *)(lVar25 + lVar28);
      puVar6 = (uint *)(lVar27 + lVar28);
      if (cVar13 == '\x02') {
        auVar60._0_4_ = puVar4[1];
        uVar42 = CONCAT44(*puVar5,*puVar4);
        uVar40 = *puVar6;
        auVar60._4_4_ = puVar5[1];
        auVar88._4_12_ = SUB1612(ZEXT816(0),4);
        auVar88._0_4_ = puVar6[1];
        uVar97 = puVar6[2];
        auVar60._8_8_ = auVar88._0_8_;
        fVar43 = *(float *)(param_2 + 0x370);
        fVar70 = *(float *)(param_2 + 0x374);
        fVar66 = *(float *)(param_2 + 0x378);
        uVar45 = CONCAT44(puVar5[2],puVar4[2]);
LAB_008ec62c:
        uVar73 = (ulong)uVar97;
        uVar49 = (ulong)uVar40;
        fVar69 = 0.0;
      }
      else {
        if (cVar13 != '\0') {
          auVar60._0_4_ = puVar4[1];
          uVar42 = CONCAT44(*puVar5,*puVar4);
          uVar40 = *puVar6;
          auVar60._4_4_ = puVar5[1];
          uVar97 = puVar6[2];
          auVar60._8_4_ = puVar6[1];
          auVar60._12_4_ = 0;
          fVar43 = (float)puVar4[3];
          fVar70 = (float)puVar5[3];
          uVar45 = CONCAT44(puVar5[2],puVar4[2]);
          fVar66 = (float)puVar6[3];
          goto LAB_008ec62c;
        }
        uVar49 = *(ulong *)(param_2 + 0x348);
        uVar42 = *(undefined8 *)(param_2 + 0x340);
        auVar60 = *(undefined1 (*) [16])(param_2 + 0x350);
        uVar73 = *(ulong *)(param_2 + 0x368);
        uVar45 = *(undefined8 *)(param_2 + 0x360);
        fVar43 = *(float *)(param_2 + 0x370);
        fVar70 = *(float *)(param_2 + 0x374);
        fVar66 = *(float *)(param_2 + 0x378);
        fVar69 = *(float *)(param_2 + 0x37c);
      }
      fVar48 = (float)uVar37;
      fVar102 = (float)(uVar37 >> 0x20);
      local_f0 = CONCAT44(fVar70 + (float)((ulong)uVar42 >> 0x20) * fVar48 + auVar60._4_4_ * fVar102
                                   + (float)((ulong)uVar45 >> 0x20) * fVar35,
                          fVar43 + (float)uVar42 * fVar48 + auVar60._0_4_ * fVar102 +
                                   (float)uVar45 * fVar35);
      uStack_e8 = CONCAT44(fVar69 + (float)(uVar49 >> 0x20) * fVar48 + auVar60._12_4_ * fVar102 +
                                    (float)(uVar73 >> 0x20) * fVar35,
                           fVar66 + (float)uVar49 * fVar48 + auVar60._8_4_ * fVar102 +
                                    (float)uVar73 * fVar35);
      uVar42 = local_f0;
      uVar37 = uStack_e8;
      if ((iVar14 <= iVar32) && (*(long *)(param_2 + 0x1d0) != 0)) {
        puVar31 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar20 * 0x10);
        uVar42 = *puVar31;
        uVar37 = (ulong)*(uint *)(puVar31 + 1);
      }
      lVar26 = lVar20 * 0x10;
      if (cVar13 == '\x02') {
        lVar23 = lVar20 * 0x10;
        uVar46 = CONCAT44(*(undefined4 *)(lVar25 + lVar26),*(undefined4 *)(lVar30 + lVar26));
        fVar70 = *(float *)(lVar27 + lVar26);
        fVar35 = *(float *)(lVar30 + lVar23 + 8);
        fVar69 = *(float *)(lVar27 + lVar23 + 4);
        fVar43 = *(float *)(lVar27 + lVar23 + 8);
        uVar72 = CONCAT44(*(undefined4 *)(lVar25 + lVar23 + 4),*(undefined4 *)(lVar30 + lVar23 + 4))
        ;
        fVar66 = *(float *)(lVar25 + lVar23 + 8);
        uVar45 = *(undefined8 *)(param_2 + 0x370);
        uVar41 = (undefined4)*(undefined8 *)(param_2 + 0x378);
LAB_008ec770:
        fVar67 = 0.0;
        fVar102 = 0.0;
        fVar48 = 0.0;
        auVar89._8_4_ = uVar41;
        auVar89._0_8_ = uVar45;
        auVar89._12_4_ = 0;
      }
      else {
        if (cVar13 != '\0') {
          lVar23 = lVar20 * 0x10;
          uVar46 = CONCAT44(*(undefined4 *)(lVar25 + lVar26),*(undefined4 *)(lVar30 + lVar26));
          fVar70 = *(float *)(lVar27 + lVar26);
          lVar30 = lVar30 + lVar23;
          fVar35 = *(float *)(lVar30 + 8);
          lVar25 = lVar25 + lVar23;
          lVar27 = lVar27 + lVar23;
          uVar72 = CONCAT44(*(undefined4 *)(lVar25 + 4),*(undefined4 *)(lVar30 + 4));
          fVar66 = *(float *)(lVar25 + 8);
          fVar69 = *(float *)(lVar27 + 4);
          fVar43 = *(float *)(lVar27 + 8);
          uVar45 = CONCAT44(*(undefined4 *)(lVar25 + 0xc),*(undefined4 *)(lVar30 + 0xc));
          uVar41 = *(undefined4 *)(lVar27 + 0xc);
          goto LAB_008ec770;
        }
        fVar70 = *(float *)(param_2 + 0x348);
        fVar102 = *(float *)(param_2 + 0x34c);
        uVar46 = *(undefined8 *)(param_2 + 0x340);
        fVar69 = *(float *)(param_2 + 0x358);
        fVar67 = *(float *)(param_2 + 0x35c);
        uVar72 = *(undefined8 *)(param_2 + 0x350);
        fVar35 = *(float *)(param_2 + 0x360);
        fVar66 = *(float *)(param_2 + 0x364);
        fVar43 = *(float *)(param_2 + 0x368);
        fVar48 = *(float *)(param_2 + 0x36c);
        auVar89 = *(undefined1 (*) [16])(param_2 + 0x370);
      }
      fVar98 = (float)uVar42;
      fVar44 = (float)((ulong)uVar42 >> 0x20);
      fVar47 = (float)uVar37;
      local_110 = CONCAT44(auVar89._4_4_ +
                           (float)((ulong)uVar46 >> 0x20) * fVar98 +
                           (float)((ulong)uVar72 >> 0x20) * fVar44 + fVar66 * fVar47,
                           auVar89._0_4_ +
                           (float)uVar46 * fVar98 + (float)uVar72 * fVar44 + fVar35 * fVar47);
      uStack_108 = CONCAT44(auVar89._12_4_ + fVar102 * fVar98 + fVar67 * fVar44 + fVar48 * fVar47,
                            auVar89._8_4_ + fVar70 * fVar98 + fVar69 * fVar44 + fVar43 * fVar47);
      if (*piVar21 - 1U < 2) {
        if (cVar13 == '\0') {
          uVar104 = *(ulong *)(param_2 + 0x358);
          uVar103 = *(undefined8 *)(param_2 + 0x350);
        }
        else {
          puVar7 = (undefined4 *)0x0;
          if (iVar12 <= iVar32) {
            puVar7 = puVar4;
          }
          puVar4 = (undefined4 *)0x0;
          if (iVar12 <= iVar32) {
            puVar4 = puVar5;
          }
          puVar9 = (uint *)0x0;
          if (iVar12 <= iVar32) {
            puVar9 = puVar6;
          }
          uVar103 = CONCAT44(puVar4[1],puVar7[1]);
          uVar104 = (ulong)puVar9[1];
        }
      }
      lVar30 = *(long *)(param_2 + 0xb0) + lVar22 * 0x20;
      puVar31 = (undefined8 *)(*(long *)(param_2 + 0x1f0) + lVar28);
      uStack_b8 = puVar31[1];
      local_c0 = *puVar31;
      puVar31 = (undefined8 *)(*(long *)(param_2 + 0x1e8) + lVar28);
      uStack_c8 = puVar31[1];
      local_d0 = *puVar31;
      FUN_008d65b4(*(undefined4 *)(lVar30 + 0xc),*(float *)(param_2 + 0x44) - *(float *)(lVar30 + 8)
                   ,*(undefined8 *)(param_2 + 0x98),&local_130,*(undefined8 *)(param_2 + 0x238),
                   &local_d0,&local_c0);
      uVar45 = *(undefined8 *)(*(long *)(param_2 + 0x78) + 0x148);
      uVar42 = *(undefined8 *)(*(long *)(param_2 + 0x78) + 0x140);
      fVar35 = (float)local_130 * (float)uVar42;
      local_130 = CONCAT44((float)((ulong)local_130 >> 0x20) * (float)((ulong)uVar42 >> 0x20),fVar35
                          );
      uStack_128 = CONCAT44((float)(uStack_128 >> 0x20) * (float)((ulong)uVar45 >> 0x20),
                            (float)uStack_128 * (float)uVar45);
      fVar35 = fVar105 * fVar35;
      if ((int)uVar10 < 1) {
        uVar42 = local_130;
        uVar37 = uStack_128;
        if ((iVar12 <= *(int *)(param_2 + 0x28)) && (*(long *)(param_2 + 0x1d0) != 0)) {
          puVar31 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar22 * 0x10);
          uVar42 = *puVar31;
          uVar37 = (ulong)*(uint *)(puVar31 + 1);
        }
        puVar4 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar28);
        cVar13 = *(char *)(*(long *)(param_2 + 0xa0) + 0x753);
        puVar5 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar28);
        puVar6 = (uint *)(*(long *)(param_2 + 0x220) + lVar28);
        if (cVar13 == '\x02') {
          auVar61._0_4_ = puVar4[1];
          uVar45 = CONCAT44(*puVar5,*puVar4);
          uVar40 = *puVar6;
          auVar61._4_4_ = puVar5[1];
          auVar90._4_12_ = SUB1612(ZEXT816(0),4);
          auVar90._0_4_ = puVar6[1];
          uVar97 = puVar6[2];
          auVar61._8_8_ = auVar90._0_8_;
          fVar43 = *(float *)(param_2 + 0x370);
          fVar70 = *(float *)(param_2 + 0x374);
          fVar66 = *(float *)(param_2 + 0x378);
          uVar46 = CONCAT44(puVar5[2],puVar4[2]);
LAB_008ecac4:
          uVar49 = (ulong)uVar97;
          uVar50 = (ulong)uVar40;
          fVar69 = 0.0;
        }
        else {
          if (cVar13 != '\0') {
            auVar61._0_4_ = puVar4[1];
            uVar45 = CONCAT44(*puVar5,*puVar4);
            uVar40 = *puVar6;
            auVar61._4_4_ = puVar5[1];
            uVar97 = puVar6[2];
            auVar61._8_4_ = puVar6[1];
            auVar61._12_4_ = 0;
            fVar43 = (float)puVar4[3];
            fVar70 = (float)puVar5[3];
            uVar46 = CONCAT44(puVar5[2],puVar4[2]);
            fVar66 = (float)puVar6[3];
            goto LAB_008ecac4;
          }
          uVar50 = *(ulong *)(param_2 + 0x348);
          uVar45 = *(undefined8 *)(param_2 + 0x340);
          auVar61 = *(undefined1 (*) [16])(param_2 + 0x350);
          uVar49 = *(ulong *)(param_2 + 0x368);
          uVar46 = *(undefined8 *)(param_2 + 0x360);
          fVar43 = *(float *)(param_2 + 0x370);
          fVar70 = *(float *)(param_2 + 0x374);
          fVar66 = *(float *)(param_2 + 0x378);
          fVar69 = *(float *)(param_2 + 0x37c);
        }
        fVar102 = (float)uVar42;
        fVar67 = (float)((ulong)uVar42 >> 0x20);
        fVar98 = (float)uVar37;
        fVar44 = (float)uVar45 * fVar102 + auVar61._0_4_ * fVar67 + (float)uVar46 * fVar98;
        fVar47 = (float)((ulong)uVar45 >> 0x20) * fVar102 + auVar61._4_4_ * fVar67 +
                 (float)((ulong)uVar46 >> 0x20) * fVar98;
        uVar42 = CONCAT44(fVar47,fVar44);
        fVar48 = (float)uVar50 * fVar102 + auVar61._8_4_ * fVar67 + (float)uVar49 * fVar98;
        fVar43 = fVar43 + fVar44;
        fVar70 = fVar70 + fVar47;
        local_f0 = CONCAT44(fVar70,fVar43);
        fVar66 = fVar66 + fVar48;
        fVar69 = fVar69 + (float)(uVar50 >> 0x20) * fVar102 + auVar61._12_4_ * fVar67 +
                          (float)(uVar49 >> 0x20) * fVar98;
        uStack_e8 = CONCAT44(fVar69,fVar66);
        if ((iVar14 <= *(int *)(param_2 + 0x28)) && (*(long *)(param_2 + 0x1d0) != 0)) {
          puVar31 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar20 * 0x10);
          uVar42 = *puVar31;
          fVar48 = *(float *)(puVar31 + 1);
        }
        lVar20 = lVar20 * 0x10;
        puVar4 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar20);
        puVar5 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar20);
        puVar7 = (undefined4 *)(*(long *)(param_2 + 0x220) + lVar20);
        if (cVar13 == '\x02') {
          auVar62._0_4_ = *puVar4;
          auVar62._4_4_ = *puVar5;
          auVar91._4_12_ = SUB1612(ZEXT816(0),4);
          auVar91._0_4_ = *puVar7;
          uVar45 = CONCAT44(puVar5[1],puVar4[1]);
          fVar47 = (float)puVar7[1];
          fVar74 = 0.0;
          fVar98 = (float)puVar7[2];
          auVar62._8_8_ = auVar91._0_8_;
          fVar102 = (float)puVar4[2];
          uVar46 = *(undefined8 *)(param_2 + 0x370);
          fVar67 = (float)puVar5[2];
          fVar44 = 0.0;
          uVar37 = *(ulong *)(param_2 + 0x378) & 0xffffffff;
        }
        else if (cVar13 == '\0') {
          auVar62 = *(undefined1 (*) [16])(param_2 + 0x340);
          fVar47 = *(float *)(param_2 + 0x358);
          fVar74 = *(float *)(param_2 + 0x35c);
          uVar45 = *(undefined8 *)(param_2 + 0x350);
          fVar102 = *(float *)(param_2 + 0x360);
          fVar67 = *(float *)(param_2 + 0x364);
          fVar98 = *(float *)(param_2 + 0x368);
          fVar44 = *(float *)(param_2 + 0x36c);
          uVar37 = *(ulong *)(param_2 + 0x378);
          uVar46 = *(undefined8 *)(param_2 + 0x370);
        }
        else {
          auVar62._0_4_ = *puVar4;
          auVar62._4_4_ = *puVar5;
          auVar92._4_12_ = SUB1612(ZEXT816(0),4);
          auVar92._0_4_ = *puVar7;
          auVar62._8_8_ = auVar92._0_8_;
          uVar45 = CONCAT44(puVar5[1],puVar4[1]);
          fVar47 = (float)puVar7[1];
          fVar98 = (float)puVar7[2];
          fVar74 = 0.0;
          fVar102 = (float)puVar4[2];
          uVar46 = CONCAT44(puVar5[3],puVar4[3]);
          fVar67 = (float)puVar5[2];
          fVar44 = 0.0;
          uVar37 = (ulong)(uint)puVar7[3];
        }
        fVar75 = (float)uVar42;
        fVar34 = (float)((ulong)uVar42 >> 0x20);
        fVar102 = (float)uVar46 + auVar62._0_4_ * fVar75 + (float)uVar45 * fVar34 + fVar102 * fVar48
        ;
        fVar67 = (float)((ulong)uVar46 >> 0x20) +
                 auVar62._4_4_ * fVar75 + (float)((ulong)uVar45 >> 0x20) * fVar34 + fVar67 * fVar48;
        local_110 = CONCAT44(fVar67,fVar102);
        fVar98 = (float)uVar37 + auVar62._8_4_ * fVar75 + fVar47 * fVar34 + fVar98 * fVar48;
        fVar48 = (float)(uVar37 >> 0x20) +
                 auVar62._12_4_ * fVar75 + fVar74 * fVar34 + fVar44 * fVar48;
        uStack_108 = CONCAT44(fVar48,fVar98);
        local_100 = CONCAT44(fVar67 - fVar70,fVar102 - fVar43);
        uStack_f8 = CONCAT44(fVar48 - fVar69,fVar98 - fVar66);
      }
      else {
        fVar66 = (float)local_f0;
        fVar43 = (float)((ulong)local_f0 >> 0x20);
        fVar70 = (float)uStack_e8;
        fVar69 = (float)(uStack_e8 >> 0x20);
        if (uVar50 == 0) {
          lVar20 = (long)*(int *)(local_d8 + 0x14);
          uVar42 = local_130;
          uVar37 = uStack_128;
          if ((*(int *)(local_d8 + 0x14) <= *(int *)(param_2 + 0x28)) &&
             (*(long *)(param_2 + 0x1d0) != 0)) {
            puVar31 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar20 * 0x10);
            uVar42 = *puVar31;
            uVar37 = (ulong)*(uint *)(puVar31 + 1);
          }
          lVar27 = lVar20 * 0x10;
          lVar22 = *(long *)(param_2 + 0x210);
          lVar30 = *(long *)(param_2 + 0x218);
          lVar25 = *(long *)(param_2 + 0x220);
          cVar13 = *(char *)(*(long *)(param_2 + 0xa0) + 0x753);
          if (cVar13 == '\x02') {
            lVar20 = lVar20 * 0x10;
            uVar45 = CONCAT44(*(undefined4 *)(lVar30 + lVar27),*(undefined4 *)(lVar22 + lVar27));
            fVar74 = *(float *)(lVar25 + lVar27);
            fVar102 = *(float *)(lVar22 + lVar20 + 8);
            fVar75 = *(float *)(lVar25 + lVar20 + 4);
            fVar67 = *(float *)(lVar30 + lVar20 + 8);
            uVar46 = CONCAT44(*(undefined4 *)(lVar30 + lVar20 + 4),
                              *(undefined4 *)(lVar22 + lVar20 + 4));
            fVar98 = *(float *)(lVar25 + lVar20 + 8);
            fVar44 = *(float *)(param_2 + 0x370);
            fVar47 = *(float *)(param_2 + 0x374);
            fVar48 = *(float *)(param_2 + 0x378);
LAB_008eccfc:
            fVar53 = 0.0;
            fVar38 = 0.0;
            fVar34 = 0.0;
            fVar51 = 0.0;
          }
          else {
            if (cVar13 != '\0') {
              lVar20 = lVar20 * 0x10;
              uVar45 = CONCAT44(*(undefined4 *)(lVar30 + lVar27),*(undefined4 *)(lVar22 + lVar27));
              fVar74 = *(float *)(lVar25 + lVar27);
              lVar22 = lVar22 + lVar20;
              fVar102 = *(float *)(lVar22 + 8);
              lVar30 = lVar30 + lVar20;
              lVar25 = lVar25 + lVar20;
              uVar46 = CONCAT44(*(undefined4 *)(lVar30 + 4),*(undefined4 *)(lVar22 + 4));
              fVar75 = *(float *)(lVar25 + 4);
              fVar67 = *(float *)(lVar30 + 8);
              fVar98 = *(float *)(lVar25 + 8);
              fVar44 = *(float *)(lVar22 + 0xc);
              fVar47 = *(float *)(lVar30 + 0xc);
              fVar48 = *(float *)(lVar25 + 0xc);
              goto LAB_008eccfc;
            }
            fVar74 = *(float *)(param_2 + 0x348);
            fVar38 = *(float *)(param_2 + 0x34c);
            uVar45 = *(undefined8 *)(param_2 + 0x340);
            fVar75 = *(float *)(param_2 + 0x358);
            fVar53 = *(float *)(param_2 + 0x35c);
            uVar46 = *(undefined8 *)(param_2 + 0x350);
            fVar102 = *(float *)(param_2 + 0x360);
            fVar67 = *(float *)(param_2 + 0x364);
            fVar98 = *(float *)(param_2 + 0x368);
            fVar34 = *(float *)(param_2 + 0x36c);
            fVar44 = *(float *)(param_2 + 0x370);
            fVar47 = *(float *)(param_2 + 0x374);
            fVar48 = *(float *)(param_2 + 0x378);
            fVar51 = *(float *)(param_2 + 0x37c);
          }
          fVar68 = (float)uVar42;
          fVar99 = (float)((ulong)uVar42 >> 0x20);
          fVar76 = (float)uVar37;
          uStack_f8 = CONCAT44(uStack_108._4_4_ - fVar69,(float)uStack_108 - fVar70);
          local_100 = CONCAT44(local_110._4_4_ - fVar43,(float)local_110 - fVar66);
          auVar63._8_4_ = 0x3f000000;
          auVar63._0_8_ = 0x3f0000003f000000;
          auVar63._12_4_ = 0x3f000000;
          fVar66 = (fVar44 + (float)uVar45 * fVar68 + (float)uVar46 * fVar99 + fVar102 * fVar76) -
                   fVar66;
          fVar43 = (fVar47 + (float)((ulong)uVar45 >> 0x20) * fVar68 +
                             (float)((ulong)uVar46 >> 0x20) * fVar99 + fVar67 * fVar76) - fVar43;
          fVar70 = (fVar48 + fVar74 * fVar68 + fVar75 * fVar99 + fVar98 * fVar76) - fVar70;
          fVar69 = (fVar51 + fVar38 * fVar68 + fVar53 * fVar99 + fVar34 * fVar76) - fVar69;
        }
        else {
          iVar32 = *(int *)(local_d8 + uVar50 * 8 + -4);
          lVar20 = (long)iVar32;
          lVar22 = lVar20 * 0x10;
          if (uVar50 != uVar17) {
            iVar12 = *(int *)(local_d8 + (ulong)((int)uVar50 + 2) * 8 + 4);
            lVar30 = (long)iVar12;
            uVar42 = local_130;
            uVar37 = uStack_128;
            if ((iVar32 <= *(int *)(param_2 + 0x28)) && (*(long *)(param_2 + 0x1d0) != 0)) {
              puVar31 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar20 * 0x10);
              uVar42 = *puVar31;
              uVar37 = (ulong)*(uint *)(puVar31 + 1);
            }
            fVar48 = (float)uVar37;
            lVar20 = *(long *)(param_2 + 0x210);
            puVar4 = (undefined4 *)(lVar20 + lVar22);
            lVar25 = *(long *)(param_2 + 0x218);
            lVar27 = *(long *)(param_2 + 0x220);
            puVar5 = (undefined4 *)(lVar25 + lVar22);
            puVar6 = (uint *)(lVar27 + lVar22);
            cVar13 = *(char *)(*(long *)(param_2 + 0xa0) + 0x753);
            if (cVar13 == '\x02') {
              fVar102 = (float)puVar4[1];
              uVar45 = CONCAT44(*puVar5,*puVar4);
              uVar40 = *puVar6;
              fVar44 = (float)puVar4[2];
              fVar67 = (float)puVar5[1];
              fVar98 = (float)puVar6[1];
              fVar47 = (float)puVar5[2];
              fVar74 = (float)puVar6[2];
              uVar46 = *(undefined8 *)(param_2 + 0x370);
              uVar37 = *(ulong *)(param_2 + 0x378) & 0xffffffff;
LAB_008ecf0c:
              uVar50 = (ulong)uVar40;
              fVar34 = 0.0;
              fVar75 = 0.0;
            }
            else {
              if (cVar13 != '\0') {
                fVar102 = (float)puVar4[1];
                uVar45 = CONCAT44(*puVar5,*puVar4);
                uVar40 = *puVar6;
                fVar67 = (float)puVar5[1];
                fVar98 = (float)puVar6[1];
                fVar74 = (float)puVar6[2];
                fVar44 = (float)puVar4[2];
                uVar46 = CONCAT44(puVar5[3],puVar4[3]);
                fVar47 = (float)puVar5[2];
                uVar37 = (ulong)puVar6[3];
                goto LAB_008ecf0c;
              }
              uVar50 = *(ulong *)(param_2 + 0x348);
              uVar45 = *(undefined8 *)(param_2 + 0x340);
              fVar102 = *(float *)(param_2 + 0x350);
              fVar67 = *(float *)(param_2 + 0x354);
              fVar98 = *(float *)(param_2 + 0x358);
              fVar75 = *(float *)(param_2 + 0x35c);
              fVar44 = *(float *)(param_2 + 0x360);
              fVar47 = *(float *)(param_2 + 0x364);
              fVar74 = *(float *)(param_2 + 0x368);
              fVar34 = *(float *)(param_2 + 0x36c);
              uVar37 = *(ulong *)(param_2 + 0x378);
              uVar46 = *(undefined8 *)(param_2 + 0x370);
            }
            fVar51 = (float)uVar42;
            fVar38 = (float)((ulong)uVar42 >> 0x20);
            fVar44 = fVar44 * fVar48;
            fVar47 = fVar47 * fVar48;
            fVar74 = fVar74 * fVar48;
            fVar34 = fVar34 * fVar48;
            if ((iVar12 <= *(int *)(param_2 + 0x28)) && (*(long *)(param_2 + 0x1d0) != 0)) {
              puVar31 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar30 * 0x10);
              uVar42 = *puVar31;
              fVar48 = *(float *)(puVar31 + 1);
            }
            lVar22 = lVar30 * 0x10;
            if (cVar13 == '\x02') {
              fVar53 = *(float *)(lVar20 + lVar22);
              lVar30 = lVar30 * 0x10;
              fVar68 = *(float *)(lVar25 + lVar22);
              fVar99 = *(float *)(lVar27 + lVar22);
              fVar76 = *(float *)(lVar20 + lVar30 + 4);
              fVar100 = *(float *)(lVar27 + lVar30 + 4);
              uVar72 = CONCAT44(*(undefined4 *)(lVar25 + lVar30 + 8),
                                *(undefined4 *)(lVar20 + lVar30 + 8));
              fVar95 = *(float *)(lVar25 + lVar30 + 4);
              uVar40 = *(uint *)(lVar27 + lVar30 + 8);
              uVar101 = *(undefined8 *)(param_2 + 0x370);
              uVar49 = *(ulong *)(param_2 + 0x378) & 0xffffffff;
LAB_008ed04c:
              uVar73 = (ulong)uVar40;
              fVar96 = 0.0;
              fVar71 = 0.0;
            }
            else {
              if (cVar13 != '\0') {
                fVar53 = *(float *)(lVar20 + lVar22);
                lVar30 = lVar30 * 0x10;
                fVar68 = *(float *)(lVar25 + lVar22);
                fVar99 = *(float *)(lVar27 + lVar22);
                lVar20 = lVar20 + lVar30;
                fVar76 = *(float *)(lVar20 + 4);
                lVar25 = lVar25 + lVar30;
                lVar27 = lVar27 + lVar30;
                fVar95 = *(float *)(lVar25 + 4);
                uVar72 = CONCAT44(*(undefined4 *)(lVar25 + 8),*(undefined4 *)(lVar20 + 8));
                fVar100 = *(float *)(lVar27 + 4);
                uVar40 = *(uint *)(lVar27 + 8);
                uVar49 = (ulong)*(uint *)(lVar27 + 0xc);
                uVar101 = CONCAT44(*(undefined4 *)(lVar25 + 0xc),*(undefined4 *)(lVar20 + 0xc));
                goto LAB_008ed04c;
              }
              fVar53 = *(float *)(param_2 + 0x340);
              fVar68 = *(float *)(param_2 + 0x344);
              fVar99 = *(float *)(param_2 + 0x348);
              fVar71 = *(float *)(param_2 + 0x34c);
              fVar76 = *(float *)(param_2 + 0x350);
              fVar95 = *(float *)(param_2 + 0x354);
              fVar100 = *(float *)(param_2 + 0x358);
              fVar96 = *(float *)(param_2 + 0x35c);
              uVar73 = *(ulong *)(param_2 + 0x368);
              uVar72 = *(undefined8 *)(param_2 + 0x360);
              uVar49 = *(ulong *)(param_2 + 0x378);
              uVar101 = *(undefined8 *)(param_2 + 0x370);
            }
            fVar36 = (float)uVar42;
            fVar39 = (float)((ulong)uVar42 >> 0x20);
            local_100 = CONCAT44((local_110._4_4_ -
                                 ((float)((ulong)uVar46 >> 0x20) +
                                 (float)((ulong)uVar45 >> 0x20) * fVar51 + fVar67 * fVar38 + fVar47)
                                 ) * 0.5,((float)local_110 -
                                         ((float)uVar46 +
                                         (float)uVar45 * fVar51 + fVar102 * fVar38 + fVar44)) * 0.5)
            ;
            uStack_f8 = CONCAT44((uStack_108._4_4_ -
                                 ((float)(uVar37 >> 0x20) +
                                 (float)(uVar50 >> 0x20) * fVar51 + fVar75 * fVar38 + fVar34)) * 0.5
                                 ,((float)uStack_108 -
                                  ((float)uVar37 + (float)uVar50 * fVar51 + fVar98 * fVar38 + fVar74
                                  )) * 0.5);
            local_120 = CONCAT44((((float)((ulong)uVar101 >> 0x20) +
                                  fVar68 * fVar36 + fVar95 * fVar39 +
                                  (float)((ulong)uVar72 >> 0x20) * fVar48) - fVar43) * 0.5,
                                 (((float)uVar101 +
                                  fVar53 * fVar36 + fVar76 * fVar39 + (float)uVar72 * fVar48) -
                                 fVar66) * 0.5);
            uStack_118 = CONCAT44((((float)(uVar49 >> 0x20) +
                                   fVar71 * fVar36 + fVar96 * fVar39 +
                                   (float)(uVar73 >> 0x20) * fVar48) - fVar69) * 0.5,
                                  (((float)uVar49 +
                                   fVar99 * fVar36 + fVar100 * fVar39 + (float)uVar73 * fVar48) -
                                  fVar70) * 0.5);
            goto LAB_008ed088;
          }
          uVar42 = local_130;
          uVar37 = uStack_128;
          if ((iVar32 <= *(int *)(param_2 + 0x28)) && (*(long *)(param_2 + 0x1d0) != 0)) {
            puVar31 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar20 * 0x10);
            uVar42 = *puVar31;
            uVar37 = (ulong)*(uint *)(puVar31 + 1);
          }
          lVar30 = *(long *)(param_2 + 0x210);
          lVar25 = *(long *)(param_2 + 0x218);
          lVar27 = *(long *)(param_2 + 0x220);
          cVar13 = *(char *)(*(long *)(param_2 + 0xa0) + 0x753);
          if (cVar13 == '\x02') {
            lVar20 = lVar20 * 0x10;
            uVar45 = CONCAT44(*(undefined4 *)(lVar25 + lVar22),*(undefined4 *)(lVar30 + lVar22));
            fVar74 = *(float *)(lVar27 + lVar22);
            fVar102 = *(float *)(lVar30 + lVar20 + 8);
            fVar75 = *(float *)(lVar27 + lVar20 + 4);
            fVar67 = *(float *)(lVar25 + lVar20 + 8);
            uVar46 = CONCAT44(*(undefined4 *)(lVar25 + lVar20 + 4),
                              *(undefined4 *)(lVar30 + lVar20 + 4));
            fVar98 = *(float *)(lVar27 + lVar20 + 8);
            fVar44 = *(float *)(param_2 + 0x370);
            fVar47 = *(float *)(param_2 + 0x374);
            fVar48 = *(float *)(param_2 + 0x378);
LAB_008ece0c:
            fVar53 = 0.0;
            fVar38 = 0.0;
            fVar34 = 0.0;
            fVar51 = 0.0;
          }
          else {
            if (cVar13 != '\0') {
              lVar20 = lVar20 * 0x10;
              uVar45 = CONCAT44(*(undefined4 *)(lVar25 + lVar22),*(undefined4 *)(lVar30 + lVar22));
              fVar74 = *(float *)(lVar27 + lVar22);
              lVar30 = lVar30 + lVar20;
              fVar102 = *(float *)(lVar30 + 8);
              lVar25 = lVar25 + lVar20;
              lVar27 = lVar27 + lVar20;
              uVar46 = CONCAT44(*(undefined4 *)(lVar25 + 4),*(undefined4 *)(lVar30 + 4));
              fVar75 = *(float *)(lVar27 + 4);
              fVar67 = *(float *)(lVar25 + 8);
              fVar98 = *(float *)(lVar27 + 8);
              fVar44 = *(float *)(lVar30 + 0xc);
              fVar47 = *(float *)(lVar25 + 0xc);
              fVar48 = *(float *)(lVar27 + 0xc);
              goto LAB_008ece0c;
            }
            fVar74 = *(float *)(param_2 + 0x348);
            fVar38 = *(float *)(param_2 + 0x34c);
            uVar45 = *(undefined8 *)(param_2 + 0x340);
            fVar75 = *(float *)(param_2 + 0x358);
            fVar53 = *(float *)(param_2 + 0x35c);
            uVar46 = *(undefined8 *)(param_2 + 0x350);
            fVar102 = *(float *)(param_2 + 0x360);
            fVar67 = *(float *)(param_2 + 0x364);
            fVar98 = *(float *)(param_2 + 0x368);
            fVar34 = *(float *)(param_2 + 0x36c);
            fVar44 = *(float *)(param_2 + 0x370);
            fVar47 = *(float *)(param_2 + 0x374);
            fVar48 = *(float *)(param_2 + 0x378);
            fVar51 = *(float *)(param_2 + 0x37c);
          }
          fVar68 = (float)uVar42;
          fVar99 = (float)((ulong)uVar42 >> 0x20);
          fVar76 = (float)uVar37;
          fVar44 = fVar44 + (float)uVar45 * fVar68 + (float)uVar46 * fVar99 + fVar102 * fVar76;
          fVar47 = fVar47 + (float)((ulong)uVar45 >> 0x20) * fVar68 +
                            (float)((ulong)uVar46 >> 0x20) * fVar99 + fVar67 * fVar76;
          fVar48 = fVar48 + fVar74 * fVar68 + fVar75 * fVar99 + fVar98 * fVar76;
          fVar51 = fVar51 + fVar38 * fVar68 + fVar53 * fVar99 + fVar34 * fVar76;
          local_100 = CONCAT44((local_110._4_4_ - fVar47) * 0.5,((float)local_110 - fVar44) * 0.5);
          uStack_f8 = CONCAT44((uStack_108._4_4_ - fVar51) * 0.5,((float)uStack_108 - fVar48) * 0.5)
          ;
          fVar66 = (fVar66 - (float)local_110) + (fVar66 - fVar44);
          fVar43 = (fVar43 - local_110._4_4_) + (fVar43 - fVar47);
          fVar70 = (fVar70 - (float)uStack_108) + (fVar70 - fVar48);
          fVar69 = (fVar69 - uStack_108._4_4_) + (fVar69 - fVar51);
          auVar63 = NEON_fmov(0xbe800000,4);
        }
        local_120 = CONCAT44(fVar43 * auVar63._4_4_,fVar66 * auVar63._0_4_);
        uStack_118 = CONCAT44(fVar69 * auVar63._12_4_,fVar70 * auVar63._8_4_);
      }
LAB_008ed088:
      iVar32 = (int)uVar33;
      puVar24 = puVar18 + (long)iVar32 * 0x14;
      puVar31 = puVar18 + ((long)(iVar32 * 2) | 1U) * 10;
      *puVar24 = local_f0;
      *(int *)(puVar24 + 1) = (int)uStack_e8;
      *puVar31 = local_f0;
      *(int *)(puVar31 + 1) = (int)uStack_e8;
      puVar24[2] = local_100;
      *(int *)(puVar24 + 3) = (int)uStack_f8;
      puVar31[2] = local_100;
      *(int *)(puVar31 + 3) = (int)uStack_f8;
      fVar66 = (float)iVar32;
      uVar40 = iVar32 + 1;
      fVar43 = fVar66 / (float)(iVar8 + -1);
      puVar24[4] = uVar103;
      uVar41 = (undefined4)uVar104;
      *(undefined4 *)(puVar24 + 5) = uVar41;
      puVar31[4] = uVar103;
      *(undefined4 *)(puVar31 + 5) = uVar41;
      *(float *)((long)puVar24 + 0xc) = -fVar35;
      *(float *)((long)puVar31 + 0xc) = fVar35;
      *(float *)((long)puVar24 + 0x1c) = fVar43;
      *(float *)((long)puVar31 + 0x1c) = fVar43;
      *(float *)((long)puVar24 + 0x2c) = fVar66;
      *(float *)((long)puVar31 + 0x2c) = fVar66;
      *(int *)(lVar29 + 0x24) = *(int *)(lVar29 + 0x24) + 2;
      if (0 < (int)uVar10) {
        uVar97 = 0;
        iVar32 = iVar32 * 2;
        do {
          uVar1 = uVar97 + 1;
          fVar66 = fVar52 * (float)(int)uVar1;
          fVar43 = 1.0 - fVar66;
          uVar42 = CONCAT44(local_100._4_4_ * fVar43 + local_120._4_4_ * fVar66,
                            (float)local_100 * fVar43 + (float)local_120 * fVar66);
          fVar66 = (float)uStack_f8 * fVar43 + (float)uStack_118 * fVar66;
          FUN_008d46b0(&local_c0,&local_f0,&local_100,&local_110,&local_120);
          puVar24 = puVar18 + (long)(iVar32 + 2) * 10;
          fVar43 = (float)(int)(uVar40 + uVar97);
          puVar31 = puVar18 + (long)(iVar32 + 3) * 10;
          *puVar24 = local_c0;
          *(int *)(puVar24 + 1) = (int)uStack_b8;
          *puVar31 = local_c0;
          *(int *)(puVar31 + 1) = (int)uStack_b8;
          puVar24[2] = uVar42;
          *(float *)(puVar24 + 3) = fVar66;
          puVar31[2] = uVar42;
          *(float *)(puVar31 + 3) = fVar66;
          fVar66 = fVar43 / (float)(iVar8 + -1);
          *(undefined4 *)(puVar24 + 5) = uVar41;
          *(float *)((long)puVar24 + 0x2c) = fVar43;
          puVar24[4] = uVar103;
          puVar31[4] = uVar103;
          *(undefined4 *)(puVar31 + 5) = uVar41;
          *(float *)((long)puVar31 + 0x2c) = fVar43;
          *(float *)((long)puVar24 + 0xc) = -fVar35;
          *(float *)((long)puVar31 + 0xc) = fVar35;
          *(float *)((long)puVar24 + 0x1c) = fVar66;
          *(float *)((long)puVar31 + 0x1c) = fVar66;
          *(int *)(lVar29 + 0x24) = *(int *)(lVar29 + 0x24) + 2;
          uVar97 = uVar1;
          iVar32 = iVar32 + 2;
        } while (uVar10 != uVar1);
        uVar40 = uVar40 + uVar1;
      }
      uVar37 = (ulong)(uint)fVar66;
      uVar33 = (ulong)uVar40;
      uVar42 = 0;
      uVar50 = uVar2;
    } while (uVar2 != uVar16);
  }
  if (local_94 < 2) goto LAB_008ed794;
  local_f0 = 0;
  uStack_e8 = 0;
  iVar32 = *(int *)(local_d8 + (long)(int)uVar16 * 8 + 4);
  lVar22 = (long)iVar32;
  lVar20 = lVar22 * 0x10;
  if (*piVar21 - 1U < 2) {
    if (*(char *)(*(long *)(param_2 + 0xa0) + 0x753) == '\0') {
      uVar41 = (undefined4)*(undefined8 *)(param_2 + 0x358);
      uVar42 = *(undefined8 *)(param_2 + 0x350);
    }
    else {
      iVar12 = *(int *)(param_2 + 0x28);
      lVar30 = 0;
      if (iVar32 <= iVar12) {
        lVar30 = *(long *)(param_2 + 0x210) + lVar20;
      }
      lVar25 = 0;
      if (iVar32 <= iVar12) {
        lVar25 = *(long *)(param_2 + 0x218) + lVar20;
      }
      uVar42 = CONCAT44(*(undefined4 *)(lVar25 + 4),*(undefined4 *)(lVar30 + 4));
      lVar30 = 0;
      if (iVar32 <= iVar12) {
        lVar30 = *(long *)(param_2 + 0x220) + lVar20;
      }
      uVar41 = *(undefined4 *)(lVar30 + 4);
    }
  }
  else {
    uVar42 = 0;
    uVar41 = 0;
  }
  lVar30 = *(long *)(param_2 + 0xb0) + lVar22 * 0x20;
  puVar31 = (undefined8 *)(*(long *)(param_2 + 0x1f0) + lVar20);
  uStack_b8 = puVar31[1];
  local_c0 = *puVar31;
  puVar31 = (undefined8 *)(*(long *)(param_2 + 0x1e8) + lVar20);
  uStack_c8 = puVar31[1];
  local_d0 = *puVar31;
  FUN_008d65b4(*(undefined4 *)(lVar30 + 0xc),*(float *)(param_2 + 0x44) - *(float *)(lVar30 + 8),
               *(undefined8 *)(param_2 + 0x98),&local_f0,*(undefined8 *)(param_2 + 0x238),&local_d0,
               &local_c0);
  uVar37 = *(ulong *)(*(long *)(param_2 + 0x78) + 0x148);
  uVar103 = *(undefined8 *)(*(long *)(param_2 + 0x78) + 0x140);
  fVar35 = (float)local_f0 * (float)uVar103;
  local_f0 = CONCAT44((float)((ulong)local_f0 >> 0x20) * (float)((ulong)uVar103 >> 0x20),fVar35);
  uStack_e8 = CONCAT44((float)(uStack_e8 >> 0x20) * (float)(uVar37 >> 0x20),
                       (float)uStack_e8 * (float)uVar37);
  iVar12 = *(int *)(param_2 + 0x28);
  if ((iVar32 <= iVar12) && (*(long *)(param_2 + 0x1d0) != 0)) {
    puVar31 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar22 * 0x10);
    uVar103 = *puVar31;
    uVar37 = (ulong)*(uint *)(puVar31 + 1);
  }
  lVar22 = *(long *)(param_2 + 0x210);
  puVar4 = (undefined4 *)(lVar22 + lVar20);
  lVar30 = *(long *)(param_2 + 0x218);
  lVar25 = *(long *)(param_2 + 0x220);
  cVar13 = *(char *)(*(long *)(param_2 + 0xa0) + 0x753);
  puVar5 = (undefined4 *)(lVar30 + lVar20);
  puVar7 = (undefined4 *)(lVar25 + lVar20);
  if (cVar13 == '\x02') {
    auVar64._0_4_ = *puVar4;
    auVar64._4_4_ = *puVar5;
    auVar93._4_12_ = SUB1612(ZEXT816(0),4);
    auVar93._0_4_ = *puVar7;
    uVar45 = CONCAT44(puVar5[1],puVar4[1]);
    fVar70 = (float)puVar7[1];
    auVar64._8_8_ = auVar93._0_8_;
    fVar52 = (float)puVar4[2];
    fVar43 = (float)puVar7[2];
    fVar66 = (float)puVar5[2];
    uVar46 = *(undefined8 *)(param_2 + 0x370);
    uVar33 = *(ulong *)(param_2 + 0x378) & 0xffffffff;
LAB_008ed428:
    fVar48 = 0.0;
    fVar69 = 0.0;
  }
  else {
    if (cVar13 != '\0') {
      auVar64._0_4_ = *puVar4;
      auVar64._4_4_ = *puVar5;
      auVar94._4_12_ = SUB1612(ZEXT816(0),4);
      auVar94._0_4_ = *puVar7;
      auVar64._8_8_ = auVar94._0_8_;
      uVar45 = CONCAT44(puVar5[1],puVar4[1]);
      fVar70 = (float)puVar7[1];
      fVar43 = (float)puVar7[2];
      fVar52 = (float)puVar4[2];
      uVar46 = CONCAT44(puVar5[3],puVar4[3]);
      uVar33 = (ulong)(uint)puVar7[3];
      fVar66 = (float)puVar5[2];
      goto LAB_008ed428;
    }
    auVar64 = *(undefined1 (*) [16])(param_2 + 0x340);
    fVar70 = *(float *)(param_2 + 0x358);
    fVar48 = *(float *)(param_2 + 0x35c);
    uVar45 = *(undefined8 *)(param_2 + 0x350);
    fVar52 = *(float *)(param_2 + 0x360);
    fVar66 = *(float *)(param_2 + 0x364);
    fVar43 = *(float *)(param_2 + 0x368);
    fVar69 = *(float *)(param_2 + 0x36c);
    uVar33 = *(ulong *)(param_2 + 0x378);
    uVar46 = *(undefined8 *)(param_2 + 0x370);
  }
  fVar102 = (float)uVar103;
  fVar67 = (float)((ulong)uVar103 >> 0x20);
  fVar98 = (float)uVar37;
  auVar55._0_4_ = auVar64._0_4_ * fVar102 + (float)uVar45 * fVar67 + fVar52 * fVar98;
  auVar55._4_4_ =
       auVar64._4_4_ * fVar102 + (float)((ulong)uVar45 >> 0x20) * fVar67 + fVar66 * fVar98;
  auVar55._8_4_ = auVar64._8_4_ * fVar102 + fVar70 * fVar67 + fVar43 * fVar98;
  uVar103 = CONCAT44((float)((ulong)uVar46 >> 0x20) + auVar55._4_4_,(float)uVar46 + auVar55._0_4_);
  fVar52 = (float)uVar33 + auVar55._8_4_;
  uVar37 = CONCAT44((float)(uVar33 >> 0x20) +
                    auVar64._12_4_ * fVar102 + fVar48 * fVar67 + fVar69 * fVar98,fVar52);
  if ((uVar11 & 0xfffffffd) == 0) {
    iVar32 = *(int *)(local_d8 + (long)(int)uVar17 * 8 + 4);
    lVar20 = (long)iVar32;
    if ((iVar32 <= iVar12) && (*(long *)(param_2 + 0x1d0) != 0)) {
      auVar55 = *(undefined1 (*) [12])(*(long *)(param_2 + 0x1d0) + lVar20 * 0x10);
    }
    lVar27 = lVar20 * 0x10;
    if (cVar13 == '\x02') {
      lVar20 = lVar20 * 0x10;
      uVar45 = CONCAT44(*(undefined4 *)(lVar30 + lVar27),*(undefined4 *)(lVar22 + lVar27));
      fVar66 = *(float *)(lVar25 + lVar27);
      uVar46 = CONCAT44(*(undefined4 *)(lVar30 + lVar20 + 4),*(undefined4 *)(lVar22 + lVar20 + 4));
      fVar43 = *(float *)(lVar25 + lVar20 + 4);
      auVar77._4_4_ = *(undefined4 *)(lVar30 + lVar20 + 8);
      auVar77._0_4_ = *(undefined4 *)(lVar22 + lVar20 + 8);
      auVar77._8_4_ = *(undefined4 *)(lVar25 + lVar20 + 8);
      uVar72 = *(undefined8 *)(param_2 + 0x370);
      fVar70 = (float)*(undefined8 *)(param_2 + 0x378);
    }
    else if (cVar13 == '\0') {
      fVar66 = *(float *)(param_2 + 0x348);
      uVar45 = *(undefined8 *)(param_2 + 0x340);
      fVar43 = (float)*(undefined8 *)(param_2 + 0x358);
      uVar46 = *(undefined8 *)(param_2 + 0x350);
      auVar77 = SUB1612(*(undefined1 (*) [16])(param_2 + 0x360),0);
      fVar70 = (float)*(undefined8 *)(param_2 + 0x378);
      uVar72 = *(undefined8 *)(param_2 + 0x370);
    }
    else {
      lVar20 = lVar20 * 0x10;
      uVar45 = CONCAT44(*(undefined4 *)(lVar30 + lVar27),*(undefined4 *)(lVar22 + lVar27));
      fVar66 = *(float *)(lVar25 + lVar27);
      lVar22 = lVar22 + lVar20;
      lVar30 = lVar30 + lVar20;
      lVar25 = lVar25 + lVar20;
      uVar46 = CONCAT44(*(undefined4 *)(lVar30 + 4),*(undefined4 *)(lVar22 + 4));
      fVar43 = *(float *)(lVar25 + 4);
      auVar77._4_4_ = *(undefined4 *)(lVar30 + 8);
      auVar77._0_4_ = *(undefined4 *)(lVar22 + 8);
      auVar77._8_4_ = *(undefined4 *)(lVar25 + 8);
      uVar72 = CONCAT44(*(undefined4 *)(lVar30 + 0xc),*(undefined4 *)(lVar22 + 0xc));
      fVar70 = *(float *)(lVar25 + 0xc);
    }
    fVar69 = auVar55._0_4_;
    fVar48 = auVar55._4_4_;
    fVar102 = auVar55._8_4_;
    auVar56._0_4_ =
         (float)uVar72 + (float)uVar45 * fVar69 + (float)uVar46 * fVar48 + auVar77._0_4_ * fVar102;
    auVar56._4_4_ =
         (float)((ulong)uVar72 >> 0x20) +
         (float)((ulong)uVar45 >> 0x20) * fVar69 + (float)((ulong)uVar46 >> 0x20) * fVar48 +
         auVar77._4_4_ * fVar102;
    auVar56._8_4_ = fVar70 + fVar66 * fVar69 + fVar43 * fVar48 + auVar77._8_4_ * fVar102;
    uVar45 = uVar103;
  }
  else {
    if (uVar11 != 1) goto LAB_008ed794;
    lVar20 = (long)*(int *)(local_d8 + 4);
    if ((*(int *)(local_d8 + 4) <= iVar12) && (*(long *)(param_2 + 0x1d0) != 0)) {
      auVar55 = *(undefined1 (*) [12])(*(long *)(param_2 + 0x1d0) + lVar20 * 0x10);
    }
    lVar27 = lVar20 * 0x10;
    if (cVar13 == '\x02') {
      lVar20 = lVar20 * 0x10;
      uVar45 = CONCAT44(*(undefined4 *)(lVar30 + lVar27),*(undefined4 *)(lVar22 + lVar27));
      fVar69 = *(float *)(lVar25 + lVar27);
      fVar66 = *(float *)(lVar22 + lVar20 + 8);
      uVar46 = CONCAT44(*(undefined4 *)(lVar30 + lVar20 + 4),*(undefined4 *)(lVar22 + lVar20 + 4));
      fVar48 = *(float *)(lVar25 + lVar20 + 4);
      fVar43 = *(float *)(lVar30 + lVar20 + 8);
      fVar70 = *(float *)(lVar25 + lVar20 + 8);
      uVar72 = *(undefined8 *)(param_2 + 0x370);
      fVar102 = (float)*(undefined8 *)(param_2 + 0x378);
    }
    else if (cVar13 == '\0') {
      fVar69 = *(float *)(param_2 + 0x348);
      uVar45 = *(undefined8 *)(param_2 + 0x340);
      fVar48 = (float)*(undefined8 *)(param_2 + 0x358);
      uVar46 = *(undefined8 *)(param_2 + 0x350);
      fVar66 = *(float *)(param_2 + 0x360);
      fVar43 = *(float *)(param_2 + 0x364);
      fVar70 = *(float *)(param_2 + 0x368);
      fVar102 = (float)*(undefined8 *)(param_2 + 0x378);
      uVar72 = *(undefined8 *)(param_2 + 0x370);
    }
    else {
      lVar20 = lVar20 * 0x10;
      uVar45 = CONCAT44(*(undefined4 *)(lVar30 + lVar27),*(undefined4 *)(lVar22 + lVar27));
      fVar69 = *(float *)(lVar25 + lVar27);
      lVar22 = lVar22 + lVar20;
      fVar66 = *(float *)(lVar22 + 8);
      lVar30 = lVar30 + lVar20;
      lVar25 = lVar25 + lVar20;
      uVar46 = CONCAT44(*(undefined4 *)(lVar30 + 4),*(undefined4 *)(lVar22 + 4));
      fVar48 = *(float *)(lVar25 + 4);
      fVar43 = *(float *)(lVar30 + 8);
      fVar70 = *(float *)(lVar25 + 8);
      uVar72 = CONCAT44(*(undefined4 *)(lVar30 + 0xc),*(undefined4 *)(lVar22 + 0xc));
      fVar102 = *(float *)(lVar25 + 0xc);
    }
    fVar67 = auVar55._0_4_;
    fVar98 = auVar55._4_4_;
    fVar44 = auVar55._8_4_;
    auVar65._8_8_ = uVar37;
    auVar65._0_8_ = uVar103;
    auVar56 = auVar65._0_12_;
    uVar37 = (ulong)(uint)(fVar102 + fVar69 * fVar67 + fVar48 * fVar98 + fVar70 * fVar44);
    uVar45 = CONCAT44((float)((ulong)uVar72 >> 0x20) +
                      (float)((ulong)uVar45 >> 0x20) * fVar67 +
                      (float)((ulong)uVar46 >> 0x20) * fVar98 + fVar43 * fVar44,
                      (float)uVar72 +
                      (float)uVar45 * fVar67 + (float)uVar46 * fVar98 + fVar66 * fVar44);
  }
  puVar31 = puVar18 + (long)(int)uVar40 * 0x14;
  *puVar31 = uVar103;
  *(float *)(puVar31 + 1) = fVar52;
  uVar45 = CONCAT44((float)((ulong)uVar45 >> 0x20) - auVar56._4_4_,(float)uVar45 - auVar56._0_4_);
  fVar66 = (float)uVar37 - auVar56._8_4_;
  puVar18 = puVar18 + ((long)(int)(uVar40 << 1) | 1U) * 10;
  *puVar18 = uVar103;
  *(float *)(puVar18 + 1) = fVar52;
  fVar105 = fVar105 * fVar35;
  puVar31[2] = uVar45;
  *(float *)(puVar31 + 3) = fVar66;
  puVar18[2] = uVar45;
  *(float *)(puVar18 + 3) = fVar66;
  puVar31[4] = uVar42;
  *(undefined4 *)(puVar31 + 5) = uVar41;
  puVar18[4] = uVar42;
  *(undefined4 *)(puVar18 + 5) = uVar41;
  *(float *)((long)puVar31 + 0xc) = -fVar105;
  *(float *)((long)puVar18 + 0xc) = fVar105;
  fVar35 = (float)(int)uVar40;
  fVar105 = fVar35 / (float)(iVar8 + -1);
  *(float *)((long)puVar31 + 0x1c) = fVar105;
  *(float *)((long)puVar18 + 0x1c) = fVar105;
  *(float *)((long)puVar31 + 0x2c) = fVar35;
  *(float *)((long)puVar18 + 0x2c) = fVar35;
  *(int *)(lVar29 + 0x24) = *(int *)(lVar29 + 0x24) + 2;
LAB_008ed794:
  FUN_008ee7c8(param_2 + 0x7a8);
  return;
}


