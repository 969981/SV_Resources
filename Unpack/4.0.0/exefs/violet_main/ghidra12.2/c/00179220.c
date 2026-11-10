/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00179220; name: FUN_00179220
 */


undefined8 FUN_00179220(long param_1,ulong *param_2,undefined1 (*param_3) [16],uint param_4)

{
  ulong uVar1;
  size_t __n;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  short *psVar7;
  byte bVar8;
  ulong uVar9;
  undefined1 (*pauVar10) [16];
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 uVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  undefined1 auVar59 [16];
  byte bVar67;
  undefined8 uVar68;
  undefined8 auStack_80 [4];
  
  uVar1 = *param_2;
  if (uVar1 < param_2[1]) {
    uVar12 = (uint)param_2[2];
    uVar11 = param_2[1] - uVar1;
    uVar13 = uVar11;
    if (uVar11 < 0x10f) {
      uVar13 = 0;
      if (0xf < uVar11) {
        uVar13 = uVar11 - 0x10;
      }
      __n = uVar11 - uVar13;
      if (__n != 0) {
        memcpy(auStack_80,(void *)(uVar1 + uVar13),__n);
      }
      *(undefined8 *)((long)auStack_80 + __n) = 0;
      *(undefined8 *)((long)auStack_80 + __n + 8) = 0;
    }
    if (param_4 != 0) {
      auVar30._8_2_ = 0x100;
      auVar30._0_8_ = 0x100010001000100;
      auVar30._10_2_ = 0x100;
      auVar30._12_2_ = 0x100;
      auVar30._14_2_ = 0x100;
      uVar6 = 0;
      auVar31._8_8_ = 0x808080808080808;
      auVar31._0_8_ = 0x808080808080808;
      psVar7 = (short *)(param_1 + 0x10);
      auVar33 = *param_3;
      uVar9 = (ulong)(uVar12 >> 3);
      if (uVar13 <= uVar9) goto LAB_001793b8;
      do {
        pauVar10 = (undefined1 (*) [16])(uVar1 + uVar9);
        while( true ) {
          auVar32 = NEON_uqadd(auVar33,auVar30,1);
          auVar31 = NEON_umax(auVar31,auVar32,1);
          auVar33[8] = 8;
          auVar33._0_8_ = 0x808080808080808;
          auVar33[9] = 8;
          auVar33[10] = 8;
          auVar33[0xb] = 8;
          auVar33[0xc] = 8;
          auVar33[0xd] = 8;
          auVar33[0xe] = 8;
          auVar33[0xf] = 8;
          auVar33 = NEON_umin(auVar32,auVar33,1);
          auVar32 = NEON_ext(ZEXT816(0),auVar33,0xf,1);
          auVar40[0] = auVar32[0] + auVar33[0];
          auVar40[1] = auVar32[1] + auVar33[1];
          auVar40[2] = auVar32[2] + auVar33[2];
          auVar40[3] = auVar32[3] + auVar33[3];
          auVar40[4] = auVar32[4] + auVar33[4];
          auVar40[5] = auVar32[5] + auVar33[5];
          auVar40[6] = auVar32[6] + auVar33[6];
          auVar40[7] = auVar32[7] + auVar33[7];
          auVar40[8] = auVar32[8] + auVar33[8];
          auVar40[9] = auVar32[9] + auVar33[9];
          auVar40[10] = auVar32[10] + auVar33[10];
          auVar40[0xb] = auVar32[0xb] + auVar33[0xb];
          auVar40[0xc] = auVar32[0xc] + auVar33[0xc];
          auVar40[0xd] = auVar32[0xd] + auVar33[0xd];
          auVar40[0xe] = auVar32[0xe] + auVar33[0xe];
          auVar40[0xf] = auVar32[0xf] + auVar33[0xf];
          auVar32 = NEON_ext(ZEXT816(0),auVar40,0xe,1);
          auVar41[0] = auVar32[0] + auVar40[0];
          auVar41[1] = auVar32[1] + auVar40[1];
          auVar41[2] = auVar32[2] + auVar40[2];
          auVar41[3] = auVar32[3] + auVar40[3];
          auVar41[4] = auVar32[4] + auVar40[4];
          auVar41[5] = auVar32[5] + auVar40[5];
          auVar41[6] = auVar32[6] + auVar40[6];
          auVar41[7] = auVar32[7] + auVar40[7];
          auVar41[8] = auVar32[8] + auVar40[8];
          auVar41[9] = auVar32[9] + auVar40[9];
          auVar41[10] = auVar32[10] + auVar40[10];
          auVar41[0xb] = auVar32[0xb] + auVar40[0xb];
          auVar41[0xc] = auVar32[0xc] + auVar40[0xc];
          auVar41[0xd] = auVar32[0xd] + auVar40[0xd];
          auVar41[0xe] = auVar32[0xe] + auVar40[0xe];
          auVar41[0xf] = auVar32[0xf] + auVar40[0xf];
          auVar32 = NEON_ext(ZEXT816(0),auVar41,0xc,1);
          auVar42[0] = auVar32[0] + auVar41[0];
          auVar42[1] = auVar32[1] + auVar41[1];
          auVar42[2] = auVar32[2] + auVar41[2];
          auVar42[3] = auVar32[3] + auVar41[3];
          auVar42[4] = auVar32[4] + auVar41[4];
          auVar42[5] = auVar32[5] + auVar41[5];
          auVar42[6] = auVar32[6] + auVar41[6];
          auVar42[7] = auVar32[7] + auVar41[7];
          auVar42[8] = auVar32[8] + auVar41[8];
          auVar42[9] = auVar32[9] + auVar41[9];
          auVar42[10] = auVar32[10] + auVar41[10];
          auVar42[0xb] = auVar32[0xb] + auVar41[0xb];
          auVar42[0xc] = auVar32[0xc] + auVar41[0xc];
          auVar42[0xd] = auVar32[0xd] + auVar41[0xd];
          auVar42[0xe] = auVar32[0xe] + auVar41[0xe];
          auVar42[0xf] = auVar32[0xf] + auVar41[0xf];
          bVar44 = (byte)uVar12;
          bVar8 = bVar44 & 7;
          uVar9 = CONCAT17(bVar44,CONCAT16(bVar44,CONCAT15(bVar44,CONCAT14(bVar44,CONCAT13(bVar44,
                                                  CONCAT12(bVar44,CONCAT11(bVar44,bVar44))))))) &
                  0x707070707070707;
          uVar6 = uVar6 + 8;
          auVar32 = NEON_ext(ZEXT816(0),auVar42,8,1);
          auVar43[0] = auVar32[0] + auVar42[0];
          auVar43[1] = auVar32[1] + auVar42[1];
          auVar43[2] = auVar32[2] + auVar42[2];
          auVar43[3] = auVar32[3] + auVar42[3];
          auVar43[4] = auVar32[4] + auVar42[4];
          auVar43[5] = auVar32[5] + auVar42[5];
          auVar43[6] = auVar32[6] + auVar42[6];
          auVar43[7] = auVar32[7] + auVar42[7];
          auVar43[8] = auVar32[8] + auVar42[8];
          auVar43[9] = auVar32[9] + auVar42[9];
          auVar43[10] = auVar32[10] + auVar42[10];
          auVar43[0xb] = auVar32[0xb] + auVar42[0xb];
          auVar43[0xc] = auVar32[0xc] + auVar42[0xc];
          auVar43[0xd] = auVar32[0xd] + auVar42[0xd];
          auVar43[0xe] = auVar32[0xe] + auVar42[0xe];
          auVar43[0xf] = auVar32[0xf] + auVar42[0xf];
          auVar32 = NEON_ext(ZEXT816(0),auVar43,0xf,1);
          bVar44 = auVar32[0] + (char)uVar9;
          bVar45 = auVar32[1] + (char)(uVar9 >> 8);
          bVar46 = auVar32[2] + (char)(uVar9 >> 0x10);
          bVar47 = auVar32[3] + (char)(uVar9 >> 0x18);
          bVar48 = auVar32[4] + (char)(uVar9 >> 0x20);
          bVar49 = auVar32[5] + (char)(uVar9 >> 0x28);
          bVar50 = auVar32[6] + (char)(uVar9 >> 0x30);
          bVar51 = auVar32[7] + (char)(uVar9 >> 0x38);
          bVar52 = auVar32[8] + bVar8;
          bVar53 = auVar32[9] + bVar8;
          bVar54 = auVar32[10] + bVar8;
          bVar55 = auVar32[0xb] + bVar8;
          bVar56 = auVar32[0xc] + bVar8;
          bVar57 = auVar32[0xd] + bVar8;
          bVar58 = auVar32[0xe] + bVar8;
          bVar8 = auVar32[0xf] + bVar8;
          auVar59._0_8_ =
               CONCAT17(bVar51 >> 3,
                        CONCAT16(bVar50 >> 3,
                                 CONCAT15(bVar49 >> 3,
                                          CONCAT14(bVar48 >> 3,
                                                   CONCAT13(bVar47 >> 3,
                                                            CONCAT12(bVar46 >> 3,
                                                                     CONCAT11(bVar45 >> 3,
                                                                              bVar44 >> 3)))))));
          auVar59[8] = bVar52 >> 3;
          auVar59[9] = bVar53 >> 3;
          auVar59[10] = bVar54 >> 3;
          auVar59[0xb] = bVar55 >> 3;
          auVar59[0xc] = bVar56 >> 3;
          auVar59[0xd] = bVar57 >> 3;
          auVar59[0xe] = bVar58 >> 3;
          auVar59[0xf] = bVar8 >> 3;
          uVar12 = uVar12 + auVar43[0xf];
          auVar32 = NEON_ext(auVar59,auVar59,8,1);
          uVar39 = a64_TBL(ZEXT816(0),*pauVar10,auVar32._0_8_);
          uVar68 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(*pauVar10 + 1),auVar32._0_8_);
          auVar36._0_8_ = SUB168(*pauVar10,0);
          auVar36._8_8_ = 0;
          auVar37._0_8_ = a64_TBL(ZEXT816(0),auVar36,auVar59._0_8_);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = *(ulong *)*(undefined1 (*) [16])(*pauVar10 + 1);
          uVar38 = a64_TBL(ZEXT816(0),auVar4,auVar59._0_8_);
          auVar37._8_8_ = uVar39;
          uVar9 = CONCAT17(bVar51,CONCAT16(bVar50,CONCAT15(bVar49,CONCAT14(bVar48,CONCAT13(bVar47,
                                                  CONCAT12(bVar46,CONCAT11(bVar45,bVar44))))))) |
                  0xf8f8f8f8f8f8f8f8;
          param_3 = param_3 + 1;
          auVar32[8] = 1;
          auVar32._0_8_ = 0x101010101010101;
          auVar32[9] = 1;
          auVar32[10] = 1;
          auVar32[0xb] = 1;
          auVar32[0xc] = 1;
          auVar32[0xd] = 1;
          auVar32[0xe] = 1;
          auVar32[0xf] = 1;
          auVar32 = NEON_ushl(auVar32,auVar33,1);
          bVar44 = auVar32[0] - 1;
          bVar45 = auVar32[1] - 1;
          bVar46 = auVar32[2] - 1;
          bVar47 = auVar32[3] - 1;
          bVar48 = auVar32[4] - 1;
          bVar49 = auVar32[5] - 1;
          bVar50 = auVar32[6] - 1;
          bVar51 = auVar32[7] - 1;
          bVar60 = auVar32[8] - 1;
          bVar61 = auVar32[9] - 1;
          bVar62 = auVar32[10] - 1;
          bVar63 = auVar32[0xb] - 1;
          bVar64 = auVar32[0xc] - 1;
          bVar65 = auVar32[0xd] - 1;
          bVar66 = auVar32[0xe] - 1;
          bVar67 = auVar32[0xf] - 1;
          auVar34[0] = (char)uVar9 + auVar33[0];
          auVar34[1] = (char)(uVar9 >> 8) + auVar33[1];
          auVar34[2] = (char)(uVar9 >> 0x10) + auVar33[2];
          auVar34[3] = (char)(uVar9 >> 0x18) + auVar33[3];
          auVar34[4] = (char)(uVar9 >> 0x20) + auVar33[4];
          auVar34[5] = (char)(uVar9 >> 0x28) + auVar33[5];
          auVar34[6] = (char)(uVar9 >> 0x30) + auVar33[6];
          auVar34[7] = (char)(uVar9 >> 0x38) + auVar33[7];
          auVar34[8] = (bVar52 | 0xf8) + auVar33[8];
          auVar34[9] = (bVar53 | 0xf8) + auVar33[9];
          auVar34[10] = (bVar54 | 0xf8) + auVar33[10];
          auVar34[0xb] = (bVar55 | 0xf8) + auVar33[0xb];
          auVar34[0xc] = (bVar56 | 0xf8) + auVar33[0xc];
          auVar34[0xd] = (bVar57 | 0xf8) + auVar33[0xd];
          auVar34[0xe] = (bVar58 | 0xf8) + auVar33[0xe];
          auVar34[0xf] = (bVar8 | 0xf8) + auVar33[0xf];
          auVar32 = NEON_ushl(auVar37,auVar34,1);
          auVar35[0] = auVar34[0] + -8;
          auVar35[1] = auVar34[1] + -8;
          auVar35[2] = auVar34[2] + -8;
          auVar35[3] = auVar34[3] + -8;
          auVar35[4] = auVar34[4] + -8;
          auVar35[5] = auVar34[5] + -8;
          auVar35[6] = auVar34[6] + -8;
          auVar35[7] = auVar34[7] + -8;
          auVar35[8] = auVar34[8] + -8;
          auVar35[9] = auVar34[9] + -8;
          auVar35[10] = auVar34[10] + -8;
          auVar35[0xb] = auVar34[0xb] + -8;
          auVar35[0xc] = auVar34[0xc] + -8;
          auVar35[0xd] = auVar34[0xd] + -8;
          auVar35[0xe] = auVar34[0xe] + -8;
          auVar35[0xf] = auVar34[0xf] + -8;
          auVar5._8_8_ = uVar68;
          auVar5._0_8_ = uVar38;
          auVar33 = NEON_ushl(auVar5,auVar35,1);
          psVar7[-4] = (ushort)bVar48 + (ushort)(bVar48 & (auVar33[4] | auVar32[4])) + 1;
          psVar7[-3] = (ushort)bVar49 + (ushort)(bVar49 & (auVar33[5] | auVar32[5]));
          psVar7[-2] = (ushort)bVar50 + (ushort)(bVar50 & (auVar33[6] | auVar32[6])) + 1;
          psVar7[-1] = (ushort)bVar51 + (ushort)(bVar51 & (auVar33[7] | auVar32[7]));
          psVar7[-8] = (ushort)bVar44 + (ushort)(bVar44 & (auVar33[0] | auVar32[0])) + 1;
          psVar7[-7] = (ushort)bVar45 + (ushort)(bVar45 & (auVar33[1] | auVar32[1]));
          psVar7[-6] = (ushort)bVar46 + (ushort)(bVar46 & (auVar33[2] | auVar32[2])) + 1;
          psVar7[-5] = (ushort)bVar47 + (ushort)(bVar47 & (auVar33[3] | auVar32[3]));
          psVar7[4] = (ushort)bVar64 + (ushort)(bVar64 & (auVar33[0xc] | auVar32[0xc])) + 1;
          psVar7[5] = (ushort)bVar65 + (ushort)(bVar65 & (auVar33[0xd] | auVar32[0xd]));
          psVar7[6] = (ushort)bVar66 + (ushort)(bVar66 & (auVar33[0xe] | auVar32[0xe])) + 1;
          psVar7[7] = (ushort)bVar67 + (ushort)(bVar67 & (auVar33[0xf] | auVar32[0xf]));
          *psVar7 = (ushort)bVar60 + (ushort)(bVar60 & (auVar33[8] | auVar32[8])) + 1;
          psVar7[1] = (ushort)bVar61 + (ushort)(bVar61 & (auVar33[9] | auVar32[9]));
          psVar7[2] = (ushort)bVar62 + (ushort)(bVar62 & (auVar33[10] | auVar32[10])) + 1;
          psVar7[3] = (ushort)bVar63 + (ushort)(bVar63 & (auVar33[0xb] | auVar32[0xb]));
          psVar7 = psVar7 + 0x10;
          if (param_4 <= uVar6) {
            cVar14 = -(auVar31[0] == '\b');
            cVar15 = -(auVar31[1] == '\b');
            cVar16 = -(auVar31[2] == '\b');
            cVar17 = -(auVar31[3] == '\b');
            cVar18 = -(auVar31[4] == '\b');
            cVar19 = -(auVar31[5] == '\b');
            cVar20 = -(auVar31[6] == '\b');
            cVar21 = -(auVar31[7] == '\b');
            cVar22 = -(auVar31[8] == '\b');
            cVar23 = -(auVar31[9] == '\b');
            cVar24 = -(auVar31[10] == '\b');
            cVar25 = -(auVar31[0xb] == '\b');
            cVar26 = -(auVar31[0xc] == '\b');
            cVar27 = -(auVar31[0xd] == '\b');
            cVar28 = -(auVar31[0xe] == '\b');
            cVar29 = -(auVar31[0xf] == '\b');
            goto LAB_001793dc;
          }
          auVar33 = *param_3;
          uVar9 = (ulong)(uVar12 >> 3);
          if (uVar9 < uVar13) break;
LAB_001793b8:
          if (uVar11 <= uVar9) {
            return 0;
          }
          pauVar10 = (undefined1 (*) [16])((long)auStack_80 + (uVar9 - uVar13));
        }
      } while( true );
    }
    cVar14 = -1;
    cVar15 = -1;
    cVar16 = -1;
    cVar17 = -1;
    cVar18 = -1;
    cVar19 = -1;
    cVar20 = -1;
    cVar21 = -1;
    cVar22 = -1;
    cVar23 = -1;
    cVar24 = -1;
    cVar25 = -1;
    cVar26 = -1;
    cVar27 = -1;
    cVar28 = -1;
    cVar29 = -1;
LAB_001793dc:
    auVar2[1] = cVar15;
    auVar2[0] = cVar14;
    auVar2[2] = cVar16;
    auVar2[3] = cVar17;
    auVar2[4] = cVar18;
    auVar2[5] = cVar19;
    auVar2[6] = cVar20;
    auVar2[7] = cVar21;
    auVar2[8] = cVar22;
    auVar2[9] = cVar23;
    auVar2[10] = cVar24;
    auVar2[0xb] = cVar25;
    auVar2[0xc] = cVar26;
    auVar2[0xd] = cVar27;
    auVar2[0xe] = cVar28;
    auVar2[0xf] = cVar29;
    auVar3[1] = cVar15;
    auVar3[0] = cVar14;
    auVar3[2] = cVar16;
    auVar3[3] = cVar17;
    auVar3[4] = cVar18;
    auVar3[5] = cVar19;
    auVar3[6] = cVar20;
    auVar3[7] = cVar21;
    auVar3[8] = cVar22;
    auVar3[9] = cVar23;
    auVar3[10] = cVar24;
    auVar3[0xb] = cVar25;
    auVar3[0xc] = cVar26;
    auVar3[0xd] = cVar27;
    auVar3[0xe] = cVar28;
    auVar3[0xf] = cVar29;
    auVar33 = NEON_ext(auVar2,auVar3,8,1);
    if (CONCAT13(auVar33[6] + cVar20 + auVar33[7] + cVar21,
                 CONCAT12(auVar33[4] + cVar18 + auVar33[5] + cVar19,
                          CONCAT11(auVar33[2] + cVar16 + auVar33[3] + cVar17,
                                   auVar33[0] + cVar14 + auVar33[1] + cVar15))) == -0x3030304) {
      uVar12 = uVar12 - (-param_4 & 7);
      if (uVar11 < uVar12 + 7 >> 3) {
        return 0;
      }
      *(uint *)(param_2 + 2) = uVar12 & 7;
      *param_2 = *param_2 + (ulong)(uVar12 >> 3);
      return 1;
    }
  }
  return 0;
}


