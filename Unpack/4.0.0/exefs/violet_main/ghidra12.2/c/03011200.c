/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03011200; name: FUN_03011200
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03011200(long param_1,long param_2,undefined8 *param_3,long *param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 *puVar21;
  long *plVar22;
  int *piVar23;
  undefined *puVar24;
  undefined *puVar25;
  ulong uVar26;
  undefined8 *puVar27;
  float fVar28;
  undefined8 uVar29;
  byte bVar30;
  int iVar31;
  uint uVar32;
  undefined4 uVar33;
  byte bVar37;
  byte bVar38;
  byte bVar40;
  byte bVar44;
  byte bVar45;
  long lVar34;
  byte bVar39;
  int iVar41;
  byte bVar46;
  byte bVar47;
  byte bVar49;
  byte bVar50;
  int iVar48;
  byte bVar51;
  undefined1 auVar35 [12];
  float fVar42;
  float fVar43;
  byte bVar52;
  byte bVar54;
  byte bVar55;
  int iVar53;
  byte bVar56;
  undefined1 auVar36 [16];
  float fVar57;
  undefined8 uVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  int iVar63;
  float fVar67;
  int iVar68;
  ulong uVar64;
  float fVar69;
  int iVar70;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar71;
  int iVar72;
  float fVar73;
  float fVar76;
  undefined8 uVar74;
  float fVar77;
  undefined1 auVar75 [16];
  float fVar78;
  float fVar79;
  float fVar81;
  float fVar82;
  float fVar83;
  undefined1 auVar80 [16];
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined8 uVar90;
  byte local_7a0;
  byte bStack_79f;
  byte bStack_79e;
  byte bStack_79d;
  byte bStack_79c;
  byte bStack_79b;
  byte bStack_79a;
  byte bStack_799;
  byte bStack_798;
  byte bStack_797;
  byte bStack_796;
  byte bStack_795;
  byte bStack_794;
  byte bStack_793;
  byte bStack_792;
  byte bStack_791;
  undefined2 local_6b0;
  undefined4 uStack_6ac;
  undefined4 local_6a8;
  undefined4 uStack_6a4;
  uint local_690 [2];
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  long *local_650;
  char local_648;
  float local_640;
  float fStack_63c;
  float fStack_638;
  float fStack_634;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined *local_600;
  undefined **local_5f8;
  undefined **ppuStack_5f0;
  undefined4 local_5e8;
  undefined *local_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined4 local_5c8;
  undefined1 local_5c4;
  undefined4 local_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined2 local_570;
  undefined8 local_560;
  undefined4 local_558;
  undefined4 local_550 [256];
  undefined8 *local_150;
  ulong local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  float local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined1 local_104;
  undefined2 local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  int local_e0;
  undefined1 local_dc;
  undefined2 local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  
  if (*(char *)(param_1 + 0x15df) != '\0') {
    local_5c4 = 0;
    local_5b8 = 0;
    uStack_5b0 = 0;
    local_5c0 = 0;
    local_5f8 = &local_5e0;
    local_598 = 0;
    local_590 = 0;
    local_600 = PTR_DAT_047e3528 + 0x10;
    local_588 = 0;
    local_580 = 0;
    local_578 = 0;
    local_560 = 0;
    local_558 = 0;
    local_5e8 = 0x90;
    local_5e0 = PTR_DAT_047e33a0 + 0x10;
    local_5d8 = 0;
    uStack_5d0 = 1;
    local_5c8 = 0x110201;
    local_5a8 = 0;
    local_5a0 = 0x100000040;
    local_570 = (undefined2)((uint)(*(float *)PTR_DAT_047e3398 * 0.0 * 1.0039062) >> 0x10);
    lVar20 = *(long *)(param_1 + 0x1680);
    local_6b0 = (undefined2)*param_3;
    uStack_6ac = (undefined4)((ulong)*param_3 >> 0x20);
    local_6a8 = (undefined4)param_3[1];
    uStack_6a4 = (undefined4)((ulong)param_3[1] >> 0x20);
    local_690[0] = 7;
    local_678 = 0;
    uStack_670 = 0;
    local_688 = 0;
    uStack_680 = 0;
    local_648 = '\0';
    local_650 = param_4;
    ppuStack_5f0 = local_5f8;
    (**(code **)(*(long *)PTR_DAT_047d19f0 + 0x2a8))(local_5f8,local_690,0,0);
    uVar19 = _UNK_03cabe68;
    uVar18 = _DAT_03cabe60;
    fVar17 = DAT_03cab628._4_4_;
    fVar16 = (float)DAT_03cab628;
    fVar15 = DAT_03cab620._4_4_;
    fVar14 = (float)DAT_03cab620;
    uVar11 = _UNK_03caa5b8;
    uVar10 = _DAT_03caa5b0;
    fStack_638 = (float)DAT_03cab628;
    fStack_634 = DAT_03cab628._4_4_;
    local_640 = (float)DAT_03cab620;
    fStack_63c = DAT_03cab620._4_4_;
    uStack_628 = _UNK_03cabe68;
    uStack_630 = _DAT_03cabe60;
    uStack_618 = _UNK_03caa5b8;
    local_620 = _DAT_03caa5b0;
    uStack_608 = _UNK_03cabe58;
    local_610 = _DAT_03cabe50;
    fVar28 = *(float *)(param_2 + 0x50);
    lVar34 = NEON_fmin(param_4[2],CONCAT44(fVar28,fVar28),4);
    param_4[2] = lVar34;
    uVar13 = _UNK_03cab278;
    uVar12 = _DAT_03cab270;
    if (local_648 == '\0') {
      fVar6 = *(float *)(param_2 + 0x40);
      fVar7 = *(float *)(param_2 + 0x44);
      fVar8 = *(float *)(param_2 + 0x48);
      fVar28 = fVar28 * fVar28;
      plVar22 = *(long **)(param_1 + 0x1660);
      local_550[0] = 1;
      local_150 = (undefined8 *)((ulong)local_550 | 4);
      puVar27 = (undefined8 *)((ulong)&local_140 | 8);
      puVar24 = PTR_DAT_047d1aa0;
      puVar25 = PTR_DAT_047d1aa8;
      fVar88 = fVar28;
      fVar89 = fVar28;
      fVar87 = fVar28;
      do {
        puVar21 = (undefined8 *)((long)local_150 + -4);
        auVar75._4_4_ = fVar7;
        auVar75._0_4_ = fVar7;
        auVar75._8_4_ = fVar7;
        auVar65._4_4_ = fVar6;
        auVar65._0_4_ = fVar6;
        auVar65._8_4_ = fVar6;
        auVar65._12_4_ = fVar6;
        pauVar1 = (undefined1 (*) [16])
                  ((long)plVar22 + (long)*(int *)((long)local_150 + -4) * 0x80 + *plVar22);
        auVar59._4_4_ = fVar8;
        auVar59._0_4_ = fVar8;
        auVar59._8_4_ = fVar8;
        auVar66 = *pauVar1;
        auVar60 = pauVar1[1];
        auVar65 = NEON_fmax(auVar65,auVar66,4);
        iVar31 = -(uint)(auVar66._0_4_ <= auVar60._0_4_);
        iVar41 = -(uint)(auVar66._4_4_ <= auVar60._4_4_);
        iVar48 = -(uint)(auVar66._8_4_ <= auVar60._8_4_);
        iVar53 = -(uint)(auVar66._12_4_ <= auVar60._12_4_);
        auVar66 = NEON_fmin(auVar65,auVar60,4);
        fVar62 = auVar66._0_4_ - fVar6;
        fVar67 = auVar66._4_4_ - fVar6;
        fVar69 = auVar66._8_4_ - fVar6;
        fVar71 = auVar66._12_4_ - fVar6;
        auVar75._12_4_ = fVar7;
        auVar75 = NEON_fmax(auVar75,pauVar1[2],4);
        auVar75 = NEON_fmin(auVar75,pauVar1[3],4);
        fVar73 = auVar75._0_4_ - fVar7;
        fVar76 = auVar75._4_4_ - fVar7;
        fVar77 = auVar75._8_4_ - fVar7;
        fVar78 = auVar75._12_4_ - fVar7;
        auVar59._12_4_ = fVar8;
        auVar75 = NEON_fmax(auVar59,pauVar1[4],4);
        auVar66._12_4_ = (int)((ulong)*(undefined8 *)(pauVar1[5] + 8) >> 0x20);
        auVar66._0_12_ = *(undefined1 (*) [12])pauVar1[5];
        auVar75 = NEON_fmin(auVar75,auVar66,4);
        fVar79 = auVar75._0_4_ - fVar8;
        fVar81 = auVar75._4_4_ - fVar8;
        fVar82 = auVar75._8_4_ - fVar8;
        fVar83 = auVar75._12_4_ - fVar8;
        iVar63 = -(uint)(fVar62 * fVar62 + fVar73 * fVar73 + fVar79 * fVar79 <= fVar28);
        iVar68 = -(uint)(fVar67 * fVar67 + fVar76 * fVar76 + fVar81 * fVar81 <= fVar88);
        iVar70 = -(uint)(fVar69 * fVar69 + fVar77 * fVar77 + fVar82 * fVar82 <= fVar89);
        iVar72 = -(uint)(fVar71 * fVar71 + fVar78 * fVar78 + fVar83 * fVar83 <= fVar87);
        bVar30 = (byte)iVar63 & (byte)iVar31;
        bVar37 = (byte)((uint)iVar63 >> 8) & (byte)((uint)iVar31 >> 8);
        bVar38 = (byte)((uint)iVar63 >> 0x10) & (byte)((uint)iVar31 >> 0x10);
        bVar39 = (byte)((uint)iVar63 >> 0x18) & (byte)((uint)iVar31 >> 0x18);
        bVar40 = (byte)iVar68 & (byte)iVar41;
        bVar44 = (byte)((uint)iVar68 >> 8) & (byte)((uint)iVar41 >> 8);
        bVar45 = (byte)((uint)iVar68 >> 0x10) & (byte)((uint)iVar41 >> 0x10);
        bVar46 = (byte)((uint)iVar68 >> 0x18) & (byte)((uint)iVar41 >> 0x18);
        bVar47 = (byte)iVar70 & (byte)iVar48;
        bVar49 = (byte)((uint)iVar70 >> 8) & (byte)((uint)iVar48 >> 8);
        bVar50 = (byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar48 >> 0x10);
        bVar51 = (byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar48 >> 0x18);
        bVar52 = (byte)iVar72 & (byte)iVar53;
        bVar54 = (byte)((uint)iVar72 >> 8) & (byte)((uint)iVar53 >> 8);
        bVar55 = (byte)((uint)iVar72 >> 0x10) & (byte)((uint)iVar53 >> 0x10);
        bVar56 = (byte)((uint)iVar72 >> 0x18) & (byte)((uint)iVar53 >> 0x18);
        if (CONCAT13(bVar46 | bVar39 | bVar51 | bVar56,
                     CONCAT12(bVar45 | bVar38 | bVar50 | bVar55,
                              CONCAT11(bVar44 | bVar37 | bVar49 | bVar54,
                                       bVar40 | bVar30 | bVar47 | bVar52))) != 0) {
          local_7a0 = (byte)uVar12;
          bStack_79f = (byte)((ulong)uVar12 >> 8);
          bStack_79e = (byte)((ulong)uVar12 >> 0x10);
          bStack_79d = (byte)((ulong)uVar12 >> 0x18);
          bStack_79c = (byte)((ulong)uVar12 >> 0x20);
          bStack_79b = (byte)((ulong)uVar12 >> 0x28);
          bStack_79a = (byte)((ulong)uVar12 >> 0x30);
          bStack_799 = (byte)((ulong)uVar12 >> 0x38);
          bStack_798 = (byte)uVar13;
          bStack_797 = (byte)((ulong)uVar13 >> 8);
          bStack_796 = (byte)((ulong)uVar13 >> 0x10);
          bStack_795 = (byte)((ulong)uVar13 >> 0x18);
          bStack_794 = (byte)((ulong)uVar13 >> 0x20);
          bStack_793 = (byte)((ulong)uVar13 >> 0x28);
          bStack_792 = (byte)((ulong)uVar13 >> 0x30);
          bStack_791 = (byte)((ulong)uVar13 >> 0x38);
          iVar31 = CONCAT13(bVar39 & bStack_79d,
                            CONCAT12(bVar38 & bStack_79e,
                                     CONCAT11(bVar37 & bStack_79f,bVar30 & local_7a0)));
          auVar35._0_8_ =
               CONCAT17(bVar46 & bStack_799,
                        CONCAT16(bVar45 & bStack_79a,
                                 CONCAT15(bVar44 & bStack_79b,CONCAT14(bVar40 & bStack_79c,iVar31)))
                       );
          auVar35[8] = bVar47 & bStack_798;
          auVar35[9] = bVar49 & bStack_797;
          auVar35[10] = bVar50 & bStack_796;
          auVar35[0xb] = bVar51 & bStack_795;
          auVar60[0xc] = bVar52 & bStack_794;
          auVar60._0_12_ = auVar35;
          auVar60[0xd] = bVar54 & bStack_793;
          auVar60[0xe] = bVar55 & bStack_792;
          auVar60[0xf] = bVar56 & bStack_791;
          uVar32 = iVar31 + (int)((ulong)auVar35._0_8_ >> 0x20) + auVar35._8_4_ + auVar60._12_4_;
          iVar31 = *(int *)(puVar25 + (ulong)uVar32 * 4);
          auVar75 = a64_TBL(ZEXT816(0),pauVar1[6],
                            *(undefined1 (*) [16])(puVar24 + (ulong)uVar32 * 0x10));
          if (pauVar1[7][0] == '\0') {
            *(long *)((long)local_150 + 4) = auVar75._8_8_;
            *puVar21 = auVar75._0_8_;
            puVar21 = (undefined8 *)((long)puVar21 + (long)iVar31 * 4);
          }
          else {
            local_150 = puVar21;
            if (uVar32 == 0) {
              bVar9 = local_648 != '\0';
              fVar88 = fVar28;
            }
            else {
              iVar41 = 0;
              do {
                switch(iVar41) {
                case 0:
                  uVar26 = (ulong)auVar75._0_4_;
                  break;
                case 1:
                  uVar26 = (ulong)auVar75._4_4_;
                  break;
                case 2:
                  uVar26 = (ulong)auVar75._8_4_;
                  break;
                case 3:
                  uVar26 = (ulong)auVar75._12_4_;
                  break;
                default:
                  uVar26 = 0;
                }
                auVar80._8_8_ = uVar11;
                auVar80._0_8_ = uVar10;
                fVar62 = (float)uVar19;
                fVar67 = (float)((ulong)uVar19 >> 0x20);
                fVar71 = (float)uVar18;
                fVar69 = (float)((ulong)uVar18 >> 0x20);
                puVar21 = (undefined8 *)
                          (*(long *)(param_1 + 0x108) +
                          (-(uVar26 >> 0x1f) & 0xffffffe000000000 | uVar26 << 5));
                uVar90 = puVar21[1];
                uVar58 = *puVar21;
                iVar48 = (int)uVar26;
                fVar28 = fVar14;
                fVar88 = fVar15;
                fVar89 = fVar16;
                fVar87 = fVar17;
                if (*(char *)(param_1 + 0x15dc) != '\0') {
                  puVar21 = (undefined8 *)(*(long *)(param_1 + 0x118) + (long)iVar48 * 0x10);
                  uVar29 = puVar21[1];
                  uVar74 = *puVar21;
                  fVar67 = (float)uVar74;
                  fVar73 = (float)((ulong)uVar74 >> 0x20);
                  fVar77 = fVar73 + fVar73;
                  fVar28 = (float)uVar29;
                  fVar78 = fVar28 + fVar28;
                  fVar76 = (float)((ulong)uVar29 >> 0x20);
                  fVar79 = (fVar67 + fVar67) * fVar67;
                  fVar62 = (fVar67 + fVar67) * fVar76;
                  fVar69 = 1.0 - fVar28 * fVar78;
                  fVar87 = fVar78 * fVar73 - fVar62;
                  fVar28 = fVar69 - fVar77 * fVar73;
                  fVar69 = fVar69 - fVar79;
                  fVar88 = fVar77 * fVar67 + fVar78 * fVar76;
                  fVar71 = fVar77 * fVar67 - fVar78 * fVar76;
                  fVar62 = fVar78 * fVar73 + fVar62;
                  fVar89 = fVar78 * fVar67 - fVar77 * fVar76;
                  fVar67 = fVar78 * fVar67 + fVar77 * fVar76;
                  auVar80._4_4_ = fVar87;
                  auVar80._0_4_ = fVar67;
                  auVar80._8_4_ = (1.0 - fVar79) - fVar77 * fVar73;
                  auVar80._12_4_ = 0;
                }
                auVar4._4_4_ = fVar88;
                auVar4._0_4_ = fVar28;
                auVar4._8_4_ = fVar89;
                auVar4._12_4_ = fVar87;
                auVar5._4_4_ = fVar88;
                auVar5._0_4_ = fVar28;
                auVar5._8_4_ = fVar89;
                auVar5._12_4_ = fVar87;
                auVar66 = NEON_ext(auVar4,auVar5,8,1);
                auVar2._4_4_ = fVar69;
                auVar2._0_4_ = fVar71;
                auVar2._8_4_ = fVar62;
                auVar2._12_4_ = fVar67;
                auVar3._4_4_ = fVar69;
                auVar3._0_4_ = fVar71;
                auVar3._8_4_ = fVar62;
                auVar3._12_4_ = fVar67;
                auVar59 = NEON_ext(auVar2,auVar3,8,1);
                auVar60 = NEON_ext(auVar80,auVar80,8,1);
                fVar81 = (float)uVar58;
                fVar73 = (float)*(undefined8 *)(param_2 + 0x40) - fVar81;
                fVar82 = (float)((ulong)uVar58 >> 0x20);
                fVar76 = (float)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20) - fVar82;
                fVar83 = (float)uVar90;
                fVar77 = (float)*(undefined8 *)(param_2 + 0x48) - fVar83;
                fVar79 = auVar80._4_4_;
                fVar78 = auVar80._0_4_;
                if (*(int *)(param_1 + 0x30) == 0) {
                  piVar23 = (int *)(param_1 + 0x20);
                }
                else {
                  piVar23 = (int *)(*(long *)(param_1 + 0x28) +
                                   (long)*(int *)(param_1 + 0x34) * (long)iVar48);
                }
                fVar84 = auVar66._0_4_ * fVar77 + fVar28 * fVar73 + fVar88 * fVar76;
                fVar85 = auVar59._0_4_ * fVar77 + fVar71 * fVar73 + fVar69 * fVar76;
                fVar86 = auVar60._0_4_ * fVar77 + fVar78 * fVar73 + fVar79 * fVar76;
                fVar73 = auVar60._4_4_ * fVar77 + fVar79 * fVar73 + auVar60._4_4_ * fVar76;
                if (*(char *)(param_2 + 0x20) == '\x02') {
                  fVar77 = fVar86 * fVar86 + fVar84 * fVar84 + fVar85 * fVar85;
                  fVar42 = fVar86 * fVar86 + fVar84 * fVar84 + fVar85 * fVar85;
                  fVar76 = SQRT(fVar42);
                  if (*(int *)(param_1 + 0x30) == 0) {
                    piVar23 = (int *)(param_1 + 0x20);
                  }
                  else {
                    piVar23 = (int *)(*(long *)(param_1 + 0x28) +
                                     (long)*(int *)(param_1 + 0x34) * (long)iVar48);
                  }
                  uVar74 = NEON_fmov(0x3f800000,4);
                  uVar58 = *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x18) +
                                      (long)*piVar23 * 8) + 0x10);
                  fVar57 = SQRT(fVar77) - (float)uVar58;
                  local_a0 = CONCAT44(fVar76 - (float)((ulong)uVar58 >> 0x20),fVar57);
                  iVar53 = -(uint)(fVar77 == 0.0);
                  uVar33 = CONCAT13(~(byte)((uint)iVar53 >> 0x18),
                                    CONCAT12(~(byte)((uint)iVar53 >> 0x10),
                                             CONCAT11(~(byte)((uint)iVar53 >> 8),~(byte)iVar53)));
                  uVar64 = CONCAT44(-(uint)(fVar42 < 1.4210855e-14),-(uint)(fVar77 < 1.4210855e-14))
                           & 0x100000001;
                  uVar26 = CONCAT44((float)((ulong)uVar74 >> 0x20) / fVar76,
                                    (float)uVar74 / SQRT(fVar77)) & CONCAT44(uVar33,uVar33);
                  iVar53 = (int)uVar64;
                  iVar63 = (int)(uVar64 >> 0x20);
                  fVar42 = (float)uVar26;
                  fVar76 = fVar84 * fVar42;
                  fVar43 = (float)(uVar26 >> 0x20);
                  fVar77 = fVar85 * fVar43;
                  fVar42 = fVar86 * fVar42;
                  fVar73 = fVar73 * fVar43;
                  fVar76 = (float)((uint)fVar76 ^
                                  ((uint)fVar76 ^ (uint)fVar14) & (iVar53 << 0x1f) >> 0x1f);
                  fVar77 = (float)((uint)fVar77 ^
                                  ((uint)fVar77 ^ (uint)fVar15) & (iVar63 << 0x1f) >> 0x1f);
                  fVar42 = (float)((uint)fVar42 ^
                                  ((uint)fVar42 ^ (uint)fVar16) & (iVar53 << 0x1f) >> 0x1f);
                  uStack_a8 = CONCAT44((uint)fVar73 ^
                                       ((uint)fVar73 ^ (uint)fVar17) & (iVar63 << 0x1f) >> 0x1f,
                                       fVar42);
                  local_b0 = CONCAT44(fVar77,fVar76);
                  if (fVar57 <= *(float *)(local_650 + 2)) {
LAB_030117e0:
                    local_118 = 0xffffffffffffffff;
                    local_120 = (float)local_a0;
                    local_110 = 0xffffff;
                    uStack_c8 = 4;
                    local_108 = 0xffffffff;
                    fVar84 = fVar84 - fVar76 * local_120;
                    fVar85 = fVar85 - fVar77 * (float)((ulong)local_a0 >> 0x20);
                    fVar86 = fVar86 - fVar42 * local_120;
                    auVar36._0_8_ =
                         CONCAT44(fVar79 * fVar42 + fVar88 * fVar76 + fVar69 * fVar77,
                                  fVar78 * fVar42 + fVar28 * fVar76 + fVar71 * fVar77);
                    auVar36._8_4_ = auVar80._8_4_ * fVar42 + fVar89 * fVar76 + fVar62 * fVar77;
                    auVar36._12_4_ = auVar80._12_4_ * fVar42 + fVar87 * fVar76 + fVar67 * fVar77;
                    auVar61._0_8_ =
                         CONCAT44(fVar82 + fVar79 * fVar86 + fVar88 * fVar84 + fVar69 * fVar85,
                                  fVar81 + fVar78 * fVar86 + fVar28 * fVar84 + fVar71 * fVar85);
                    auVar61._8_4_ =
                         fVar83 + auVar80._8_4_ * fVar86 + fVar89 * fVar84 + fVar62 * fVar85;
                    auVar61._12_4_ =
                         (float)((ulong)uVar90 >> 0x20) +
                         auVar80._12_4_ * fVar86 + fVar87 * fVar84 + fVar67 * fVar85;
                    uStack_138 = auVar61._8_8_;
                    uStack_128 = auVar36._8_8_;
                    local_100 = *(undefined2 *)(param_2 + 0x10);
                    uStack_f4 = *(undefined4 *)(param_2 + 0x1c);
                    local_fc = (undefined4)*(undefined8 *)(param_2 + 0x14);
                    uStack_f8 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20);
                    local_104 = 0xf;
                    local_d8 = local_6b0;
                    uStack_cc = uStack_6a4;
                    local_d4 = uStack_6ac;
                    uStack_d0 = local_6a8;
                    local_f0 = *(undefined8 *)(param_1 + 0x140);
                    local_e8 = *(undefined4 *)(param_1 + 0x148);
                    local_dc = *(undefined1 *)(param_2 + 0x20);
                    local_140 = auVar61._0_8_;
                    uStack_130 = auVar36._0_8_;
                    local_e0 = iVar48;
                    (**(code **)(*local_650 + 0x28))(local_650,&local_140);
                  }
                }
                else {
                  lVar34 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x18) +
                                              (long)*piVar23 * 8) + 0xa0);
                  local_a0 = local_650[2];
                  local_140 = CONCAT44(local_140._4_4_,7);
                  uStack_608 = CONCAT44(fVar73,fVar86);
                  local_610 = CONCAT44(fVar85,fVar84);
                  puVar27[2] = 0;
                  puVar27[3] = 0;
                  *puVar27 = 0;
                  puVar27[1] = 0;
                  (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar34 + 0x18) * 0x200 +
                              0xa8))(lVar34,&local_140,0,0);
                  uVar26 = (**(code **)(lVar20 + (ulong)local_690[0] * 0x38 +
                                        (local_140 & 0xffffffff) * 8 + 0x3cb8))
                                     (local_690,&local_140,&local_640,0,auStack_c0);
                  if ((uVar26 & 1) != 0) {
                    fVar76 = (float)local_b0;
                    fVar77 = local_b0._4_4_;
                    fVar42 = (float)uStack_a8;
                    goto LAB_030117e0;
                  }
                }
                iVar41 = iVar41 + 1;
                local_648 = (char)local_650[3] != '\0';
              } while (iVar31 != iVar41);
              fVar28 = (float)local_650[2];
              fVar88 = (float)((ulong)local_650[2] >> 0x20);
              fVar28 = fVar28 * fVar28;
              fVar88 = fVar88 * fVar88;
              bVar9 = (bool)local_648;
              puVar24 = PTR_DAT_047d1aa0;
              puVar25 = PTR_DAT_047d1aa8;
            }
            if (bVar9) break;
            puVar21 = local_150;
            fVar89 = fVar28;
            fVar87 = fVar88;
          }
        }
        local_150 = puVar21;
      } while ((undefined8 *)local_550 != local_150);
    }
    local_600 = PTR_DAT_047d1b30 + 0x10;
    if (local_5f8 != (undefined **)0x0) {
      (**(code **)(*local_5f8 + 8))();
    }
  }
  return;
}


