/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c67618; name: FUN_00c67618
 */


void FUN_00c67618(long param_1,undefined4 param_2,ulong param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  undefined8 *puVar7;
  short sVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined1 auVar71 [16];
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined1 auStack_a0 [4];
  ushort local_9c [2];
  ushort local_98 [2];
  short local_94 [2];
  short local_38 [2];
  short local_34 [2];
  
  lVar15 = (long)(short)param_3;
  lVar11 = *(long *)(param_1 + 0x38) + lVar15 * 0x140;
  uVar29 = *(undefined8 *)(lVar11 + 0x48);
  uVar19 = *(undefined8 *)(lVar11 + 0x40);
  uVar30 = *(undefined8 *)(lVar11 + 0x58);
  uVar20 = *(undefined8 *)(lVar11 + 0x50);
  uVar42 = *(undefined8 *)(lVar11 + 0x68);
  uVar38 = *(undefined8 *)(lVar11 + 0x60);
  uVar31 = *(undefined8 *)(lVar11 + 0x78);
  uVar21 = *(undefined8 *)(lVar11 + 0x70);
  lVar16 = (long)(short)param_2;
  puVar10 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar16 * 0x140);
  uVar32 = puVar10[1];
  uVar22 = *puVar10;
  uVar43 = puVar10[3];
  uVar39 = puVar10[2];
  uVar33 = puVar10[5];
  uVar23 = puVar10[4];
  uVar34 = puVar10[7];
  uVar24 = puVar10[6];
  uVar14 = param_3 >> 0x10 & 0xffff;
  plVar9 = (long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x30) + 0x30);
  (**(code **)(*plVar9 + 0x30))(plVar9,param_3 & 0xffffffff,local_34,local_38,local_94);
  plVar9 = (long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x30) + 0x30);
  (**(code **)(*plVar9 + 0x30))(plVar9,param_2,local_98,local_9c,auStack_a0);
  plVar9 = (long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x30) + 0x30);
  sVar8 = (**(code **)(*plVar9 + 0x68))(plVar9,param_3 & 0xffffffff,uVar14);
  plVar9 = (long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x30) + 0x30);
  lVar11 = (**(code **)(*plVar9 + 0x70))(plVar9,param_3 & 0xffffffff,uVar14);
  if (0 < sVar8) {
    fVar62 = (float)uVar23;
    fVar17 = (float)uVar19;
    fVar25 = (float)((ulong)uVar19 >> 0x20);
    fVar27 = (float)uVar29;
    local_f0 = (float)uVar24;
    fStack_ec = (float)((ulong)uVar24 >> 0x20);
    fStack_e8 = (float)uVar34;
    fStack_e4 = (float)((ulong)uVar34 >> 0x20);
    fVar44 = (float)uVar22;
    fVar48 = (float)uVar39;
    fVar45 = (float)((ulong)uVar22 >> 0x20);
    fVar18 = (float)uVar20;
    fVar26 = (float)((ulong)uVar20 >> 0x20);
    fVar28 = (float)uVar30;
    fVar50 = (float)((ulong)uVar39 >> 0x20);
    fVar64 = (float)((ulong)uVar23 >> 0x20);
    fVar65 = (float)uVar33;
    fVar35 = (float)uVar38;
    fVar40 = (float)((ulong)uVar38 >> 0x20);
    fVar41 = (float)uVar42;
    fVar46 = (float)uVar32;
    fVar51 = (float)uVar43;
    sVar5 = local_38[0] * local_34[0];
    fVar66 = (float)((ulong)uVar33 >> 0x20);
    fVar67 = (float)uVar21;
    fVar69 = (float)((ulong)uVar21 >> 0x20);
    fVar70 = (float)uVar31;
    fVar47 = (float)((ulong)uVar32 >> 0x20);
    fVar63 = (float)(local_38[0] + -2);
    fVar52 = (float)((ulong)uVar43 >> 0x20);
    fVar49 = (float)(local_34[0] + -2);
    fVar68 = (float)(local_94[0] + -2);
    auVar71 = NEON_fmov(0x3f800000,4);
    uVar14 = (ulong)(uint)(int)sVar8 & 0xffff;
    piVar12 = (int *)(lVar11 + 8);
    do {
      piVar1 = piVar12 + -2;
      piVar2 = piVar12 + -1;
      iVar3 = *piVar12;
      piVar12 = piVar12 + 3;
      lVar11 = *(long *)(param_1 + 0x38) + lVar16 * 0x140;
      puVar10 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar15 * 0x140);
      uVar4 = *piVar1 + (*piVar2 + iVar3 * (uint)local_9c[0]) * (uint)local_98[0];
      uVar13 = -((ulong)(uVar4 >> 0xf) & 1) & 0xfffffffffff00000 | ((ulong)uVar4 & 0xffff) << 4;
      puVar7 = (undefined8 *)(*(long *)(lVar11 + 0x80) + uVar13);
      uVar19 = *puVar7;
      fVar72 = (float)uVar19;
      fVar54 = (float)((ulong)uVar19 >> 0x20);
      fVar73 = (float)puVar7[1];
      fVar74 = ((fVar17 * fVar44 + fVar18 * fVar45 + fVar35 * fVar46 + fVar67 * fVar47) * fVar72 +
                (fVar17 * fVar48 + fVar18 * fVar50 + fVar35 * fVar51 + fVar67 * fVar52) * fVar54 +
                (fVar17 * fVar62 + fVar18 * fVar64 + fVar35 * fVar65 + fVar67 * fVar66) * fVar73 +
               auVar71._0_4_ *
               (fVar17 * local_f0 + fVar18 * fStack_ec + fVar35 * fStack_e8 + fVar67 * fStack_e4)) *
               100.0 + 0.5;
      if (fVar74 <= 0.0) {
        fVar74 = 0.0;
      }
      fVar75 = ((fVar25 * fVar44 + fVar26 * fVar45 + fVar40 * fVar46 + fVar69 * fVar47) * fVar72 +
                (fVar25 * fVar48 + fVar26 * fVar50 + fVar40 * fVar51 + fVar69 * fVar52) * fVar54 +
                (fVar25 * fVar62 + fVar26 * fVar64 + fVar40 * fVar65 + fVar69 * fVar66) * fVar73 +
               auVar71._4_4_ *
               (fVar25 * local_f0 + fVar26 * fStack_ec + fVar40 * fStack_e8 + fVar69 * fStack_e4)) *
               100.0 + 0.5;
      fVar72 = ((fVar27 * fVar44 + fVar28 * fVar45 + fVar41 * fVar46 + fVar70 * fVar47) * fVar72 +
                (fVar27 * fVar48 + fVar28 * fVar50 + fVar41 * fVar51 + fVar70 * fVar52) * fVar54 +
                (fVar27 * fVar62 + fVar28 * fVar64 + fVar41 * fVar65 + fVar70 * fVar66) * fVar73 +
               auVar71._8_4_ *
               (fVar27 * local_f0 + fVar28 * fStack_ec + fVar41 * fStack_e8 + fVar70 * fStack_e4)) *
               100.0 + 0.5;
      if (1.0 < fVar74) {
        fVar74 = 1.0;
      }
      if (fVar75 <= 0.0) {
        fVar75 = 0.0;
      }
      if (fVar72 <= 0.0) {
        fVar72 = 0.0;
      }
      fVar74 = fVar74 * (float)(local_34[0] + -1);
      if (1.0 < fVar75) {
        fVar75 = 1.0;
      }
      if (1.0 < fVar72) {
        fVar72 = 1.0;
      }
      fVar75 = fVar75 * (float)(local_38[0] + -1);
      fVar72 = fVar72 * (float)(local_94[0] + -1);
      fVar73 = (float)(int)fVar74;
      fVar82 = (float)(int)fVar75;
      fVar86 = (float)(int)fVar72;
      fVar54 = fVar49;
      if (fVar73 <= fVar49) {
        fVar54 = fVar73;
      }
      fVar74 = fVar74 - fVar54;
      fVar73 = fVar63;
      if (fVar82 <= fVar63) {
        fVar73 = fVar82;
      }
      fVar82 = fVar68;
      if (fVar86 <= fVar68) {
        fVar82 = fVar86;
      }
      fVar75 = fVar75 - fVar73;
      fVar72 = fVar72 - fVar82;
      fVar76 = (float)puVar10[2];
      fVar37 = (float)*(undefined8 *)(lVar11 + 0x40);
      fVar53 = (float)((ulong)*(undefined8 *)(lVar11 + 0x40) >> 0x20);
      fVar55 = (float)*(undefined8 *)(lVar11 + 0x48);
      fVar56 = 1.0 - fVar72;
      fVar36 = (float)*puVar10;
      fVar77 = (float)((ulong)puVar10[2] >> 0x20);
      fVar87 = (float)*(undefined8 *)(lVar11 + 0x50);
      fVar88 = (float)((ulong)*(undefined8 *)(lVar11 + 0x50) >> 0x20);
      fVar90 = (float)*(undefined8 *)(lVar11 + 0x58);
      fVar86 = *(float *)(lVar11 + 0x130);
      fVar78 = (float)((ulong)*puVar10 >> 0x20);
      fVar83 = (float)puVar10[1];
      fVar92 = (float)*(undefined8 *)(lVar11 + 0x60);
      fVar57 = (float)((ulong)*(undefined8 *)(lVar11 + 0x60) >> 0x20);
      fVar58 = (float)*(undefined8 *)(lVar11 + 0x68);
      fVar81 = (float)puVar10[3];
      fVar84 = (float)((ulong)puVar10[3] >> 0x20);
      fVar59 = (float)*(undefined8 *)(lVar11 + 0x70);
      fVar60 = (float)((ulong)*(undefined8 *)(lVar11 + 0x70) >> 0x20);
      fVar61 = (float)*(undefined8 *)(lVar11 + 0x78);
      fVar79 = fVar37 * fVar76 + fVar87 * fVar77 + fVar92 * fVar81 + fVar59 * fVar84;
      fVar80 = fVar53 * fVar76 + fVar88 * fVar77 + fVar57 * fVar81 + fVar60 * fVar84;
      fVar81 = fVar55 * fVar76 + fVar90 * fVar77 + fVar58 * fVar81 + fVar61 * fVar84;
      fVar84 = (float)((ulong)puVar10[1] >> 0x20);
      fVar76 = fVar37 * fVar36 + fVar87 * fVar78 + fVar92 * fVar83 + fVar59 * fVar84;
      fVar77 = fVar53 * fVar36 + fVar88 * fVar78 + fVar57 * fVar83 + fVar60 * fVar84;
      fVar78 = fVar55 * fVar36 + fVar90 * fVar78 + fVar58 * fVar83 + fVar61 * fVar84;
      fVar36 = (float)puVar10[4];
      fVar85 = (float)((ulong)puVar10[4] >> 0x20);
      fVar89 = (float)puVar10[5];
      fVar91 = (float)((ulong)puVar10[5] >> 0x20);
      fVar83 = fVar37 * fVar36 + fVar87 * fVar85 + fVar92 * fVar89 + fVar59 * fVar91;
      fVar84 = fVar53 * fVar36 + fVar88 * fVar85 + fVar57 * fVar89 + fVar60 * fVar91;
      fVar85 = fVar55 * fVar36 + fVar90 * fVar85 + fVar58 * fVar89 + fVar61 * fVar91;
      fVar36 = (float)puVar10[6];
      sVar8 = (short)(int)fVar73 * local_34[0] + (short)(int)fVar54 + sVar5 * (short)(int)fVar82;
      sVar6 = sVar8 + 1;
      uVar14 = uVar14 - 1;
      fVar54 = (float)((ulong)puVar10[6] >> 0x20);
      fVar73 = (float)puVar10[7];
      puVar7 = (undefined8 *)(puVar10[0x17] + (long)sVar8 * 0x10);
      uVar19 = *puVar7;
      fVar82 = (float)((ulong)puVar10[7] >> 0x20);
      fVar87 = fVar37 * fVar36 + fVar87 * fVar54 + fVar92 * fVar73 + fVar59 * fVar82;
      fVar88 = fVar53 * fVar36 + fVar88 * fVar54 + fVar57 * fVar73 + fVar60 * fVar82;
      fVar90 = fVar55 * fVar36 + fVar90 * fVar54 + fVar58 * fVar73 + fVar61 * fVar82;
      fVar73 = (float)uVar19;
      fVar53 = (1.0 - fVar74) * (1.0 - fVar75);
      fVar54 = fVar86 * fVar56 * fVar53;
      fVar92 = fVar75 * (1.0 - fVar74);
      fVar82 = (float)((ulong)uVar19 >> 0x20);
      fVar37 = (float)puVar7[1];
      fVar55 = fVar74 * (1.0 - fVar75);
      puVar10 = (undefined8 *)(*(long *)(lVar11 + 0xb8) + uVar13);
      uVar20 = puVar10[1];
      uVar19 = *puVar10;
      fVar36 = fVar86 * fVar56 * fVar55;
      puVar10 = (undefined8 *)(*(long *)(lVar11 + 0xb8) + uVar13);
      puVar10[1] = CONCAT44((float)((ulong)uVar20 >> 0x20) + 0.0,
                            (float)uVar20 +
                            fVar54 * (fVar78 * fVar73 + fVar81 * fVar82 + fVar85 * fVar37 +
                                     fVar90 * 0.0));
      *puVar10 = CONCAT44((float)((ulong)uVar19 >> 0x20) +
                          fVar54 * (fVar77 * fVar73 + fVar80 * fVar82 + fVar84 * fVar37 +
                                   fVar88 * 0.0),
                          (float)uVar19 +
                          fVar54 * (fVar76 * fVar73 + fVar79 * fVar82 + fVar83 * fVar37 +
                                   fVar87 * 0.0));
      puVar10 = (undefined8 *)
                (*(long *)(*(long *)(param_1 + 0x38) + lVar15 * 0x140 + 0xb8) + (long)sVar6 * 0x10);
      uVar19 = *puVar10;
      fVar54 = (float)uVar19;
      fVar73 = (float)((ulong)uVar19 >> 0x20);
      fVar82 = (float)puVar10[1];
      lVar11 = *(long *)(*(long *)(param_1 + 0x38) + lVar16 * 0x140 + 0xb8);
      puVar10 = (undefined8 *)(lVar11 + uVar13);
      uVar20 = puVar10[1];
      uVar19 = *puVar10;
      puVar10 = (undefined8 *)(lVar11 + uVar13);
      puVar10[1] = CONCAT44((float)((ulong)uVar20 >> 0x20) + 0.0,
                            (float)uVar20 +
                            fVar36 * (fVar78 * fVar54 + fVar81 * fVar73 + fVar85 * fVar82 +
                                     fVar90 * 0.0));
      *puVar10 = CONCAT44((float)((ulong)uVar19 >> 0x20) +
                          fVar36 * (fVar77 * fVar54 + fVar80 * fVar73 + fVar84 * fVar82 +
                                   fVar88 * 0.0),
                          (float)uVar19 +
                          fVar36 * (fVar76 * fVar54 + fVar79 * fVar73 + fVar83 * fVar82 +
                                   fVar87 * 0.0));
      lVar11 = *(long *)(*(long *)(param_1 + 0x38) + lVar16 * 0x140 + 0xb8);
      puVar10 = (undefined8 *)
                (*(long *)(*(long *)(param_1 + 0x38) + lVar15 * 0x140 + 0xb8) +
                (long)(short)(local_34[0] + sVar8) * 0x10);
      uVar19 = *puVar10;
      fVar54 = (float)uVar19;
      fVar82 = (float)((ulong)uVar19 >> 0x20);
      fVar36 = (float)puVar10[1];
      fVar73 = fVar86 * fVar56 * fVar92;
      puVar10 = (undefined8 *)(lVar11 + uVar13);
      uVar20 = puVar10[1];
      uVar19 = *puVar10;
      fVar37 = fVar86 * fVar74 * fVar75 * fVar56;
      puVar10 = (undefined8 *)(lVar11 + uVar13);
      puVar10[1] = CONCAT44((float)((ulong)uVar20 >> 0x20) + 0.0,
                            (float)uVar20 +
                            fVar73 * (fVar78 * fVar54 + fVar81 * fVar82 + fVar85 * fVar36 +
                                     fVar90 * 0.0));
      *puVar10 = CONCAT44((float)((ulong)uVar19 >> 0x20) +
                          fVar73 * (fVar77 * fVar54 + fVar80 * fVar82 + fVar84 * fVar36 +
                                   fVar88 * 0.0),
                          (float)uVar19 +
                          fVar73 * (fVar76 * fVar54 + fVar79 * fVar82 + fVar83 * fVar36 +
                                   fVar87 * 0.0));
      puVar10 = (undefined8 *)
                (*(long *)(*(long *)(param_1 + 0x38) + lVar15 * 0x140 + 0xb8) +
                (long)(short)(sVar6 + local_34[0]) * 0x10);
      uVar19 = *puVar10;
      fVar54 = (float)uVar19;
      fVar73 = (float)((ulong)uVar19 >> 0x20);
      fVar82 = (float)puVar10[1];
      lVar11 = *(long *)(*(long *)(param_1 + 0x38) + lVar16 * 0x140 + 0xb8);
      puVar10 = (undefined8 *)(lVar11 + uVar13);
      uVar20 = puVar10[1];
      uVar19 = *puVar10;
      fVar36 = fVar86 * fVar72 * fVar53;
      puVar10 = (undefined8 *)(lVar11 + uVar13);
      puVar10[1] = CONCAT44((float)((ulong)uVar20 >> 0x20) + 0.0,
                            (float)uVar20 +
                            fVar37 * (fVar78 * fVar54 + fVar81 * fVar73 + fVar85 * fVar82 +
                                     fVar90 * 0.0));
      *puVar10 = CONCAT44((float)((ulong)uVar19 >> 0x20) +
                          fVar37 * (fVar77 * fVar54 + fVar80 * fVar73 + fVar84 * fVar82 +
                                   fVar88 * 0.0),
                          (float)uVar19 +
                          fVar37 * (fVar76 * fVar54 + fVar79 * fVar73 + fVar83 * fVar82 +
                                   fVar87 * 0.0));
      puVar10 = (undefined8 *)
                (*(long *)(*(long *)(param_1 + 0x38) + lVar15 * 0x140 + 0xb8) +
                (long)(short)(sVar8 + sVar5) * 0x10);
      uVar19 = *puVar10;
      lVar11 = *(long *)(*(long *)(param_1 + 0x38) + lVar16 * 0x140 + 0xb8);
      fVar54 = (float)uVar19;
      fVar73 = (float)((ulong)uVar19 >> 0x20);
      fVar82 = (float)puVar10[1];
      puVar10 = (undefined8 *)(lVar11 + uVar13);
      uVar20 = puVar10[1];
      uVar19 = *puVar10;
      fVar37 = fVar86 * fVar72 * fVar55;
      puVar10 = (undefined8 *)(lVar11 + uVar13);
      puVar10[1] = CONCAT44((float)((ulong)uVar20 >> 0x20) + 0.0,
                            (float)uVar20 +
                            fVar36 * (fVar78 * fVar54 + fVar81 * fVar73 + fVar85 * fVar82 +
                                     fVar90 * 0.0));
      *puVar10 = CONCAT44((float)((ulong)uVar19 >> 0x20) +
                          fVar36 * (fVar77 * fVar54 + fVar80 * fVar73 + fVar84 * fVar82 +
                                   fVar88 * 0.0),
                          (float)uVar19 +
                          fVar36 * (fVar76 * fVar54 + fVar79 * fVar73 + fVar83 * fVar82 +
                                   fVar87 * 0.0));
      puVar10 = (undefined8 *)
                (*(long *)(*(long *)(param_1 + 0x38) + lVar15 * 0x140 + 0xb8) +
                (long)(short)(sVar6 + sVar5) * 0x10);
      uVar19 = *puVar10;
      lVar11 = *(long *)(*(long *)(param_1 + 0x38) + lVar16 * 0x140 + 0xb8);
      fVar54 = (float)uVar19;
      fVar73 = (float)((ulong)uVar19 >> 0x20);
      fVar82 = (float)puVar10[1];
      puVar10 = (undefined8 *)(lVar11 + uVar13);
      uVar20 = puVar10[1];
      uVar19 = *puVar10;
      fVar36 = fVar86 * fVar72 * fVar92;
      puVar10 = (undefined8 *)(lVar11 + uVar13);
      puVar10[1] = CONCAT44((float)((ulong)uVar20 >> 0x20) + 0.0,
                            (float)uVar20 +
                            fVar37 * (fVar78 * fVar54 + fVar81 * fVar73 + fVar85 * fVar82 +
                                     fVar90 * 0.0));
      *puVar10 = CONCAT44((float)((ulong)uVar19 >> 0x20) +
                          fVar37 * (fVar77 * fVar54 + fVar80 * fVar73 + fVar84 * fVar82 +
                                   fVar88 * 0.0),
                          (float)uVar19 +
                          fVar37 * (fVar76 * fVar54 + fVar79 * fVar73 + fVar83 * fVar82 +
                                   fVar87 * 0.0));
      puVar10 = (undefined8 *)
                (*(long *)(*(long *)(param_1 + 0x38) + lVar15 * 0x140 + 0xb8) +
                (long)(short)(local_34[0] + sVar8 + sVar5) * 0x10);
      uVar19 = *puVar10;
      fVar54 = (float)uVar19;
      fVar73 = (float)((ulong)uVar19 >> 0x20);
      fVar82 = (float)puVar10[1];
      lVar11 = *(long *)(*(long *)(param_1 + 0x38) + lVar16 * 0x140 + 0xb8);
      puVar10 = (undefined8 *)(lVar11 + uVar13);
      uVar20 = puVar10[1];
      uVar19 = *puVar10;
      puVar10 = (undefined8 *)(lVar11 + uVar13);
      puVar10[1] = CONCAT44((float)((ulong)uVar20 >> 0x20) + 0.0,
                            (float)uVar20 +
                            fVar36 * (fVar78 * fVar54 + fVar81 * fVar73 + fVar85 * fVar82 +
                                     fVar90 * 0.0));
      *puVar10 = CONCAT44((float)((ulong)uVar19 >> 0x20) +
                          fVar36 * (fVar77 * fVar54 + fVar80 * fVar73 + fVar84 * fVar82 +
                                   fVar88 * 0.0),
                          (float)uVar19 +
                          fVar36 * (fVar76 * fVar54 + fVar79 * fVar73 + fVar83 * fVar82 +
                                   fVar87 * 0.0));
      puVar10 = (undefined8 *)
                (*(long *)(*(long *)(param_1 + 0x38) + lVar15 * 0x140 + 0xb8) +
                (long)(short)(sVar6 + local_34[0] + sVar5) * 0x10);
      uVar19 = *puVar10;
      fVar54 = (float)uVar19;
      fVar73 = (float)((ulong)uVar19 >> 0x20);
      fVar82 = (float)puVar10[1];
      fVar86 = fVar86 * fVar72 * fVar74 * fVar75;
      lVar11 = *(long *)(*(long *)(param_1 + 0x38) + lVar16 * 0x140 + 0xb8);
      puVar10 = (undefined8 *)(lVar11 + uVar13);
      uVar20 = puVar10[1];
      uVar19 = *puVar10;
      puVar10 = (undefined8 *)(lVar11 + uVar13);
      puVar10[1] = CONCAT44((float)((ulong)uVar20 >> 0x20) + 0.0,
                            (float)uVar20 +
                            fVar86 * (fVar78 * fVar54 + fVar81 * fVar73 + fVar85 * fVar82 +
                                     fVar90 * 0.0));
      *puVar10 = CONCAT44((float)((ulong)uVar19 >> 0x20) +
                          fVar86 * (fVar77 * fVar54 + fVar80 * fVar73 + fVar84 * fVar82 +
                                   fVar88 * 0.0),
                          (float)uVar19 +
                          fVar86 * (fVar76 * fVar54 + fVar79 * fVar73 + fVar83 * fVar82 +
                                   fVar87 * 0.0));
    } while (uVar14 != 0);
  }
  return;
}


