/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008cfe4c; name: FUN_008cfe4c
 */


void FUN_008cfe4c(float param_1,undefined4 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined8 uVar29;
  undefined1 auVar30 [16];
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  int iVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  undefined1 auVar46 [16];
  float fVar47;
  
  uVar29 = *(undefined8 *)(param_4 + 0x420);
  fVar31 = *(float *)(param_4 + 0x624);
  fVar36 = *(float *)(param_4 + 0x628);
  lVar21 = *(long *)(param_4 + 0x78);
  fVar34 = *(float *)(lVar21 + 0x100);
  fVar35 = *(float *)(lVar21 + 0x104);
  fVar10 = *(float *)(lVar21 + 0x108);
  fVar37 = *(float *)(param_4 + 0x654) * (float)((ulong)*(undefined8 *)(param_4 + 0x428) >> 0x20);
  fVar33 = *(float *)(param_4 + 0x630);
  fVar45 = *(float *)(param_4 + 0x634);
  fVar11 = *(float *)(param_4 + 0x430);
  fVar12 = *(float *)(param_4 + 0x434);
  fVar13 = *(float *)(param_4 + 0x438);
  fVar47 = *(float *)(param_4 + 0x638);
  fVar41 = *(float *)(param_4 + 0x660) * *(float *)(param_4 + 0x43c);
  puVar20 = *(undefined8 **)(param_4 + (ulong)*(uint *)(param_4 + 0x30) * 8 + 0x6c0);
  if (*param_4 != '\0') {
    lVar22 = *(long *)(*(long *)(param_4 + 0x238) + 0x10);
    if ((*(char *)(lVar22 + 0x7de) != '\0') && (*(char *)(lVar22 + 0x7e2) != '\0')) {
      fVar37 = fVar37 * *(float *)(*(long *)(param_4 + 0x548) + 0x654);
    }
    if ((*(char *)(lVar22 + 0x7df) != '\0') && (*(char *)(lVar22 + 0x7e3) != '\0')) {
      fVar41 = fVar41 * *(float *)(*(long *)(param_4 + 0x548) + 0x660);
    }
  }
  puVar20[1] = CONCAT44(fVar37,*(float *)(param_4 + 0x62c) * (float)*(undefined8 *)(param_4 + 0x428)
                               * fVar10);
  *puVar20 = CONCAT44(fVar36 * (float)((ulong)uVar29 >> 0x20) * fVar35,
                      fVar31 * (float)uVar29 * fVar34);
  puVar20[3] = CONCAT44(fVar41,fVar47 * fVar13 * fVar10);
  puVar20[2] = CONCAT44(fVar45 * fVar12 * fVar35,fVar33 * fVar11 * fVar34);
  lVar22 = *(long *)(*(long *)(param_4 + 0x238) + 0x10);
  if (*(char *)(lVar22 + 0x75b) == '\0') {
    fVar34 = 1.0;
    cVar2 = *(char *)(lVar22 + 0x755);
  }
  else {
    fVar34 = *(float *)(param_4 + 0x74);
    cVar2 = *(char *)(lVar22 + 0x755);
  }
  if (cVar2 != '\0') {
    fVar34 = fVar34 * *(float *)(param_4 + 0x70);
  }
  fVar34 = *(float *)(lVar21 + 0x10c) * fVar34;
  if (((*(char *)(lVar22 + 0x7de) != '\0') && (*(char *)(lVar22 + 0x7e2) != '\0')) ||
     ((*(char *)(lVar22 + 0x7df) != '\0' && (*(char *)(lVar22 + 0x7e3) != '\0')))) {
    lVar23 = *(long *)(param_4 + 0x548);
    lVar24 = *(long *)(*(long *)(lVar23 + 0x238) + 0x10);
    if (*(char *)(lVar24 + 0x75b) == '\0') {
      fVar35 = 1.0;
      cVar2 = *(char *)(lVar24 + 0x755);
    }
    else {
      fVar35 = *(float *)(lVar23 + 0x74);
      cVar2 = *(char *)(lVar24 + 0x755);
    }
    if (cVar2 != '\0') {
      fVar35 = fVar35 * *(float *)(lVar23 + 0x70);
    }
    fVar34 = fVar34 * fVar35;
  }
  if (*(char *)(lVar22 + 0x75c) == '\0') {
    fVar35 = 1.0;
    cVar2 = *(char *)(lVar22 + 0x756);
  }
  else {
    fVar35 = *(float *)(param_4 + 0x74);
    cVar2 = *(char *)(lVar22 + 0x756);
  }
  if (cVar2 != '\0') {
    fVar35 = fVar35 * *(float *)(param_4 + 0x70);
  }
  pcVar1 = param_4 + 0x44;
  if (*(char *)(*(long *)(*(long *)(param_4 + 0x78) + 0x20) + 0x1700) != '\0') {
    pcVar1 = param_4 + 0x48;
  }
  *(undefined4 *)(puVar20 + 4) = *(undefined4 *)pcVar1;
  iVar38 = *(int *)(param_4 + 0x28);
  *(float *)((long)puVar20 + 0x2c) = param_1;
  *(float *)((long)puVar20 + 0x24) = (float)iVar38;
  *(undefined4 *)(puVar20 + 5) = param_2;
  if ((param_1 == 0.0) && (0.0 < *(float *)(param_4 + 0x44))) {
    if (*(char *)(*(long *)(*(long *)(param_4 + 0x78) + 0x20) + 0x1700) == '\0') {
      *(float *)(puVar20 + 4) = *(float *)(param_4 + 0x44) - *(float *)(param_4 + 0x4c);
    }
    *(undefined4 *)((long)puVar20 + 0x2c) = *(undefined4 *)(param_4 + 0x4c);
  }
  *(float *)(puVar20 + 6) = fVar34;
  *(float *)((long)puVar20 + 0x34) = fVar35 * *(float *)(lVar21 + 0x140);
  *(float *)(puVar20 + 7) = fVar35 * *(float *)(lVar21 + 0x144);
  *(float *)((long)puVar20 + 0x3c) = fVar35 * *(float *)(lVar21 + 0x148);
  uVar29 = NEON_fmov(0x3f800000,4);
  uVar14 = *(undefined4 *)(param_4 + 0x340);
  uVar15 = *(undefined4 *)(param_4 + 0x348);
  uVar16 = *(undefined4 *)(param_4 + 0x350);
  uVar17 = *(undefined4 *)(param_4 + 0x358);
  auVar9 = *(undefined1 (*) [12])(param_4 + 0x360);
  uVar18 = *(undefined4 *)(param_4 + 0x370);
  uVar19 = *(undefined4 *)(param_4 + 0x378);
  uVar32 = (undefined4)((ulong)uVar29 >> 0x20);
  uVar25 = auVar9._0_4_;
  uVar26 = auVar9._4_4_;
  uVar27 = SUB124(*(undefined1 (*) [12])(param_4 + 0x360),8);
  auVar5._4_4_ = uVar25;
  auVar5._0_4_ = uVar14;
  auVar5._8_4_ = *(undefined4 *)(param_4 + 0x344);
  auVar5._12_4_ = uVar26;
  auVar6._4_4_ = uVar25;
  auVar6._0_4_ = uVar14;
  auVar6._8_4_ = *(undefined4 *)(param_4 + 0x344);
  auVar6._12_4_ = uVar26;
  auVar39 = NEON_ext(auVar5,auVar6,8,1);
  auVar42._4_4_ = uVar27;
  auVar42._0_4_ = uVar15;
  auVar42._8_8_ = 0;
  auVar44._4_4_ = uVar27;
  auVar44._0_4_ = uVar15;
  auVar44._8_8_ = 0;
  auVar44 = NEON_ext(auVar42,auVar44,8,1);
  auVar7._4_4_ = uVar18;
  auVar7._0_4_ = uVar16;
  auVar7._8_4_ = *(undefined4 *)(param_4 + 0x354);
  auVar7._12_4_ = *(undefined4 *)(param_4 + 0x374);
  auVar8._4_4_ = uVar18;
  auVar8._0_4_ = uVar16;
  auVar8._8_4_ = *(undefined4 *)(param_4 + 0x354);
  auVar8._12_4_ = *(undefined4 *)(param_4 + 0x374);
  auVar42 = NEON_ext(auVar7,auVar8,8,1);
  auVar40._4_4_ = uVar19;
  auVar40._0_4_ = uVar17;
  auVar40._8_4_ = 0;
  auVar40._12_4_ = uVar32;
  auVar43._4_4_ = uVar19;
  auVar43._0_4_ = uVar17;
  auVar43._8_4_ = 0;
  auVar43._12_4_ = uVar32;
  auVar46 = NEON_ext(auVar40,auVar43,8,1);
  *(undefined4 *)(puVar20 + 8) = uVar14;
  *(undefined4 *)((long)puVar20 + 0x44) = uVar16;
  *(undefined4 *)(puVar20 + 9) = uVar25;
  *(undefined4 *)((long)puVar20 + 0x4c) = uVar18;
  *(int *)(puVar20 + 10) = auVar39._0_4_;
  *(int *)((long)puVar20 + 0x54) = auVar42._0_4_;
  *(int *)(puVar20 + 0xb) = auVar39._4_4_;
  *(int *)((long)puVar20 + 0x5c) = auVar42._4_4_;
  *(undefined4 *)(puVar20 + 0xc) = uVar15;
  *(undefined4 *)((long)puVar20 + 100) = uVar17;
  *(undefined4 *)(puVar20 + 0xd) = uVar27;
  *(undefined4 *)((long)puVar20 + 0x6c) = uVar19;
  *(int *)(puVar20 + 0xe) = auVar44._0_4_;
  *(int *)((long)puVar20 + 0x74) = auVar46._0_4_;
  *(int *)(puVar20 + 0xf) = auVar44._4_4_;
  *(int *)((long)puVar20 + 0x7c) = auVar46._4_4_;
  uVar14 = *(undefined4 *)(param_4 + 0x388);
  uVar15 = *(undefined4 *)(param_4 + 0x390);
  uVar16 = *(undefined4 *)(param_4 + 0x398);
  uVar17 = *(undefined4 *)(param_4 + 0x3a0);
  uVar18 = *(undefined4 *)(param_4 + 0x3a8);
  uVar19 = *(undefined4 *)(param_4 + 0x3b0);
  uVar25 = *(undefined4 *)(param_4 + 0x3b8);
  auVar28._4_4_ = uVar17;
  auVar28._0_4_ = *(undefined4 *)(param_4 + 0x380);
  auVar28._8_4_ = *(undefined4 *)(param_4 + 900);
  auVar28._12_4_ = *(undefined4 *)(param_4 + 0x3a4);
  auVar30._4_4_ = uVar19;
  auVar30._0_4_ = uVar15;
  auVar30._8_4_ = *(undefined4 *)(param_4 + 0x394);
  auVar30._12_4_ = *(undefined4 *)(param_4 + 0x3b4);
  auVar40 = NEON_ext(auVar28,auVar28,8,1);
  auVar43 = NEON_ext(auVar30,auVar30,8,1);
  *(undefined4 *)(puVar20 + 0x10) = *(undefined4 *)(param_4 + 0x380);
  *(undefined4 *)((long)puVar20 + 0x84) = uVar15;
  *(undefined4 *)(puVar20 + 0x11) = uVar17;
  *(undefined4 *)((long)puVar20 + 0x8c) = uVar19;
  auVar39._4_4_ = uVar18;
  auVar39._0_4_ = uVar14;
  auVar39._8_8_ = 0;
  auVar46._4_4_ = uVar18;
  auVar46._0_4_ = uVar14;
  auVar46._8_8_ = 0;
  auVar42 = NEON_ext(auVar39,auVar46,8,1);
  auVar3._4_4_ = uVar25;
  auVar3._0_4_ = uVar16;
  auVar3._8_4_ = 0;
  auVar3._12_4_ = uVar32;
  auVar4._4_4_ = uVar25;
  auVar4._0_4_ = uVar16;
  auVar4._8_4_ = 0;
  auVar4._12_4_ = uVar32;
  auVar44 = NEON_ext(auVar3,auVar4,8,1);
  *(int *)(puVar20 + 0x12) = auVar40._0_4_;
  *(int *)((long)puVar20 + 0x94) = auVar43._0_4_;
  *(int *)(puVar20 + 0x13) = auVar40._4_4_;
  *(int *)((long)puVar20 + 0x9c) = auVar43._4_4_;
  *(undefined4 *)(puVar20 + 0x14) = uVar14;
  *(undefined4 *)((long)puVar20 + 0xa4) = uVar16;
  *(undefined4 *)(puVar20 + 0x15) = uVar18;
  *(undefined4 *)((long)puVar20 + 0xac) = uVar25;
  *(int *)(puVar20 + 0x16) = auVar42._0_4_;
  *(int *)((long)puVar20 + 0xb4) = auVar44._0_4_;
  *(int *)(puVar20 + 0x17) = auVar42._4_4_;
  *(int *)((long)puVar20 + 0xbc) = auVar44._4_4_;
  return;
}


