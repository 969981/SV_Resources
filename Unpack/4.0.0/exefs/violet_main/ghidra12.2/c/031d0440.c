/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d0440; name: FUN_031d0440
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_031d0440(int *param_1,int param_2,ulong param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  int *piVar7;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined8 uVar8;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  undefined8 uVar16;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  int iVar25;
  byte bVar28;
  byte bVar29;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  int iVar30;
  byte bVar34;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  int iVar35;
  byte bVar39;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  int iVar40;
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
  byte bVar58;
  byte bVar59;
  int iVar57;
  byte bVar60;
  byte bVar61;
  byte bVar63;
  byte bVar64;
  int iVar62;
  byte bVar65;
  byte bVar66;
  byte bVar68;
  byte bVar69;
  int iVar67;
  byte bVar70;
  byte bVar71;
  byte bVar73;
  byte bVar74;
  int iVar72;
  byte bVar75;
  byte bVar76;
  byte bVar78;
  byte bVar79;
  int iVar77;
  byte bVar80;
  byte bVar81;
  byte bVar83;
  byte bVar84;
  int iVar82;
  byte bVar85;
  byte bVar86;
  byte bVar88;
  byte bVar89;
  int iVar87;
  byte bVar90;
  byte bVar91;
  byte bVar93;
  byte bVar94;
  int iVar92;
  byte bVar95;
  
  piVar5 = param_1;
  if (((ulong)param_1 & 0xf) == 0) {
    uVar1 = param_3;
LAB_031d0488:
    bVar9 = (byte)((ulong)_DAT_03cab270 >> 8);
    bVar10 = (byte)((ulong)_DAT_03cab270 >> 0x10);
    bVar11 = (byte)((ulong)_DAT_03cab270 >> 0x18);
    bVar12 = (byte)((ulong)_DAT_03cab270 >> 0x20);
    bVar13 = (byte)((ulong)_DAT_03cab270 >> 0x28);
    bVar14 = (byte)((ulong)_DAT_03cab270 >> 0x30);
    bVar15 = (byte)((ulong)_DAT_03cab270 >> 0x38);
    bVar17 = (byte)((ulong)_UNK_03cab278 >> 8);
    bVar18 = (byte)((ulong)_UNK_03cab278 >> 0x10);
    bVar19 = (byte)((ulong)_UNK_03cab278 >> 0x18);
    bVar20 = (byte)((ulong)_UNK_03cab278 >> 0x20);
    bVar21 = (byte)((ulong)_UNK_03cab278 >> 0x28);
    bVar22 = (byte)((ulong)_UNK_03cab278 >> 0x30);
    bVar23 = (byte)((ulong)_UNK_03cab278 >> 0x38);
    if (uVar1 < 0x10) {
      piVar7 = param_1;
LAB_031d0568:
      piVar4 = piVar5;
      do {
        if (piVar5 + (uVar1 & 0x3ffffffffffffffc) <= piVar4) goto LAB_031d05e0;
        piVar3 = piVar4 + 4;
        iVar25 = -(uint)((int)*(undefined8 *)piVar4 == param_2);
        iVar30 = -(uint)((int)((ulong)*(undefined8 *)piVar4 >> 0x20) == param_2);
        iVar35 = -(uint)((int)*(undefined8 *)(piVar4 + 2) == param_2);
        iVar40 = -(uint)((int)((ulong)*(undefined8 *)(piVar4 + 2) >> 0x20) == param_2);
        bVar26 = (byte)((uint)iVar25 >> 8);
        bVar29 = (byte)((uint)iVar30 >> 8);
        bVar27 = (byte)((uint)iVar25 >> 0x10);
        bVar31 = (byte)((uint)iVar30 >> 0x10);
        bVar24 = (byte)((uint)iVar30 >> 0x18);
        bVar28 = (byte)((uint)iVar25 >> 0x18);
        bVar32 = (byte)((uint)iVar35 >> 8);
        bVar34 = (byte)((uint)iVar35 >> 0x10);
        bVar37 = (byte)((uint)iVar35 >> 0x18);
        bVar33 = (byte)((uint)iVar40 >> 8);
        bVar36 = (byte)((uint)iVar40 >> 0x10);
        bVar38 = (byte)((uint)iVar40 >> 0x18);
        piVar4 = piVar3;
      } while (CONCAT13(bVar24 & bVar28 & bVar37 & bVar38,
                        CONCAT12(bVar31 & bVar27 & bVar34 & bVar36,
                                 CONCAT11(bVar29 & bVar26 & bVar32 & bVar33,
                                          (byte)iVar30 & (byte)iVar25 & (byte)iVar35 & (byte)iVar40)
                                )) != 0);
      iVar25 = CONCAT13(bVar11 & ~bVar28,
                        CONCAT12(bVar10 & ~bVar27,
                                 CONCAT11(bVar9 & ~bVar26,(byte)_DAT_03cab270 & ~(byte)iVar25)));
      iVar35 = CONCAT13(bVar19 & ~bVar37,
                        CONCAT12(bVar18 & ~bVar34,
                                 CONCAT11(bVar17 & ~bVar32,(byte)_UNK_03cab278 & ~(byte)iVar35)));
      lVar2 = (long)piVar3 +
              ((long)(char)PTR_DAT_047d19d8
                           [(uint)(iVar25 + (int)(CONCAT17(bVar15 & ~bVar24,
                                                           CONCAT16(bVar14 & ~bVar31,
                                                                    CONCAT15(bVar13 & ~bVar29,
                                                                             CONCAT14(bVar12 & ~(
                                                  byte)iVar30,iVar25)))) >> 0x20) +
                                  iVar35 + (int)(CONCAT17(bVar23 & ~bVar38,
                                                          CONCAT16(bVar22 & ~bVar36,
                                                                   CONCAT15(bVar21 & ~bVar33,
                                                                            CONCAT14(bVar20 & ~(byte
                                                  )iVar40,iVar35)))) >> 0x20))] * 4 - (long)piVar7)
              + -0x10;
    }
    else {
      uVar6 = uVar1 & 0x3ffffffffffffff0;
      uVar1 = uVar1 & 0xf;
      piVar7 = piVar5 + uVar6;
      piVar4 = piVar5;
      do {
        piVar5 = piVar4;
        if (piVar7 <= piVar5) {
          piVar7 = piVar5;
          goto LAB_031d0568;
        }
        iVar57 = -(uint)((int)*(undefined8 *)(piVar5 + 4) == param_2);
        iVar62 = -(uint)((int)((ulong)*(undefined8 *)(piVar5 + 4) >> 0x20) == param_2);
        iVar67 = -(uint)((int)*(undefined8 *)(piVar5 + 6) == param_2);
        iVar72 = -(uint)((int)((ulong)*(undefined8 *)(piVar5 + 6) >> 0x20) == param_2);
        iVar77 = -(uint)((int)*(undefined8 *)piVar5 == param_2);
        iVar82 = -(uint)((int)((ulong)*(undefined8 *)piVar5 >> 0x20) == param_2);
        iVar87 = -(uint)((int)*(undefined8 *)(piVar5 + 2) == param_2);
        iVar92 = -(uint)((int)((ulong)*(undefined8 *)(piVar5 + 2) >> 0x20) == param_2);
        iVar25 = -(uint)((int)*(undefined8 *)(piVar5 + 8) == param_2);
        iVar30 = -(uint)((int)((ulong)*(undefined8 *)(piVar5 + 8) >> 0x20) == param_2);
        iVar35 = -(uint)((int)*(undefined8 *)(piVar5 + 10) == param_2);
        iVar40 = -(uint)((int)((ulong)*(undefined8 *)(piVar5 + 10) >> 0x20) == param_2);
        bVar56 = (byte)iVar57;
        bVar76 = (byte)iVar77;
        bVar58 = (byte)((uint)iVar57 >> 8);
        bVar78 = (byte)((uint)iVar77 >> 8);
        bVar59 = (byte)((uint)iVar57 >> 0x10);
        bVar79 = (byte)((uint)iVar77 >> 0x10);
        bVar60 = (byte)((uint)iVar57 >> 0x18);
        bVar80 = (byte)((uint)iVar77 >> 0x18);
        bVar61 = (byte)iVar62;
        bVar81 = (byte)iVar82;
        bVar63 = (byte)((uint)iVar62 >> 8);
        bVar83 = (byte)((uint)iVar82 >> 8);
        bVar64 = (byte)((uint)iVar62 >> 0x10);
        bVar84 = (byte)((uint)iVar82 >> 0x10);
        bVar65 = (byte)((uint)iVar62 >> 0x18);
        bVar85 = (byte)((uint)iVar82 >> 0x18);
        bVar66 = (byte)iVar67;
        bVar86 = (byte)iVar87;
        bVar68 = (byte)((uint)iVar67 >> 8);
        bVar88 = (byte)((uint)iVar87 >> 8);
        bVar69 = (byte)((uint)iVar67 >> 0x10);
        bVar89 = (byte)((uint)iVar87 >> 0x10);
        bVar70 = (byte)((uint)iVar67 >> 0x18);
        bVar90 = (byte)((uint)iVar87 >> 0x18);
        bVar71 = (byte)iVar72;
        bVar91 = (byte)iVar92;
        bVar73 = (byte)((uint)iVar72 >> 8);
        bVar93 = (byte)((uint)iVar92 >> 8);
        bVar74 = (byte)((uint)iVar72 >> 0x10);
        bVar94 = (byte)((uint)iVar92 >> 0x10);
        bVar75 = (byte)((uint)iVar72 >> 0x18);
        bVar95 = (byte)((uint)iVar92 >> 0x18);
        iVar57 = -(uint)((int)*(undefined8 *)(piVar5 + 0xc) == param_2);
        iVar62 = -(uint)((int)((ulong)*(undefined8 *)(piVar5 + 0xc) >> 0x20) == param_2);
        iVar67 = -(uint)((int)*(undefined8 *)(piVar5 + 0xe) == param_2);
        iVar72 = -(uint)((int)((ulong)*(undefined8 *)(piVar5 + 0xe) >> 0x20) == param_2);
        bVar24 = (byte)iVar25;
        bVar26 = (byte)((uint)iVar25 >> 8);
        bVar27 = (byte)((uint)iVar25 >> 0x10);
        bVar28 = (byte)((uint)iVar25 >> 0x18);
        bVar29 = (byte)iVar30;
        bVar31 = (byte)((uint)iVar30 >> 8);
        bVar32 = (byte)((uint)iVar30 >> 0x10);
        bVar33 = (byte)((uint)iVar30 >> 0x18);
        bVar34 = (byte)iVar35;
        bVar36 = (byte)((uint)iVar35 >> 8);
        bVar37 = (byte)((uint)iVar35 >> 0x10);
        bVar38 = (byte)((uint)iVar35 >> 0x18);
        bVar39 = (byte)iVar40;
        bVar41 = (byte)((uint)iVar40 >> 8);
        bVar42 = (byte)((uint)iVar40 >> 0x10);
        bVar43 = (byte)((uint)iVar40 >> 0x18);
        bVar44 = (byte)((uint)iVar57 >> 8);
        bVar45 = (byte)((uint)iVar57 >> 0x10);
        bVar46 = (byte)((uint)iVar57 >> 0x18);
        bVar47 = (byte)((uint)iVar62 >> 8);
        bVar48 = (byte)((uint)iVar62 >> 0x10);
        bVar49 = (byte)((uint)iVar62 >> 0x18);
        bVar50 = (byte)((uint)iVar67 >> 8);
        bVar51 = (byte)((uint)iVar67 >> 0x10);
        bVar52 = (byte)((uint)iVar67 >> 0x18);
        bVar53 = (byte)((uint)iVar72 >> 8);
        bVar54 = (byte)((uint)iVar72 >> 0x10);
        bVar55 = (byte)((uint)iVar72 >> 0x18);
        piVar4 = piVar5 + 0x10;
      } while (CONCAT13(bVar65 & bVar85 & bVar33 & bVar49 & bVar60 & bVar80 & bVar28 & bVar46 &
                        bVar70 & bVar90 & bVar38 & bVar52 & bVar75 & bVar95 & bVar43 & bVar55,
                        CONCAT12(bVar64 & bVar84 & bVar32 & bVar48 &
                                 bVar59 & bVar79 & bVar27 & bVar45 &
                                 bVar69 & bVar89 & bVar37 & bVar51 &
                                 bVar74 & bVar94 & bVar42 & bVar54,
                                 CONCAT11(bVar63 & bVar83 & bVar31 & bVar47 &
                                          bVar58 & bVar78 & bVar26 & bVar44 &
                                          bVar68 & bVar88 & bVar36 & bVar50 &
                                          bVar73 & bVar93 & bVar41 & bVar53,
                                          bVar61 & bVar81 & bVar29 & (byte)iVar62 &
                                          bVar56 & bVar76 & bVar24 & (byte)iVar57 &
                                          bVar66 & bVar86 & bVar34 & (byte)iVar67 &
                                          bVar71 & bVar91 & bVar39 & (byte)iVar72))) != 0);
      if (CONCAT13(bVar85 & bVar80 & bVar90 & bVar95,
                   CONCAT12(bVar84 & bVar79 & bVar89 & bVar94,
                            CONCAT11(bVar83 & bVar78 & bVar88 & bVar93,
                                     bVar81 & bVar76 & bVar86 & bVar91))) == 0) {
        uVar8 = CONCAT17(~bVar85,CONCAT16(~bVar84,CONCAT15(~bVar83,CONCAT14(~bVar81,CONCAT13(~bVar80
                                                  ,CONCAT12(~bVar79,CONCAT11(~bVar78,~bVar76)))))));
        uVar16 = CONCAT17(~bVar95,CONCAT16(~bVar94,CONCAT15(~bVar93,CONCAT14(~bVar91,CONCAT13(~
                                                  bVar90,CONCAT12(~bVar89,CONCAT11(~bVar88,~bVar86))
                                                  )))));
      }
      else if (CONCAT13(bVar65 & bVar60 & bVar70 & bVar75,
                        CONCAT12(bVar64 & bVar59 & bVar69 & bVar74,
                                 CONCAT11(bVar63 & bVar58 & bVar68 & bVar73,
                                          bVar61 & bVar56 & bVar66 & bVar71))) == 0) {
        piVar5 = piVar5 + 4;
        uVar8 = CONCAT17(~bVar65,CONCAT16(~bVar64,CONCAT15(~bVar63,CONCAT14(~bVar61,CONCAT13(~bVar60
                                                  ,CONCAT12(~bVar59,CONCAT11(~bVar58,~bVar56)))))));
        uVar16 = CONCAT17(~bVar75,CONCAT16(~bVar74,CONCAT15(~bVar73,CONCAT14(~bVar71,CONCAT13(~
                                                  bVar70,CONCAT12(~bVar69,CONCAT11(~bVar68,~bVar66))
                                                  )))));
      }
      else if (CONCAT13(bVar33 & bVar28 & bVar38 & bVar43,
                        CONCAT12(bVar32 & bVar27 & bVar37 & bVar42,
                                 CONCAT11(bVar31 & bVar26 & bVar36 & bVar41,
                                          bVar29 & bVar24 & bVar34 & bVar39))) == 0) {
        piVar5 = piVar5 + 8;
        uVar8 = CONCAT17(~bVar33,CONCAT16(~bVar32,CONCAT15(~bVar31,CONCAT14(~bVar29,CONCAT13(~bVar28
                                                  ,CONCAT12(~bVar27,CONCAT11(~bVar26,~bVar24)))))));
        uVar16 = CONCAT17(~bVar43,CONCAT16(~bVar42,CONCAT15(~bVar41,CONCAT14(~bVar39,CONCAT13(~
                                                  bVar38,CONCAT12(~bVar37,CONCAT11(~bVar36,~bVar34))
                                                  )))));
      }
      else {
        uVar8 = CONCAT17(~bVar49,CONCAT16(~bVar48,CONCAT15(~bVar47,CONCAT14(~(byte)iVar62,
                                                                            CONCAT13(~bVar46,
                                                  CONCAT12(~bVar45,CONCAT11(~bVar44,~(byte)iVar57)))
                                                  ))));
        uVar16 = CONCAT17(~bVar55,CONCAT16(~bVar54,CONCAT15(~bVar53,CONCAT14(~(byte)iVar72,
                                                                             CONCAT13(~bVar52,
                                                  CONCAT12(~bVar51,CONCAT11(~bVar50,~(byte)iVar67)))
                                                  ))));
        piVar5 = piVar5 + 0xc;
      }
      iVar25 = CONCAT13((byte)((ulong)uVar8 >> 0x18) & bVar11,
                        CONCAT12((byte)((ulong)uVar8 >> 0x10) & bVar10,
                                 CONCAT11((byte)((ulong)uVar8 >> 8) & bVar9,
                                          (byte)uVar8 & (byte)_DAT_03cab270)));
      iVar30 = CONCAT13((byte)((ulong)uVar16 >> 0x18) & bVar19,
                        CONCAT12((byte)((ulong)uVar16 >> 0x10) & bVar18,
                                 CONCAT11((byte)((ulong)uVar16 >> 8) & bVar17,
                                          (byte)uVar16 & (byte)_UNK_03cab278)));
      lVar2 = (long)piVar5 +
              ((long)(char)PTR_DAT_047d19d8
                           [(uint)(iVar25 + (int)(CONCAT17((byte)((ulong)uVar8 >> 0x38) & bVar15,
                                                           CONCAT16((byte)((ulong)uVar8 >> 0x30) &
                                                                    bVar14,CONCAT15((byte)((ulong)
                                                  uVar8 >> 0x28) & bVar13,
                                                  CONCAT14((byte)((ulong)uVar8 >> 0x20) & bVar12,
                                                           iVar25)))) >> 0x20) +
                                  iVar30 + (int)(CONCAT17((byte)((ulong)uVar16 >> 0x38) & bVar23,
                                                          CONCAT16((byte)((ulong)uVar16 >> 0x30) &
                                                                   bVar22,CONCAT15((byte)((ulong)
                                                  uVar16 >> 0x28) & bVar21,
                                                  CONCAT14((byte)((ulong)uVar16 >> 0x20) & bVar20,
                                                           iVar30)))) >> 0x20))] * 4 - (long)param_1
              );
    }
    goto LAB_031d0644;
  }
  uVar1 = 4 - (((ulong)param_1 & 0xf) >> 2);
  uVar6 = param_3;
  if (uVar1 <= param_3) {
    uVar6 = uVar1;
  }
  do {
    uVar1 = param_3 - uVar6;
    if (param_1 + uVar6 <= piVar5) goto LAB_031d0488;
    piVar7 = piVar5 + 1;
    iVar25 = *piVar5;
    piVar5 = piVar7;
  } while (iVar25 == param_2);
  lVar2 = (long)piVar7 - (long)param_1;
  goto LAB_031d05f4;
LAB_031d05e0:
  do {
    if (param_1 + param_3 <= piVar4) {
      return 1;
    }
    piVar5 = piVar4 + 1;
    iVar25 = *piVar4;
    piVar4 = piVar5;
  } while (iVar25 == param_2);
  lVar2 = (long)piVar5 - (long)piVar7;
LAB_031d05f4:
  lVar2 = lVar2 + -4;
LAB_031d0644:
  *param_4 = lVar2;
  return 0;
}


